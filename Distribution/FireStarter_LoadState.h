#pragma once
#include "FireStarterState.h"

// Run date: 07/08/23 14:47:55 Pacific Daylight Time
// Run duration = 183.831797 seconds
// Run generation = 16
// Run evolution = 0
// Run result = 0.00000659
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 8;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000659
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.096248f;
    data->d[1] = 0.302372f;
    data->d[2] = 1.379452f;
    data->d[3] = 0.000000f;
    data->d[4] = -1.838956f;
    data->d[5] = -0.006899f;
    data->d[6] = -2.184453f;
    data->d[7] = -0.029872f;
    data->d[8] = 2.475588f;
    data->d[9] = -1.059608f;
    data->d[10] = 0.015256f;
    data->d[11] = -0.085152f;
    data->d[12] = -1.775183f;
    data->d[13] = 0.589225f;
    data->d[14] = -1.045816f;
    data->d[15] = -1.349699f;
    data->d[16] = -0.154787f;
    data->d[17] = -1.655708f;
    data->d[18] = 0.433393f;
    data->d[19] = 0.031288f;
    data->d[20] = 1.936762f;
    data->d[21] = -1.386784f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000007f;
} // LoadVariation0

// Variation: 1  result = 0.00000483
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.101760f;
    data->d[1] = -0.314504f;
    data->d[2] = -0.043611f;
    data->d[3] = -0.118132f;
    data->d[4] = -2.853209f;
    data->d[5] = -0.008676f;
    data->d[6] = 0.077084f;
    data->d[7] = 1.337805f;
    data->d[8] = -1.430119f;
    data->d[9] = -1.685806f;
    data->d[10] = -0.179106f;
    data->d[11] = 0.016724f;
    data->d[12] = 1.977553f;
    data->d[13] = 0.951521f;
    data->d[14] = 0.121689f;
    data->d[15] = 3.857953f;
    data->d[16] = -0.200786f;
    data->d[17] = -1.584514f;
    data->d[18] = 2.852601f;
    data->d[19] = -0.564177f;
    data->d[20] = -0.067034f;
    data->d[21] = 0.373278f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000620
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.806813f;
    data->d[1] = 2.112231f;
    data->d[2] = -0.511961f;
    data->d[3] = 0.523604f;
    data->d[4] = 0.877629f;
    data->d[5] = 0.077099f;
    data->d[6] = 0.458544f;
    data->d[7] = -0.528079f;
    data->d[8] = -3.690628f;
    data->d[9] = -1.418844f;
    data->d[10] = 0.007450f;
    data->d[11] = 0.011521f;
    data->d[12] = -1.660735f;
    data->d[13] = 0.283553f;
    data->d[14] = -0.183981f;
    data->d[15] = 2.067699f;
    data->d[16] = -0.382820f;
    data->d[17] = -1.819627f;
    data->d[18] = -2.448494f;
    data->d[19] = 2.470001f;
    data->d[20] = -1.594824f;
    data->d[21] = -1.543405f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000007f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 1, 24);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 1, 7);
    instructions->SetOperation(13, 0, 18);
    instructions->SetOperation(14, 0, 15);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 1, 13);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 16;
    state.m_evolution = 0;
    state.m_index = 56;
    state.m_test = 23;
    state.m_seed = 1412046921778590109;
} // LoadState
