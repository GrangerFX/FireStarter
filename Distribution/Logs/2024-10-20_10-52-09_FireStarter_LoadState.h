#pragma once
#include "FireStarterState.h"

// Run date: 10/20/24 10:52:09 Pacific Daylight Time
// Run duration = 517.285904 seconds
// Run generation = 105
// Run evolution = 0
// Run max result = 0.00000025
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

// Variation: 0  result = 0.00000025
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.40892017f;
    data->d[1] = -1.73267245f;
    data->d[2] = -0.52761400f;
    data->d[3] = 0.91418231f;
    data->d[4] = -0.58491516f;
    data->d[5] = 0.81717789f;
    data->d[6] = -3.28704214f;
    data->d[7] = 3.21565247f;
    data->d[8] = -0.03743434f;
    data->d[9] = 1.49218082f;
    data->d[10] = 1.94496429f;
    data->d[11] = 0.52612042f;
    data->d[12] = -2.74346256f;
    data->d[13] = 0.00268255f;
    data->d[14] = 1.55583799f;
    data->d[15] = -2.08800673f;
    data->d[16] = -3.03446722f;
    data->d[17] = 7.07016373f;
    data->d[18] = -0.09637179f;
    data->d[19] = -0.37525600f;
    data->d[20] = 1.27068138f;
    data->d[21] = 0.63632804f;
    data->d[22] = -0.38862789f;
    data->d[23] = -0.38908976f;
    data->d[24] = 1.84520411f;
    data->d[25] = 1.18705678f;
    data->d[26] = 1.44616210f;
    data->d[27] = 1.11260784f;
    data->d[28] = -1.60451806f;
    data->d[29] = 0.29237458f;
    *(result->MinResult()) = 0.00000025f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000025f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 1, 28);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 0, 5);
    instructions->SetOperation(5, 0, 6);
    instructions->SetOperation(6, 0, 17);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 1, 17);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 1, 21);
    instructions->SetOperation(12, 0, 22);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 3);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 0, 11);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 1, 24);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 0, 29);
    instructions->SetOperation(30, 1, 29);
    instructions->SetOperation(31, 0, 10);
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
    state.m_generation = 105;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.01310295f;
    state.m_maxResult = 0.00000025f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
