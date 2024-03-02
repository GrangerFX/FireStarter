#pragma once
#include "FireStarterState.h"

// Run date: 03/01/24 18:39:08 Pacific Standard Time
// Run duration = 15.197465 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00033659
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 2
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 8
// Run units = 1
// Run states = 11000
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 0

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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 11000;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 0;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00009197
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.174339f;
    data->d[1] = 2.114508f;
    data->d[2] = -1.269454f;
    data->d[3] = -0.295109f;
    data->d[4] = -0.032846f;
    data->d[5] = 0.997300f;
    data->d[6] = -0.000381f;
    data->d[7] = 1.598042f;
    data->d[8] = -1.061725f;
    data->d[9] = 0.628373f;
    data->d[10] = 1.153600f;
    data->d[11] = 1.055899f;
    data->d[12] = 8.477252f;
    data->d[13] = -0.005827f;
    data->d[14] = 0.233888f;
    data->d[15] = -3.112344f;
    data->d[16] = 3.731081f;
    data->d[17] = -3.058589f;
    data->d[18] = 3.058498f;
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
    *(result->MinResult()) = 0.000092f;
} // LoadVariation0

// Variation: 1  result = 0.00033659
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.282280f;
    data->d[1] = -1.179726f;
    data->d[2] = 0.672522f;
    data->d[3] = 0.174823f;
    data->d[4] = 0.005131f;
    data->d[5] = 0.989876f;
    data->d[6] = 0.063499f;
    data->d[7] = 1.181055f;
    data->d[8] = 1.748679f;
    data->d[9] = 1.345988f;
    data->d[10] = -1.156501f;
    data->d[11] = -0.059791f;
    data->d[12] = -0.319536f;
    data->d[13] = 2.417502f;
    data->d[14] = -1.828775f;
    data->d[15] = -0.143260f;
    data->d[16] = 1.574926f;
    data->d[17] = 0.326056f;
    data->d[18] = 0.525881f;
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
    *(result->MinResult()) = 0.000337f;
} // LoadVariation1

// Variation: 2  result = 0.00031656
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.225927f;
    data->d[1] = -1.914890f;
    data->d[2] = 1.410602f;
    data->d[3] = 0.390022f;
    data->d[4] = 0.979094f;
    data->d[5] = -1.453492f;
    data->d[6] = 0.371691f;
    data->d[7] = -1.759365f;
    data->d[8] = 0.112928f;
    data->d[9] = 2.657168f;
    data->d[10] = 1.368518f;
    data->d[11] = 0.252790f;
    data->d[12] = 0.001182f;
    data->d[13] = -5.954259f;
    data->d[14] = 1.995340f;
    data->d[15] = 9.930208f;
    data->d[16] = 4.538896f;
    data->d[17] = 0.946390f;
    data->d[18] = -0.946073f;
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
    *(result->MinResult()) = 0.000317f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000337f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 7);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 1, 5);
    instructions->SetOperation(5, 0, 26);
    instructions->SetOperation(6, 1, 25);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 15);
    instructions->SetOperation(9, 0, 23);
    instructions->SetOperation(10, 0, 17);
    instructions->SetOperation(11, 0, 2);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 27);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 1, 0);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 1, 22);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 1, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 761807918016009098;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000337f;
    state.m_evolveWeight = -1.000000f;
    state.m_optimizeValid = true;
} // LoadState
