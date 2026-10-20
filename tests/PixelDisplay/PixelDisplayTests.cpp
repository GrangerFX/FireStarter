#include "PixelDisplay.h"
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <iostream>
#include <vector>
#include <utility>

#if PIXEL_DISPLAY_ENABLE_CUDA
void RenderCuda(pixel_display::View, cudaStream_t);
#endif

static void Require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
template<class Function> static void ExpectLogicError(Function function) {
    bool rejected = false;
    try { function(); } catch (const std::logic_error&) { rejected = true; }
    Require(rejected, "invalid mapping operation was accepted");
}
static pixel_display::Color Expected(unsigned int x, unsigned int y) {
    return {static_cast<unsigned char>(x * 31), static_cast<unsigned char>(y * 47), 17, 255};
}
static void Verify(pixel_display::Buffer& image, pixel_display::Presenter& presenter) {
    // Verify both rendering under non-default GL state and restoration of that state.
    glViewport(3, 4, 13, 15);
    glEnable(GL_BLEND); glEnable(GL_SCISSOR_TEST); glEnable(GL_DEPTH_TEST);
    glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE);
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 91);
    glPixelStorei(GL_UNPACK_SKIP_ROWS, 2);
    glPixelStorei(GL_UNPACK_SKIP_PIXELS, 3);
    glActiveTexture(GL_TEXTURE3);
    presenter.Present(image, static_cast<int>(image.Width()), static_cast<int>(image.Height()));
    GLint viewport[4], value;
    GLboolean mask[4];
    glGetIntegerv(GL_VIEWPORT, viewport);
    Require(viewport[0] == 3 && viewport[1] == 4 && viewport[2] == 13 && viewport[3] == 15,
            "viewport not restored");
    Require(glIsEnabled(GL_BLEND) && glIsEnabled(GL_SCISSOR_TEST) && glIsEnabled(GL_DEPTH_TEST),
            "enable state not restored");
    glGetBooleanv(GL_COLOR_WRITEMASK, mask);
    Require(!mask[0] && !mask[1] && !mask[2] && !mask[3], "color mask not restored");
    glGetIntegerv(GL_UNPACK_ROW_LENGTH, &value); Require(value == 91, "row length not restored");
    glGetIntegerv(GL_UNPACK_SKIP_ROWS, &value); Require(value == 2, "skip rows not restored");
    glGetIntegerv(GL_UNPACK_SKIP_PIXELS, &value); Require(value == 3, "skip pixels not restored");
    glGetIntegerv(GL_ACTIVE_TEXTURE, &value); Require(value == GL_TEXTURE3, "texture unit not restored");
    std::vector<pixel_display::Color> actual(image.Width() * image.Height());
    glReadBuffer(GL_BACK);
    glReadPixels(0, 0, image.Width(), image.Height(), GL_RGBA, GL_UNSIGNED_BYTE, actual.data());
    for (unsigned int y = 0; y < image.Height(); ++y) {
        for (unsigned int x = 0; x < image.Width(); ++x) {
            auto a = actual[y * image.Width() + x], e = Expected(x, y);
            Require(a.r == e.r && a.g == e.g && a.b == e.b && a.a == e.a,
                    "framebuffer readback did not match rendered RGBA pixels");
        }
    }
    Require(glGetError() == GL_NO_ERROR, "OpenGL error after pixel verification");
}
static void RunTests() {
    using namespace pixel_display;
    Presenter presenter;
    Buffer image;
    ExpectLogicError([&] { image.MapCpu(); });
    for (unsigned int size : {7u, 11u, 1u, 7u}) {
        image.Resize(size, size == 1 ? 1 : 5);
        {
            auto mapping = image.MapCpu();
            auto pixels = mapping.Pixels();
            pixels.Fill({0, 0, 0, 255});
            pixels.SetPixel(-1, 0, {255, 0, 0, 255});
            pixels.SetPixel(pixels.width, 0, {255, 0, 0, 255});
            for (unsigned int y = 0; y < pixels.height; ++y)
                for (unsigned int x = 0; x < pixels.width; ++x)
                    pixels.Pixel(x, y) = Expected(x, y);
            ExpectLogicError([&] { image.MapCpu(); });
            ExpectLogicError([&] { image.Resize(4, 4); });
            ExpectLogicError([&] { presenter.Present(image, 64, 64); });
            auto moved = std::move(mapping);
            moved.Close(); moved.Close();
        }
        Verify(image, presenter);
#if PIXEL_DISPLAY_ENABLE_CUDA
        cudaStream_t stream = nullptr;
        detail::CheckCuda(cudaStreamCreate(&stream), "create test stream");
        {
            auto mapping = image.MapCuda(stream);
            ExpectLogicError([&] { image.MapCpu(); });
            RenderCuda(mapping.Pixels(), stream);
            mapping.Close(); // Deliberately no cudaDeviceSynchronize before display.
        }
        Verify(image, presenter);
        detail::CheckCuda(cudaStreamDestroy(stream), "destroy test stream");
        // Exercise the CPU after CUDA has registered this same OpenGL buffer.
        {
            auto mapping = image.MapCpu();
            auto pixels = mapping.Pixels();
            for (unsigned int y = 0; y < pixels.height; ++y)
                for (unsigned int x = 0; x < pixels.width; ++x)
                    pixels.Pixel(x, y) = Expected(x, y);
        }
        Verify(image, presenter);
#endif
    }
    image.Resize(0, 0);
    Require(!image.Bytes() && !image.Width() && !image.Height(), "empty resize did not release image");
    presenter.Present(image, 0, 0);
    image.Resize(2, 2);
    try { auto mapping = image.MapCpu(); throw std::runtime_error("test unwinding"); }
    catch (const std::runtime_error&) {}
    Require(!image.IsMapped(), "mapping survived exception unwinding");
    image.Release(); presenter.Release();
    Require(glGetError() == GL_NO_ERROR, "OpenGL error during resource cleanup");
}
int main() {
    if (!glfwInit()) return 2;
    glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_ALPHA_BITS, 8);
    GLFWwindow* window = glfwCreateWindow(64, 64, "PixelDisplay tests", nullptr, nullptr);
    if (!window) { glfwTerminate(); return 3; }
    glfwMakeContextCurrent(window);
    int result = 0;
    try {
        Require(gladLoadGL() != 0, "GLAD initialization failed");
#if PIXEL_DISPLAY_ENABLE_CUDA
        unsigned int count = 0;
        int device = 0;
        pixel_display::detail::CheckCuda(cudaGLGetDevices(&count, &device, 1, cudaGLDeviceListAll),
                                        "find OpenGL CUDA device");
        Require(count != 0, "no CUDA device for OpenGL");
        pixel_display::detail::CheckCuda(cudaSetDevice(device), "select OpenGL CUDA device");
#endif
        RunTests();
        std::cout << "PASS: CPU pixels, resize, mapping guards, state restoration, cleanup";
#if PIXEL_DISPLAY_ENABLE_CUDA
        std::cout << ", CUDA pixels on a non-default stream, CPU/CUDA switching";
#endif
        std::cout << '\n';
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; result = 1; }
    glfwDestroyWindow(window); glfwTerminate();
    return result;
}
