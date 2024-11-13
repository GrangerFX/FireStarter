#pragma once
#include "FireStarterState.h"

// Run date: 11/12/24 12:44:39 Pacific Standard Time
// Run duration = 87.057636 seconds
// Run generation = 6
// Run evolution = 0
// Run max result = 0.00000024
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 49152
// Run iterations = 64
// Run passes = 384
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 49152;
    settings.m_iterations = 64;
    settings.m_passes = 384;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.62442935f;
    data->d[1] = 0.26651993f;
    data->d[2] = 1.36012995f;
    data->d[3] = -0.60006535f;
    data->d[4] = 1.73802078f;
    data->d[5] = -0.03155610f;
    data->d[6] = -1.14567089f;
    data->d[7] = -1.54755926f;
    data->d[8] = -0.00159600f;
    data->d[9] = -0.37918487f;
    data->d[10] = 13.24228668f;
    data->d[11] = 1.06411016f;
    data->d[12] = -2.14842367f;
    data->d[13] = 1.48148286f;
    data->d[14] = -0.88609201f;
    data->d[15] = -1.66907763f;
    data->d[16] = -11.11401081f;
    data->d[17] = 1.89044797f;
    data->d[18] = -1.75388932f;
    data->d[19] = 0.03492526f;
    data->d[20] = -0.94199765f;
    data->d[21] = 1.73749042f;
    data->d[22] = 1.57347631f;
    data->d[23] = -0.35955381f;
    data->d[24] = 1.30232525f;
    data->d[25] = 1.49594927f;
    data->d[26] = 0.29522055f;
    data->d[27] = 1.52565241f;
    data->d[28] = -1.99986708f;
    data->d[29] = -0.65127182f;
    *(result->MinResult()) = 0.00000024f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000024f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 1, 19);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 1, 7);
    instructions->SetOperation(29, 1, 13);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 2);
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
    state.m_generation = 6;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 4670770415428786089;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000024f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
