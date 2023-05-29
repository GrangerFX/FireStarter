#pragma once
#include "FireStarterState.h"

// Run date: 05/29/23 14:49:41 Pacific Daylight Time
// Run duration = 1183.848577 seconds
// Run generation = 88
// Run evolution = 0
// Run result = 0.00045594
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 8
// Run processes = 0
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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 0;
    settings.m_units = 8;
    settings.m_processes = 0;
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

// Variation: 0  result = 0.00045594
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.549858f;
    data->d[1] = -0.114446f;
    data->d[2] = -2.956866f;
    data->d[3] = 0.381917f;
    data->d[4] = -1.010633f;
    data->d[5] = -1.560919f;
    data->d[6] = -1.298139f;
    data->d[7] = -0.678287f;
    data->d[8] = 0.644457f;
    data->d[9] = 0.022047f;
    data->d[10] = -1.747096f;
    data->d[11] = -2.021318f;
    data->d[12] = -0.263698f;
    data->d[13] = -1.393373f;
    data->d[14] = -0.323140f;
    data->d[15] = -1.555362f;
    data->d[16] = 1.083401f;
    data->d[17] = 2.616006f;
    data->d[18] = -1.985942f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000400f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000456f;
} // LoadVariation0

// Variation: 1  result = 0.00039965
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.622365f;
    data->d[1] = -0.290484f;
    data->d[2] = 1.281872f;
    data->d[3] = -2.012711f;
    data->d[4] = 0.294401f;
    data->d[5] = 1.087982f;
    data->d[6] = 0.284574f;
    data->d[7] = -0.511121f;
    data->d[8] = -1.000010f;
    data->d[9] = 0.993887f;
    data->d[10] = 0.695086f;
    data->d[11] = 0.330076f;
    data->d[12] = 2.882228f;
    data->d[13] = 0.214452f;
    data->d[14] = -0.183981f;
    data->d[15] = -2.062738f;
    data->d[16] = 0.463705f;
    data->d[17] = 1.954994f;
    data->d[18] = 1.867931f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000418f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000400f;
} // LoadVariation1

// Variation: 2  result = 0.00041759
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.961815f;
    data->d[1] = -0.224558f;
    data->d[2] = 3.155985f;
    data->d[3] = -0.266712f;
    data->d[4] = 0.972708f;
    data->d[5] = -0.787328f;
    data->d[6] = 0.660584f;
    data->d[7] = -1.235906f;
    data->d[8] = -1.093357f;
    data->d[9] = -1.263929f;
    data->d[10] = 2.062019f;
    data->d[11] = 1.648440f;
    data->d[12] = 2.057942f;
    data->d[13] = 2.091629f;
    data->d[14] = -0.231862f;
    data->d[15] = 0.051694f;
    data->d[16] = 2.197679f;
    data->d[17] = 0.623592f;
    data->d[18] = 0.661583f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000418f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000456f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 20);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 8);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 25);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 3);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 1, 24);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 88;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 14837255329340947474;
} // LoadState
