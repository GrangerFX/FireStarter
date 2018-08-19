#include "FireStarter.h"

static FireStarter fireStarter;

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
	rect.right = BUFFER_WIDTH;
	rect.bottom = BUFFER_HEIGHT;
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

	DragAcceptFiles(hwnd, 1);

	ShowWindow(hwnd, SW_SHOW);

	do {
		MSG	 msg;
		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
			if (msg.message == WM_QUIT)
                break;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		} else {
            fireStarter.RenderImage(hwnd);
            SetWindowText(hwnd, fireStarter.statusString);
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
