#pragma once
#include <cuda.h>
#include <stdio.h>
#include "KHR/khrplatform.h"
#include "glad\glad.h"
#include "PrintF.h"

#if !defined(NDEBUG)
#if defined(_WIN32) // Windows 32/64-bit
#include <windows.h>
#define DBGBREAK() DebugBreak();
#else
#define DBGBREAK() __builtin_trap();
#endif
#define DEBUG_ASSERT(expr) if (!(expr)) DBGBREAK()
#define DEBUG_ASSERT_INFO(expr, info) if (!(expr)) {printf(info); DBGBREAK()}
#else
#define DEBUG_ASSERT(expr)
#endif

// This will output the proper CUDA error strings in the event that a CUDA host call returns an error
#define checkCudaErrors(err) __checkCudaErrors(err, __FILE__, __LINE__)
inline void __checkCudaErrors(CUresult err, const char *file, const int line)
{
	if (CUDA_SUCCESS != err) {
		const char *errorStr = NULL;
		cuGetErrorString(err, &errorStr);
		printf("checkCudaErrors() Driver API error = %04d \"%s\" from file <%s>, line %i.\n", err, errorStr, file, line);
		exit(EXIT_FAILURE);
	}
} // __checkCudaErrors

template <typename T> void check_cuda(T result, char const *const func, const char *const file, int const line) {
	if (result) {
		printf("CUDA error at %s:%d code=%d \"%s\" \n", file, line, static_cast<unsigned int>(result), func);
		exit(EXIT_FAILURE);
	}
} // check_cuda
#define checkCUDAErrors(val) check_cuda((val), #val, __FILE__, __LINE__)
#define CUDA_CHECK checkCUDAErrors
#define CU_CHECK checkCUDAErrors

template <typename T> void check_opengl(T result, char const *const func, const char *const file, int const line) {
	if (result) {
		printf("OpenGL error at %s:%d code=%d \"%s\" \n", file, line, static_cast<unsigned int>(result), func);
		exit(EXIT_FAILURE);
	}
} // check_opengl
#define checkGLErrors(call) do {call; GLenum err = glGetError(); check_opengl(err, #call, __FILE__, __LINE__);} while (0);
#define checkGLGetError() do {GLenum err = glGetError(); check_opengl(err, "glGetError()", __FILE__, __LINE__);} while (0);
#define GL_CHECK checkGLErrors
#define GL_CHECK_ERRORS checkGLGetError
