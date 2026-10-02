#pragma once
#include "FireStarterState.h"

// Run date: 03/15/24 12:25:47 Pacific Daylight Time
// Run duration = 9270.118133 seconds
// Run generation = 260
// Run evolution = 8
// Run max result = 0.00000852
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000656
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.246249f;
    data->d[1] = -0.618176f;
    data->d[2] = 0.849613f;
    data->d[3] = 1.805722f;
    data->d[4] = -0.355316f;
    data->d[5] = -0.423031f;
    data->d[6] = 0.005774f;
    data->d[7] = -19.589849f;
    data->d[8] = -2.042372f;
    data->d[9] = 0.153887f;
    data->d[10] = 1.488823f;
    data->d[11] = 1.478623f;
    data->d[12] = -2.364877f;
    data->d[13] = 0.051364f;
    data->d[14] = 0.512078f;
    data->d[15] = -1.321774f;
    data->d[16] = 1.590139f;
    data->d[17] = 0.402423f;
    data->d[18] = -0.152094f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000007f;
} // LoadVariation0

// Variation: 1  result = 0.00000852
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.087708f;
    data->d[1] = 1.073065f;
    data->d[2] = -1.417301f;
    data->d[3] = 1.799874f;
    data->d[4] = -1.788621f;
    data->d[5] = -0.058943f;
    data->d[6] = 0.838416f;
    data->d[7] = 0.244833f;
    data->d[8] = 2.148085f;
    data->d[9] = 2.097387f;
    data->d[10] = 0.875837f;
    data->d[11] = -1.000925f;
    data->d[12] = 0.710933f;
    data->d[13] = 1.704473f;
    data->d[14] = -1.602190f;
    data->d[15] = 0.028466f;
    data->d[16] = -0.125803f;
    data->d[17] = -0.198034f;
    data->d[18] = -0.143992f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000009f;
} // LoadVariation1

// Variation: 2  result = 0.00000751
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.272328f;
    data->d[1] = 0.180393f;
    data->d[2] = 1.474753f;
    data->d[3] = -2.331048f;
    data->d[4] = 1.613885f;
    data->d[5] = 0.278621f;
    data->d[6] = 0.566534f;
    data->d[7] = 3.400468f;
    data->d[8] = -0.545410f;
    data->d[9] = -5.602544f;
    data->d[10] = -2.789020f;
    data->d[11] = 0.776784f;
    data->d[12] = 1.179813f;
    data->d[13] = 4.964038f;
    data->d[14] = 6.317672f;
    data->d[15] = 0.751809f;
    data->d[16] = 97.492043f;
    data->d[17] = 0.012187f;
    data->d[18] = -0.154698f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000008f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000009f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 15);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 1, 16);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 1, 15);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 0, 28);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 5);
    instructions->SetOperation(18, 0, 10);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 1, 0);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 1, 3);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 2);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 260;
    state.m_evolution = 8;
    state.m_index = 0;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 4;
    state.m_seed = 11578816588897978550;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000019f;
    state.m_maxResult = 0.000009f;
    state.m_evolveWeight = 0.002472f;
    state.m_optimizeValid = true;
} // LoadState
