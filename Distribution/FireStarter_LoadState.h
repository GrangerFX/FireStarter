#pragma once
#include "FireStarterState.h"

// Run date: 09/14/24 16:49:03 Pacific Daylight Time
// Run duration = 501.970100 seconds
// Run generation = 215
// Run evolution = 0
// Run max result = 0.00000036
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

// Variation: 0  result = 0.00000036
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 4.887880f;
    data->d[1] = 1.457062f;
    data->d[2] = -4.061626f;
    data->d[3] = -1.634772f;
    data->d[4] = -1.333220f;
    data->d[5] = -4.056936f;
    data->d[6] = 1.857003f;
    data->d[7] = 1.840335f;
    data->d[8] = 0.620390f;
    data->d[9] = -1.823662f;
    data->d[10] = 0.036481f;
    data->d[11] = 1.396252f;
    data->d[12] = 1.109481f;
    data->d[13] = -0.177869f;
    data->d[14] = -2.029187f;
    data->d[15] = -1.106575f;
    data->d[16] = -2.175901f;
    data->d[17] = -5.354160f;
    data->d[18] = -0.650311f;
    data->d[19] = -0.254959f;
    data->d[20] = -0.487293f;
    data->d[21] = 0.881942f;
    data->d[22] = -0.609376f;
    data->d[23] = -0.311963f;
    data->d[24] = -0.305586f;
    data->d[25] = -0.813469f;
    data->d[26] = 1.527194f;
    data->d[27] = 6.842384f;
    data->d[28] = -2.491282f;
    data->d[29] = -0.806549f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 1, 28);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 9);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 1, 1);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 1, 7);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 21);
    instructions->SetOperation(31, 0, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 215;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 3;
    state.m_seed = 17448258927230012683;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000015f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
