#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 19:39:22 Pacific Daylight Time
// Run duration = 162.763166 seconds
// Run generation = 48
// Run evolution = 5
// Run max result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.874255f;
    data->d[2] = -1.915684f;
    data->d[3] = -0.213368f;
    data->d[4] = -1.177349f;
    data->d[5] = -0.010921f;
    data->d[6] = 0.281599f;
    data->d[7] = 1.680931f;
    data->d[8] = 1.754271f;
    data->d[9] = 1.765760f;
    data->d[10] = -0.233713f;
    data->d[11] = -0.681446f;
    data->d[12] = 0.193957f;
    data->d[13] = -1.839080f;
    data->d[14] = 25.788956f;
    data->d[15] = -1.648443f;
    data->d[16] = 0.414954f;
    data->d[17] = 0.093303f;
    data->d[18] = -0.102611f;
    data->d[19] = 0.102611f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.043602f;
    data->d[2] = 1.381353f;
    data->d[3] = 1.047638f;
    data->d[4] = -1.972992f;
    data->d[5] = -1.314938f;
    data->d[6] = -0.873157f;
    data->d[7] = -1.041674f;
    data->d[8] = -2.270015f;
    data->d[9] = 2.572039f;
    data->d[10] = 0.101799f;
    data->d[11] = -0.041082f;
    data->d[12] = 0.724658f;
    data->d[13] = 1.713825f;
    data->d[14] = -896.246765f;
    data->d[15] = -11.965422f;
    data->d[16] = -0.133420f;
    data->d[17] = 0.035789f;
    data->d[18] = -0.089074f;
    data->d[19] = -0.029058f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.417268f;
    data->d[2] = 0.138962f;
    data->d[3] = 1.573138f;
    data->d[4] = 0.785328f;
    data->d[5] = -0.152299f;
    data->d[6] = -1.747796f;
    data->d[7] = 1.653913f;
    data->d[8] = 1.043652f;
    data->d[9] = 1.716440f;
    data->d[10] = 0.175429f;
    data->d[11] = -3.323369f;
    data->d[12] = -1.457259f;
    data->d[13] = -0.240834f;
    data->d[14] = 0.404409f;
    data->d[15] = -2.326663f;
    data->d[16] = -0.033184f;
    data->d[17] = 0.638736f;
    data->d[18] = 0.152342f;
    data->d[19] = 0.371256f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 14);
    instructions->SetOperation(1, 0, 24);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 15);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 0, 26);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 26);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 0, 4);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 1, 0);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 1, 28);
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
    state.m_generation = 48;
    state.m_evolution = 5;
    state.m_index = 9;
    state.m_copy_index = 19;
    state.m_id = 19;
    state.m_test = 12;
    state.m_seed = 1303162524071730437;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000029f;
    state.m_optimizeValid = true;
} // LoadState
