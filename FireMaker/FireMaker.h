#pragma once
#include "FireStarterProcess.h"
#include "CUDAContext.h"

class FireMaker : public SerialThread {
public:
	CUDAContext* m_context = nullptr;
	FireStarterProcess m_process;
	std::string m_pipeName;

	void CompileInit(void);
	void CompileQuit(void);
	void CompileCode(const std::string& code, std::string& ptx);
	bool Init();
	void Quit(void);
	FireMaker(const std::string& pipeName, bool *terminate);
	~FireMaker(void);
}; // class FireMaker