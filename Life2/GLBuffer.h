#pragma once
#include "CheckErrors.h"
#include <cuda_gl_interop.h>

class GLBuffer {
private:
	void* m_pixels = nullptr;
	unsigned int m_width = 0;		// Number of columns
	unsigned int m_height = 0;		// Number of rows
	unsigned int m_pixelBytes = 0;	// Number of bytes per pixel
	size_t m_frameBytes = 0;		// Number of bytes per frame
	cudaGraphicsResource* m_cuda_gfx_resource = nullptr;
	GLuint m_pbo = 0u;				// OpenGL pbo
	bool m_pixelsAllocated = false;

public:
	inline unsigned int& PixelSize(void) { return m_pixelBytes; }
	inline unsigned int& Width(void) { return m_width; }
	inline unsigned int& Height(void) { return m_height; }
	inline void*& Pixels(void) { return m_pixels; }
	GLuint PBO(void);
	GLuint PBO(void *data, size_t size);
	void Erase(void);
	void Resize(unsigned int width, unsigned int height);
	void Set(void *pixels, unsigned int width, unsigned int height, unsigned int pixelBytes = sizeof(uchar4));
	GLBuffer(void *pixels, unsigned int width, unsigned int height, unsigned int pixelBytes = sizeof(uchar4));
	GLBuffer(unsigned int pixelBytes = sizeof(uchar4));
	~GLBuffer(void);
}; // class GLBuffer;
