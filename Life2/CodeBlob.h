#pragma once
#include <string>
#include "GLDisplay.h"
#include "CUDADefines.h"
#include <vector>

class CodeBlob {
public:
	std::vector<std::string> m_options;
	std::string m_name;
	std::string m_code;
	std::string m_ptx;
	CUmodule m_module = nullptr;
	dim3 m_blockSize;
	dim3 m_gridSize;

	void Clear(void);
	void StandardOptions(void);
	void Add(void);
	void Add(CodeBlob &codeBlob);
	void Add(const std::string format, ...);
	void Include(const std::string &path);
	void IncludeDir(const std::string &dir);
	void Option(const std::string &option);
	bool Compile(void);
	void BlockSize(dim3 blockSize);
	void BlockSize(unsigned int x = 1, unsigned int y = 1, unsigned int z = 1);
	void GridSize(dim3 blockSize);
	void GridSize(unsigned int x = 1, unsigned int y = 1, unsigned int z = 1);
	CUfunction Function(const std::string function);
	bool Launch(CUfunction function, void **arguments = nullptr, bool syncronize = true);
	bool Launch(const std::string &function, void *a0 = nullptr, void *a1 = nullptr, void *a2 = nullptr, void *a3 = nullptr, void *a4 = nullptr, void *a5 = nullptr, void *a6 = nullptr, void *a7 = nullptr, void *a8 = nullptr, void *a9 = nullptr);
	bool LaunchAsync(const std::string &function, void *a0 = nullptr, void *a1 = nullptr, void *a2 = nullptr, void *a3 = nullptr, void *a4 = nullptr, void *a5 = nullptr, void *a6 = nullptr, void *a7 = nullptr, void *a8 = nullptr, void *a9 = nullptr);

	virtual bool DrawFrame(GLDisplay &gl_display, unsigned int width, unsigned int height, char *status, size_t statusSize);

	CodeBlob(void);
	virtual ~CodeBlob(void);
}; // CodeBlob
