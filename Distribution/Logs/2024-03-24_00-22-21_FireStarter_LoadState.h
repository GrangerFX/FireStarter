#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 00:22:21 Pacific Daylight Time
// Run duration = 21169.992375 seconds
// Run generation = 1596
// Run evolution = 10
// Run max result = 0.00000027
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
    settings.m_evolveSeed = 2;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.484835f;
    data->d[1] = -0.567289f;
    data->d[2] = -1.316377f;
    data->d[3] = -0.000000f;
    data->d[4] = -12.622142f;
    data->d[5] = -0.864068f;
    data->d[6] = -1.457280f;
    data->d[7] = -0.464761f;
    data->d[8] = -1.045171f;
    data->d[9] = 0.111807f;
    data->d[10] = 2.408402f;
    data->d[11] = 2.145059f;
    data->d[12] = 1.025780f;
    data->d[13] = 1.512410f;
    data->d[14] = 0.403601f;
    data->d[15] = -1.097167f;
    data->d[16] = 0.100989f;
    data->d[17] = 0.642991f;
    data->d[18] = 1.348658f;
    data->d[19] = -0.000000f;
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
    data->d[0] = 1.353899f;
    data->d[1] = 0.273026f;
    data->d[2] = 21.664198f;
    data->d[3] = 23.792246f;
    data->d[4] = 0.000000f;
    data->d[5] = -1.142461f;
    data->d[6] = -0.407657f;
    data->d[7] = 1.666125f;
    data->d[8] = -0.419402f;
    data->d[9] = -0.097797f;
    data->d[10] = 1.903986f;
    data->d[11] = 1.323785f;
    data->d[12] = -0.476516f;
    data->d[13] = -1.634298f;
    data->d[14] = 1.543619f;
    data->d[15] = 1.352348f;
    data->d[16] = -0.597639f;
    data->d[17] = -0.745058f;
    data->d[18] = 1.022955f;
    data->d[19] = -0.118132f;
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

// Variation: 2  result = 0.00000027
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.411986f;
    data->d[1] = 0.985241f;
    data->d[2] = 3.682810f;
    data->d[3] = -0.000000f;
    data->d[4] = -22.867579f;
    data->d[5] = -1.062658f;
    data->d[6] = -1.186072f;
    data->d[7] = 0.380850f;
    data->d[8] = 0.305249f;
    data->d[9] = -0.540532f;
    data->d[10] = -3.502260f;
    data->d[11] = 4.400171f;
    data->d[12] = 1.938283f;
    data->d[13] = -0.548288f;
    data->d[14] = 0.055081f;
    data->d[15] = -1.471170f;
    data->d[16] = 0.940931f;
    data->d[17] = 1.158902f;
    data->d[18] = -0.714071f;
    data->d[19] = 0.523599f;
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
    instructions->SetOperation(0, 0, 20);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 1, 23);
    instructions->SetOperation(3, 0, 4);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 17);
    instructions->SetOperation(9, 0, 28);
    instructions->SetOperation(10, 0, 22);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 1, 11);
    instructions->SetOperation(21, 0, 24);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 1, 1);
    instructions->SetOperation(28, 1, 1);
    instructions->SetOperation(29, 1, 12);
    instructions->SetOperation(30, 0, 22);
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
    state.m_generation = 1596;
    state.m_evolution = 10;
    state.m_index = 12;
    state.m_copy_index = 79;
    state.m_id = 79;
    state.m_test = 15;
    state.m_seed = 4453478224789515775;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000298f;
    state.m_optimizeValid = true;
} // LoadState
