#pragma once
#include "FireStarterState.h"

// Run date: 09/15/24 10:41:01 Pacific Daylight Time
// Run duration = 2056.135700 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000048
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000048
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.250924f;
    data->d[1] = -0.794664f;
    data->d[2] = -5.791409f;
    data->d[3] = 1.330561f;
    data->d[4] = -3.348691f;
    data->d[5] = 1.722735f;
    data->d[6] = 3.383460f;
    data->d[7] = 2.181164f;
    data->d[8] = 1.645937f;
    data->d[9] = -1.603337f;
    data->d[10] = -0.432846f;
    data->d[11] = -3.141593f;
    data->d[12] = -2.614795f;
    data->d[13] = 9.021646f;
    data->d[14] = -0.602024f;
    data->d[15] = -2.376124f;
    data->d[16] = 1.460092f;
    data->d[17] = 0.632541f;
    data->d[18] = 1.761821f;
    data->d[19] = 0.153380f;
    data->d[20] = 3.150339f;
    data->d[21] = 4.470285f;
    data->d[22] = -0.200456f;
    data->d[23] = 0.555490f;
    data->d[24] = 0.557708f;
    data->d[25] = -0.788011f;
    data->d[26] = 0.023871f;
    data->d[27] = 0.526762f;
    data->d[28] = 1.818734f;
    data->d[29] = -0.317439f;
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
    instructions->SetOperation(0, 1, 11);
    instructions->SetOperation(1, 1, 17);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 1, 29);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 1, 16);
    instructions->SetOperation(7, 0, 26);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 1, 18);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 1, 9);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 1, 25);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 0, 14);
    instructions->SetOperation(25, 1, 9);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 2;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000985f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
