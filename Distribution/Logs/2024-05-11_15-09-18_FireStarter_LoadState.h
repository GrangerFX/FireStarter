#pragma once
#include "FireStarterState.h"

// Run date: 05/11/24 15:09:18 Pacific Daylight Time
// Run duration = 2484.188579 seconds
// Run generation = 454
// Run evolution = 12
// Run max result = 0.00000045
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
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
    settings.m_registers = 30;
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000019
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.888064f;
    data->d[1] = -1.253529f;
    data->d[2] = -0.176523f;
    data->d[3] = -2.622426f;
    data->d[4] = -1.166122f;
    data->d[5] = -0.060004f;
    data->d[6] = -0.896957f;
    data->d[7] = -2.783016f;
    data->d[8] = 0.621262f;
    data->d[9] = 2.575007f;
    data->d[10] = -2.063406f;
    data->d[11] = 0.001485f;
    data->d[12] = 1.846152f;
    data->d[13] = -1.287873f;
    data->d[14] = -0.273677f;
    data->d[15] = 0.266219f;
    data->d[16] = 0.089885f;
    data->d[17] = 0.007459f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000027
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.490199f;
    data->d[1] = -1.600460f;
    data->d[2] = -0.195245f;
    data->d[3] = -0.812900f;
    data->d[4] = -1.793312f;
    data->d[5] = -0.149192f;
    data->d[6] = -0.897045f;
    data->d[7] = -0.953958f;
    data->d[8] = 3.585170f;
    data->d[9] = -1.353194f;
    data->d[10] = -1.546691f;
    data->d[11] = 0.001563f;
    data->d[12] = 3.861002f;
    data->d[13] = -0.719255f;
    data->d[14] = -1.701601f;
    data->d[15] = 1.698751f;
    data->d[16] = 2.271221f;
    data->d[17] = -0.115282f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000045
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.601627f;
    data->d[1] = -0.016366f;
    data->d[2] = -0.230600f;
    data->d[3] = 1.438977f;
    data->d[4] = 1.155604f;
    data->d[5] = -0.218978f;
    data->d[6] = -0.362488f;
    data->d[7] = -2.564011f;
    data->d[8] = 1.459581f;
    data->d[9] = 1.898843f;
    data->d[10] = -1.823086f;
    data->d[11] = 0.006633f;
    data->d[12] = 2.585777f;
    data->d[13] = -1.406853f;
    data->d[14] = -2.450002f;
    data->d[15] = 2.430705f;
    data->d[16] = 0.006173f;
    data->d[17] = 0.542895f;
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
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(1, 1, 11);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 0, 16);
    instructions->SetOperation(4, 0, 15);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 0, 26);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 0, 10);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 1, 26);
    instructions->SetOperation(14, 1, 23);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 1, 6);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 0, 23);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 0, 21);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 1, 28);
    instructions->SetOperation(25, 1, 27);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 2);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 454;
    state.m_evolution = 12;
    state.m_index = 13;
    state.m_copy_index = 81;
    state.m_id = 81;
    state.m_test = 1;
    state.m_seed = 1403908348785091767;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.001017f;
    state.m_optimizeValid = true;
} // LoadState
