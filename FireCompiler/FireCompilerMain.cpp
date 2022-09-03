#include <Windows.h>
#include "FireCompiler.h"
#include "PrintF.h"

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
HRESULT Initialize(const char* commandLine)
{
	SerialThread mainSerialThread(true);
	SerialThread::SetMainThread(&mainSerialThread);
	FireCompiler fireCompiler(commandLine);
	while (!fireCompiler.ShouldTerminate()) {
		MSG	msg;
		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
			if (msg.message == WM_QUIT) {
				fireCompiler.Terminate();
				break;
			}
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		} else if (!mainSerialThread.PollThread())
			Sleep(100);
	}
	return S_OK;
} // Initialize

// ----------------------------------------------------------------------------
int main(int argc, const char** argv)
{
	printf("FireMaker command line = %s\n", argv[0]);
	Initialize(argv[0]);
	return 0;
} // WinMain
