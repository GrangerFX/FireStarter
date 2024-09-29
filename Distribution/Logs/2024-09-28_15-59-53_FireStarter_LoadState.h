#pragma once
#include "FireStarterState.h"

// Run date: 09/28/24 15:59:53 Pacific Daylight Time
// Run duration = 1926.458091 seconds
// Run generation = 17
// Run evolution = 0
// Run max result = 0.00020361
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

// Variation: 0  result = 0.00020361
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.42125976f;
    data->d[1] = -0.07203078f;
    data->d[2] = -0.06225952f;
    data->d[3] = -6.21392488f;
    data->d[4] = -0.91925424f;
    data->d[5] = 0.49523884f;
    data->d[6] = -6.63096619f;
    data->d[7] = -2.88618898f;
    data->d[8] = -0.54850650f;
    data->d[9] = 2.05614996f;
    data->d[10] = -0.85471988f;
    data->d[11] = 0.80323166f;
    data->d[12] = 0.61594760f;
    data->d[13] = -0.55550069f;
    data->d[14] = 0.22726032f;
    data->d[15] = 0.36247936f;
    data->d[16] = 4.15745878f;
    data->d[17] = -0.59119576f;
    data->d[18] = 0.60363996f;
    data->d[19] = -1.41915011f;
    data->d[20] = 4.35699463f;
    data->d[21] = 1.34182179f;
    data->d[22] = -4.19874716f;
    data->d[23] = 0.47426900f;
    data->d[24] = -0.01880972f;
    data->d[25] = 1.82891965f;
    data->d[26] = 1.64289677f;
    data->d[27] = 1.91070807f;
    data->d[28] = -1.27046835f;
    data->d[29] = -1.71754861f;
    *(result->MinResult()) = 0.00020361f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00020361f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 9);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 1, 23);
    instructions->SetOperation(3, 0, 9);
    instructions->SetOperation(4, 1, 0);
    instructions->SetOperation(5, 1, 13);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 0, 18);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 0, 29);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 1, 27);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 1, 8);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 0, 27);
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
    state.m_generation = 17;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 4;
    state.m_seed = 17115430545070166372;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00266665f;
    state.m_maxResult = 0.00020361f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
