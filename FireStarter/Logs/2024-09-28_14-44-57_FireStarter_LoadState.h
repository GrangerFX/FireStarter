#pragma once
#include "FireStarterState.h"

// Run date: 09/28/24 14:44:57 Pacific Daylight Time
// Run duration = 118.207705 seconds
// Run generation = 25
// Run evolution = 0
// Run max result = 0.00000072
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
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 32
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
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 32;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000072
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.21468616f;
    data->d[1] = -1.03092718f;
    data->d[2] = -3.47607517f;
    data->d[3] = 5.20710659f;
    data->d[4] = 3.34543276f;
    data->d[5] = 2.99539089f;
    data->d[6] = 0.39205065f;
    data->d[7] = -0.14043267f;
    data->d[8] = -2.10559440f;
    data->d[9] = 4.14117718f;
    data->d[10] = 0.14002781f;
    data->d[11] = 10.85432148f;
    data->d[12] = -3.08766603f;
    data->d[13] = -0.54641658f;
    data->d[14] = 0.04304894f;
    data->d[15] = 2.29700303f;
    data->d[16] = 3.59962320f;
    data->d[17] = -1.49848640f;
    data->d[18] = 0.51853406f;
    data->d[19] = 0.00446341f;
    data->d[20] = 1.41464245f;
    data->d[21] = -1.37049377f;
    data->d[22] = 1.01790297f;
    data->d[23] = 0.87554598f;
    data->d[24] = -1.71839261f;
    data->d[25] = -1.15482235f;
    data->d[26] = 0.94483656f;
    data->d[27] = 1.44878924f;
    data->d[28] = -1.33429062f;
    data->d[29] = 0.48704499f;
    *(result->MinResult()) = 0.00000072f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000072f;
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
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 1, 16);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 1, 8);
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
    state.LoadCodeFromProgram();
    state.m_generation = 25;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00004655f;
    state.m_maxResult = 0.00000072f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
