#pragma once

#include "CUDADefines.h"
#include "PixelDisplay.h"

#define GPU_LIFE 1

#define GRID_SIZE 2048	// Must be a power of 2
#define GRID_LIFE -2
#define GRID_DEAD -1

#if 1
inline void DirectionOffset(unsigned int direction, int& dx, int& dy)
{
	const int xd[8] = { -1,  0,  1,  1,  1,  0, -1, -1 };
	const int yd[8] = { -1, -1, -1,  0,  1,  1,  1,  0 };
	dx = xd[direction];
	dy = yd[direction];
} // DirectionOffset

inline void Direction(unsigned int direction, unsigned int& x, unsigned int& y)
{
	int dx, dy;
	DirectionOffset(direction, dx, dy);
	x = (x + dx) & (GRID_SIZE - 1);
	y = (y + dy) & (GRID_SIZE - 1);
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

	// Unordered cell ownership is intentional. Atomic word operations avoid torn
	// claims and let exactly one visitor consume each piece of life.
	inline int Read(unsigned int x, unsigned int y) const
	{
#ifdef __CUDACC__
		return __nv_atomic_load_n(const_cast<int*>(&m_gridData[y & (GRID_SIZE - 1)][x & (GRID_SIZE - 1)]),
			__NV_ATOMIC_RELAXED, __NV_THREAD_SCOPE_DEVICE);
#else
		return Value(x, y);
#endif
	}

	inline int Replace(unsigned int x, unsigned int y, int value)
	{
#ifdef __CUDACC__
		return atomicExch(&Value(x, y), value);
#else
		int old = Value(x, y);
		Value(x, y) = value;
		return old;
#endif
	}

	inline void ClearMonster(unsigned int x, unsigned int y, unsigned int index)
	{
#ifdef __CUDACC__
		atomicCAS(&Value(x, y), (int)index, GRID_DEAD);
#else
		if (Value(x, y) == (int)index) Value(x, y) = GRID_DEAD;
#endif
	}

	inline float2 Sense(unsigned int xi, unsigned int yi) const
	{
		float2 sense = make_float2(0.0f, 0.0f);
		for (unsigned int direction = 0; direction < 8; direction++) {
			int dx, dy;
			DirectionOffset(direction, dx, dy);
			int g = Read(xi + dx, yi + dy);
			float value = g == GRID_LIFE ? 1.0f : (g >= 0 ? -1.0f : 0.0f);
			sense.x += value * dx;
			sense.y += value * dy;
		}
		// Keep strength as well as direction; do not normalize to unit length.
		return make_float2(sense.x * 0.125f, sense.y * 0.125f);
    } // Sense

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

// Two neighborhood-vector inputs and own energy, followed by 23 computed neurons.
#define NEURON_SENSE_X  0
#define NEURON_SENSE_Y  1
#define NEURON_ENERGY   2
#define NEURON_MOTOR_X  3
#define NEURON_MOTOR_Y  4
#define NEURON_COUNT    26

// Simulation values: Modified manually before running simulation.
#define COUNT_MIN       640
#define COUNT_MAX       20000
#define MAX_ENERGY      3.0f
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
#if 1
                unsigned int c = 1; // RANDOMMOD(seed, 4);
                for (unsigned int i = 0; i < c; i++) {
                    unsigned int n = RANDOMMOD(seed, NEURON_COUNT);
                    unsigned int s = RANDOMMOD(seed, NEURON_COUNT);
                    m_synapses[n][s] = (RANDOMNUM(seed) * 2.0f - 1.0f) / NEURON_COUNT;
                }
#else
				unsigned int c = RANDOMMOD(seed, 4);
				for (unsigned int i = 0; i < c; i++) {
					unsigned int n = RANDOMMOD(seed, NEURON_COUNT);
					unsigned int s = RANDOMMOD(seed, NEURON_COUNT);
                    m_synapses[n][s] += (RANDOMNUM(seed) * 2.0f - 1.0f) / NEURON_COUNT;
				}
#endif
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
		// An atomic food ticket, separate from the owner's neuron/position state.
		// Eating exchanges this for DEAD_ENERGY; an owner cannot refill a spent ticket.
		float m_foodEnergy;
		const Grid *m_birthGrid; // Defer newborns until the other ping-pong grid is current.
		static constexpr unsigned int INITIALIZING = ~0u;

		inline unsigned int Generation(void) const
		{
#ifdef __CUDACC__
			return __nv_atomic_load_n(const_cast<unsigned int*>(&m_generation), __NV_ATOMIC_ACQUIRE, __NV_THREAD_SCOPE_DEVICE);
#else
			return m_generation;
#endif
		}

		inline void Publish(unsigned int generation)
		{
#ifdef __CUDACC__
			__nv_atomic_store_n(&m_generation, generation, __NV_ATOMIC_RELEASE, __NV_THREAD_SCOPE_DEVICE);
#else
			m_generation = generation;
#endif
		}

		// One attempt to claim an unused slot. No live monster is locked or waited for.
		inline bool Reserve(void)
		{
#ifdef __CUDACC__
			unsigned int empty = 0;
			return __nv_atomic_compare_exchange_n(&m_generation, &empty, INITIALIZING, false,
				__NV_ATOMIC_ACQUIRE, __NV_ATOMIC_RELAXED, __NV_THREAD_SCOPE_DEVICE);
#else
			if (m_generation) return false;
			m_generation = INITIALIZING;
			return true;
#endif
		}

		inline float FoodEnergy(void) const
		{
#ifdef __CUDACC__
			float energy;
			__nv_atomic_load(&m_foodEnergy, &energy, __NV_ATOMIC_RELAXED, __NV_THREAD_SCOPE_DEVICE);
			return energy;
#else
			return m_foodEnergy;
#endif
		}

		inline float TakeFood(void)
		{
#ifdef __CUDACC__
			return atomicExch(&m_foodEnergy, DEAD_ENERGY);
#else
			float energy = m_foodEnergy;
			m_foodEnergy = DEAD_ENERGY;
			m_birthGrid = nullptr;
			return energy;
#endif
		}

		inline bool UpdateFood(float expected, float energy)
		{
#ifdef __CUDACC__
			return atomicCAS(reinterpret_cast<unsigned int*>(&m_foodEnergy),
				__float_as_uint(expected), __float_as_uint(energy)) == __float_as_uint(expected);
#else
			if (m_foodEnergy != expected) return false;
			m_foodEnergy = energy;
			return true;
#endif
		}

		// Called only by the thread that reserved this unused slot. Publish last,
		// after the child's brain is ready, so its own step never sees partial data.
		inline void Init(unsigned int x, unsigned int y, unsigned int generation,
			unsigned int seed, unsigned int parent = (unsigned int)-1)
		{
			m_parent = parent;
			m_birthGrid = nullptr;
			m_x = x + 0.5f;
			m_y = y + 0.5f;
			m_xi = x;
			m_yi = y;
			m_energy = CHILD_ENERGY;
#ifdef __CUDACC__
			atomicExch(&m_foodEnergy, CHILD_ENERGY);
#else
			m_foodEnergy = CHILD_ENERGY;
#endif
			if (generation == 1) m_mind.Random(RANDOMSEED(seed));
			m_seed = seed;
		}

		inline Monster(void)
		{
			m_foodEnergy = DEAD_ENERGY;
			m_birthGrid = nullptr;
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
		float2 sense = grid->Sense(monster->m_xi, monster->m_yi);
		// These are inputs, not steering commands. Evolved weights determine behavior.
		monster->m_mind.m_neurons[NEURON_SENSE_X] = sense.x;
		monster->m_mind.m_neurons[NEURON_SENSE_Y] = sense.y;
		monster->m_mind.m_neurons[NEURON_ENERGY] = monster->m_energy;
	} // SenseMonster

	inline void KillMonster(Monster *monster)
	{
		monster->TakeFood();
		monster->m_energy = DEAD_ENERGY;
		monster->m_xi = 0;
		monster->m_yi = 0;
		monster->m_x = 0.0f;
		monster->m_y = 0.0f;
		monster->Publish(0); // This thread must not touch the slot after releasing it.
	} // KillMonster

	inline void SplitMonster(Grid *grid, Monster *monster)
	{
		unsigned int seed = monster->m_seed;
		unsigned int direction = RANDOMMOD(seed, 7);
		unsigned int x = monster->m_xi;
		unsigned int y = monster->m_yi;
		Direction(direction, x, y);
#if FIGHT_CLUB
		int g = grid->Read(x, y);
		unsigned int index = g >= 0 ? g : RANDOMMOD(seed, COUNT_MAX);
#else
		unsigned int index = RANDOMMOD(seed, COUNT_MAX);
#endif
		monster->m_seed = seed;
		Monster *child = &m_monsters[index];
		if (!child->Reserve()) return;
		float energy = monster->m_energy;
		// Only a successful birth spends energy, and predation cannot be undone.
		if (!monster->UpdateFood(energy, energy - BIRTH_ENERGY)) {
			child->Publish(0);
			return;
		}
		monster->m_energy = energy - BIRTH_ENERGY;
		unsigned int generation = monster->m_generation + 1;
		if (generation == Monster::INITIALIZING) generation = 1;
		child->Init(x, y, generation, RANDOMSEED(seed), GetMonsterIndex(monster));
		child->m_birthGrid = grid;
		child->m_mind = monster->m_mind;
#if EVOLVE_MONSTERS
		child->m_mind.Evolve(child->m_seed);
#endif
#if EVOLVE_MONSTERS == 2
		monster->m_mind.Evolve(monster->m_seed);
#endif
		monster->m_seed = seed;
		grid->Replace(x, y, (int)index);
		child->Publish(generation);
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
		Monster *monster = &m_monsters[index];
		if (!monster->Reserve()) return;
		monster->Init(x, y, 1, seed);
		grid->Replace(x, y, (int)index);
		monster->Publish(1);
	} // CreateMonster

	inline void CreateMonsters(Grid *grid)
	{
		for (unsigned int index = 0; index < COUNT_MIN; index++)
			CreateMonster(grid, index);
	} // CreateMonsters

	inline void StepMonster(Grid *grid, const Grid *oldGrid, unsigned int index)
	{
		Monster *monster = &m_monsters[index];
		unsigned int generation = monster->Generation();
		if (!generation || generation == Monster::INITIALIZING) return;
		if (monster->m_birthGrid == grid) return; // Births take their first turn next pass.
		monster->m_birthGrid = nullptr;
		float available = monster->FoodEnergy();
		// Validate last pass's ownership. This pass may overwrite cells freely;
		// the losers discover that on their next turn, without clearing the winner.
		if (!(available > DIE_ENERGY) || oldGrid->Value(monster->m_xi, monster->m_yi) != (int)index) {
			grid->ClearMonster(monster->m_xi, monster->m_yi, index);
			KillMonster(monster);
			return;
		}
		grid->ClearMonster(monster->m_xi, monster->m_yi, index);
		monster->m_energy = available;
		SenseMonster(grid, monster);
		monster->m_mind.Think();
		float motorX = monster->m_mind.m_neurons[NEURON_MOTOR_X];
		float motorY = monster->m_mind.m_neurons[NEURON_MOTOR_Y];
		float energy = available - (sqrtf(motorX * motorX + motorY * motorY) * MOVE_ENERGY + STEP_ENERGY);
		// This also rejects NaN/overflow before converting coordinates to integers.
		if (!(energy > DIE_ENERGY)) {
			KillMonster(monster);
			return;
		}
		float x = fmodf(monster->m_x + motorX, GRID_SIZE);
		float y = fmodf(monster->m_y + motorY, GRID_SIZE);
		if (x < 0.0f) x += GRID_SIZE;
		if (y < 0.0f) y += GRID_SIZE;
		monster->m_x = x;
		monster->m_y = y;
		monster->m_xi = (unsigned int)floor(x) & (GRID_SIZE - 1);
		monster->m_yi = (unsigned int)floor(y) & (GRID_SIZE - 1);
		// An atomic exchange chooses a chaotic winner and consumes life once.
		int g = grid->Replace(monster->m_xi, monster->m_yi, (int)index);
        if (g == GRID_LIFE) {
            energy += LIFE_ENERGY;
            energy = MIN(energy, MAX_ENERGY);
#if FIGHT_CLUB
        } else if (g >= 0 && g != (int)index) {
			// Consume the victim's ticket, not its mutable brain/position state.
			float food = GetMonster(g)->TakeFood();
            if (food > DIE_ENERGY) {
                energy += EAT_ENERGY * food;
                energy = MIN(energy, MAX_ENERGY);
            }
		}
#endif
		if (!monster->UpdateFood(available, energy)) {
			// Someone ate us while we computed. Never restore that spent energy.
			grid->ClearMonster(monster->m_xi, monster->m_yi, index);
			KillMonster(monster);
			return;
		}
		monster->m_energy = energy;
		if (energy >= SPLIT_ENERGY) SplitMonster(grid, monster);
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

#else

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
    static inline void Random(Grid* grid, unsigned int x, unsigned int y, unsigned int seed)
    {
        grid->Value(x, y) = RANDOMMOD(seed, 3) ? GRID_DEAD : GRID_LIFE;
    } // Random

    static inline void Random(Grid* grid, unsigned int seed = 0)
    {
        for (int y = 0; y < GRID_SIZE; y++)
            for (int x = 0; x < GRID_SIZE; x++)
                Random(grid, x, y, seed++);
    } // RandomGrid

    static inline void Grow(Grid* grid, const Grid* oldGrid, unsigned int xi, unsigned int yi)
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

    static inline void Grow(Grid* grid, Grid* oldGrid)
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

            inline void Evolve(unsigned int& seed)
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

    inline int GetMonsterIndex(Monster* monster)
    {
        return (int)(monster - m_monsters);
    } // GetMonsterIndex

    inline Monster* GetMonster(unsigned int index)
    {
        return &m_monsters[index];
    } // GetMonster

    inline void SenseMonster(const Grid* grid, Monster* monster)
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

    inline void KillMonster(Monster* monster)
    {
        monster->m_energy = DEAD_ENERGY;
        monster->m_xi = 0;
        monster->m_yi = 0;
        monster->m_x = 0.0f;
        monster->m_y = 0.0f;
        monster->m_generation = 0;	// Must go last!
    } // KillMonster

    inline void SplitMonster(Grid* grid, Monster* monster)
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
        Monster* child = &m_monsters[index];
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

    inline void CreateMonster(Grid* grid, unsigned int index)
    {
        unsigned int seed = RANDOM(index);
        unsigned int x = RANDOMSEED(seed) & (GRID_SIZE - 1);
        unsigned int y = RANDOMSEED(seed) & (GRID_SIZE - 1);
#if FIGHT_CLUB
        unsigned int g = grid->Value(x, y);
        if ((g == GRID_DEAD) || (g == GRID_LIFE))
#endif
        {
            Monster* monster = &m_monsters[index];
            monster->Init(x, y, 1, seed);
            grid->Value(x, y) = (int)GetMonsterIndex(monster);
        }
    } // CreateMonster

    inline void CreateMonsters(Grid* grid)
    {
        for (unsigned int index = 0; index < COUNT_MIN; index++)
            CreateMonster(grid, index);
    } // CreateMonsters

    inline void StepMonster(Grid* grid, const Grid* oldGrid, unsigned int index)
    {
        Monster* monster = &m_monsters[index];
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

    inline void StepMonsters(Grid* grid, const Grid* oldGrid)
    {
        for (unsigned int i = 0; i < COUNT_MAX; i++)
            StepMonster(grid, oldGrid, i);
    } // StepMonsters

    void DrawPixel(const Grid* grid, pixel_display::View pixels, unsigned int x, unsigned int y)
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

    void DrawFrame(const Grid* grid, pixel_display::View pixels)
    {
        for (unsigned int y = 0; y < GRID_SIZE; y++)
            for (unsigned int x = 0; x < GRID_SIZE; x++)
                DrawPixel(grid, pixels, x, y);
    } // DrawFrame

    inline MonsterManager(void)
    {} // MonsterManager
}; // MonsterManager

GPU_GLOBAL void EraseLife(Grid* grid)
{
    unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
    unsigned int yi = index / GRID_SIZE;
    if (yi < GRID_SIZE) {
        unsigned int xi = index & (GRID_SIZE - 1);
        grid->Value(xi, yi) = GRID_DEAD;
    }
} // EraseLife

GPU_GLOBAL void RandomLife(Grid* grid)
{
    unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
    unsigned int yi = index / GRID_SIZE;
    if (yi < GRID_SIZE) {
        unsigned int xi = index & (GRID_SIZE - 1);
        Life::Random(grid, xi, yi, index);
    }
} // RandomLife

GPU_GLOBAL void GrowLife(Grid* grid, const Grid* oldGrid)
{
    unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
    unsigned int yi = index / GRID_SIZE;
    if (yi < GRID_SIZE) {
        unsigned int xi = index & (GRID_SIZE - 1);
        Life::Grow(grid, oldGrid, xi, yi);
    }
} // GrowLife

GPU_GLOBAL void DrawFrame(MonsterManager* monsters, const Grid* grid, pixel_display::View pixels)
{
    unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
    unsigned int yi = index / GRID_SIZE;
    if (yi < GRID_SIZE) {
        unsigned int xi = index & (GRID_SIZE - 1);
        monsters->DrawPixel(grid, pixels, xi, yi);
    }
} // DrawFrame

GPU_GLOBAL void CreateMonster(MonsterManager* monsters, Grid* grid)
{
    unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
    if (index < COUNT_MAX)
        monsters->InitMonster(index);
    if (index < COUNT_MIN)
        monsters->CreateMonster(grid, index);
} // CreateMonster

GPU_GLOBAL void StepMonster(MonsterManager* monsters, Grid* grid, Grid* oldGrid)
{
    unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
    if (index < COUNT_MAX)
        monsters->StepMonster(grid, oldGrid, index);
} // StepMonster

#endif