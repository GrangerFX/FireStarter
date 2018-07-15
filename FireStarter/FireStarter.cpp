// Windows Header Files:
#include <windows.h>
// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// CUDA runtime
// CUDA utilities and system includes
#include <cuda.h>
#include <cuda_runtime.h>
#include <nvrtc.h>
#include <helper_functions.h>
#include <helper_cuda.h>
#include <nvrtc_helper.h>

// Includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdio>

#include "FireStarter.h"
#include "FireStarter_kernel.h"
#include "FireStarter_gold.h"

#define RUN_GPU 1
#define USE_GPU_MEMORY 1

#define RAYTRACE_WIDTH 640
#define RAYTRACE_HEIGHT 480
#define RAYTRACE_SAMPLES 1

typedef struct FrameBuffer {
	unsigned char *base;			// Pointer to the alligned native pixel format buffer
	long rowbytes;					// Number of bytes per row
	unsigned long width;			// Number of columns
	unsigned long height;			// Number of rows
} FrameBuffer;

// Timer ID
StopWatchInterface *hTimer = NULL;

bool haveDoubles = false;
int numSMs = 0;                     // number of multiprocessors

const char *program =
"   extern \"C\" __global__ void RaytraceGPU(unsigned char *pixels, const unsigned int width, const unsigned int height)    \n"
"   {                                                                                                                       \n"
"       unsigned int pixel = blockDim.x * blockIdx.x + threadIdx.x;                                                         \n"
"       unsigned int y = pixel / width;                                                                                     \n"
"       if (y < height) {                                                                                                   \n"
"           unsigned int x = pixel % width;                                                                                 \n"
"           pixel *= 4;                                                                                                     \n"
"           pixels[pixel + 0] = x & 255;                                                                                    \n"
"           pixels[pixel + 1] = y & 255;                                                                                    \n"
"           pixels[pixel + 2] = (x ^ y) & 255;                                                                              \n"
"           pixels[pixel + 3] = 255;                                                                                        \n"
"       }                                                                                                                   \n"
"   } // RaytraceGPU                                                                                                        \n";

char *ptx;
size_t ptxSize;
CUmodule module;
CUfunction kernel_addr;

char statusString[1024];

// Raytrace pixels
FrameBuffer theBuffer;

void InitFrameBuffer(FrameBuffer &theBuffer, unsigned long width, unsigned long height)
{
	theBuffer.width = width;
	theBuffer.height = height;
	theBuffer.rowbytes = width * 4;
    theBuffer.base = NULL;

    cudaError_t err = cudaMallocManaged(&theBuffer.base, RAYTRACE_WIDTH * RAYTRACE_HEIGHT * 4);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate pixels (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
} // InitBuffer

void FreeFrameBuffer(FrameBuffer &theBuffer)
{
    if (theBuffer.base) {
        cudaError_t err = cudaFree(theBuffer.base);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free frame buffer (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }
    theBuffer.width = 0;
    theBuffer.height = 0;
    theBuffer.rowbytes = 0;
    theBuffer.base = NULL;
} // FreeFrameBuffer

// This is specifically to enable the application to enable/disable vsync
typedef BOOL (WINAPI *PFNWGLSWAPINTERVALFARPROC)(int);

// Run the Sinewave Simulator using CUDA or CPU
void renderImage(void)
{
    sdkResetTimer(&hTimer);

    if (RUN_GPU) {
#if 1
        // Launch the Vector Add CUDA Kernel
        int threadsPerBlock = 256;
        unsigned int width = RAYTRACE_WIDTH;
        unsigned int height = RAYTRACE_HEIGHT;
        int blocksPerGrid = (width * height + threadsPerBlock - 1) / threadsPerBlock;
        printf("CUDA kernel launch with %d blocks of %d threads\n", blocksPerGrid, threadsPerBlock);
        dim3 cudaBlockSize(threadsPerBlock, 1, 1);
        dim3 cudaGridSize(blocksPerGrid, 1, 1);

        void *arr[] = {reinterpret_cast<void *>(&theBuffer.base),
                       reinterpret_cast<void *>(&width),
                       reinterpret_cast<void *>(&height)};
        checkCudaErrors(cuLaunchKernel(kernel_addr, cudaGridSize.x, cudaGridSize.y,
                                        cudaGridSize.z, /* grid dim */
                                        cudaBlockSize.x, cudaBlockSize.y,
                                        cudaBlockSize.z, /* block dim */
                                        0, 0,            /* shared mem, stream */
                                        &arr[0],         /* arguments */
                                        0));
        checkCudaErrors(cuCtxSynchronize());
#else
        RunRaytraceGold(theBuffer.base, RAYTRACE_WIDTH, RAYTRACE_HEIGHT);
#endif
    } else {
        RunRaytraceGPU(theBuffer.base, RAYTRACE_WIDTH, RAYTRACE_HEIGHT);
        cudaDeviceSynchronize();
    }
    float time = sdkGetTimerValue(&hTimer);
    sprintf(statusString, "Time=%5.8f\n", time);
} // renderImage

void cleanup()
{
    sdkDeleteTimer(&hTimer);
} // cleanup

void initData(int argc, char **argv)
{
    // check for hardware double precision support
    int dev = 0;
    dev = findCudaDevice(argc, (const char **)argv);

    cudaDeviceProp deviceProp;
    checkCudaErrors(cudaGetDeviceProperties(&deviceProp, dev));
    int version = deviceProp.major*10 + deviceProp.minor;

    if (version < 11) {
        printf("GPU compute capability is too low (1.0), program is waived\n");
        exit(EXIT_WAIVED);
    }

    haveDoubles = (version >= 13);
    numSMs = deviceProp.multiProcessorCount;

    InitFrameBuffer(theBuffer, RAYTRACE_WIDTH, RAYTRACE_HEIGHT);

    sdkCreateTimer(&hTimer);
    sdkStartTimer(&hTimer);

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    NVRTC_SAFE_CALL("nvrtcCreateProgram", nvrtcCreateProgram(&prog, program, "FireStarter", 0, NULL, NULL));
    nvrtcResult res = nvrtcCompileProgram(prog, 0, NULL);
    NVRTC_SAFE_CALL("nvrtcCompileProgram", res);

    // Output the compile log.
    size_t logSize;
    NVRTC_SAFE_CALL("nvrtcGetProgramLogSize", nvrtcGetProgramLogSize(prog, &logSize));
    char *log = reinterpret_cast<char *>(malloc(sizeof(char) * logSize + 1));
    NVRTC_SAFE_CALL("nvrtcGetProgramLog", nvrtcGetProgramLog(prog, log));
    log[logSize] = '\x0';
    if (strlen(log) >= 2) {
        std::cerr << "\n compilation log ---\n";
        std::cerr << log;
        std::cerr << "\n end log ---\n";
    }
    free(log);
    printf("Data initialization done.\n");

    // Fetch PTX
    NVRTC_SAFE_CALL("nvrtcGetPTXSize", nvrtcGetPTXSize(prog, &ptxSize));
    ptx = reinterpret_cast<char *>(malloc(sizeof(char) * ptxSize));
    NVRTC_SAFE_CALL("nvrtcGetPTX", nvrtcGetPTX(prog, ptx));
    NVRTC_SAFE_CALL("nvrtcDestroyProgram", nvrtcDestroyProgram(&prog));

    checkCudaErrors(cuModuleLoadDataEx(&module, ptx, 0, 0, 0));
    free(ptx);
    ptx = NULL;

    checkCudaErrors(cuModuleGetFunction(&kernel_addr, module, "RaytraceGPU"));

} // initData

void Draw(HWND hwnd)
{
	unsigned char buffer[4096];
	BITMAPINFO*	bm = (BITMAPINFO*)buffer;
	bm->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	bm->bmiHeader.biHeight = -(int)theBuffer.height;
	bm->bmiHeader.biPlanes = 1;
	bm->bmiHeader.biCompression = BI_RGB;
	bm->bmiHeader.biSizeImage = 0; 
	bm->bmiHeader.biXPelsPerMeter = 0; 
	bm->bmiHeader.biYPelsPerMeter = 0; 
	bm->bmiHeader.biClrUsed = 0; 
	bm->bmiHeader.biClrImportant = 0;					
	bm->bmiHeader.biWidth = theBuffer.width;
	bm->bmiHeader.biBitCount = 32;

	HDC hdc = GetDC(hwnd);
	if (hdc) {
	    SetDIBitsToDevice(hdc, 0, 0, theBuffer.width, theBuffer.height, 0, 0, 0, theBuffer.height, (CONST VOID *)theBuffer.base, bm, DIB_RGB_COLORS);
//	    TextOut(hdc, 0, 0, statusString, (int)(strlen(statusString)));
	    GdiFlush();
    }
} // Draw

// ----------------------------------------------------------------------------
LRESULT __stdcall Winproc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message) {   
		case WM_DROPFILES:
			{
				char name[256];
				unsigned long count;
				long i;

				count = DragQueryFile((HDROP)wParam, (UINT)-1, name, 255);
				i = 0;
				while (count > 0) {
					count--;
					DragQueryFile((HDROP)wParam, i, name, 255);
					i++;
//				    DoSomethingWithFile(name, hwnd);
				}
			}
			DragFinish((HDROP)wParam);
			return 0;

		case WM_KEYDOWN:
			if (wParam == 'Q')
				PostQuitMessage(0);
			return 0;

		case WM_DESTROY:
			PostQuitMessage(0);
			break;
            
		default:
			return DefWindowProc(hwnd, message, wParam, lParam);
	}

	return 0;
} // Winproc

// ----------------------------------------------------------------------------
HRESULT Initialize(HINSTANCE hInstance) {
	WNDCLASS	wc;
	RECT		rect;
	HWND		hwnd;

	// Alloc Window
    wc.style = 0;
    wc.lpfnWndProc = Winproc;
    wc.cbClsExtra = 4;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon(NULL,IDI_APPLICATION);
    wc.hCursor = LoadCursor(NULL,IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = "comp_class";
	
    if (!RegisterClass(&wc))
        goto fail;

	rect.left = 0;
	rect.top = 0;
	rect.right = RAYTRACE_WIDTH;
	rect.bottom = RAYTRACE_HEIGHT;
	AdjustWindowRect(&rect, WS_SYSMENU | WS_BORDER | WS_CAPTION | WS_SIZEBOX, 0);
	rect.right -= rect.left;
	rect.bottom -= rect.top;

    hwnd = CreateWindow("comp_class",
                        "Drag effects into this window to convert .tfx files or preview .vfx files.",
						//WS_POPUP,//WS_SYSMENU | WS_BORDER | WS_CAPTION | WS_SIZEBOX,
						WS_SYSMENU | WS_BORDER | WS_CAPTION | WS_SIZEBOX,
                        0,0,
						rect.right, rect.bottom,
                        NULL,NULL,
						hInstance,
						NULL);

	if (!hwnd)
        goto fail;

//	SetWindowLong(hwnd, GWL_USERDATA, (long)this);

	DragAcceptFiles(hwnd, 1);

    strcpy(statusString, "Initializing...");
    initData(0, NULL);

	ShowWindow(hwnd, SW_SHOW);

	do {
		MSG	 msg;
		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
			if (msg.message == WM_QUIT)
                break;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		} else {
//            WaitMessage();
            renderImage();
            Draw(hwnd);
        }
	} while (1);

	return S_OK;

fail:
	return E_FAIL;
} // Initialize

// ----------------------------------------------------------------------------
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	Initialize(hInstance);
	return 0;
} // WinMain
