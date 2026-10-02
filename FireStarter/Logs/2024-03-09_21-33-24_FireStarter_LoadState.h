#pragma once
#include "FireStarterState.h"

// Run date: 03/09/24 21:33:24 Pacific Standard Time
// Run duration = 1682.245547 seconds
// Run generation = 142
// Run evolution = 15
// Run max result = 0.00000012
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
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.647074f;
    data->d[1] = 5.174437f;
    data->d[2] = -0.034019f;
    data->d[3] = -0.216166f;
    data->d[4] = 2.048219f;
    data->d[5] = -7.078367f;
    data->d[6] = 0.002295f;
    data->d[7] = 1.903356f;
    data->d[8] = -3.318799f;
    data->d[9] = 129465.367188f;
    data->d[10] = -0.013226f;
    data->d[11] = 3.726420f;
    data->d[12] = -3.315003f;
    data->d[13] = -0.010175f;
    data->d[14] = -1.865908f;
    data->d[15] = -0.087441f;
    data->d[16] = 2.144575f;
    data->d[17] = -0.137556f;
    data->d[18] = 0.137556f;
    data->d[19] = 1.060872f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.603631f;
    data->d[1] = 1.865618f;
    data->d[2] = 0.123274f;
    data->d[3] = -1.003455f;
    data->d[4] = -1.718791f;
    data->d[5] = 1.880755f;
    data->d[6] = -0.106792f;
    data->d[7] = 1.299165f;
    data->d[8] = -1.094862f;
    data->d[9] = -0.716768f;
    data->d[10] = 0.610123f;
    data->d[11] = 1.469846f;
    data->d[12] = -0.006056f;
    data->d[13] = -0.000581f;
    data->d[14] = -1.620812f;
    data->d[15] = -3.097602f;
    data->d[16] = -0.082588f;
    data->d[17] = -0.024124f;
    data->d[18] = -0.010056f;
    data->d[19] = 1.728049f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.300195f;
    data->d[1] = -0.785908f;
    data->d[2] = -0.244957f;
    data->d[3] = -1.449242f;
    data->d[4] = 1.604283f;
    data->d[5] = -3.026109f;
    data->d[6] = 0.016151f;
    data->d[7] = -0.043499f;
    data->d[8] = 0.752520f;
    data->d[9] = 0.381348f;
    data->d[10] = -0.380839f;
    data->d[11] = 0.967998f;
    data->d[12] = 0.491140f;
    data->d[13] = -1.318610f;
    data->d[14] = -0.471190f;
    data->d[15] = -0.232464f;
    data->d[16] = -1.456320f;
    data->d[17] = 0.380025f;
    data->d[18] = -0.134647f;
    data->d[19] = 1.066924f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 7);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 6);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 1, 26);
    instructions->SetOperation(20, 1, 24);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 1, 23);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 26);
    instructions->SetOperation(28, 1, 22);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 20);
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
    state.m_generation = 142;
    state.m_evolution = 15;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 8;
    state.m_copy_index = 8;
    state.m_id = 8;
    state.m_test = 0;
    state.m_seed = 15064525947251939301;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 142.000000f;
    state.m_optimizeValid = true;
} // LoadState
