#pragma once
#include "FireStarterState.h"

// Run date: 12/16/23 10:39:28 Pacific Standard Time
// Run duration = 2083.043521 seconds
// Run generation = 55
// Run evolution = 13
// Run max result = 0.00000036
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
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    settings.m_tests = 1;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.119025f;
    data->d[1] = -0.022567f;
    data->d[2] = -1.931146f;
    data->d[3] = 0.768479f;
    data->d[4] = -0.325793f;
    data->d[5] = -0.742343f;
    data->d[6] = 0.118147f;
    data->d[7] = -0.190663f;
    data->d[8] = -7.232204f;
    data->d[9] = 0.002573f;
    data->d[10] = 0.436677f;
    data->d[11] = -3.787257f;
    data->d[12] = -0.001241f;
    data->d[13] = 3.792400f;
    data->d[14] = -0.089788f;
    data->d[15] = -0.363570f;
    data->d[16] = -0.241151f;
    data->d[17] = -0.000000f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.825178f;
    data->d[1] = -1.265481f;
    data->d[2] = -0.142873f;
    data->d[3] = 0.690062f;
    data->d[4] = 0.936493f;
    data->d[5] = 0.699796f;
    data->d[6] = -2.201738f;
    data->d[7] = 2.510015f;
    data->d[8] = 0.593653f;
    data->d[9] = -0.034710f;
    data->d[10] = 0.303929f;
    data->d[11] = -2.573143f;
    data->d[12] = 0.302663f;
    data->d[13] = -1.651594f;
    data->d[14] = -1.535989f;
    data->d[15] = 1.782625f;
    data->d[16] = 1.236922f;
    data->d[17] = -0.118132f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.167397f;
    data->d[1] = -0.450597f;
    data->d[2] = -0.304373f;
    data->d[3] = 0.872954f;
    data->d[4] = 0.812027f;
    data->d[5] = -0.570421f;
    data->d[6] = -0.689605f;
    data->d[7] = -0.391023f;
    data->d[8] = -1.597145f;
    data->d[9] = -0.000685f;
    data->d[10] = -0.394523f;
    data->d[11] = -1.492987f;
    data->d[12] = -0.409261f;
    data->d[13] = -23.899771f;
    data->d[14] = -1.300274f;
    data->d[15] = 2.264944f;
    data->d[16] = 1.132523f;
    data->d[17] = 0.523599f;
    data->d[18] = 0.000000f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 19);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 0, 19);
    instructions->SetOperation(15, 0, 2);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 1, 23);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 1, 21);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 0, 18);
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
    state.m_generation = 55;
    state.m_evolution = 13;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 15;
    state.m_copy_id = 19;
    state.m_test = 15;
    state.m_seed = 15867304776882009507;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
