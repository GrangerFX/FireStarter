#pragma once
#include "FireStarterState.h"

// Run date: 03/10/24 22:38:35 Pacific Daylight Time
// Run duration = 30634.144225 seconds
// Run generation = 140
// Run evolution = 16
// Run max result = 0.00000167
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.552022f;
    data->d[2] = -0.725507f;
    data->d[3] = -0.233287f;
    data->d[4] = 23.518221f;
    data->d[5] = -0.314552f;
    data->d[6] = -1.711642f;
    data->d[7] = 1.344803f;
    data->d[8] = -0.028713f;
    data->d[9] = -0.767560f;
    data->d[10] = 0.885200f;
    data->d[11] = 0.886379f;
    data->d[12] = 1.430007f;
    data->d[13] = 0.130450f;
    data->d[14] = -0.000000f;
    data->d[15] = 1.079872f;
    data->d[16] = -0.868782f;
    data->d[17] = -3.802048f;
    data->d[18] = -0.000000f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090666f;
    data->d[1] = 0.091252f;
    data->d[2] = -1.287402f;
    data->d[3] = 0.017041f;
    data->d[4] = -24537.421875f;
    data->d[5] = 0.287967f;
    data->d[6] = 1.984699f;
    data->d[7] = 1.251350f;
    data->d[8] = 0.145096f;
    data->d[9] = -1.896060f;
    data->d[10] = 0.386781f;
    data->d[11] = -0.144549f;
    data->d[12] = 6.229936f;
    data->d[13] = 0.000001f;
    data->d[14] = 4.353113f;
    data->d[15] = 1.804909f;
    data->d[16] = -0.943788f;
    data->d[17] = -3.046569f;
    data->d[18] = -0.118140f;
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

// Variation: 2  result = 0.00000167
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.153478f;
    data->d[2] = 0.932393f;
    data->d[3] = -1.710872f;
    data->d[4] = 1.773597f;
    data->d[5] = 0.640604f;
    data->d[6] = -1.170382f;
    data->d[7] = -0.350647f;
    data->d[8] = 0.026843f;
    data->d[9] = -0.310635f;
    data->d[10] = -1.830894f;
    data->d[11] = 0.443979f;
    data->d[12] = -1.629327f;
    data->d[13] = -0.000000f;
    data->d[14] = -7.565507f;
    data->d[15] = -0.578117f;
    data->d[16] = 0.581100f;
    data->d[17] = 4.241301f;
    data->d[18] = 0.523599f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 1, 26);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 1, 5);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 18);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 0, 14);
    instructions->SetOperation(31, 1, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 140;
    state.m_evolution = 16;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 2;
    state.m_copy_index = 2;
    state.m_id = 2;
    state.m_test = 15;
    state.m_seed = 5665361350767919994;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000002f;
    state.m_evolveWeight = 140.000000f;
    state.m_optimizeValid = true;
} // LoadState
