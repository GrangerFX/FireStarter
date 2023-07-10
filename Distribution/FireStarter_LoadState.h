#pragma once
#include "FireStarterState.h"

// Run date: 07/10/23 11:00:28 Pacific Daylight Time
// Run duration = 341.235578 seconds
// Run generation = 36
// Run evolution = 0
// Run result = 0.00002384
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 1
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_seed = 1;
    settings.m_optimizeSeed = 1;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 8;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001037
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141507f;
    data->d[1] = -0.043033f;
    data->d[2] = -1.800400f;
    data->d[3] = 1.843310f;
    data->d[4] = 0.134193f;
    data->d[5] = -0.209662f;
    data->d[6] = -0.504205f;
    data->d[7] = -1.199525f;
    data->d[8] = 1.498491f;
    data->d[9] = 1.908933f;
    data->d[10] = 1.134871f;
    data->d[11] = 1.267806f;
    data->d[12] = -0.735829f;
    data->d[13] = 0.372062f;
    data->d[14] = 1.120941f;
    data->d[15] = 0.309807f;
    data->d[16] = 0.332593f;
    data->d[17] = -0.749010f;
    data->d[18] = -9.228147f;
    data->d[19] = 0.052370f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000010f;
} // LoadVariation0

// Variation: 1  result = 0.00000644
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090539f;
    data->d[1] = 1.935750f;
    data->d[2] = -0.782249f;
    data->d[3] = -1.153666f;
    data->d[4] = 0.321514f;
    data->d[5] = -1.637359f;
    data->d[6] = 1.625532f;
    data->d[7] = -0.404105f;
    data->d[8] = -1.745021f;
    data->d[9] = -0.693626f;
    data->d[10] = 0.897610f;
    data->d[11] = -1.212063f;
    data->d[12] = -1.434420f;
    data->d[13] = -0.537528f;
    data->d[14] = 1.346501f;
    data->d[15] = -2.876325f;
    data->d[16] = -0.079124f;
    data->d[17] = 3.022486f;
    data->d[18] = 0.683437f;
    data->d[19] = 0.387001f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation1

// Variation: 2  result = 0.00002384
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.618059f;
    data->d[1] = 0.410838f;
    data->d[2] = 1.876484f;
    data->d[3] = -2.287247f;
    data->d[4] = -0.374960f;
    data->d[5] = 2.037857f;
    data->d[6] = 1.067864f;
    data->d[7] = 0.024568f;
    data->d[8] = -0.389019f;
    data->d[9] = 1.488660f;
    data->d[10] = -0.656817f;
    data->d[11] = 0.183656f;
    data->d[12] = 0.600071f;
    data->d[13] = -0.315979f;
    data->d[14] = -1.401554f;
    data->d[15] = -0.718958f;
    data->d[16] = 0.235779f;
    data->d[17] = -0.319242f;
    data->d[18] = -3.542786f;
    data->d[19] = -0.187296f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000024f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000024f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 10);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 1, 23);
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 1, 22);
    instructions->SetOperation(18, 0, 6);
    instructions->SetOperation(19, 1, 23);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 1, 2);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 36;
    state.m_evolution = 0;
    state.m_index = 3;
    state.m_test = 37;
    state.m_seed = 11649063912410602375;
} // LoadState
