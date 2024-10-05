#pragma once
#include "FireStarterState.h"

// Run date: 10/05/24 13:35:53 Pacific Daylight Time
// Run duration = 130.663519 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00000067
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000067
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.36170238f;
    data->d[1] = -1.13632154f;
    data->d[2] = -1.37118912f;
    data->d[3] = 0.00000001f;
    data->d[4] = -0.91557664f;
    data->d[5] = -0.23244010f;
    data->d[6] = -0.10995346f;
    data->d[7] = -1.16936088f;
    data->d[8] = -0.52281970f;
    data->d[9] = 0.83950180f;
    data->d[10] = -2.99748278f;
    data->d[11] = 2.35477471f;
    data->d[12] = 0.59398317f;
    data->d[13] = -0.32428354f;
    data->d[14] = 1.38980651f;
    data->d[15] = 3.92416811f;
    data->d[16] = 1.13537943f;
    data->d[17] = 1.17665482f;
    data->d[18] = -1.63310647f;
    data->d[19] = -0.02469933f;
    data->d[20] = -1.15094554f;
    data->d[21] = 0.48240682f;
    data->d[22] = 0.74376631f;
    data->d[23] = -1.98803008f;
    data->d[24] = -1.05622017f;
    data->d[25] = -1.36695457f;
    data->d[26] = 0.92669725f;
    data->d[27] = -1.45647526f;
    data->d[28] = 0.40603229f;
    data->d[29] = -0.22106551f;
    *(result->MinResult()) = 0.00000067f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000067f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 28);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 1, 26);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 0, 22);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 14);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 1, 27);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 0, 21);
    instructions->SetOperation(20, 1, 2);
    instructions->SetOperation(21, 0, 21);
    instructions->SetOperation(22, 1, 14);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 1, 0);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 6);
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
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00613987f;
    state.m_maxResult = 0.00000067f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
