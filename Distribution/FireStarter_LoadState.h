#pragma once
#include "FireStarterState.h"

// Run date: 03/03/24 20:41:34 Pacific Standard Time
// Run duration = 3680.265043 seconds
// Run generation = 358
// Run evolution = 21
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
// Run evolveSeed = 2
// Run optimizeSeed = 0
// Run tests = 0
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
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.513343f;
    data->d[1] = -0.113220f;
    data->d[2] = -0.938336f;
    data->d[3] = -1.642495f;
    data->d[4] = 1.624540f;
    data->d[5] = 0.139098f;
    data->d[6] = -2.287211f;
    data->d[7] = 0.732139f;
    data->d[8] = 6.340987f;
    data->d[9] = 1.592516f;
    data->d[10] = 0.000580f;
    data->d[11] = 61.402477f;
    data->d[12] = 1.447344f;
    data->d[13] = 0.580420f;
    data->d[14] = -1.583045f;
    data->d[15] = -0.910759f;
    data->d[16] = -1.149814f;
    data->d[17] = 3.800696f;
    data->d[18] = -0.494534f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.956270f;
    data->d[1] = -1.090718f;
    data->d[2] = 0.171025f;
    data->d[3] = 1.822200f;
    data->d[4] = 1.451015f;
    data->d[5] = -0.558011f;
    data->d[6] = 0.480013f;
    data->d[7] = 1.141211f;
    data->d[8] = 28.998383f;
    data->d[9] = 9.473629f;
    data->d[10] = -0.000654f;
    data->d[11] = -0.128352f;
    data->d[12] = 0.189258f;
    data->d[13] = -3.623782f;
    data->d[14] = -0.725092f;
    data->d[15] = 1.664342f;
    data->d[16] = -1.109924f;
    data->d[17] = -1.113230f;
    data->d[18] = 0.280017f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.888231f;
    data->d[1] = 1.363973f;
    data->d[2] = 0.800402f;
    data->d[3] = -0.287112f;
    data->d[4] = 0.457485f;
    data->d[5] = 0.147564f;
    data->d[6] = 6.821572f;
    data->d[7] = -0.352704f;
    data->d[8] = 9.131987f;
    data->d[9] = 7.741916f;
    data->d[10] = -0.001435f;
    data->d[11] = -3.363473f;
    data->d[12] = 1.641628f;
    data->d[13] = 2.486667f;
    data->d[14] = 0.910699f;
    data->d[15] = 7.002070f;
    data->d[16] = 0.233510f;
    data->d[17] = 0.879434f;
    data->d[18] = -0.273102f;
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
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 1, 27);
    instructions->SetOperation(5, 1, 12);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 22);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 1, 24);
    instructions->SetOperation(30, 1, 2);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 358;
    state.m_evolution = 21;
    state.m_children0 = 358;
    state.m_children1 = 5;
    state.m_index = 1;
    state.m_copy_index = 1;
    state.m_id = 1;
    state.m_test = 0;
    state.m_seed = 17978886749385877965;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 358.000000f;
    state.m_optimizeValid = true;
} // LoadState
