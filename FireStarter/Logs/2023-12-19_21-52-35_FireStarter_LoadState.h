#pragma once
#include "FireStarterState.h"

// Run date: 12/19/23 21:52:35 Pacific Standard Time
// Run duration = 3228.197914 seconds
// Run generation = 30
// Run evolution = 12
// Run max result = 0.00000018
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
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.283794f;
    data->d[1] = -0.891565f;
    data->d[2] = -0.386107f;
    data->d[3] = -0.023539f;
    data->d[4] = -2.378886f;
    data->d[5] = -1.226661f;
    data->d[6] = 0.057322f;
    data->d[7] = -0.355803f;
    data->d[8] = 6.423173f;
    data->d[9] = 0.332041f;
    data->d[10] = 0.915353f;
    data->d[11] = -0.969614f;
    data->d[12] = 2.168991f;
    data->d[13] = -0.449652f;
    data->d[14] = 2.304426f;
    data->d[15] = 0.068507f;
    data->d[16] = 20.420944f;
    data->d[17] = -19.267042f;
    data->d[18] = -0.078284f;
    data->d[19] = 0.078284f;
    data->d[20] = -1.637693f;
    data->d[21] = -0.807550f;
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
    data->d[0] = -0.254469f;
    data->d[1] = 0.786477f;
    data->d[2] = 1.250318f;
    data->d[3] = -2.353236f;
    data->d[4] = -0.210493f;
    data->d[5] = -1.730714f;
    data->d[6] = 0.716847f;
    data->d[7] = 0.862630f;
    data->d[8] = 4.136209f;
    data->d[9] = -1.571253f;
    data->d[10] = -1.895385f;
    data->d[11] = -0.987755f;
    data->d[12] = 0.340493f;
    data->d[13] = -0.267855f;
    data->d[14] = 0.401110f;
    data->d[15] = -0.029637f;
    data->d[16] = -14.664860f;
    data->d[17] = 16.322426f;
    data->d[18] = 0.360094f;
    data->d[19] = -0.284464f;
    data->d[20] = 0.677050f;
    data->d[21] = -2.307038f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.646602f;
    data->d[1] = 1.692800f;
    data->d[2] = 0.589406f;
    data->d[3] = -0.479890f;
    data->d[4] = 1.044493f;
    data->d[5] = -0.852517f;
    data->d[6] = 0.091143f;
    data->d[7] = 0.470952f;
    data->d[8] = 1.799569f;
    data->d[9] = -0.478677f;
    data->d[10] = 0.907708f;
    data->d[11] = -1.084816f;
    data->d[12] = -0.546801f;
    data->d[13] = -1.473311f;
    data->d[14] = 1.546696f;
    data->d[15] = -0.426597f;
    data->d[16] = 1.247232f;
    data->d[17] = 3.375313f;
    data->d[18] = -0.057909f;
    data->d[19] = -0.022194f;
    data->d[20] = 3.519525f;
    data->d[21] = -1.857252f;
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
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 20);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 1, 24);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 1);
    instructions->SetOperation(29, 1, 18);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 30;
    state.m_evolution = 12;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 1;
    state.m_id = 44;
    state.m_copy_id = 44;
    state.m_test = 0;
    state.m_seed = 497823086247519107;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
