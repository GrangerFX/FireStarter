#pragma once
// PixelDisplay: C++17 / OpenGL 3.3 pixel display, with optional CUDA interop.
// Define PIXEL_DISPLAY_ENABLE_CUDA=1 consistently in host translation units to
// enable MapCuda(). NVRTC sees only Color and View. No implementation .cpp needed.

#if defined(__CUDACC__)
#define PIXEL_DISPLAY_HD __host__ __device__
#else
#define PIXEL_DISPLAY_HD
#endif

namespace pixel_display {

struct Color {
    unsigned char r, g, b, a;
};
static_assert(sizeof(Color) == 4, "RGBA pixels must occupy four bytes");

// A borrowed, tightly packed RGBA8 image. Row zero is the bottom row.
// Valid only while the owning buffer is mapped; pass this value into kernels.
struct View {
    Color* pixels;
    unsigned int width, height;

    PIXEL_DISPLAY_HD Color& Pixel(unsigned int x, unsigned int y) const {
        return pixels[static_cast<unsigned long long>(y) * width + x];
    }
    PIXEL_DISPLAY_HD void SetPixel(int x, int y, Color color) const {
        if (x >= 0 && y >= 0 && static_cast<unsigned int>(x) < width &&
            static_cast<unsigned int>(y) < height)
            Pixel(static_cast<unsigned int>(x), static_cast<unsigned int>(y)) = color;
    }
    // Serial operation: on the GPU, partition work between threads yourself.
    PIXEL_DISPLAY_HD void Fill(Color color) const {
        for (unsigned int y = 0; y < height; ++y)
            for (unsigned int x = 0; x < width; ++x)
                Pixel(x, y) = color;
    }
};

} // namespace pixel_display
#undef PIXEL_DISPLAY_HD

#if !defined(__CUDACC_RTC__) && !defined(PIXEL_DISPLAY_DEVICE_ONLY)

#ifndef PIXEL_DISPLAY_ENABLE_CUDA
#define PIXEL_DISPLAY_ENABLE_CUDA 0
#endif

// GLAD must be initialized by the application, with a current OpenGL context.
// Another GL loader can be used by defining this to its header, e.g. <GL/glew.h>.
#ifndef PIXEL_DISPLAY_GL_HEADER
#define PIXEL_DISPLAY_GL_HEADER "glad/glad.h"
#endif
#include PIXEL_DISPLAY_GL_HEADER
#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#if PIXEL_DISPLAY_ENABLE_CUDA
#include <cuda_gl_interop.h>
#endif

namespace pixel_display {
namespace detail {
inline void CheckGL(const char* operation) {
    const GLenum error = glGetError();
    if (error != GL_NO_ERROR)
        throw std::runtime_error(std::string("PixelDisplay: ") + operation +
                                 " (OpenGL error " + std::to_string(error) + ")");
}
#if PIXEL_DISPLAY_ENABLE_CUDA
inline void CheckCuda(cudaError_t error, const char* operation) {
    if (error != cudaSuccess)
        throw std::runtime_error(std::string("PixelDisplay: ") + operation +
                                 " (" + cudaGetErrorString(error) + ")");
}
#endif
struct BufferBinding {
    GLint previous = 0;
    BufferBinding() { glGetIntegerv(GL_PIXEL_UNPACK_BUFFER_BINDING, &previous); }
    ~BufferBinding() { glBindBuffer(GL_PIXEL_UNPACK_BUFFER, static_cast<GLuint>(previous)); }
};
} // namespace detail

class Buffer {
public:
    class Mapping {
        Buffer* owner_ = nullptr;
        View view_{};
        friend class Buffer;
        Mapping(Buffer& owner, View view) : owner_(&owner), view_(view) {}
    public:
        Mapping(const Mapping&) = delete;
        Mapping& operator=(const Mapping&) = delete;
        Mapping(Mapping&& other) noexcept : owner_(other.owner_), view_(other.view_) {
            other.owner_ = nullptr;
            other.view_ = {};
        }
        Mapping& operator=(Mapping&&) = delete;
        ~Mapping() { if (owner_) owner_->UnmapNoThrow(); }
        View Pixels() const { return view_; }
        // Explicit Close reports errors. Destruction is a best-effort fallback.
        void Close() {
            if (owner_) {
                owner_->Unmap();
                owner_ = nullptr;
                view_ = {};
            }
        }
    };

    Buffer() = default;
    Buffer(unsigned int width, unsigned int height) { Resize(width, height); }
    Buffer(const Buffer&) = delete;
    Buffer& operator=(const Buffer&) = delete;
    Buffer(Buffer&&) = delete; // Mappings borrow the object's address.
    Buffer& operator=(Buffer&&) = delete;
    ~Buffer() { ReleaseNoThrow(); }

    unsigned int Width() const { return width_; }
    unsigned int Height() const { return height_; }
    std::size_t Bytes() const { return bytes_; }
    bool IsMapped() const { return mapped_ != Access::None; }
    GLuint PBO() const {
        RequireUnmapped();
        return pbo_;
    }

    // All mappings must be closed before resize, display, or destruction.
    // A resize discards the old image. Zero in either dimension releases it.
    void Resize(unsigned int width, unsigned int height) {
        RequireUnmapped();
        if (width == width_ && height == height_) return;
        const auto limit = static_cast<std::size_t>((std::numeric_limits<GLsizeiptr>::max)());
        if (width && (static_cast<std::size_t>(height) > limit / sizeof(Color) / width))
            throw std::length_error("PixelDisplay: image dimensions overflow OpenGL buffer size");
        Release();
        if (!width || !height) return;
        detail::BufferBinding binding;
        glGenBuffers(1, &pbo_);
        try {
            glBindBuffer(GL_PIXEL_UNPACK_BUFFER, pbo_);
            bytes_ = static_cast<std::size_t>(width) * height * sizeof(Color);
            glBufferData(GL_PIXEL_UNPACK_BUFFER, static_cast<GLsizeiptr>(bytes_), nullptr, GL_STREAM_DRAW);
            detail::CheckGL("allocate pixel buffer");
            width_ = width;
            height_ = height;
        } catch (...) { ReleaseNoThrow(); throw; }
    }

    Mapping MapCpu() {
        RequireImage();
        detail::BufferBinding binding;
        glBindBuffer(GL_PIXEL_UNPACK_BUFFER, pbo_);
        // Do not orphan storage that may already be registered with CUDA.
        void* pointer = glMapBufferRange(GL_PIXEL_UNPACK_BUFFER, 0,
                                        static_cast<GLsizeiptr>(bytes_), GL_MAP_WRITE_BIT);
        if (!pointer) {
            detail::CheckGL("map CPU pixels");
            throw std::runtime_error("PixelDisplay: CPU mapping returned null");
        }
        mapped_ = Access::Cpu;
        return Mapping(*this, {static_cast<Color*>(pointer), width_, height_});
    }

#if PIXEL_DISPLAY_ENABLE_CUDA
    // Render on this same stream, then Close before using the buffer in OpenGL.
    // The CUDA device/context must match the current OpenGL context's GPU.
    Mapping MapCuda(cudaStream_t stream = nullptr) {
        RequireImage();
        if (!resource_)
            detail::CheckCuda(cudaGraphicsGLRegisterBuffer(&resource_, pbo_,
                             cudaGraphicsRegisterFlagsWriteDiscard), "register OpenGL buffer");
        detail::CheckCuda(cudaGraphicsMapResources(1, &resource_, stream), "map CUDA pixels");
        stream_ = stream;
        mapped_ = Access::Cuda;
        try {
            void* pointer = nullptr;
            std::size_t size = 0;
            detail::CheckCuda(cudaGraphicsResourceGetMappedPointer(&pointer, &size, resource_),
                              "get CUDA pixel pointer");
            if (!pointer || size < bytes_)
                throw std::runtime_error("PixelDisplay: CUDA mapping is smaller than the image");
            return Mapping(*this, {static_cast<Color*>(pointer), width_, height_});
        } catch (...) { UnmapNoThrow(); throw; }
    }
#endif

    // Optional checked cleanup. Keep a current context until cleanup completes.
    void Release() {
        RequireUnmapped();
#if PIXEL_DISPLAY_ENABLE_CUDA
        if (resource_) {
            detail::CheckCuda(cudaGraphicsUnregisterResource(resource_), "unregister OpenGL buffer");
            resource_ = nullptr;
        }
#endif
        if (pbo_) { glDeleteBuffers(1, &pbo_); pbo_ = 0; }
        width_ = height_ = 0;
        bytes_ = 0;
    }

private:
    enum class Access { None, Cpu, Cuda };
    GLuint pbo_ = 0;
    unsigned int width_ = 0, height_ = 0;
    std::size_t bytes_ = 0;
    Access mapped_ = Access::None;
#if PIXEL_DISPLAY_ENABLE_CUDA
    cudaGraphicsResource* resource_ = nullptr;
    cudaStream_t stream_ = nullptr;
#endif
    void RequireUnmapped() const {
        if (IsMapped()) throw std::logic_error("PixelDisplay: close pixel mapping first");
    }
    void RequireImage() const {
        RequireUnmapped();
        if (!pbo_) throw std::logic_error("PixelDisplay: cannot map an empty buffer");
    }
    void Unmap() {
        if (mapped_ == Access::Cpu) {
            detail::BufferBinding binding;
            glBindBuffer(GL_PIXEL_UNPACK_BUFFER, pbo_);
            const GLboolean valid = glUnmapBuffer(GL_PIXEL_UNPACK_BUFFER);
            mapped_ = Access::None;
            detail::CheckGL("unmap CPU pixels");
            if (!valid) throw std::runtime_error("PixelDisplay: CPU pixel storage was invalidated");
        }
#if PIXEL_DISPLAY_ENABLE_CUDA
        else if (mapped_ == Access::Cuda) {
            detail::CheckCuda(cudaGraphicsUnmapResources(1, &resource_, stream_), "unmap CUDA pixels");
            mapped_ = Access::None;
        }
#endif
    }
    void UnmapNoThrow() noexcept { try { Unmap(); } catch (...) {} }
    void ReleaseNoThrow() noexcept {
        UnmapNoThrow();
        try { Release(); } catch (...) {}
    }
};

// Optional formats for displaying existing application PBOs; Buffer/View use RGBA8.
enum class Format { R8, RGB8, RGBA8, R16F, RGB16F, RGBA16F, R32F, RGB32F, RGBA32F };

class Presenter {
public:
    Presenter() = default; // OpenGL resources are created lazily.
    Presenter(const Presenter&) = delete;
    Presenter& operator=(const Presenter&) = delete;
    ~Presenter() { Release(); }

    void Present(const Buffer& image, int screenWidth, int screenHeight) {
        PresentBuffer(image.PBO(), image.Width(), image.Height(), screenWidth, screenHeight);
    }

    // Does not swap the window. Pixel aspect ratio follows the supplied viewport.
    void PresentBuffer(GLuint pbo, unsigned int width, unsigned int height,
                       int screenWidth, int screenHeight, Format format = Format::RGBA8) {
        if (!pbo || !width || !height || screenWidth <= 0 || screenHeight <= 0) return;
        if (width > static_cast<unsigned int>((std::numeric_limits<GLsizei>::max)()) ||
            height > static_cast<unsigned int>((std::numeric_limits<GLsizei>::max)()))
            throw std::length_error("PixelDisplay: image exceeds OpenGL dimensions");
        State state; // Restore the caller's display and pixel-unpack state on exit.
        Initialize();
        const FormatInfo info = Describe(format);
        glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);
        glViewport(0, 0, screenWidth, screenHeight);
        glDisable(GL_DEPTH_TEST); glDisable(GL_BLEND); glDisable(GL_SCISSOR_TEST);
        glDisable(GL_CULL_FACE); glDisable(GL_RASTERIZER_DISCARD); glDisable(GL_FRAMEBUFFER_SRGB);
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        glUseProgram(program_);
        glBindVertexArray(vao_);
        glActiveTexture(GL_TEXTURE0);
        glBindSampler(0, 0);
        glBindTexture(GL_TEXTURE_2D, texture_);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
        glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
        glPixelStorei(GL_UNPACK_SKIP_ROWS, 0);
        glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
        if (width != width_ || height != height_ || format != format_) {
            glBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0);
            glTexImage2D(GL_TEXTURE_2D, 0, info.internal, static_cast<GLsizei>(width),
                         static_cast<GLsizei>(height), 0, info.external, info.type, nullptr);
            detail::CheckGL("allocate display texture");
            width_ = width; height_ = height; format_ = format;
        }
        glBindBuffer(GL_PIXEL_UNPACK_BUFFER, pbo);
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, static_cast<GLsizei>(width),
                       static_cast<GLsizei>(height), info.external, info.type, nullptr);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        detail::CheckGL("display pixel buffer");
    }

    void Release() noexcept {
        if (texture_) glDeleteTextures(1, &texture_);
        if (program_) glDeleteProgram(program_);
        if (vao_) glDeleteVertexArrays(1, &vao_);
        texture_ = program_ = vao_ = 0;
        width_ = height_ = 0;
    }

private:
    GLuint texture_ = 0, program_ = 0, vao_ = 0;
    unsigned int width_ = 0, height_ = 0;
    Format format_ = Format::RGBA8;
    struct FormatInfo { GLint internal; GLenum external, type; };
    static FormatInfo Describe(Format format) {
        switch (format) {
        case Format::R8: return {GL_R8, GL_RED, GL_UNSIGNED_BYTE};
        case Format::RGB8: return {GL_RGB8, GL_RGB, GL_UNSIGNED_BYTE};
        case Format::RGBA8: return {GL_RGBA8, GL_RGBA, GL_UNSIGNED_BYTE};
        case Format::R16F: return {GL_R16F, GL_RED, GL_HALF_FLOAT};
        case Format::RGB16F: return {GL_RGB16F, GL_RGB, GL_HALF_FLOAT};
        case Format::RGBA16F: return {GL_RGBA16F, GL_RGBA, GL_HALF_FLOAT};
        case Format::R32F: return {GL_R32F, GL_RED, GL_FLOAT};
        case Format::RGB32F: return {GL_RGB32F, GL_RGB, GL_FLOAT};
        case Format::RGBA32F: return {GL_RGBA32F, GL_RGBA, GL_FLOAT};
        }
        throw std::invalid_argument("PixelDisplay: unsupported pixel format");
    }
    struct State {
        GLint program, vao, activeTexture, texture, sampler, pbo, framebuffer;
        GLint alignment, rowLength, skipPixels, skipRows, swapBytes, viewport[4], polygon[2];
        GLboolean depth, blend, scissor, cull, discard, srgb, colorMask[4];
        State() {
            glGetIntegerv(GL_CURRENT_PROGRAM, &program);
            glGetIntegerv(GL_VERTEX_ARRAY_BINDING, &vao);
            glGetIntegerv(GL_ACTIVE_TEXTURE, &activeTexture);
            glActiveTexture(GL_TEXTURE0);
            glGetIntegerv(GL_TEXTURE_BINDING_2D, &texture);
            glGetIntegerv(GL_SAMPLER_BINDING, &sampler);
            glGetIntegerv(GL_PIXEL_UNPACK_BUFFER_BINDING, &pbo);
            glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING, &framebuffer);
            glGetIntegerv(GL_UNPACK_ALIGNMENT, &alignment);
            glGetIntegerv(GL_UNPACK_ROW_LENGTH, &rowLength);
            glGetIntegerv(GL_UNPACK_SKIP_PIXELS, &skipPixels);
            glGetIntegerv(GL_UNPACK_SKIP_ROWS, &skipRows);
            glGetIntegerv(GL_UNPACK_SWAP_BYTES, &swapBytes);
            glGetIntegerv(GL_VIEWPORT, viewport);
            glGetIntegerv(GL_POLYGON_MODE, polygon);
            depth = glIsEnabled(GL_DEPTH_TEST); blend = glIsEnabled(GL_BLEND);
            scissor = glIsEnabled(GL_SCISSOR_TEST); cull = glIsEnabled(GL_CULL_FACE);
            discard = glIsEnabled(GL_RASTERIZER_DISCARD); srgb = glIsEnabled(GL_FRAMEBUFFER_SRGB);
            glGetBooleanv(GL_COLOR_WRITEMASK, colorMask);
        }
        static void Restore(GLenum capability, GLboolean enabled) {
            if (enabled) glEnable(capability); else glDisable(capability);
        }
        ~State() {
            glUseProgram(program); glBindVertexArray(vao);
            glActiveTexture(GL_TEXTURE0); glBindTexture(GL_TEXTURE_2D, texture);
            glBindSampler(0, sampler); glActiveTexture(activeTexture);
            glBindBuffer(GL_PIXEL_UNPACK_BUFFER, pbo);
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, framebuffer);
            glPixelStorei(GL_UNPACK_ALIGNMENT, alignment);
            glPixelStorei(GL_UNPACK_ROW_LENGTH, rowLength);
            glPixelStorei(GL_UNPACK_SKIP_PIXELS, skipPixels);
            glPixelStorei(GL_UNPACK_SKIP_ROWS, skipRows);
            glPixelStorei(GL_UNPACK_SWAP_BYTES, swapBytes);
            glViewport(viewport[0], viewport[1], viewport[2], viewport[3]);
            glPolygonMode(GL_FRONT_AND_BACK, polygon[0]);
            glColorMask(colorMask[0], colorMask[1], colorMask[2], colorMask[3]);
            Restore(GL_DEPTH_TEST, depth); Restore(GL_BLEND, blend);
            Restore(GL_SCISSOR_TEST, scissor); Restore(GL_CULL_FACE, cull);
            Restore(GL_RASTERIZER_DISCARD, discard); Restore(GL_FRAMEBUFFER_SRGB, srgb);
        }
    };
    static GLuint Shader(GLenum type, const char* source) {
        GLuint shader = glCreateShader(type);
        glShaderSource(shader, 1, &source, nullptr);
        glCompileShader(shader);
        GLint success = 0;
        glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
        if (!success) {
            char log[2048] = {};
            glGetShaderInfoLog(shader, sizeof(log), nullptr, log);
            glDeleteShader(shader);
            throw std::runtime_error(std::string("PixelDisplay shader: ") + log);
        }
        return shader;
    }
    void Initialize() {
        if (program_) return;
        GLuint vertex = 0, fragment = 0;
        try {
            vertex = Shader(GL_VERTEX_SHADER, R"(#version 330 core
out vec2 uv;
void main() {
    vec2 p = vec2((gl_VertexID << 1) & 2, gl_VertexID & 2);
    uv = p;
    gl_Position = vec4(p * 2.0 - 1.0, 0.0, 1.0);
})");
            fragment = Shader(GL_FRAGMENT_SHADER, R"(#version 330 core
in vec2 uv;
out vec4 color;
uniform sampler2D image;
void main() { color = texture(image, uv); }
)");
            program_ = glCreateProgram();
            glAttachShader(program_, vertex); glAttachShader(program_, fragment);
            glLinkProgram(program_);
            GLint success = 0;
            glGetProgramiv(program_, GL_LINK_STATUS, &success);
            if (!success) {
                char log[2048] = {};
                glGetProgramInfoLog(program_, sizeof(log), nullptr, log);
                throw std::runtime_error(std::string("PixelDisplay program: ") + log);
            }
            glDetachShader(program_, vertex); glDetachShader(program_, fragment);
            glDeleteShader(vertex); vertex = 0;
            glDeleteShader(fragment); fragment = 0;
            glUseProgram(program_);
            glUniform1i(glGetUniformLocation(program_, "image"), 0);
            glGenVertexArrays(1, &vao_);
            glGenTextures(1, &texture_);
            glBindTexture(GL_TEXTURE_2D, texture_);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            detail::CheckGL("initialize presenter");
        } catch (...) {
            if (vertex) glDeleteShader(vertex);
            if (fragment) glDeleteShader(fragment);
            Release();
            throw;
        }
    }
};
} // namespace pixel_display
#endif // host code
