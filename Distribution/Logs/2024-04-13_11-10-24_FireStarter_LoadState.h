#pragma once
#include "FireStarterState.h"

// Run date: 04/13/24 11:10:24 Pacific Daylight Time
// Run duration = 300.800390 seconds
// Run generation = 214
// Run evolution = 6
// Run max result = 0.00000191
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
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
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000119
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.497559f;
    data->d[1] = 0.577027f;
    data->d[2] = 1.725323f;
    data->d[3] = -1.179421f;
    data->d[4] = 1.840704f;
    data->d[5] = -2.067305f;
    data->d[6] = -0.500007f;
    data->d[7] = -0.963904f;
    data->d[8] = -1.513339f;
    data->d[9] = 0.025591f;
    data->d[10] = 0.024509f;
    data->d[11] = -1.302355f;
    data->d[12] = -0.745895f;
    data->d[13] = 2.507418f;
    data->d[14] = 0.823828f;
    data->d[15] = 0.707303f;
    data->d[16] = -1.308009f;
    data->d[17] = 0.786188f;
    data->d[18] = -1.281332f;
    data->d[19] = -1.716287f;
    data->d[20] = -0.633665f;
    data->d[21] = 0.896649f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000191
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.205983f;
    data->d[1] = -0.374461f;
    data->d[2] = -1.217164f;
    data->d[3] = -0.414184f;
    data->d[4] = 1.659335f;
    data->d[5] = 2.166671f;
    data->d[6] = -0.378940f;
    data->d[7] = -0.611248f;
    data->d[8] = 0.021507f;
    data->d[9] = 0.364043f;
    data->d[10] = -0.023326f;
    data->d[11] = -1.111979f;
    data->d[12] = 0.615084f;
    data->d[13] = 7.079610f;
    data->d[14] = 1.795040f;
    data->d[15] = -0.309397f;
    data->d[16] = 2.118835f;
    data->d[17] = 1.235686f;
    data->d[18] = 0.545655f;
    data->d[19] = 0.649433f;
    data->d[20] = 2.502350f;
    data->d[21] = 0.349272f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000095
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.641621f;
    data->d[1] = 0.332056f;
    data->d[2] = 1.916010f;
    data->d[3] = -1.127305f;
    data->d[4] = 0.659388f;
    data->d[5] = -1.222863f;
    data->d[6] = -0.969364f;
    data->d[7] = 1.669389f;
    data->d[8] = -0.902537f;
    data->d[9] = 5.032470f;
    data->d[10] = 1.001668f;
    data->d[11] = -0.371475f;
    data->d[12] = 36.113998f;
    data->d[13] = 0.006150f;
    data->d[14] = 4.186949f;
    data->d[15] = 0.024960f;
    data->d[16] = 1.173548f;
    data->d[17] = 1.140118f;
    data->d[18] = -0.987944f;
    data->d[19] = 2.062578f;
    data->d[20] = -0.494172f;
    data->d[21] = 1.166106f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
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
    instructions->SetOperation(0, 0, 14);
    instructions->SetOperation(1, 0, 21);
    instructions->SetOperation(2, 1, 23);
    instructions->SetOperation(3, 1, 29);
    instructions->SetOperation(4, 1, 16);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 0, 25);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 1, 26);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 1, 18);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 27);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 214;
    state.m_evolution = 6;
    state.m_index = 13;
    state.m_copy_index = 27;
    state.m_id = 27;
    state.m_test = 0;
    state.m_seed = 12194792361649072176;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000002f;
    state.m_evolveWeight = 0.000473f;
    state.m_optimizeValid = true;
} // LoadState
