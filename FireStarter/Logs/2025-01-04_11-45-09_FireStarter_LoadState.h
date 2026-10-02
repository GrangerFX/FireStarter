#pragma once
#include "FireStarterState.h"

// Run date: 01/04/25 11:45:09 Pacific Standard Time
// Run duration = 884.833866 seconds
// Run generation = 10
// Run evolution = 0
// Run max result = 0.00000014
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_passes = 384;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000014
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.22372085f;
    data->d[1] = 1.15618503f;
    data->d[2] = -0.81261283f;
    data->d[3] = -0.13614394f;
    data->d[4] = 1.72038817f;
    data->d[5] = -2.41943669f;
    data->d[6] = 1.51071143f;
    data->d[7] = -2.29751587f;
    data->d[8] = -1.05827606f;
    data->d[9] = 9.04480076f;
    data->d[10] = -0.91933644f;
    data->d[11] = -0.06105228f;
    data->d[12] = 12.61672401f;
    data->d[13] = -1.59657156f;
    data->d[14] = -15.57171917f;
    data->d[15] = 0.02442276f;
    data->d[16] = -3.45590305f;
    data->d[17] = -1.77451062f;
    data->d[18] = -1.09254670f;
    data->d[19] = 0.32872456f;
    data->d[20] = -0.22664012f;
    data->d[21] = 0.33945248f;
    data->d[22] = -1.80347419f;
    data->d[23] = -1.05488193f;
    data->d[24] = -2.40059829f;
    data->d[25] = -0.90278959f;
    data->d[26] = -1.85774076f;
    data->d[27] = 1.99869382f;
    data->d[28] = 1.50777245f;
    data->d[29] = 0.93022472f;
    *(result->MinResult()) = 0.00000014f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000014f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 16);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 0, 2);
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
    state.m_generation = 10;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 5021065757121531749;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000014f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
