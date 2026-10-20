#include "Application.h"
#include <windows.h>

////////////////////////////////////////////////////////////////////////////////
// Main program
////////////////////////////////////////////////////////////////////////////////
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	Application *application = new Application();
	application->MainLoop();
	delete application;
	return S_OK;
} // WinMain
