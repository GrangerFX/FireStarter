#pragma once
#include "CUDADefines.h"
#include "PrintF.h"

template <typename T> void __check_cuda_errors(T result, char const* const func, const char* const file, int const line) {
	if (result) {
		const char* errorName = nullptr;
		const char* errorString = nullptr;
		if ((cuGetErrorName((CUresult)result, &errorName) != CUDA_SUCCESS) || (cuGetErrorString((CUresult)result, &errorString) != CUDA_SUCCESS)) {
			errorName = cudaGetErrorName((cudaError_t)result);
			errorString = cudaGetErrorString((cudaError_t)result);
		}
		printf("CUDA error at %s:%d code=%d: \"%s\": \"%s\" \"%s\"\n", file, line, static_cast<unsigned int>(result), errorName, errorString, func);
		exit(EXIT_FAILURE);
	}
}
#define checkCUDAErrors(val) __check_cuda_errors((val), #val, __FILE__, __LINE__)

template <typename T> void __check_nvrtc_errors(T result, char const* const func, const char* const file, int const line) {
	if (result) {
		const char* errorString = nvrtcGetErrorString((nvrtcResult)result);
		printf("NVRTC error at %s:%d code=%d: \"%s\" \"%s\"\n", file, line, static_cast<unsigned int>(result), errorString, func);
		exit(EXIT_FAILURE);
	}
}
#define checkNVRTCErrors(val) __check_nvrtc_errors((val), #val, __FILE__, __LINE__)
