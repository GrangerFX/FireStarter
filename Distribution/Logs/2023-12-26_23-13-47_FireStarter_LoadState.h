#pragma once
#include "FireStarterState.h"

// Run date: 12/26/23 23:13:47 Pacific Standard Time
// Run duration = 4418.494284 seconds
// Run generation = 29
// Run evolution = 11
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
// Run states = 64
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
// Run startResult = 9.999999f

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
    settings.m_states = 64;
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
    settings.m_startResult = 9.999999f;
} // LoadSettings

// Variation: 0  result = 0.00000007
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.292891f;
    data->d[1] = -0.649981f;
    data->d[2] = -1.198721f;
    data->d[3] = 0.102541f;
    data->d[4] = 1.277879f;
    data->d[5] = 0.135194f;
    data->d[6] = 0.265547f;
    data->d[7] = -1.071718f;
    data->d[8] = 1.699809f;
    data->d[9] = 0.005481f;
    data->d[10] = -0.486695f;
    data->d[11] = 0.438147f;
    data->d[12] = -1.251031f;
    data->d[13] = -1.104397f;
    data->d[14] = 5.415569f;
    data->d[15] = 0.366284f;
    data->d[16] = 4.072552f;
    data->d[17] = 0.032292f;
    data->d[18] = 0.811912f;
    data->d[19] = 1.627576f;
    data->d[20] = 0.103083f;
    data->d[21] = -0.103083f;
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
    data->d[0] = -0.941485f;
    data->d[1] = -0.305812f;
    data->d[2] = -1.843362f;
    data->d[3] = 0.246352f;
    data->d[4] = 0.285607f;
    data->d[5] = -1.780032f;
    data->d[6] = 1.664201f;
    data->d[7] = 1.564091f;
    data->d[8] = -0.180720f;
    data->d[9] = -1.910242f;
    data->d[10] = -0.469608f;
    data->d[11] = -1.735961f;
    data->d[12] = -0.902683f;
    data->d[13] = 0.607524f;
    data->d[14] = 5.683865f;
    data->d[15] = 7.934268f;
    data->d[16] = -4.343858f;
    data->d[17] = -0.001019f;
    data->d[18] = -0.901993f;
    data->d[19] = 12.410963f;
    data->d[20] = 0.387856f;
    data->d[21] = -0.505988f;
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
    data->d[0] = -0.731101f;
    data->d[1] = 2.460336f;
    data->d[2] = -4.347229f;
    data->d[3] = -0.037076f;
    data->d[4] = -1.966978f;
    data->d[5] = -0.431495f;
    data->d[6] = -0.191616f;
    data->d[7] = 1.594488f;
    data->d[8] = 1.154786f;
    data->d[9] = -0.766513f;
    data->d[10] = 1.503967f;
    data->d[11] = -1.613383f;
    data->d[12] = 1.333079f;
    data->d[13] = -0.879471f;
    data->d[14] = -7.468130f;
    data->d[15] = 0.059297f;
    data->d[16] = -6.062378f;
    data->d[17] = 0.000274f;
    data->d[18] = 1.914367f;
    data->d[19] = 1.574250f;
    data->d[20] = 0.402974f;
    data->d[21] = 0.120625f;
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
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 1, 8);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 8);
    instructions->SetOperation(6, 0, 9);
    instructions->SetOperation(7, 1, 25);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 0, 16);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 1, 22);
    instructions->SetOperation(14, 1, 3);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 24);
    instructions->SetOperation(18, 1, 17);
    instructions->SetOperation(19, 1, 11);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 0, 8);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 1, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 29;
    state.m_evolution = 11;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 193;
    state.m_copy_id = 60;
    state.m_test = 1;
    state.m_seed = 12868611938775281937;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
