#pragma once
#include "FireStarterState.h"

// Run date: 10/28/24 10:20:15 Pacific Daylight Time
// Run duration = 142.506214 seconds
// Run generation = 42
// Run evolution = 0
// Run max result = 0.00000092
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 32768
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 123;
    settings.m_optimizeSeed = 123;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 32768;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000092
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.13688493f;
    data->d[1] = -0.84187466f;
    data->d[2] = 0.39363930f;
    data->d[3] = -0.73647583f;
    data->d[4] = 0.58167362f;
    data->d[5] = 0.54784942f;
    data->d[6] = 1.45020556f;
    data->d[7] = -2.26021719f;
    data->d[8] = 0.04999347f;
    data->d[9] = -0.81455570f;
    data->d[10] = -0.83036786f;
    data->d[11] = 0.67466515f;
    data->d[12] = -1.05297709f;
    data->d[13] = 0.77770239f;
    data->d[14] = 0.26354489f;
    data->d[15] = -0.31384495f;
    data->d[16] = 0.77168614f;
    data->d[17] = -1.76731479f;
    data->d[18] = 1.52244556f;
    data->d[19] = 0.50216085f;
    data->d[20] = 2.20337725f;
    data->d[21] = -0.01258615f;
    data->d[22] = -1.85540318f;
    data->d[23] = -0.02158310f;
    data->d[24] = 1.96275043f;
    data->d[25] = 1.86049497f;
    data->d[26] = 0.84544140f;
    data->d[27] = -1.65499401f;
    data->d[28] = 1.18281662f;
    data->d[29] = 0.46231672f;
    *(result->MinResult()) = 0.00000092f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000092f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 1, 0);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 0, 26);
    instructions->SetOperation(6, 0, 7);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 0, 24);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 1, 22);
    instructions->SetOperation(14, 0, 18);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 27);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 6);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 0, 29);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 26);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 1, 10);
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
    state.m_generation = 42;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 734326773710676551;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000092f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
