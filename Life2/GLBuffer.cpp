#include "GLBuffer.h"
#include <cuda_runtime.h>

GLuint GLBuffer::PBO(void)
{
	checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, m_pbo));
	checkGLErrors(glBufferData(GL_ARRAY_BUFFER, m_frameBytes, m_pixels, GL_STREAM_DRAW));
	checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, 0));
	return m_pbo;
} // PBO

GLuint GLBuffer::PBO(void *data, size_t size)
{
	if ((m_frameBytes != size) || !m_pbo) {
		if (m_cuda_gfx_resource) {
			checkCUDAErrors(cudaGraphicsUnregisterResource(m_cuda_gfx_resource));
			m_cuda_gfx_resource = nullptr;
		}
		if (m_pbo) {
			checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, 0));
			checkGLErrors(glDeleteBuffers(1, &m_pbo));
			m_pbo = 0;
		}
		m_frameBytes = size;
		checkGLErrors(glGenBuffers(1, &m_pbo));
		checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, m_pbo));
		checkGLErrors(glBufferData(GL_ARRAY_BUFFER, m_frameBytes, nullptr, GL_STREAM_DRAW));
		checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, 0u));
		checkCUDAErrors(cudaGraphicsGLRegisterBuffer(&m_cuda_gfx_resource, m_pbo, cudaGraphicsMapFlagsWriteDiscard));
	}
	checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, m_pbo));
	checkGLErrors(glBufferData(GL_ARRAY_BUFFER, size, data, GL_STREAM_DRAW));
	checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, 0));
	return m_pbo;
} // PBO

void GLBuffer::Resize(unsigned int width, unsigned int height)
{
	if ((width != m_width) || (height != m_height) || !m_pbo) {
		m_width = width;
		m_height = height;
		m_frameBytes = m_width * m_height * m_pixelBytes;
		if (m_pixels && m_pixelsAllocated)
			checkCUDAErrors(cudaFree(m_pixels));
		m_pixels = nullptr;
		m_pixelsAllocated = false;
		if (m_frameBytes) {
			checkCUDAErrors(cudaMallocManaged(&m_pixels, m_frameBytes));
			m_pixelsAllocated = true;
		}

		// Initialize the OpenGL pbo one time only.
		if (m_cuda_gfx_resource) {
			checkCUDAErrors(cudaGraphicsUnregisterResource(m_cuda_gfx_resource));
			m_cuda_gfx_resource = nullptr;
		}
		if (m_pbo) {
			checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, 0));
			checkGLErrors(glDeleteBuffers(1, &m_pbo));
			m_pbo = 0;
		}
		if (m_frameBytes) {
			checkGLErrors(glGenBuffers(1, &m_pbo));
			checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, m_pbo));
			checkGLErrors(glBufferData(GL_ARRAY_BUFFER, m_frameBytes, nullptr, GL_STREAM_DRAW));
			checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, 0u));
			checkCUDAErrors(cudaGraphicsGLRegisterBuffer(&m_cuda_gfx_resource, m_pbo, cudaGraphicsMapFlagsWriteDiscard));
		}
	}
} // Resize

void GLBuffer::Set(void *pixels, unsigned int width, unsigned int height, unsigned int pixelBytes)
{
	if (m_pixelsAllocated && m_pixels) {
		checkCUDAErrors(cudaFree(m_pixels));
		m_pixels = nullptr;
		m_pixelsAllocated = false;
	}
	if ((pixels != m_pixels) || (m_pixelBytes != pixelBytes) || (width != m_width) || (height != m_height) || !m_pbo) {
		m_pixelBytes = pixelBytes;
		m_width = width;
		m_height = height;
		m_frameBytes = m_width * m_height * m_pixelBytes;
		m_pixels = pixels;

		// Initialize the OpenGL pbo one time only.
		if (m_cuda_gfx_resource) {
			checkCUDAErrors(cudaGraphicsUnregisterResource(m_cuda_gfx_resource));
			m_cuda_gfx_resource = nullptr;
		}
		if (m_pbo) {
			checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, 0));
			checkGLErrors(glDeleteBuffers(1, &m_pbo));
			m_pbo = 0;
		}
		if (m_frameBytes) {
			checkGLErrors(glGenBuffers(1, &m_pbo));
			checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, m_pbo));
			checkGLErrors(glBufferData(GL_ARRAY_BUFFER, m_frameBytes, nullptr, GL_STREAM_DRAW));
			checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, 0u));
			checkCUDAErrors(cudaGraphicsGLRegisterBuffer(&m_cuda_gfx_resource, m_pbo, cudaGraphicsMapFlagsWriteDiscard));
		}
	}
} // Set

void GLBuffer::Erase(void)
{
	if (m_pixels)
		memset(m_pixels, 0, m_frameBytes);
} // EraseFrameBuffer

GLBuffer::GLBuffer(void *pixels, unsigned int width, unsigned int height, unsigned int pixelBytes)
{
	m_pixels = nullptr;
	m_pixelBytes = pixelBytes;
	m_width = 0;
	m_height = 0;
	m_pixelsAllocated = false;
	checkCUDAErrors(cudaSetDevice(0));
	Set(pixels, width, height, pixelBytes);
} // GLBuffer

GLBuffer::GLBuffer(unsigned int pixelBytes)
{
	m_pixels = nullptr;
	m_pixelBytes = pixelBytes;
	m_width = 0;
	m_height = 0;
	m_pixelsAllocated = false;
	checkCUDAErrors(cudaSetDevice(0));
} // GLBuffer

GLBuffer::~GLBuffer(void)
{
	if (m_pixels && m_pixelsAllocated)
		checkCUDAErrors(cudaFree(m_pixels));
	if (m_cuda_gfx_resource)
		checkCUDAErrors(cudaGraphicsUnregisterResource(m_cuda_gfx_resource));
	if (m_pbo != 0u) {
		checkGLErrors(glBindBuffer(GL_ARRAY_BUFFER, 0));
		checkGLErrors(glDeleteBuffers(1, &m_pbo));
	}
} // FreeFrameBuffer