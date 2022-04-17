#pragma once
#include "FireStarterProcess.h"
#include "CUDADefines.h"

class FireMaker : public SerialThread {
public:
	FireStarterProcess m_process;
	CUdevice m_device;
	CUcontext m_compileContext;
	CUstream m_compileStream;
	std::string m_pipeName;

	void CompileInit(void);
	void CompileQuit(void);
	void CompileCode(const std::string& code, std::string& ptx);
	bool Init();
	void Quit(void);
	FireMaker(const std::string& pipeName, bool *terminate);
	~FireMaker(void);
}; // class FireMaker