#pragma once
#include "CUDADefines.h"
#include "PrintF.h"
#include "Format.h"
#include <nvrtc.h>

template <typename T> bool __check_cuda_errors(T result, char const* const func, const char* const file, int const line) {
	if (result) {
		const char* errorName = nullptr;
		const char* errorString = nullptr;
		if ((cuGetErrorName((CUresult)result, &errorName) != CUDA_SUCCESS) || (cuGetErrorString((CUresult)result, &errorString) != CUDA_SUCCESS)) {
			cuGetErrorName((CUresult)result, &errorName);
			cuGetErrorString((CUresult)result, &errorString);
		}
		printf("CUDA error at %s:%d code=%d: \"%s\": \"%s\" \"%s\"\n", file, line, static_cast<unsigned int>(result), errorName, errorString, func);
		std::terminate();
        return false;
	}
    return true;
}
#define checkCUDAErrors(val) __check_cuda_errors((val), #val, __FILE__, __LINE__)

template <typename T> bool __log_cuda_errors(std::string &log, T result, char const* const func, const char* const file, int const line) {
	if (result) {
		const char* errorName = nullptr;
		const char* errorString = nullptr;
		if ((cuGetErrorName((CUresult)result, &errorName) != CUDA_SUCCESS) || (cuGetErrorString((CUresult)result, &errorString) != CUDA_SUCCESS)) {
            cuGetErrorName((CUresult)result, &errorName);
            cuGetErrorString((CUresult)result, &errorString);
        }
		log += Format("CUDA error at %s:%d code=%d: \"%s\": \"%s\" \"%s\"\n", file, line, static_cast<unsigned int>(result), errorName, errorString, func);
		return false;
	}
	return true;
}
#define logCUDAErrors(log, val) __log_cuda_errors(log, (val), #val, __FILE__, __LINE__)

template <typename T> void __check_nvrtc_errors(T result, char const* const func, const char* const file, int const line) {
	if (result) {
		const char* errorString = nvrtcGetErrorString((nvrtcResult)result);
		printf("NVRTC error at %s:%d code=%d: \"%s\" \"%s\"\n", file, line, static_cast<unsigned int>(result), errorString, func);
		std::terminate();
	}
}
#define checkNVRTCErrors(val) __check_nvrtc_errors((val), #val, __FILE__, __LINE__)

template <typename T> bool __log_nvrtc_errors(std::string& log, T result, char const* const func, const char* const file, int const line) {
	if (result) {
		const char* errorString = nvrtcGetErrorString((nvrtcResult)result);
		log += Format("NVRTC error at %s:%d code=%d: \"%s\" \"%s\"\n", file, line, static_cast<unsigned int>(result), errorString, func);
		return false;
	}
	return true;
}
#define logNVRTCErrors(log, val) __log_nvrtc_errors(log, (val), #val, __FILE__, __LINE__)
