#pragma once
#include "FireStarterState.h"

// Run date: 02/24/24 20:28:17 Pacific Standard Time
// Run duration = 28155.971014 seconds
// Run generation = 56
// Run evolution = 6
// Run max result = 0.00005310
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 128;
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

// Variation: 0  result = 0.00001436
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.191994f;
    data->d[1] = 1.540238f;
    data->d[2] = 0.097318f;
    data->d[3] = 1.608115f;
    data->d[4] = -0.000006f;
    data->d[5] = 1.689211f;
    data->d[6] = -3.062533f;
    data->d[7] = -0.619179f;
    data->d[8] = -2.351024f;
    data->d[9] = -2.969728f;
    data->d[10] = -1.016279f;
    data->d[11] = -0.006341f;
    data->d[12] = -149.110840f;
    data->d[13] = 0.868615f;
    data->d[14] = -0.385607f;
    data->d[15] = 0.646048f;
    data->d[16] = -0.001235f;
    data->d[17] = -6.639731f;
    data->d[18] = 0.258037f;
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
} // LoadVariation0

// Variation: 1  result = 0.00001788
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.645348f;
    data->d[1] = -1.211473f;
    data->d[2] = 0.890091f;
    data->d[3] = -0.094682f;
    data->d[4] = -0.598751f;
    data->d[5] = -0.294961f;
    data->d[6] = -2.119727f;
    data->d[7] = -0.145608f;
    data->d[8] = 1.279487f;
    data->d[9] = -3.668844f;
    data->d[10] = 0.571353f;
    data->d[11] = 0.008162f;
    data->d[12] = -487.939941f;
    data->d[13] = -0.351054f;
    data->d[14] = -1.014265f;
    data->d[15] = -2.609730f;
    data->d[16] = -1.887836f;
    data->d[17] = 0.005149f;
    data->d[18] = 0.055901f;
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
    *(result->MinResult()) = 0.000018f;
} // LoadVariation1

// Variation: 2  result = 0.00005310
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.095808f;
    data->d[1] = -1.831789f;
    data->d[2] = 0.955937f;
    data->d[3] = 0.519510f;
    data->d[4] = 0.000012f;
    data->d[5] = -2.818239f;
    data->d[6] = -0.728182f;
    data->d[7] = -0.297182f;
    data->d[8] = 1.106021f;
    data->d[9] = 2.291559f;
    data->d[10] = -0.642875f;
    data->d[11] = -0.416050f;
    data->d[12] = 0.976316f;
    data->d[13] = 0.486131f;
    data->d[14] = 1.303645f;
    data->d[15] = -0.559709f;
    data->d[16] = 0.000403f;
    data->d[17] = -17.805527f;
    data->d[18] = -1.112436f;
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
    *(result->MinResult()) = 0.000053f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000053f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 13);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 5);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 0, 20);
    instructions->SetOperation(19, 0, 19);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 21);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 1, 24);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 0, 10);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 0, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 56;
    state.m_evolution = 6;
    state.m_children0 = 56;
    state.m_children1 = 11;
    state.m_index = 0;
    state.m_copy_index = 7;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 5318593262286344404;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000243f;
    state.m_maxResult = 0.000053f;
    state.m_evolveWeight = 0.000651f;
    state.m_optimizeValid = true;
} // LoadState
