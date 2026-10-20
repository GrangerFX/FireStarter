#pragma once

#include "CUDADefines.h"
#include "PixelDisplay.h"

#define GPU_LIFE 1

#define GRID_SIZE 2048	// Must be a power of 2
#define GRID_LIFE -2
#define GRID_DEAD -1

inline void Direction(unsigned int direction, unsigned int& x, unsigned int& y)
{
	const int xd[8] = { -1,  0,  1,  1,  1,  0, -1, -1 };
	const int yd[8] = { -1, -1, -1,  0,  1,  1,  1,  0 };
	x = (x + xd[direction]) & (GRID_SIZE - 1);
	y = (y + yd[direction]) & (GRID_SIZE - 1);
} // Direction

class Grid {
private:
	int m_gridData[GRID_SIZE][GRID_SIZE];

public:
	inline int& Value(unsigned int x, unsigned int y)
	{
		x &= GRID_SIZE - 1;
		y &= GRID_SIZE - 1;
		return m_gridData[y][x];
	} // Value

	inline int Value(unsigned int x, unsigned int y) const
	{
		x &= GRID_SIZE - 1;
		y &= GRID_SIZE - 1;
		return m_gridData[y][x];
	} // Value

	inline void Erase(int n = GRID_DEAD)
	{
		for (unsigned int y = 0; y < GRID_SIZE; y++)
			for (unsigned int x = 0; x < GRID_SIZE; x++)
				m_gridData[y][x] = n;
	} // Erase

	inline Grid(void)
	{
		Erase();
	} // Grid
}; // Grid

class Life {
public:
	static inline void Random(Grid *grid, unsigned int x, unsigned int y, unsigned int seed)
	{
		grid->Value(x, y) = RANDOMMOD(seed, 3) ? GRID_DEAD : GRID_LIFE;
	} // Random

	static inline void Random(Grid *grid, unsigned int seed = 0)
	{
		for (int y = 0; y < GRID_SIZE; y++)
			for (int x = 0; x < GRID_SIZE; x++)
				Random(grid, x, y, seed++);
	} // RandomGrid

	static inline void Grow(Grid *grid, const Grid *oldGrid, unsigned int xi, unsigned int yi)
	{
		int result;
		int g = oldGrid->Value(xi, yi);
		if (g >= 0)
			result = g; // Treat a monster as dead life for the purpose of life simulation.
		else {
			int adjacent = 0;
			for (int d = 0; d < 8; d++) {
				unsigned int x = xi;
				unsigned int y = yi;
				Direction(d, x, y);
				int gi = oldGrid->Value(x, y);
				if (gi != GRID_DEAD) // Can be life or monster.
					adjacent++;
			}
			switch (adjacent) {
				default:
					result = GRID_DEAD;
					break;
				case 2:
					result = g;
					break;
				case 3:
					result = GRID_LIFE;
					break;
			}
		}
		grid->Value(xi, yi) = result;
	} // Grow

	static inline void Grow(Grid *grid, Grid *oldGrid)
	{
		for (unsigned int yi = 0; yi < GRID_SIZE; yi++)
			for (unsigned int xi = 0; xi < GRID_SIZE; xi++)
				Grow(grid, oldGrid, xi, yi);
	} // Grow
}; // class Life

#define EVOLVE_MONSTERS 1
#define FIGHT_CLUB      2

// Design values: These the neurons used by the simulation algorithm.
// 0..7 = neighbor cell senses
#define NEURON_ENERGY   8
#define NEURON_MOTOR_X  9
#define NEURON_MOTOR_Y  10
#define NEURON_COUNT    32

// Simulation values: Modified manually before running simulation.
#define COUNT_MIN       640
#define COUNT_MAX       20000
#define STEP_ENERGY     0.001f
#define MOVE_ENERGY     0.4f
#define LIFE_ENERGY     2.0f
#define EAT_ENERGY      1.0f
#define DIE_ENERGY      0.0f
#define DEAD_ENERGY     -1.0e+6f

// Evolved values: These could be adjusted randomly and affect species survival.
#define SPLIT_ENERGY    2.0f
#define BIRTH_ENERGY    1.0f
#define CHILD_ENERGY    1.0f

class MonsterManager {
private:
	class Monster {
	public:

		class Mind {
		public:
			float m_neurons[NEURON_COUNT];
			float m_synapses[NEURON_COUNT][NEURON_COUNT];
			unsigned long long m_iteration;

			inline void Think(void)
			{
				float oldNeurons[NEURON_COUNT];
				memcpy(oldNeurons, m_neurons, sizeof(m_neurons));
				for (unsigned int n = NEURON_MOTOR_X; n < NEURON_COUNT; n++) {
					float neuron = m_neurons[n];
					float sum = 0.0f;
					for (unsigned int s = 0; s < NEURON_COUNT; s++)
						sum += oldNeurons[s] * m_synapses[n][s];
					m_neurons[n] = sum;
				}
			} // Think

			inline void Evolve(unsigned int &seed)
			{
				unsigned int c = RANDOMMOD(seed, 4);
				for (unsigned int i = 0; i < c; i++) {
					unsigned int n = RANDOMMOD(seed, NEURON_COUNT);
					unsigned int s = RANDOMMOD(seed, NEURON_COUNT);
					m_synapses[n][s] += (RANDOMNUM(seed) * 2.0f - 1.0f) / NEURON_COUNT;
				}
			} // Evolve

			inline void Random(unsigned int seed)
			{
				for (int n = 0; n < NEURON_COUNT; n++) {
					m_neurons[n] = RANDOMNUM(seed) * 2.0f - 1.0f;
					for (int s = 0; s < NEURON_COUNT; s++)
						m_synapses[n][s] = (RANDOMNUM(seed) * 2.0f - 1.0f) / NEURON_COUNT;
				}
			} // Random

			inline Mind(void)
			{
				m_iteration = 0;
			} // Mind
		}; // class Mind

		Mind m_mind;
		unsigned int m_generation;
		float m_energy;
		float m_x, m_y;
		unsigned int m_xi, m_yi;
		unsigned int m_seed;
		unsigned int m_parent;
		unsigned int m_lock;

		inline bool TryLock(void)
		{
#ifdef __CUDACC__
			return atomicCAS(&m_lock, 0u, 1u) == 0u;
#else
			if (m_lock) return false;
			m_lock = 1;
			return true;
#endif
		}

		inline void Unlock(void)
		{
#ifdef __CUDACC__
			__threadfence();
			atomicExch(&m_lock, 0u);
#else
			m_lock = 0;
#endif
		}

		inline bool Init(unsigned int x, unsigned int y, unsigned int generation, unsigned int seed, unsigned int parent = (unsigned int)-1)
		{
			if (!m_generation) {
				m_generation = generation;
				m_parent = parent;
				if (m_parent == parent) {
					m_generation = generation;
					m_x = x + 0.5f;
					m_y = y + 0.5f;
					m_xi = x;
					m_yi = y;
					m_energy = CHILD_ENERGY;
					if (generation == 1)
						m_mind.Random(RANDOMSEED(seed));
					m_seed = seed;
					return (m_parent == parent);
				}
			}
			return false;
		} // Init

		inline Monster(void)
		{
			m_lock = 0;
			m_parent = (unsigned int)-1;
			m_generation = 0;
			m_energy = DEAD_ENERGY;
			m_x = 0.0f;
			m_y = 0.0f;
			m_xi = 0;
			m_yi = 0;
			m_seed = 0;
		} // Monster
	}; // class Monster

	Monster m_monsters[COUNT_MAX];

	inline int GetMonsterIndex(Monster *monster)
	{
		return (int)(monster - m_monsters);
	} // GetMonsterIndex

	inline Monster* GetMonster(unsigned int index)
	{
		return &m_monsters[index];
	} // GetMonster

	inline void SenseMonster(const Grid *grid, Monster *monster)
	{
		unsigned int sense = 0;
		for (unsigned int direction = 0; direction < 8; direction++) {
			unsigned int x = monster->m_xi;
			unsigned int y = monster->m_yi;

			Direction(direction, x, y);
			int g = grid->Value(x, y);
			float energy;
#if FIGHT_CLUB
			if (g >= 0)
#if FIGHT_CLUB == 1
				energy = -1.0f;
#else
				energy = MAX(GetMonster(g)->m_energy, 0.0f);
#endif
			else
#endif
				energy = g == GRID_LIFE ? 1.0f : 0.0f;
            monster->m_mind.m_neurons[direction] = energy;
		}
		monster->m_mind.m_neurons[NEURON_ENERGY] = monster->m_energy;
	} // SenseMonster

	inline void KillMonster(Monster *monster)
	{
		monster->m_energy = DEAD_ENERGY;
		monster->m_xi = 0;
		monster->m_yi = 0;
		monster->m_x = 0.0f;
		monster->m_y = 0.0f;
		monster->m_generation = 0;	// Must go last!
	} // KillMonster

	inline void SplitMonster(Grid *grid, Monster *monster)
	{
		unsigned int seed = monster->m_seed;
		unsigned int direction = RANDOMMOD(seed, 7);
		unsigned int x = monster->m_xi;
		unsigned int y = monster->m_yi;
		Direction(direction, x, y);

#if FIGHT_CLUB
		int g = grid->Value(x, y);
		unsigned int index = g >= 0 ? g : RANDOMMOD(seed, COUNT_MAX);
#else
		unsigned int index = RANDOMMOD(seed, COUNT_MAX);
#endif
		Monster *child = &m_monsters[index];
		// Never wait on another GPU thread: skip a busy child slot.
		if (child->TryLock()) {
			if (child->Init(x, y, monster->m_generation + 1, RANDOMSEED(seed), GetMonsterIndex(monster))) {
				child->m_mind = monster->m_mind;
#if EVOLVE_MONSTERS
				child->m_mind.Evolve(child->m_seed);
#endif
				grid->Value(x, y) = (int)index;
			}
			child->Unlock();
		}
		monster->m_energy -= BIRTH_ENERGY;	// The birth takes place even if the child dies.
#if EVOLVE_MONSTERS == 2
		monster->m_mind.Evolve(monster->m_seed);
#endif
		monster->m_seed = seed;
	} // SplitMonster

public:

	inline void InitMonster(unsigned int index)
	{
		m_monsters[index] = Monster();
	} // InitMonster

	inline void CreateMonster(Grid *grid, unsigned int index)
	{
		unsigned int seed = RANDOM(index);
		unsigned int x = RANDOMSEED(seed) & (GRID_SIZE - 1);
		unsigned int y = RANDOMSEED(seed) & (GRID_SIZE - 1);
#if FIGHT_CLUB
		unsigned int g = grid->Value(x, y);
		if ((g == GRID_DEAD) || (g == GRID_LIFE))
#endif
		{
			Monster *monster = &m_monsters[index];
			monster->Init(x, y, 1, seed);
			grid->Value(x, y) = (int)GetMonsterIndex(monster);
		}
	} // CreateMonster

	inline void CreateMonsters(Grid *grid)
	{
		for (unsigned int index = 0; index < COUNT_MIN; index++)
			CreateMonster(grid, index);
	} // CreateMonsters

	inline void StepMonster(Grid *grid, const Grid *oldGrid, unsigned int index)
	{
		Monster *monster = &m_monsters[index];
		if (!monster->TryLock())
			return;
		if (monster->m_generation) {	// Zero if dead.
			float energy = monster->m_energy;
			int& m = grid->Value(monster->m_xi, monster->m_yi);
#if FIGHT_CLUB
			if ((energy > DIE_ENERGY) && (m == index))
#else
			if (energy > DIE_ENERGY)
#endif
			{
				m = GRID_DEAD;
				SenseMonster(grid, monster);
				monster->m_mind.Think();
				float motorX = monster->m_mind.m_neurons[NEURON_MOTOR_X];
				float motorY = monster->m_mind.m_neurons[NEURON_MOTOR_Y];
				float x = fmodf(monster->m_x + motorX, GRID_SIZE);
				float y = fmodf(monster->m_y + motorY, GRID_SIZE);
				if (x < 0.0f)
					x += GRID_SIZE;
				if (y < 0.0f)
					y += GRID_SIZE;
				monster->m_x = x;
				monster->m_y = y;
				int xi = monster->m_xi = (unsigned int)floor(x) & (GRID_SIZE - 1);
				int yi = monster->m_yi = (unsigned int)floor(y) & (GRID_SIZE - 1);
				energy -= sqrtf(motorX * motorX + motorY * motorY) * MOVE_ENERGY + STEP_ENERGY;

				int g = grid->Value(xi, yi);
				if ((g != GRID_DEAD) && (energy > DIE_ENERGY)) {
					if (g == GRID_LIFE)
						energy += LIFE_ENERGY;
#if FIGHT_CLUB
					else if (g != index) {
						Monster* m = GetMonster(g);
						energy += EAT_ENERGY * MAX(m->m_energy, 0.0f);
						m->m_energy = DEAD_ENERGY;
					}
#endif
				}
			} else
				energy = DEAD_ENERGY; // Another monster moved into the spot.
			monster->m_energy = energy;
			if (energy <= DIE_ENERGY) {
				int& cell = grid->Value(monster->m_xi, monster->m_yi);
#ifdef __CUDACC__
				atomicCAS(&cell, (int)index, GRID_DEAD);
#else
				if (cell == (int)index)
					cell = GRID_DEAD;
#endif
				KillMonster(monster);
			} else {
				grid->Value(monster->m_xi, monster->m_yi) = index;
				if (energy >= SPLIT_ENERGY)
					SplitMonster(grid, monster);
			}

		}
		monster->Unlock();
	} // StepMonster

	inline void StepMonsters(Grid *grid, const Grid *oldGrid)
	{
		for (unsigned int i = 0; i < COUNT_MAX; i++)
			StepMonster(grid, oldGrid, i);
	} // StepMonsters

	void DrawPixel(const Grid *grid, pixel_display::View pixels, unsigned int x, unsigned int y)
	{
		auto& pixel = pixels.Pixel(x, y);
		pixel.a = 255;
		int g = grid->Value(x, y);
		if (g == GRID_DEAD) {
			pixel.r = 0;
			pixel.g = 0;
			pixel.b = 0;
		} else if (g == GRID_LIFE) {
			pixel.r = 0;
			pixel.g = 64;
			pixel.b = 0;
		} else {
			float energy = m_monsters[g].m_energy;
			energy = MIN(energy, SPLIT_ENERGY);
			char e = (unsigned char)(energy * (1.0f / SPLIT_ENERGY) * 255.0f);
			pixel.r = e;
			pixel.g = 128;
			pixel.b = 255 - e;
		}
	} // DrawPixel

	void DrawFrame(const Grid *grid, pixel_display::View pixels)
	{
		for (unsigned int y = 0; y < GRID_SIZE; y++)
			for (unsigned int x = 0; x < GRID_SIZE; x++)
				DrawPixel(grid, pixels, x, y);
	} // DrawFrame

	inline MonsterManager(void)
	{
	} // MonsterManager
}; // MonsterManager

GPU_GLOBAL void EraseLife(Grid *grid)
{
	unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
	unsigned int yi = index / GRID_SIZE;
	if (yi < GRID_SIZE) {
		unsigned int xi = index & (GRID_SIZE - 1);
		grid->Value(xi, yi) = GRID_DEAD;
	}
} // EraseLife

GPU_GLOBAL void RandomLife(Grid *grid)
{
	unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
	unsigned int yi = index / GRID_SIZE;
	if (yi < GRID_SIZE) {
		unsigned int xi = index & (GRID_SIZE - 1);
		Life::Random(grid, xi, yi, index);
	}
} // RandomLife

GPU_GLOBAL void GrowLife(Grid *grid, const Grid *oldGrid)
{
	unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
	unsigned int yi = index / GRID_SIZE;
	if (yi < GRID_SIZE) {
		unsigned int xi = index & (GRID_SIZE - 1);
		Life::Grow(grid, oldGrid, xi, yi);
	}
} // GrowLife

GPU_GLOBAL void DrawFrame(MonsterManager *monsters, const Grid *grid, pixel_display::View pixels)
{
	unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
	unsigned int yi = index / GRID_SIZE;
	if (yi < GRID_SIZE) {
		unsigned int xi = index & (GRID_SIZE - 1);
		monsters->DrawPixel(grid, pixels, xi, yi);
	}
} // DrawFrame

GPU_GLOBAL void CreateMonster(MonsterManager *monsters, Grid *grid)
{
	unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
	if (index < COUNT_MAX)
		monsters->InitMonster(index);
	if (index < COUNT_MIN)
		monsters->CreateMonster(grid, index);
} // CreateMonster

GPU_GLOBAL void StepMonster(MonsterManager *monsters, Grid *grid, Grid *oldGrid)
{
	unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
	if (index < COUNT_MAX)
		monsters->StepMonster(grid, oldGrid, index);
} // StepMonster
