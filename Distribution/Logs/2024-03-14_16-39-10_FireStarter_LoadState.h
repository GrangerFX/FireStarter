#pragma once
#include "FireStarterState.h"

// Run date: 03/14/24 16:39:10 Pacific Daylight Time
// Run duration = 17099.197393 seconds
// Run generation = 795
// Run evolution = 13
// Run max result = 0.00000143
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.615844f;
    data->d[1] = 24133.658203f;
    data->d[2] = -0.000000f;
    data->d[3] = -1.306566f;
    data->d[4] = 0.642990f;
    data->d[5] = 0.248482f;
    data->d[6] = 0.710064f;
    data->d[7] = -0.958657f;
    data->d[8] = -1.685070f;
    data->d[9] = 0.086121f;
    data->d[10] = 1.172825f;
    data->d[11] = 0.144379f;
    data->d[12] = -2.424568f;
    data->d[13] = -1.302333f;
    data->d[14] = 2.243048f;
    data->d[15] = -2.291129f;
    data->d[16] = -1.652110f;
    data->d[17] = -0.054543f;
    data->d[18] = -0.000000f;
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
    data->d[0] = -1.063673f;
    data->d[1] = 731.445007f;
    data->d[2] = 0.000000f;
    data->d[3] = 0.265191f;
    data->d[4] = -1.627922f;
    data->d[5] = -2.343414f;
    data->d[6] = -0.598624f;
    data->d[7] = -1.137237f;
    data->d[8] = 2.484017f;
    data->d[9] = -0.409664f;
    data->d[10] = 1.093538f;
    data->d[11] = -0.009703f;
    data->d[12] = -2.134932f;
    data->d[13] = 0.047485f;
    data->d[14] = 0.670801f;
    data->d[15] = -1.315963f;
    data->d[16] = -6.807176f;
    data->d[17] = 0.167911f;
    data->d[18] = -0.118132f;
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

// Variation: 2  result = 0.00000143
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.219921f;
    data->d[1] = -7.083844f;
    data->d[2] = -0.000002f;
    data->d[3] = 0.668927f;
    data->d[4] = 3.879076f;
    data->d[5] = -5.055064f;
    data->d[6] = -0.780592f;
    data->d[7] = -0.933619f;
    data->d[8] = -0.663474f;
    data->d[9] = -0.327352f;
    data->d[10] = 0.114627f;
    data->d[11] = -1.650112f;
    data->d[12] = 0.439858f;
    data->d[13] = -0.056458f;
    data->d[14] = -0.963381f;
    data->d[15] = 1.873746f;
    data->d[16] = -0.538429f;
    data->d[17] = -0.187590f;
    data->d[18] = 0.523597f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 23);
    instructions->SetOperation(1, 1, 2);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 1, 27);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 1, 15);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 1);
    instructions->SetOperation(14, 0, 23);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 1, 24);
    instructions->SetOperation(17, 1, 17);
    instructions->SetOperation(18, 0, 18);
    instructions->SetOperation(19, 1, 20);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 1, 21);
    instructions->SetOperation(22, 1, 4);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 1, 20);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 0, 22);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 795;
    state.m_evolution = 13;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 10;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 13;
    state.m_seed = 8652863306727062370;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.001062f;
    state.m_optimizeValid = true;
} // LoadState
