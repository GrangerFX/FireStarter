#pragma once
#include "FireStarterState.h"

// Run date: 10/21/24 10:22:50 Pacific Daylight Time
// Run duration = 161.486047 seconds
// Run generation = 25
// Run evolution = 0
// Run max result = 0.00000032
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
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 131072
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

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 123;
    settings.m_optimizeSeed = 123;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 131072;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000032
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -1.08437240f;
    data->d[2] = 0.12438177f;
    data->d[3] = 1.05389571f;
    data->d[4] = -1.73592246f;
    data->d[5] = 1.70386624f;
    data->d[6] = 4.12429857f;
    data->d[7] = 1.60571837f;
    data->d[8] = -3.33817697f;
    data->d[9] = -2.87805867f;
    data->d[10] = 5.10003376f;
    data->d[11] = -0.54329497f;
    data->d[12] = 3.35991263f;
    data->d[13] = 7.28245068f;
    data->d[14] = -0.51313782f;
    data->d[15] = 0.18947339f;
    data->d[16] = -5.48215485f;
    data->d[17] = -0.00578999f;
    data->d[18] = -2.64566517f;
    data->d[19] = -0.31699586f;
    data->d[20] = 0.89252532f;
    data->d[21] = 3.57954764f;
    data->d[22] = -1.64319146f;
    data->d[23] = -0.88637394f;
    data->d[24] = -1.58112788f;
    data->d[25] = 1.34666097f;
    data->d[26] = -0.44114235f;
    data->d[27] = 0.10742600f;
    data->d[28] = -1.60077417f;
    data->d[29] = -1.10610318f;
    *(result->MinResult()) = 0.00000032f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000032f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 16);
    instructions->SetOperation(1, 0, 19);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 13);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 0, 2);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 1, 24);
    instructions->SetOperation(10, 1, 12);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 0, 23);
    instructions->SetOperation(13, 0, 28);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 20);
    instructions->SetOperation(16, 1, 17);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 3);
    instructions->SetOperation(23, 1, 2);
    instructions->SetOperation(24, 1, 27);
    instructions->SetOperation(25, 1, 6);
    instructions->SetOperation(26, 1, 21);
    instructions->SetOperation(27, 1, 24);
    instructions->SetOperation(28, 0, 15);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 0, 22);
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
    state.m_generation = 25;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 14188645115022533502;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00690770f;
    state.m_maxResult = 0.00000032f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
