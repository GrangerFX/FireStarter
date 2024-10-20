#pragma once
#include "FireStarterState.h"

// Run date: 10/20/24 10:41:19 Pacific Daylight Time
// Run duration = 296.113063 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00000012
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
// Run population = 524288
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 524288;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.26957589f;
    data->d[1] = -0.84689766f;
    data->d[2] = -0.99619019f;
    data->d[3] = -1.79500830f;
    data->d[4] = -3.59649158f;
    data->d[5] = 0.39863372f;
    data->d[6] = -0.00666301f;
    data->d[7] = -8.88307381f;
    data->d[8] = 0.95249242f;
    data->d[9] = -1.39387965f;
    data->d[10] = 1.57518971f;
    data->d[11] = 1.67046905f;
    data->d[12] = -0.72938997f;
    data->d[13] = -0.80211693f;
    data->d[14] = 0.05178750f;
    data->d[15] = 0.47315967f;
    data->d[16] = -4.18732452f;
    data->d[17] = -1.75722480f;
    data->d[18] = 0.86931193f;
    data->d[19] = -0.89571786f;
    data->d[20] = 0.38263917f;
    data->d[21] = 1.52238393f;
    data->d[22] = 0.42499867f;
    data->d[23] = 1.31506467f;
    data->d[24] = 1.45864987f;
    data->d[25] = 0.58260548f;
    data->d[26] = -1.86491370f;
    data->d[27] = -0.52970761f;
    data->d[28] = 1.39066184f;
    data->d[29] = -1.93028808f;
    *(result->MinResult()) = 0.00000012f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000012f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 0);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 3);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 29);
    instructions->SetOperation(10, 1, 12);
    instructions->SetOperation(11, 0, 12);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 1, 28);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 4);
    instructions->SetOperation(16, 1, 27);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 1, 25);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 1, 18);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 1, 22);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 0, 21);
    instructions->SetOperation(27, 1, 25);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 1, 3);
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
    state.m_generation = 4;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00492460f;
    state.m_maxResult = 0.00000012f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
