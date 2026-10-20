#pragma once
#include "CodeBlob.h"
#include "GLFW/glfw3.h"
#include "GLDisplay.h"
#include <string>
#include <vector>
#include <atomic>
#include <mutex>

class Application {
private:
	GLFWwindow *m_window;
	CodeBlob *m_codeBlob;
	double m_screenScale = 1.0;
	std::mutex m_stateMutex;
	long long m_update;
	unsigned int m_width;
	unsigned int m_height;
	std::atomic<bool> m_quit{false};
    char m_statusString[1024];

	void InitWindow(void);
	void DrawImage(GLDisplay &gl_display);
	void MainThread(void);

public:
	void ResizeWindow(unsigned int width, unsigned int height);
	void MainLoop(void);
	Application(void);
    ~Application(void);
}; // class Application