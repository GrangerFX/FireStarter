#include <Windows.h>
#include <string>
#include "FireStarter_Solution.h"

typedef struct
{
	unsigned char x, y, z, w;
} uchar4;

static float DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation)
{
	float maxError = 0.0f;
	int xScale = bufferHeight / 8;
	int yScale = bufferHeight / 16;
	for (unsigned int y = 0; y < bufferHeight; y++) {
		int x0 = (bufferWidth / 2) - xScale;
		int x1 = (bufferWidth / 2) + xScale;
		if (x0 >= 0) {
			uchar4& pixel(bufferPixels[y * bufferWidth + x0]);
			pixel.x = 64;
			pixel.y = 128;
			pixel.z = 64;
		};
		if (x1 < (int)bufferWidth) {
			uchar4& pixel(bufferPixels[y * bufferWidth + x1]);
			pixel.x = 64;
			pixel.y = 128;
			pixel.z = 64;
		};
	}
	for (unsigned int x = 0; x < bufferWidth; x++) {
		float theta = TARGET_PI * ((x - bufferWidth * 0.5f) / xScale + 1.0f);
		float center = bufferHeight * 0.66f;
		float target = SolutionTarget(theta, variation);
#if SOLUTION_VARIATIONS == 1
		float solution = Solution(theta);
#else
		float solution = Solution(theta, variation);
#endif
		if ((theta >= SOLUTION_MIN) && (theta <= SOLUTION_MAX)) {
			float error = fabsf(solution - target);
			maxError = max(maxError, error);
		}
		int y = (int)(center + target * yScale);
		if ((y >= 0) && (y < (int)bufferHeight)) {
			uchar4& pixel(bufferPixels[y * bufferWidth + x]);
			pixel.x = 255;
			pixel.y = 128;
		};
		y = (int)(center + solution * yScale);
		if ((y >= 0) && (y < (int)bufferHeight)) {
			uchar4& pixel(bufferPixels[y * bufferWidth + x]);
			pixel.x = pixel.y = pixel.z = 255;
		};
	}
	return maxError;
} // DrawSolution

static void DisplayPixels(HWND hwnd, const uchar4* pixels, unsigned int width, unsigned int height)
{
	unsigned char buffer[4096];
	BITMAPINFO* bm = (BITMAPINFO*)buffer;
	bm->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	bm->bmiHeader.biHeight = -(int)height;
	bm->bmiHeader.biPlanes = 1;
	bm->bmiHeader.biCompression = BI_RGB;
	bm->bmiHeader.biSizeImage = 0;
	bm->bmiHeader.biXPelsPerMeter = 0;
	bm->bmiHeader.biYPelsPerMeter = 0;
	bm->bmiHeader.biClrUsed = 0;
	bm->bmiHeader.biClrImportant = 0;
	bm->bmiHeader.biWidth = width;
	bm->bmiHeader.biBitCount = 32;

	HDC hdc = GetDC(hwnd);
	if (hdc) {
		SetDIBitsToDevice(hdc, 0, 0, width, height, 0, 0, 0, height, pixels, bm, DIB_RGB_COLORS);
		GdiFlush();
	}
} // DisplayPixels

LRESULT __stdcall Winproc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message) {   
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

HRESULT Initialize(HINSTANCE hInstance)
{
	HRESULT result = E_FAIL;

	// Alloc Window
	WNDCLASS wc;
	wc.style = 0;
	wc.lpfnWndProc = Winproc;
	wc.cbClsExtra = 4;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = "comp_class";

	if (RegisterClass(&wc)) {
		LONG imageWidth = GetSystemMetrics(SM_CXSCREEN);
		LONG imageHeight = GetSystemMetrics(SM_CYSCREEN) - 70;
		RECT rect = { 0, 0, imageWidth, imageHeight };
		AdjustWindowRect(&rect, WS_SYSMENU | WS_BORDER | WS_CAPTION | WS_SIZEBOX, 0);
		rect.right -= rect.left;
		rect.bottom -= rect.top;

		HWND hwnd = CreateWindow("comp_class",
			"FireStarter",
			WS_SYSMENU | WS_BORDER | WS_CAPTION | WS_SIZEBOX,
			rect.left, 0,
			rect.right, rect.bottom,
			NULL, NULL,
			hInstance,
			NULL);

		if (hwnd) {
			ShowWindow(hwnd, SW_SHOW);

			// Draw the solution graphs into a pixel buffer.
			uchar4* pixels = (uchar4*)calloc(imageWidth * imageHeight, sizeof(uchar4));
			std::string statusString = "FireStarter:";
			for (unsigned int v = 0; v < SOLUTION_VARIATIONS; v++) {
				char solutionText[64];
				float error = DrawSolution(pixels, imageWidth, imageHeight, v);
				snprintf(solutionText, sizeof(solutionText), " Solution %d = %f", v, error);
				statusString += solutionText;
			}

			// Copy the pixel buffer to the window.
			DisplayPixels(hwnd, pixels, imageWidth, imageHeight);

			// Display the results in the window title bar.
			SetWindowText(hwnd, statusString.c_str());

			// Wait for the user to close the window.
			do {
				MSG	msg;
				if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
					if (msg.message == WM_QUIT)
						break;
					TranslateMessage(&msg);
					DispatchMessage(&msg);
				}
			} while (1);

			result = S_OK;
		}
	}
	return result;
} // Initialize

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	Initialize(hInstance);
	return 0;
} // WinMain
