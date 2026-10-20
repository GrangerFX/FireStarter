#pragma once

#define FIRESTARTER_TENSOR 1

#include "CodeBlob.h"
#if FIRESTARTER_TENSOR
#include "FireStarterTensor.h"
#else
#include "FireStarterCUDA.h"
#endif

#define SMART_EVOLVE_AGE 10

class FireStarter : public CodeBlob {
public:
	typedef std::vector<FireStarterState> FireStarterStates;

	GLBuffer m_frameBuffer;
	FireStarterResults *results;
	FireStarterResults *results1;
	FireStarterStates states;
	FireStarterState curState;
	FireStarterState bestState;
	long long generation;
	long long lastGeneration;
	long long bestGeneration;

	bool GetResults(void);
	bool GetResults1(void);
	void InitResults(void);
	void InitResults1(void);
	void FreeResults(void);
	void FreeResults1(void);
	void InitProgram(void);
	void RandomProgram(void);
	void Generate(FireStarterState &curState, FireStarterState &bestState);
	void RunProgram(unsigned int population, unsigned int maxResults);
	void RunProgram1(unsigned int population, unsigned int maxResults);
	void DrawGraph(void);
	void DrawGraph1(void);

public:
	bool DrawFrame(GLDisplay &gl_display, unsigned int width, unsigned int height, char *status, size_t statusSize) final;
	FireStarter(void);
	~FireStarter(void);
}; // class FireStarter