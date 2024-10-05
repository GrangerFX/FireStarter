#pragma once
#include "FireStarterState.h"

// Run date: 10/05/24 16:19:43 Pacific Daylight Time
// Run duration = 210.685439 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00018477
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 1310720
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 32
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 1310720;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 32;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00018477
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.56970441f;
    data->d[1] = 0.14761306f;
    data->d[2] = -0.72793442f;
    data->d[3] = 0.39805138f;
    data->d[4] = -1.79585230f;
    data->d[5] = 1.60412574f;
    data->d[6] = -0.21449852f;
    data->d[7] = -1.60677958f;
    data->d[8] = -0.33117887f;
    data->d[9] = 0.14472236f;
    data->d[10] = -0.60090256f;
    data->d[11] = 1.05176139f;
    data->d[12] = 0.93592036f;
    data->d[13] = -2.15106106f;
    data->d[14] = 0.51260281f;
    data->d[15] = 3.07625842f;
    data->d[16] = -0.38651147f;
    data->d[17] = 0.16591537f;
    data->d[18] = 1.84510159f;
    data->d[19] = 4.86531734f;
    data->d[20] = -4.48640347f;
    data->d[21] = 1.45236433f;
    data->d[22] = -0.53813589f;
    data->d[23] = 1.26285529f;
    data->d[24] = 0.10556564f;
    data->d[25] = 1.29215908f;
    data->d[26] = -0.06184318f;
    data->d[27] = -0.15373361f;
    data->d[28] = -1.68339205f;
    data->d[29] = -0.14167494f;
    *(result->MinResult()) = 0.00018477f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00018477f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 1, 29);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 15);
    instructions->SetOperation(8, 1, 25);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 0, 2);
    instructions->SetOperation(11, 1, 12);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 1, 18);
    instructions->SetOperation(16, 1, 16);
    instructions->SetOperation(17, 1, 20);
    instructions->SetOperation(18, 1, 7);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 3);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 1, 29);
    instructions->SetOperation(28, 1, 9);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 16);
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
    state.LoadCodeFromProgram();
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 3;
    state.m_seed = 17448258927230012683;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00363117f;
    state.m_maxResult = 0.00018477f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
