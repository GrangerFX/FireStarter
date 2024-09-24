#include <Windows.h>

#include "FireStarter.h"

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
			DragAcceptFiles(hwnd, 1);
			ShowWindow(hwnd, SW_SHOW);

			SerialThread mainSerialThread("FireStarterMain", true);
			SerialThread::SetMainThread(&mainSerialThread);
			FireStarterWindow fireStarterWindow(hwnd, imageWidth, imageHeight);
			FireStarter* fireStarter = new FireStarter(fireStarterWindow);
			do {
				MSG	msg;
				if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
					if (msg.message == WM_QUIT)
						break;
					TranslateMessage(&msg);
					DispatchMessage(&msg);
				} else if (fireStarter->ShouldQuit())
                    break;
                else if (!mainSerialThread.PollThread())
                    Sleep(100);
			} while (1);

			SetWindowText(hwnd, "Quitting");
			mainSerialThread.Synchronize(); // No more updates will be accepted.
			delete fireStarter;
			result = S_OK;
		}
	}
	return result;
} // Initialize

// ----------------------------------------------------------------------------
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	Initialize(hInstance);
	return 0;
} // WinMain
