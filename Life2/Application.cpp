#include "Application.h"
#include "glad/glad.c"
#include <shellscalingapi.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include <thread>

#include "Life2.h"

void Application::DrawImage(GLDisplay &gl_display)
{
	unsigned int screenWidth, sceenHeight;
	{
		std::lock_guard<std::mutex> lock(m_stateMutex);
		screenWidth = m_width;
		sceenHeight = m_height;
	}
	gl_display.ScreenResolution(screenWidth, sceenHeight);
	unsigned int width = (unsigned int)(0.5 + screenWidth / m_screenScale);
	unsigned int height = (unsigned int)(0.5 + sceenHeight / m_screenScale);
	char status[1024] = {};
	bool result = m_codeBlob->DrawFrame(gl_display, width, height, status, sizeof(status));
	if (result) {
		{
			std::lock_guard<std::mutex> lock(m_stateMutex);
			strcpy_s(m_statusString, status);
			m_update++;
		}

		// Swap foreground and background frames (frame sync). Any thread.
		glfwSwapBuffers(m_window);
	}
} // DrawImage

void Application::ResizeWindow(unsigned int width, unsigned int height)
{
	std::lock_guard<std::mutex> lock(m_stateMutex);
	m_width = width;
	m_height = height;
} // ResizeWindow

static void GLFWErrorCallback(int error, const char* description)
{
	printf("GLFW Error %d: %s\n", error, description);
} // GLFWErrorCallback

static void windowSizeCallback(GLFWwindow* window, int32_t res_x, int32_t res_y)
{
	Application *application = (Application*)glfwGetWindowUserPointer(window);
	application->ResizeWindow(res_x, res_y);
} // windowSizeCallback

void Application::InitWindow(void)
{
    strcpy_s(m_statusString, "Stamper: Initializing...");

	m_window = nullptr;
	glfwSetErrorCallback(GLFWErrorCallback);
	if (!glfwInit())
		exit(EXIT_FAILURE);

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);  // To make Apple happy -- should not be needed
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);

	int windowWidth = 1024;
	int windowHeight = 768;
	glfwWindowHint(GLFW_MAXIMIZED, GL_TRUE);

	m_window = glfwCreateWindow(windowWidth, windowHeight, "SamplingOptiX", nullptr, nullptr);
	if (!m_window)
		exit(EXIT_FAILURE);

	glfwGetFramebufferSize(m_window, &windowWidth, &windowHeight);
	m_width = windowWidth;
	m_height = windowHeight;
#if 1
	POINT zeroPoint = { 0, 0 };
	HMONITOR mainMonitor = MonitorFromPoint(zeroPoint, MONITOR_DEFAULTTOPRIMARY);
	DEVICE_SCALE_FACTOR scale = DEVICE_SCALE_FACTOR_INVALID;
	GetScaleFactorForMonitor(mainMonitor, &scale);
	if (scale)
		m_screenScale = (double)scale / 100.0;
#else
	GLFWmonitor *mainMonitor = glfwGetPrimaryMonitor();
	float xScale = 1.0f;
	float yScale = 1.0f;
	glfwGetMonitorContentScale(mainMonitor, &xScale, &yScale);
	m_screenScale = xScale;
#endif
	glfwSetWindowUserPointer(m_window, this);
	glfwSetWindowSizeCallback(m_window, windowSizeCallback);
} // InitWindow

void Application::MainThread(void)
{
	glfwMakeContextCurrent(m_window);
	glfwSwapInterval(0);  // No vsync

	// from sutil::initGL()
	if (!gladLoadGL())
		exit(EXIT_FAILURE);

	GLDisplay gl_display;

	m_codeBlob = new Life2();
	do {
		DrawImage(gl_display);
	} while (!m_quit);

	delete m_codeBlob;
	m_codeBlob = nullptr;
	gl_display.Release();
	glfwMakeContextCurrent(nullptr);
} // MainThread

void Application::MainLoop(void)
{
	InitWindow();
	std::thread mainThread(&Application::MainThread, this);
	long long lastUpdate = 0;
	do {
		// Update gl window events. Main Thread!
		glfwPollEvents();

		// Show the render status in the window title. Main thread!
		char status[1024];
		bool titleChanged = false;
		{
			std::lock_guard<std::mutex> lock(m_stateMutex);
			if (m_update > lastUpdate) {
				strcpy_s(status, m_statusString);
				lastUpdate = m_update;
				titleChanged = true;
			}
		}
		if (titleChanged)
			glfwSetWindowTitle(m_window, status);
		std::this_thread::sleep_for(std::chrono::milliseconds(10));

		// Quit if the user has closed the window.
		if (glfwWindowShouldClose(m_window))
			m_quit.store(true);
	} while (!m_quit);
	if (mainThread.joinable())
		mainThread.join();
	glfwDestroyWindow(m_window);
	glfwTerminate();
} // MainLoop

Application::Application(void)
{
    // Timer ID
	sprintf_s(m_statusString, "Stamper");
	m_codeBlob = nullptr;
	m_update = 0;
	m_quit = false;
} // Application

Application::~Application(void)
{
} // ~Application