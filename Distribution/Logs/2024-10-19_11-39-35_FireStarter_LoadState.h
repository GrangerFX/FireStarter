#pragma once
#include "FireStarterState.h"

// Run date: 10/19/24 11:39:35 Pacific Daylight Time
// Run duration = 10.421548 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00000091
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
// Run tests = 1
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000091
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.57079613f;
    data->d[1] = -0.06462141f;
    data->d[2] = 0.58006895f;
    data->d[3] = -5.22076750f;
    data->d[4] = -0.06624204f;
    data->d[5] = 1.82361460f;
    data->d[6] = -2.29647541f;
    data->d[7] = -0.71286631f;
    data->d[8] = 5.10626411f;
    data->d[9] = -0.13645752f;
    data->d[10] = 0.84473389f;
    data->d[11] = -0.41424787f;
    data->d[12] = 1.69340658f;
    data->d[13] = -3.12160754f;
    data->d[14] = -0.86187267f;
    data->d[15] = -0.16419256f;
    data->d[16] = 0.10071100f;
    data->d[17] = 1.55038464f;
    data->d[18] = 5.14727116f;
    data->d[19] = -3.28678322f;
    data->d[20] = -0.12873790f;
    data->d[21] = -0.65439862f;
    data->d[22] = -1.45037901f;
    data->d[23] = -0.05349926f;
    data->d[24] = -1.67373085f;
    data->d[25] = 0.95230561f;
    data->d[26] = 0.12898305f;
    data->d[27] = -1.39120269f;
    data->d[28] = 1.35977292f;
    data->d[29] = -0.22852002f;
    *(result->MinResult()) = 0.00000091f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000091f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 6);
    instructions->SetOperation(1, 0, 6);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 0, 19);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 1, 17);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 14);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 9);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 28);
    instructions->SetOperation(21, 0, 24);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 1, 6);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 1, 6);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 21);
    instructions->SetOperation(31, 0, 14);
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
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00919813f;
    state.m_maxResult = 0.00000091f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
