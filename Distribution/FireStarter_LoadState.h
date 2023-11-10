#pragma once
#include "FireStarterState.h"

// Run date: 11/09/23 20:58:52 Pacific Standard Time
// Run duration = 52037.052500 seconds
// Run generation = 220
// Run evolution = 14
// Run result = 0.00000424
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000286
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.541370f;
    data->d[1] = -2.011166f;
    data->d[2] = 0.082216f;
    data->d[3] = 0.514693f;
    data->d[4] = 0.870093f;
    data->d[5] = 1.110369f;
    data->d[6] = -0.622052f;
    data->d[7] = 0.036442f;
    data->d[8] = 4.208472f;
    data->d[9] = -0.599215f;
    data->d[10] = -0.190856f;
    data->d[11] = -2.579988f;
    data->d[12] = -1.474256f;
    data->d[13] = -0.732005f;
    data->d[14] = 2.854065f;
    data->d[15] = -2.438600f;
    data->d[16] = -0.146335f;
    data->d[17] = -0.397786f;
    data->d[18] = -0.346825f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

// Variation: 1  result = 0.00000238
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.582389f;
    data->d[1] = 1.043833f;
    data->d[2] = 0.472441f;
    data->d[3] = 0.841185f;
    data->d[4] = 1.530270f;
    data->d[5] = 0.282053f;
    data->d[6] = -1.446548f;
    data->d[7] = 1.601484f;
    data->d[8] = -0.038790f;
    data->d[9] = 1.286478f;
    data->d[10] = -0.815106f;
    data->d[11] = -2.021537f;
    data->d[12] = 4.125149f;
    data->d[13] = -0.369091f;
    data->d[14] = 0.668028f;
    data->d[15] = -0.737677f;
    data->d[16] = -0.482544f;
    data->d[17] = -0.447958f;
    data->d[18] = -0.469255f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000424
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.268994f;
    data->d[1] = 2.017180f;
    data->d[2] = 0.148102f;
    data->d[3] = 0.364488f;
    data->d[4] = 2.018686f;
    data->d[5] = -0.651782f;
    data->d[6] = 0.509101f;
    data->d[7] = -0.106730f;
    data->d[8] = -2.028187f;
    data->d[9] = -0.995293f;
    data->d[10] = 0.753184f;
    data->d[11] = 1.741936f;
    data->d[12] = -1.473872f;
    data->d[13] = -0.175854f;
    data->d[14] = -2.192873f;
    data->d[15] = 3.407712f;
    data->d[16] = -0.378674f;
    data->d[17] = 0.382958f;
    data->d[18] = -1.526507f;
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
    *(result->MinResult()) = 0.000004f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000004f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 1, 25);
    instructions->SetOperation(3, 0, 9);
    instructions->SetOperation(4, 1, 27);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 1, 15);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 1, 24);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 0, 1);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 24);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 220;
    state.m_evolution = 14;
    state.m_index = 36;
    state.m_id = 33;
    state.m_copy_id = 18;
    state.m_test = 13;
    state.m_seed = 17296812552049944425;
    state.m_maxResult = 0.000004f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
