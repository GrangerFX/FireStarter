#pragma once
#include "FireStarterState.h"

// Run date: 06/23/24 17:53:25 Pacific Daylight Time
// Run duration = 2952.504787 seconds
// Run generation = 153
// Run evolution = 7
// Run max result = 0.00000173
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
// Run tests = 0
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
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00000042
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.568565f;
    data->d[1] = 1.786200f;
    data->d[2] = -1.786200f;
    data->d[3] = -0.866921f;
    data->d[4] = -3.096990f;
    data->d[5] = 0.519201f;
    data->d[6] = 0.867805f;
    data->d[7] = 0.182126f;
    data->d[8] = -0.130691f;
    data->d[9] = -0.675439f;
    data->d[10] = -1.398751f;
    data->d[11] = -1.581849f;
    data->d[12] = -2.692543f;
    data->d[13] = 9.057927f;
    data->d[14] = -0.077419f;
    data->d[15] = 0.015162f;
    data->d[16] = 0.143305f;
    data->d[17] = -8.663050f;
    data->d[18] = 9.244177f;
    data->d[19] = -0.000000f;
    data->d[20] = -3.792580f;
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

// Variation: 1  result = 0.00000119
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.453206f;
    data->d[1] = -1.400707f;
    data->d[2] = -2.286137f;
    data->d[3] = 0.261579f;
    data->d[4] = 1.196011f;
    data->d[5] = -0.110221f;
    data->d[6] = -0.853852f;
    data->d[7] = 2.671403f;
    data->d[8] = -1.389230f;
    data->d[9] = 1.686402f;
    data->d[10] = 2.670475f;
    data->d[11] = -3.136296f;
    data->d[12] = -1.577759f;
    data->d[13] = -0.088023f;
    data->d[14] = 4.624218f;
    data->d[15] = 1.760045f;
    data->d[16] = -5.350878f;
    data->d[17] = 2.988505f;
    data->d[18] = 0.000057f;
    data->d[19] = -1.210365f;
    data->d[20] = 0.097604f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000173
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.427253f;
    data->d[1] = -1.118545f;
    data->d[2] = 0.953763f;
    data->d[3] = -0.708501f;
    data->d[4] = 1.351486f;
    data->d[5] = 0.082942f;
    data->d[6] = 0.148198f;
    data->d[7] = 8.169230f;
    data->d[8] = 0.334179f;
    data->d[9] = 2.870650f;
    data->d[10] = 3.397897f;
    data->d[11] = -1.204220f;
    data->d[12] = -0.231772f;
    data->d[13] = 1.861849f;
    data->d[14] = 2.492185f;
    data->d[15] = -1.420286f;
    data->d[16] = 8.647918f;
    data->d[17] = -3.358425f;
    data->d[18] = 0.456161f;
    data->d[19] = -2.514044f;
    data->d[20] = -0.208270f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 9);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 1, 24);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 1, 17);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 24);
    instructions->SetOperation(7, 0, 12);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 0, 13);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 1, 5);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 1, 24);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 16);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 25);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 23);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 1, 12);
    instructions->SetOperation(30, 1, 22);
    instructions->SetOperation(31, 0, 3);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 153;
    state.m_evolution = 7;
    state.m_index = 11;
    state.m_copy_index = 142;
    state.m_id = 142;
    state.m_test = 0;
    state.m_seed = 6873814762107617310;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000002f;
    state.m_evolveWeight = 0.000421f;
    state.m_optimizeValid = true;
} // LoadState
