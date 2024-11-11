#pragma once
#include "FireStarterState.h"

// Run date: 11/11/24 14:52:36 Pacific Standard Time
// Run duration = 471.083975 seconds
// Run generation = 6
// Run evolution = 0
// Run max result = 0.00000033
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
// Run tests = 256
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
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

// Variation: 0  result = 0.00000033
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.23711865f;
    data->d[2] = 1.14529216f;
    data->d[3] = -0.59757489f;
    data->d[4] = 4.00051928f;
    data->d[5] = -2.68314981f;
    data->d[6] = -0.37358880f;
    data->d[7] = 1.22807622f;
    data->d[8] = 1.47533071f;
    data->d[9] = -1.40952301f;
    data->d[10] = -0.56851971f;
    data->d[11] = -0.36134729f;
    data->d[12] = 0.46383768f;
    data->d[13] = -0.66627342f;
    data->d[14] = -0.57856578f;
    data->d[15] = -0.23258552f;
    data->d[16] = -9.22610474f;
    data->d[17] = 0.67926568f;
    data->d[18] = -27.12120056f;
    data->d[19] = 0.50499964f;
    data->d[20] = -1.21019363f;
    data->d[21] = 0.20877533f;
    data->d[22] = 0.96122146f;
    data->d[23] = 0.46191108f;
    data->d[24] = -0.87346041f;
    data->d[25] = -0.24341989f;
    data->d[26] = -0.70067537f;
    data->d[27] = 1.56260800f;
    data->d[28] = 0.64626223f;
    data->d[29] = -0.17069823f;
    *(result->MinResult()) = 0.00000033f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000033f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 1, 9);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 0, 19);
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
    state.m_test = 59;
    state.m_seed = 8473065674105100021;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000033f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
