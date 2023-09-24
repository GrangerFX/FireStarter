#pragma once
#include "FireStarterState.h"

// Run date: 09/24/23 10:41:33 Pacific Daylight Time
// Run duration = 13403.841257 seconds
// Run generation = 58
// Run evolution = 9
// Run result = 0.00002337
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00002337
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.828277f;
    data->d[1] = 1.595418f;
    data->d[2] = -2.554657f;
    data->d[3] = 0.473804f;
    data->d[4] = -1.725403f;
    data->d[5] = -0.940593f;
    data->d[6] = 0.060932f;
    data->d[7] = 0.352960f;
    data->d[8] = -0.722187f;
    data->d[9] = 0.204700f;
    data->d[10] = 0.309024f;
    data->d[11] = -0.885428f;
    data->d[12] = -0.570944f;
    data->d[13] = 0.787436f;
    data->d[14] = -0.011290f;
    data->d[15] = 2.402206f;
    data->d[16] = 0.898716f;
    data->d[17] = -0.722109f;
    data->d[18] = -2.738622f;
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
    *(result->MinResult()) = 0.000023f;
} // LoadVariation0

// Variation: 1  result = 0.00001395
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.421665f;
    data->d[1] = 1.176029f;
    data->d[2] = 1.274131f;
    data->d[3] = 0.449515f;
    data->d[4] = 0.088868f;
    data->d[5] = -1.624475f;
    data->d[6] = -1.575276f;
    data->d[7] = -0.207193f;
    data->d[8] = 0.210738f;
    data->d[9] = 2.996912f;
    data->d[10] = 1.125024f;
    data->d[11] = 1.503824f;
    data->d[12] = -0.256907f;
    data->d[13] = 3.704362f;
    data->d[14] = 0.599152f;
    data->d[15] = 0.019546f;
    data->d[16] = -0.767772f;
    data->d[17] = 0.104660f;
    data->d[18] = 0.868560f;
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
    *(result->MinResult()) = 0.000014f;
} // LoadVariation1

// Variation: 2  result = 0.00002027
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.004768f;
    data->d[1] = 0.432355f;
    data->d[2] = 2.136442f;
    data->d[3] = -0.493953f;
    data->d[4] = -0.780201f;
    data->d[5] = -0.900533f;
    data->d[6] = 0.360595f;
    data->d[7] = 0.606032f;
    data->d[8] = -0.504506f;
    data->d[9] = -1.338203f;
    data->d[10] = 0.221172f;
    data->d[11] = 0.262227f;
    data->d[12] = -0.034890f;
    data->d[13] = -1.246803f;
    data->d[14] = 0.204835f;
    data->d[15] = -2.026085f;
    data->d[16] = 1.040264f;
    data->d[17] = -0.738420f;
    data->d[18] = 1.709875f;
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
    *(result->MinResult()) = 0.000020f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000023f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 1, 25);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 1, 24);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 22);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 58;
    state.m_evolution = 9;
    state.m_age = 28;
    state.m_index = 23;
    state.m_id = 37;
    state.m_copy_id = 43;
    state.m_test = 13;
    state.m_seed = 3080865254342391800;
    state.m_maxResult = 0.000023f;
    state.m_optimizePass = false;
} // LoadState
