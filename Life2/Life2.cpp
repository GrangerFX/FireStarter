//
//  Life2.cpp
//  Life2
//
//  Created by Mark Granger on 7/30/17.
//  Copyright © 2017 GrangerFX. All rights reserved.
//

#include "Life2.h"
#include "Life2CUDA.h"
#include "SimpleTimer.h"
#include <vector>

#define DRAW_STEPS 100
#define DEBUG_GPU_LIFE 0

class LifeView {
private:
	CodeBlob *m_codeBlob = nullptr;
	Grid *m_grid0 = nullptr;
	Grid *m_grid1 = nullptr;
	Grid *m_grid = nullptr;
	Grid *m_oldGrid = nullptr;

public:
	MonsterManager *m_CPUMonsters = nullptr;
	MonsterManager *m_GPUMonsters = nullptr;

	void SwapGrids(void)
	{
		Grid *temp = m_oldGrid;
		m_oldGrid = m_grid;
		m_grid = temp;
	} // SwapGrids

	void GrowLife(void)
	{
#if GPU_LIFE
		m_codeBlob->BlockSize(CUDA_WARP_SIZE);
		m_codeBlob->GridSize((GRID_SIZE * GRID_SIZE + (CUDA_WARP_SIZE - 1)) / CUDA_WARP_SIZE);
		m_codeBlob->Launch("GrowLife", &m_grid, &m_oldGrid);
#else
		Life::Grow(m_grid, m_oldGrid);
#endif
	} // GrowLife

	void StepMonsters(void)
	{
#if GPU_LIFE
		m_codeBlob->BlockSize(CUDA_WARP_SIZE);
		m_codeBlob->GridSize((COUNT_MAX + (CUDA_WARP_SIZE - 1)) / CUDA_WARP_SIZE);
		m_codeBlob->Launch("StepMonster", &m_GPUMonsters, &m_grid, &m_oldGrid);
#else
		m_CPUMonsters->StepMonsters(m_grid, m_oldGrid);
#endif
	} // StepMonsters

	void DrawFrame(pixel_display::Buffer &buffer)
	{
#if GPU_LIFE
		// Driver launches use the legacy default stream. Map/unmap on that stream too.
		auto mapping = buffer.MapCuda(cudaStreamLegacy);
		auto pixels = mapping.Pixels();
		m_codeBlob->BlockSize(CUDA_WARP_SIZE);
		m_codeBlob->GridSize((GRID_SIZE * GRID_SIZE + (CUDA_WARP_SIZE - 1)) / CUDA_WARP_SIZE);
		m_codeBlob->Launch("DrawFrame", &m_GPUMonsters, &m_grid, &pixels);
#else
		auto mapping = buffer.MapCpu();
		m_CPUMonsters->DrawFrame(m_grid, mapping.Pixels());
#endif
		mapping.Close();
	} // DrawFrame

	LifeView(CodeBlob *codeBlob) : m_codeBlob(codeBlob)
	{
#if GPU_LIFE
		CUDA_CHECK(cudaMalloc(&m_grid0, sizeof(Grid)));
		CUDA_CHECK(cudaMalloc(&m_grid1, sizeof(Grid)));
		m_codeBlob->BlockSize(CUDA_WARP_SIZE);
		m_codeBlob->GridSize((GRID_SIZE * GRID_SIZE + (CUDA_WARP_SIZE - 1)) / CUDA_WARP_SIZE);
		m_codeBlob->Launch("RandomLife", &m_grid0);
		m_codeBlob->Launch("EraseLife", &m_grid1);
#else
		m_grid0 = new Grid();
		m_grid1 = new Grid();
		Life::Random(m_grid0);
#endif
		m_grid = m_grid0;
		m_oldGrid = m_grid1;

#if GPU_LIFE
		CUDA_CHECK(cudaMalloc(&m_GPUMonsters, sizeof(MonsterManager)));
		m_codeBlob->BlockSize(CUDA_WARP_SIZE);
		m_codeBlob->GridSize((COUNT_MAX + (CUDA_WARP_SIZE - 1)) / CUDA_WARP_SIZE);
		m_codeBlob->Launch("CreateMonster", &m_GPUMonsters, &m_grid);
#if DEBUG_GPU_LIFE
		m_CPUMonsters = new MonsterManager();
#endif
#else
		m_CPUMonsters = new MonsterManager();
		m_CPUMonsters->CreateMonsters(m_grid);
#endif
	} // LifeView

	~LifeView(void)
	{
#if GPU_LIFE
		CUDA_CHECK(cudaFree(m_GPUMonsters));
#endif
		delete m_CPUMonsters;
#if GPU_LIFE
		CUDA_CHECK(cudaFree(m_grid0));
		CUDA_CHECK(cudaFree(m_grid1));
#else
		delete m_grid0;
		delete m_grid1;
#endif
	} // ~LifeView
}; // LifeView

void Life2::Generate(void)
{
	StandardOptions();
	// Runtime kernel headers travel with the executable, independent of the working directory.
	char executablePath[32768] = {};
	DWORD length = GetModuleFileNameA(nullptr, executablePath, sizeof(executablePath));
	if (!length || length >= sizeof(executablePath))
		exit(EXIT_FAILURE);
	std::string directory(executablePath, length);
	directory.erase(directory.find_last_of("\\/"));
	IncludeDir(directory + "/kernels");
	Include("Life2CUDA.h");
} // Generate

bool Life2::DrawFrame(GLDisplay &gl_display, unsigned int width, unsigned int height, char *status, size_t statusSize)
{
	static SimpleTimer timer;

	for (int i = 0; i < DRAW_STEPS; i++) {
		m_lifeView->SwapGrids();
		m_lifeView->GrowLife();
		m_lifeView->StepMonsters();
		m_generation++;
#if DEBUG_GPU_LIFE
		if (!(m_generation & 15))
			cudaMemcpy(m_CPUMonsters, m_GPUMonsters, sizeof(MonsterManager), cudaMemcpyDeviceToHost);
#endif
	}
	m_lifeView->DrawFrame(m_frameBuffer);
	gl_display.Display(m_frameBuffer);
#if GPU_LIFE
	sprintf_s(status, statusSize, "Life2: %lld  Generation time: %.6f", m_generation, timer.Duration() / m_generation);
#else
#if COUNT_MONSTERS
#if COUNT_SPECIES
	sprintf_s(status, statusSize, "Life2: %lld  Species:%d  Live=%d  Extinct=%d  Live=%d  Dead=%d", m_generation, m_lifeView->m_monsters->m_numSpecies, m_lifeView->m_monsters->m_liveSpecies, m_lifeView->m_monsters->m_extinctSpecies, m_lifeView->m_monsters->m_live, m_lifeView->m_monsters->m_dead);
#else
	sprintf_s(status, statusSize, "Life2: %lld  Live=%d  Dead=%d", m_generation, m_lifeView->m_monsters->m_live, m_lifeView->m_monsters->m_dead);
#endif
#else
#if COUNT_SPECIES
	sprintf_s(status, statusSize, "Life2: %lld  Species:%d  Live=%d  Extinct=%d", m_generation, m_lifeView->m_monsters->m_numSpecies, m_lifeView->m_monsters->m_liveSpecies, m_lifeView->m_monsters->m_extinctSpecies);
#else
	sprintf_s(status, statusSize, "Life2: %lld", m_generation);
#endif
#endif
#endif
	return true;
} // DrawFrame

Life2::Life2(void)
{
#if GPU_LIFE
	// The display library does not choose a CUDA device for its caller. Select
	// the GPU owning this OpenGL context before initializing the simulator.
	unsigned int deviceCount = 0;
	int device = 0;
	CUDA_CHECK(cudaGLGetDevices(&deviceCount, &device, 1, cudaGLDeviceListAll));
	if (!deviceCount)
		throw std::runtime_error("Life2: no CUDA device for the OpenGL context");
	CUDA_CHECK(cudaSetDevice(device));
#endif
	m_frameBuffer.Resize(GRID_SIZE, GRID_SIZE);
#if GPU_LIFE
	Generate();
	Compile();
#endif
	m_lifeView = new LifeView(this);
	m_generation = 0;
} // Life2

Life2::~Life2(void)
{
	delete m_lifeView;
} // ~Life2

