#pragma once
#include "FireStarterState.h"

// Run date: 10/28/24 17:17:54 Pacific Daylight Time
// Run duration = 125.271950 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000042
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000042
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.46239573f;
    data->d[1] = -0.89733964f;
    data->d[2] = -1.30352855f;
    data->d[3] = -1.19595444f;
    data->d[4] = 0.08391250f;
    data->d[5] = -1.58325148f;
    data->d[6] = 0.95827180f;
    data->d[7] = 0.96720755f;
    data->d[8] = 0.18320519f;
    data->d[9] = -1.89147627f;
    data->d[10] = -1.50162697f;
    data->d[11] = -1.81389821f;
    data->d[12] = -0.57388693f;
    data->d[13] = -0.02666394f;
    data->d[14] = -2.18659353f;
    data->d[15] = 0.14245093f;
    data->d[16] = -6.07623816f;
    data->d[17] = 0.39933497f;
    data->d[18] = 0.98174578f;
    data->d[19] = -0.99209988f;
    data->d[20] = -1.81049681f;
    data->d[21] = -1.23948002f;
    data->d[22] = -0.85808283f;
    data->d[23] = -1.33817363f;
    data->d[24] = 1.83559620f;
    data->d[25] = 0.09295328f;
    data->d[26] = -0.62283391f;
    data->d[27] = 0.95806277f;
    data->d[28] = 1.17054105f;
    data->d[29] = 0.23866607f;
    *(result->MinResult()) = 0.00000042f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000042f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 3);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 28);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 6);
    instructions->SetOperation(5, 0, 26);
    instructions->SetOperation(6, 1, 10);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 29);
    instructions->SetOperation(9, 0, 24);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 1, 21);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 1, 25);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 0, 26);
    instructions->SetOperation(28, 1, 29);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 28);
    instructions->SetOperation(31, 1, 28);
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
    state.m_generation = 5;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 761807918016009034;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000042f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
