#define PIXEL_DISPLAY_DEVICE_ONLY
#include "PixelDisplay.h"
#include <cuda_runtime.h>

__global__ void RenderPixels(pixel_display::View image) {
    unsigned int x = blockIdx.x * blockDim.x + threadIdx.x;
    unsigned int y = blockIdx.y * blockDim.y + threadIdx.y;
    if (x < image.width && y < image.height)
        image.Pixel(x, y) = {static_cast<unsigned char>(x * 31),
                             static_cast<unsigned char>(y * 47), 17, 255};
}
void RenderCuda(pixel_display::View image, cudaStream_t stream) {
    dim3 block(16, 16);
    dim3 grid((image.width + 15) / 16, (image.height + 15) / 16);
    RenderPixels<<<grid, block, 0, stream>>>(image);
}
