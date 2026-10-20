# PixelDisplay

A single-header C++17 library for displaying CPU- or CUDA-generated pixels through
OpenGL 3.3. Copy `Life2/PixelDisplay.h` into another project. No implementation
source file, Windows API, GLFW dependency, or Life2/FireStarter dependency is built
into the library.

The host application creates the window and OpenGL context, initializes its GL
loader, handles events, and swaps buffers. PixelDisplay supplies:

- `Color`: four bytes, in RGBA order.
- `View`: a borrowed pixel pointer plus width and height, usable by CPU code,
  NVCC `.cu` kernels, and NVRTC kernels.
- `Buffer`: an OpenGL pixel buffer with scoped CPU and optional CUDA mappings.
- `Presenter`: a full-window, nearest-neighbor image display with reusable texture
  storage. It renders to the default framebuffer; the caller swaps the window.

## Dependencies and configuration

CPU-only use requires C++17 and an initialized OpenGL 3.3 loader. The default
loader include is `"glad/glad.h"`; compile/link GLAD's implementation normally.
Define `PIXEL_DISPLAY_GL_HEADER` to another compatible loader header if needed.

CUDA is optional and disabled by default. To enable `MapCuda`, define
`PIXEL_DISPLAY_ENABLE_CUDA=1` **consistently across host translation units** and
link the CUDA runtime. PixelDisplay never selects a CUDA device. With the OpenGL
context current, use `cudaGLGetDevices` and `cudaSetDevice` to select a device
associated with that context before calling `MapCuda` or initializing simulation
CUDA resources. CUDA/OpenGL interoperability requires compatible hardware and
drivers; CPU-only builds do not include or link CUDA.

For device-only source, define `PIXEL_DISPLAY_DEVICE_ONLY` before including the
header. NVRTC automatically sees only `Color` and `View`, with no OpenGL or C++
host-library dependencies. The same header also works in an ordinary `.cu` file
with its host APIs enabled.

## CPU rendering

After creating a current OpenGL context and loading OpenGL entry points:

```cpp
#include "PixelDisplay.h"

pixel_display::Buffer frame(640, 480);
pixel_display::Presenter presenter;

{
    auto mapping = frame.MapCpu();
    auto image = mapping.Pixels();
    image.Fill({0, 0, 0, 255});
    image.SetPixel(30, 40, {255, 128, 0, 255});
    mapping.Close();
}
presenter.Present(frame, framebufferWidth, framebufferHeight);
// Swap the application's window buffers.
```

`MapCpu` maps OpenGL buffer storage for CPU writes; it does not allocate a separate
CPU image or make an explicit `glBufferData` upload each frame. The driver may
still copy or stage CPU writes internally. All four RGBA bytes should be written.

## CUDA rendering

With `PIXEL_DISPLAY_ENABLE_CUDA=1`, a selected matching CUDA device, and a current
OpenGL context, host code can map the same buffer for CUDA:

```cpp
auto mapping = frame.MapCuda(stream);
auto image = mapping.Pixels();
dim3 block(16, 16);
dim3 grid((image.width + 15) / 16, (image.height + 15) / 16);
Render<<<grid, block, 0, stream>>>(image);
// Check the kernel launch with cudaGetLastError(), as usual.
mapping.Close();
presenter.Present(frame, framebufferWidth, framebufferHeight);
```

The kernel can live in its own `.cu` file:

```cpp
#define PIXEL_DISPLAY_DEVICE_ONLY
#include "PixelDisplay.h"

__global__ void Render(pixel_display::View image) {
    unsigned int x = blockIdx.x * blockDim.x + threadIdx.x;
    unsigned int y = blockIdx.y * blockDim.y + threadIdx.y;
    if (x < image.width && y < image.height)
        image.Pixel(x, y) = {static_cast<unsigned char>(x),
                             static_cast<unsigned char>(y), 128, 255};
}
```

Registration happens on the first CUDA map and is reused until resize/release.
CUDA writes directly into the registered OpenGL buffer. There is no intermediate
managed image or host upload. Presenting still copies pixels **on the GPU** from
the pixel buffer into the display texture.

Use the **same stream** for mapping, rendering, and unmapping. Closing a CUDA
mapping performs the CUDA/OpenGL handoff; an extra device-wide synchronization is
not required. A pointer may change between mappings, so never cache it across
frames. With Driver API launches on legacy stream 0, pass `cudaStreamLegacy` to
`MapCuda`, as Life2 does. Kernel launch/execution error handling belongs to the
caller; mapping and OpenGL errors are reported as exceptions.

CUDA mappings use write-discard registration: redraw the entire image. `Fill` is
a serial helper, not a parallel kernel; a GPU renderer should assign pixels to
threads as in the example.

## Lifetime and display behavior

- All Buffer and Presenter operations, including destruction, require the owning
  OpenGL context to be current on the calling thread. These objects are not
  internally thread-safe. Keep them inside the context's lifetime.
- Mapping objects borrow their Buffer. Destroy/close mappings before destroying
  their Buffer. `Mapping::Close()` reports errors; its destructor is a best-effort
  fallback during exception unwinding.
- A buffer cannot be mapped twice, resized, released, or presented while mapped.
  Resize discards its old contents; a zero dimension releases the image.
- Pixel coordinates use a bottom-left origin. `Pixel` is unchecked for speed;
  `SetPixel` clips coordinates. RGBA8 bytes are used for both CPU and CUDA views.
- Present stretches the image to the supplied framebuffer dimensions and skips
  zero-sized/minimized viewports. It preserves the OpenGL state it changes,
  including viewport, program, VAO, texture/sampler bindings, framebuffer binding,
  pixel-unpack settings, and the rendering enable flags it overrides.
- `Presenter::PresentBuffer` can display an existing unmapped application PBO
  using R/RGB/RGBA byte, half, or float formats. That caller owns the PBO's size,
  allocation, and synchronization. One-channel formats appear in the red channel.
- Buffer/Presenter are noncopyable to prevent duplicate resource ownership.
  Destructors do not throw; explicit Buffer `Release()` allows checked cleanup.

## Life2 integration and FireStarter reuse

Life2 now uses `pixel_display::Buffer` and passes `View` directly to its NVRTC
drawing kernel. Its existing window/event loop remains in `Application`.
`GLDisplay.h` is a thin compatibility adapter around `Presenter`, preserving the
old `GLDisplay` entry points for the leftover FireStarter code. The old `GLBuffer`
remains for legacy callers; new CPU/GPU drawing should use `pixel_display::Buffer`.

To reuse this in FireStarter, copy `PixelDisplay.h`, enable the CUDA option if
needed, render into a scoped mapping, close it, and present. This change integrates
the library into Life2; it does not modify the separate FireStarter checkout.

## Verification

`tests/PixelDisplay/PixelDisplayTests.cpp` creates an invisible OpenGL context,
renders known patterns, and checks actual framebuffer pixels. It exercises odd
image sizes, resize/release, invalid mapping operations, moved mappings,
exception cleanup, and OpenGL state restoration. With CUDA enabled,
`CudaRenderer.cu` renders on a non-default stream, checks readback, and switches
the same registered buffer back to CPU drawing.

On Windows, from a Visual Studio developer PowerShell:

```powershell
./tests/PixelDisplay/RunTests.ps1
./tests/PixelDisplay/RunTests.ps1 -Cuda
```

CUDA tests require the CUDA toolkit, NVCC-compatible MSVC, and an NVIDIA GPU
supporting OpenGL interoperability. These tests create temporary build outputs
under `tests/PixelDisplay/build` (ignored by the repository's existing patterns).
