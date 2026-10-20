#include "FireStarter.h"
#include "SimpleTimer.h"

#define MAX_RESULTS 16384
#define START_RESULT 10.0f

#if FIRESTARTER_TENSOR
void FireStarter::Generate(FireStarterState& curState, FireStarterState& bestState)
{
	StandardOptions();
	Option("-arch");
	Option("compute_60");
	Include("FireStarterTensor.h");
} // Generate
#else
void FireStarter::Generate(FireStarterState &curState, FireStarterState &bestState)
{
	StandardOptions();
	Option("-arch");
	Option("compute_60");
	Include("FireStarterCUDA.h");

	Add("__device__ float Evaluate(const FireStarterData &workData, float r)");
	Add("{");
	Add("    FireStarterData data(workData);");
	Add("    data[0] += r;");
	for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
		const FireStarterInstruction &instruction = curState.instructions[i];
		Add("    data[%d] = data[%d] + data[%d] * data[%d];", instruction.a, instruction.b, instruction.c, instruction.d);
	}
	Add("    r = data[%d];", curState.instructions[PROGRAM_INSTRUCTIONS - 1].a);
	Add("    return isnan(r) ? 0.0f : r;");
	Add("} // Evaluate");
	Add("\n");
	Add("__device__ float BestEvaluate(const FireStarterData &workData, float r)");
	Add("{");
	Add("    FireStarterData data(workData);");
	Add("    data[0] += r;");
	for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
		const FireStarterInstruction &instruction = bestState.instructions[i];
		Add("    data[%d] = data[%d] + data[%d] * data[%d];", instruction.a, instruction.b, instruction.c, instruction.d);
	}
	Add("    r = data[%d];", bestState.instructions[PROGRAM_INSTRUCTIONS - 1].a);
	Add("    return isnan(r) ? 0.0f : r;");
	Add("} // BestEvaluate");
	Add();
} // Generate
#endif

bool FireStarter::GetResults(void)
{
	if (results->numResults) {
		unsigned int numResults = results->numResults;
		if (numResults > MAX_RESULTS)
			numResults = MAX_RESULTS;
		unsigned int index = 0;
		float result = results->results[0].result;
		unsigned int member = results->results[0].member;
		for (unsigned int i = 1; i < numResults; i++) {
			float curResult = results->results[i].result;
			unsigned int curMember = results->results[i].member;
			if ((curResult < result) || ((curResult == result) && (curMember < member))) {
				result = curResult;
				member = curMember;
				index = i;
			}
		}

		results->bestData = results->results[index].data;
		results->curResult = result;
		if (result < curState.result) {
			curState.data = results->bestData;
			curState.result = result;
			lastGeneration = generation;
			states.push_back(curState);
			if (result < bestState.result)
				return true;
		}
	}
	return false;
} // GetResults

bool FireStarter::GetResults1(void)
{
	if (results1->numResults) {
		unsigned int numResults = results1->numResults;
		if (numResults > MAX_RESULTS)
			numResults = MAX_RESULTS;
		unsigned int index = 0;
		float result = results1->results[0].result;
		unsigned int member = results1->results[0].member;
		for (unsigned int i = 1; i < numResults; i++) {
			float curResult = results1->results[i].result;
			unsigned int curMember = results1->results[i].member;
			if ((curResult < result) || ((curResult == result) && (curMember < member))) {
				result = curResult;
				member = curMember;
				index = i;
			}
		}

		results1->bestData = results1->results[index].data;
		results1->curResult = result;
	}
	return false;
} // GetResults1

void FireStarter::InitResults(void)
{
	unsigned int resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (MAX_RESULTS - 1);
	checkCUDAErrors(cudaMallocManaged(&results, resultsSize));
	checkCUDAErrors(cudaMemset(results, 0, resultsSize));
} // InitResults

void FireStarter::InitResults1(void)
{
	unsigned int resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (MAX_RESULTS - 1);
	checkCUDAErrors(cudaMallocManaged(&results1, resultsSize));
	checkCUDAErrors(cudaMemset(results1, 0, resultsSize));
} // InitResults1

void FireStarter::FreeResults(void)
{
	if (results) {
		checkCUDAErrors(cudaFree(results));
		results = NULL;
	}
} // FreeResults

void FireStarter::FreeResults1(void)
{
	if (results1) {
		checkCUDAErrors(cudaFree(results1));
		results1 = NULL;
	}
} // FreeResults1

void FireStarter::InitProgram(void)
{
	unsigned int seed = RANDOM((unsigned int)generation) + 1;
	for (int i = 0; i < PROGRAM_DATA; i++)
		curState.data[i] = PROGRAM_DATA_DEFAULT;
#if PROGRAM_INSTRUCTIONS
	for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
		curState.instructions[i].a = RANDOMSEED(seed) % PROGRAM_DATA;
		curState.instructions[i].b = RANDOMSEED(seed) % PROGRAM_DATA;
		curState.instructions[i].c = RANDOMSEED(seed) % PROGRAM_DATA;
		curState.instructions[i].d = RANDOMSEED(seed) % PROGRAM_DATA;
	}
#endif
	curState.result = START_RESULT;
	states.push_back(curState);
	bestState = curState;
#if !PROGRAM_INSTRUCTIONS
	Clear();
	Generate(curState, bestState);
	Compile();
#endif
} // InitProgram

void FireStarter::RandomProgram(void)
{
	unsigned int seed = (unsigned int)generation;
	seed = RANDOM(seed) + 1;
	int state = (unsigned int)states.size() - 1;
	int numChanges = 1;
	long long bestAge = generation - bestGeneration;
	long long lastAge = generation - lastGeneration;
	if (lastAge > SMART_EVOLVE_AGE)
		numChanges++;
	if (lastAge > SMART_EVOLVE_AGE * SMART_EVOLVE_AGE)
		numChanges++;
	if (state && (lastAge > SMART_DEVOLVE_AGE)) {
		states.pop_back();
		state--;
		lastGeneration = generation;
	}
	curState = states[state];
#if PROGRAM_INSTRUCTIONS
	while (numChanges--) {
		unsigned int i = RANDOMSEED(seed) % PROGRAM_INSTRUCTIONS;
#if 1
		curState.instructions[i].a = RANDOMSEED(seed) % PROGRAM_DATA;
		curState.instructions[i].b = RANDOMSEED(seed) % PROGRAM_DATA;
		curState.instructions[i].c = RANDOMSEED(seed) % PROGRAM_DATA;
		curState.instructions[i].d = RANDOMSEED(seed) % PROGRAM_DATA;
#else
		unsigned int j = RANDOMSEED(seed) % 4;
		switch (j) {
		case 0:
			curState.instructions[i].a = RANDOMSEED(seed) % PROGRAM_DATA;
			break;
		case 1:
			curState.instructions[i].b = RANDOMSEED(seed) % PROGRAM_DATA;
			break;
		case 2:
			curState.instructions[i].c = RANDOMSEED(seed) % PROGRAM_DATA;
			break;
		case 3:
			curState.instructions[i].d = RANDOMSEED(seed) % PROGRAM_DATA;
			break;
		}
#endif
	}
#endif
	generation++;
} // RandomProgram

void FireStarter::RunProgram(unsigned int population, unsigned int maxResults)
{
	unsigned int variation = 0;

	for (int i = 0; i < PROGRAM_DATA; i++)
		results->bestData[i] = PROGRAM_DATA_DEFAULT;
	results->minResult = curState.result;
	results->curResult = results->startResult = START_RESULT;
	results->numResults = 0;


	// Launch the calculation kernel
	int threadsPerBlock = PROGRAM_BLOCK_THREADS;
	int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
	BlockSize(PROGRAM_BLOCK_SIZE);
	GridSize(blocksPerGrid);

#if PROGRAM_INSTRUCTIONS
	Launch("FireExecute", &curState.instructions, &results, &maxResults, &population, &generation, &variation);
#else
	Launch("FireExecute", &results, &maxResults, &population, &generation, &variation);
#endif
} // RunProgram

void FireStarter::RunProgram1(unsigned int population, unsigned int maxResults)
{
	unsigned int variation = 1;

	for (int i = 0; i < PROGRAM_DATA; i++)
		results1->bestData[i] = 1.0f;
	results1->minResult = results1->curResult;
	results1->curResult = results1->startResult = START_RESULT;
	results1->numResults = 0;

	// Launch the calculation kernel
	int threadsPerBlock = PROGRAM_BLOCK_THREADS;
	int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
	BlockSize(threadsPerBlock);
	GridSize(blocksPerGrid);

#if PROGRAM_INSTRUCTIONS
	Launch("FireExecute", &bestState.instructions, &results1, &maxResults, &population, &generation, &variation);
#else
	Launch("FireExecute", &results1, &maxResults, &population, &generation, &variation);
#endif
} // RunProgram1

void FireStarter::DrawGraph(void)
{
	// Launch the display kernel
	int threadsPerBlock = CUDA_WARP_SIZE;
	int blocksPerGrid = (m_frameBuffer.Width() + threadsPerBlock - 1) / threadsPerBlock;
	BlockSize(threadsPerBlock);
	GridSize(blocksPerGrid);

	FireStarterData bestResults = results->bestData;
#if PROGRAM_INSTRUCTIONS
	Launch("FireShow", &curState.instructions, &bestState.instructions, &bestResults, &bestState.data, &m_frameBuffer.Pixels(), &m_frameBuffer.Width(), &m_frameBuffer.Height());
#else
	Launch("FireShow", &bestResults, &bestState.data, &m_frameBuffer.Pixels(), &m_frameBuffer.Width(), &m_frameBuffer.Height());
#endif
} // DrawGraph

void FireStarter::DrawGraph1(void)
{
	// Launch the display kernel
	int threadsPerBlock = CUDA_WARP_SIZE;
	int blocksPerGrid = (m_frameBuffer.Width() + threadsPerBlock - 1) / threadsPerBlock;
	BlockSize(threadsPerBlock);
	GridSize(blocksPerGrid);

	FireStarterData bestResults = results1->bestData;
#if PROGRAM_INSTRUCTIONS
	Launch("FireShow1", &bestState.instructions, &bestResults, &m_frameBuffer.Pixels(), &m_frameBuffer.Width(), &m_frameBuffer.Height());
#else
	Launch("FireShow1", &bestResults, &m_frameBuffer.Pixels(), &m_frameBuffer.Width(), &m_frameBuffer.Height());
#endif
} // DrawGraph1

bool FireStarter::DrawFrame(GLDisplay &gl_display, unsigned int width, unsigned int height, char *status, size_t statusSize)
{
	m_frameBuffer.Resize(width, height);

	bool update = false;
	SimpleTimer timer;
	if (bestState.result >= 1.0E-6f) {
#if PROGRAM_INSTRUCTIONS
		RandomProgram();
		Clear();
		Generate(curState, bestState);
		Compile();
#endif
		RunProgram(PROGRAM_POPULATION, MAX_RESULTS);
		update = GetResults();
	}

	if (results->numResults) {
		m_frameBuffer.Erase();
		DrawGraph();
		DrawGraph1();
		if (update) {
			RunProgram1(PROGRAM_POPULATION, MAX_RESULTS);
			GetResults1();
			bestState = curState;
			bestGeneration = generation;
		}
		double time = timer.Duration();

		// Display the render buffer in the current OpenGL context. Any thead.
		gl_display.Display(m_frameBuffer);

		sprintf_s(status, statusSize, "FireStarter: Generation=%lld  States=%lld  Age=%lld  Error=%f  Best Age %lld  Best=%f  Time=%.4f Seconds", generation, states.size(), generation - lastGeneration, curState.result, generation - bestGeneration, bestState.result, time);
		return true;
	}
	return false;
} // DrawFrame

FireStarter::FireStarter(void)
{
	results = NULL;
	results1 = NULL;
	generation = 0;
	lastGeneration = 0;
	bestGeneration = 0;
	InitResults();
	InitResults1();
	InitProgram();
} // FireStarter

FireStarter::~FireStarter(void)
{
	FreeResults();
	FreeResults1();
} // ~FireStarter
