#pragma once
#include "FireStarterState.h"

// Run date: 07/16/23 11:23:11 Pacific Daylight Time
// Run duration = 103.237885 seconds
// Run generation = 1
// Run evolution = 0
// Run result = 0.00000309
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

// Variation: 0  result = 0.00000083
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.359018f;
    data->d[1] = 1.127888f;
    data->d[2] = -1.226994f;
    data->d[3] = 0.185469f;
    data->d[4] = 2.510178f;
    data->d[5] = 0.539718f;
    data->d[6] = -0.009570f;
    data->d[7] = -6.212907f;
    data->d[8] = 0.790642f;
    data->d[9] = 1.864491f;
    data->d[10] = -0.909347f;
    data->d[11] = -1.653956f;
    data->d[12] = 2.776521f;
    data->d[13] = 2.065907f;
    data->d[14] = -1.783477f;
    data->d[15] = 1.005186f;
    data->d[16] = -1.619306f;
    data->d[17] = -0.678598f;
    data->d[18] = -1.640577f;
    data->d[19] = -0.086624f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000095
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.621759f;
    data->d[1] = -1.921646f;
    data->d[2] = -0.751158f;
    data->d[3] = -0.139801f;
    data->d[4] = -1.175857f;
    data->d[5] = -0.048136f;
    data->d[6] = -1.095703f;
    data->d[7] = 1.208507f;
    data->d[8] = -1.959494f;
    data->d[9] = 1.070788f;
    data->d[10] = -0.824899f;
    data->d[11] = 2.180789f;
    data->d[12] = 1.868530f;
    data->d[13] = 0.449535f;
    data->d[14] = -2.019456f;
    data->d[15] = -1.517632f;
    data->d[16] = -2.507055f;
    data->d[17] = 0.115301f;
    data->d[18] = -0.294640f;
    data->d[19] = 0.635870f;
    data->d[20] = -0.118132f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000309
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.332520f;
    data->d[1] = 0.870536f;
    data->d[2] = 0.647088f;
    data->d[3] = -0.775715f;
    data->d[4] = 1.003951f;
    data->d[5] = 0.067022f;
    data->d[6] = -0.390604f;
    data->d[7] = -4.513632f;
    data->d[8] = -2.881222f;
    data->d[9] = -3.325083f;
    data->d[10] = -0.956882f;
    data->d[11] = -2.909753f;
    data->d[12] = 9.560991f;
    data->d[13] = 0.225136f;
    data->d[14] = 2.455701f;
    data->d[15] = 0.683320f;
    data->d[16] = 2.553995f;
    data->d[17] = -0.962021f;
    data->d[18] = -0.477292f;
    data->d[19] = 1.165166f;
    data->d[20] = 0.523599f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000003f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 1);
    instructions->SetOperation(1, 1, 21);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 0, 23);
    instructions->SetOperation(14, 1, 24);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 19);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1;
    state.m_evolution = 0;
    state.m_index = 17;
    state.m_test = 33;
    state.m_seed = 4359178632473547582;
} // LoadState
