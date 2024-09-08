#pragma once
#include "FireStarterState.h"

// Run date: 09/08/24 10:34:10 Pacific Daylight Time
// Run duration = 31.571936 seconds
// Run generation = 11
// Run evolution = 0
// Run max result = 0.00000054
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 100
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 100;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 4;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000054
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.492784f;
    data->d[1] = -4.445166f;
    data->d[2] = -3.646593f;
    data->d[3] = -5.155208f;
    data->d[4] = -1.440715f;
    data->d[5] = -2.950353f;
    data->d[6] = 0.500336f;
    data->d[7] = -0.335491f;
    data->d[8] = 0.920131f;
    data->d[9] = -6.742235f;
    data->d[10] = 1.242427f;
    data->d[11] = 5.033911f;
    data->d[12] = -0.004573f;
    data->d[13] = -1.192296f;
    data->d[14] = 3.288501f;
    data->d[15] = 1.903457f;
    data->d[16] = -1.804064f;
    data->d[17] = 0.141591f;
    data->d[18] = -0.466074f;
    data->d[19] = -0.532377f;
    data->d[20] = -0.711522f;
    data->d[21] = -0.759108f;
    data->d[22] = -1.079202f;
    data->d[23] = 1.812088f;
    data->d[24] = -1.087767f;
    data->d[25] = -1.076266f;
    data->d[26] = -0.491948f;
    data->d[27] = 2.307585f;
    data->d[28] = 0.842813f;
    data->d[29] = -1.337188f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 1, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 21);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 29);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 0, 25);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 1, 21);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 1, 28);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 0, 14);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 11;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =3;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
