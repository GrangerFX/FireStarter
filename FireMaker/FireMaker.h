#pragma once
#include "SerialThread.h"
#include "CUDADefines.h"

class FireMaker : public SerialThread {
public:
	CUdevice m_device;
	CUcontext m_compileContext;
	CUstream m_compileStream;

	void CompileInit(void);
	void CompileQuit(void);
	void CompileCode(const std::string& code, std::string& ptx);
	bool Init(void* window, unsigned int width, unsigned int height);
	void Quit(void);
	FireMaker(void);
	~FireMaker(void);
}; // class FireMaker