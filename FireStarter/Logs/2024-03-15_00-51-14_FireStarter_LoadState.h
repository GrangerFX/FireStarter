#pragma once
#include "FireStarterState.h"

// Run date: 03/15/24 00:51:14 Pacific Daylight Time
// Run duration = 20600.929524 seconds
// Run generation = 326
// Run evolution = 9
// Run max result = 0.00001502
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
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

// Variation: 0  result = 0.00000751
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.288798f;
    data->d[1] = 1.340197f;
    data->d[2] = -2.214088f;
    data->d[3] = 0.137776f;
    data->d[4] = 1.767678f;
    data->d[5] = -1.838723f;
    data->d[6] = -30.024763f;
    data->d[7] = -0.002283f;
    data->d[8] = -1.753970f;
    data->d[9] = -1.448636f;
    data->d[10] = 1.040541f;
    data->d[11] = 0.089884f;
    data->d[12] = -1.985525f;
    data->d[13] = 0.182247f;
    data->d[14] = -0.634374f;
    data->d[15] = 0.008692f;
    data->d[16] = -3.959095f;
    data->d[17] = 0.608443f;
    data->d[18] = 0.266267f;
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
    *(result->MinResult()) = 0.000008f;
} // LoadVariation0

// Variation: 1  result = 0.00000870
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.213953f;
    data->d[1] = -0.207857f;
    data->d[2] = 1.199599f;
    data->d[3] = 0.753990f;
    data->d[4] = -1.678889f;
    data->d[5] = -0.761156f;
    data->d[6] = -11.779917f;
    data->d[7] = 0.000017f;
    data->d[8] = 1.038299f;
    data->d[9] = -0.976454f;
    data->d[10] = -0.051331f;
    data->d[11] = -0.749651f;
    data->d[12] = -1.320818f;
    data->d[13] = 0.942409f;
    data->d[14] = -0.832511f;
    data->d[15] = -6.636868f;
    data->d[16] = -0.003127f;
    data->d[17] = -0.337271f;
    data->d[18] = 0.759902f;
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
    *(result->MinResult()) = 0.000009f;
} // LoadVariation1

// Variation: 2  result = 0.00001502
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.130488f;
    data->d[1] = 1.222017f;
    data->d[2] = -0.585502f;
    data->d[3] = -0.878804f;
    data->d[4] = 1.282429f;
    data->d[5] = -0.246297f;
    data->d[6] = 0.003701f;
    data->d[7] = -5.765120f;
    data->d[8] = 1.456788f;
    data->d[9] = -1.896178f;
    data->d[10] = -0.537129f;
    data->d[11] = 0.663891f;
    data->d[12] = -1.148606f;
    data->d[13] = 2.039431f;
    data->d[14] = -2.570748f;
    data->d[15] = 0.760068f;
    data->d[16] = -2.889799f;
    data->d[17] = -0.144274f;
    data->d[18] = 1.431113f;
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
    *(result->MinResult()) = 0.000015f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000015f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 2);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 1, 6);
    instructions->SetOperation(3, 1, 20);
    instructions->SetOperation(4, 1, 10);
    instructions->SetOperation(5, 1, 16);
    instructions->SetOperation(6, 0, 9);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 1, 19);
    instructions->SetOperation(10, 0, 10);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 0, 18);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 0, 26);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 23);
    instructions->SetOperation(18, 0, 6);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 20);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 23);
    instructions->SetOperation(25, 1, 26);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 22);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 1, 16);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 326;
    state.m_evolution = 9;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 8;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 15;
    state.m_seed = 12024018153529504273;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000039f;
    state.m_maxResult = 0.000015f;
    state.m_evolveWeight = 0.004728f;
    state.m_optimizeValid = true;
} // LoadState
