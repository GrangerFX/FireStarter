#pragma once
#include "FireStarterState.h"

// Run date: 05/14/23 12:00:58 Pacific Daylight Time
// Run duration = 1169.097397 seconds
// Run generation = 268
// Run result = 0.00000030
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 48
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 1
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_seed = 48;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 100;
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000030
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.511592f;
    data->d[1] = 1.607213f;
    data->d[2] = 1.732220f;
    data->d[3] = -0.306803f;
    data->d[4] = 1.969656f;
    data->d[5] = 0.930734f;
    data->d[6] = 0.779911f;
    data->d[7] = -1.923737f;
    data->d[8] = 0.460727f;
    data->d[9] = -0.007449f;
    data->d[10] = 1.450585f;
    data->d[11] = 0.302388f;
    data->d[12] = -2.037422f;
    data->d[13] = -1.736047f;
    data->d[14] = 1.274963f;
    data->d[15] = 0.110603f;
    data->d[16] = 1.294636f;
    data->d[17] = 0.636269f;
    data->d[18] = -1.834478f;
    data->d[19] = -0.992380f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.997892f;
    data->d[1] = 3.084144f;
    data->d[2] = -1.438011f;
    data->d[3] = -0.249158f;
    data->d[4] = -1.465293f;
    data->d[5] = -0.373675f;
    data->d[6] = -1.487853f;
    data->d[7] = -0.162971f;
    data->d[8] = -0.103375f;
    data->d[9] = 0.031040f;
    data->d[10] = -0.401512f;
    data->d[11] = 0.469497f;
    data->d[12] = -1.787597f;
    data->d[13] = 0.906272f;
    data->d[14] = 0.915554f;
    data->d[15] = 0.812311f;
    data->d[16] = 6.249681f;
    data->d[17] = 0.922237f;
    data->d[18] = 0.281869f;
    data->d[19] = 1.532776f;
    data->d[20] = -0.118132f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000030
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.817150f;
    data->d[1] = -2.139293f;
    data->d[2] = 1.154458f;
    data->d[3] = -0.734826f;
    data->d[4] = -0.278208f;
    data->d[5] = -1.626366f;
    data->d[6] = -2.666371f;
    data->d[7] = -1.293577f;
    data->d[8] = -5.733393f;
    data->d[9] = -0.149594f;
    data->d[10] = 0.020127f;
    data->d[11] = 0.229265f;
    data->d[12] = -5.551959f;
    data->d[13] = 0.759577f;
    data->d[14] = 12.622966f;
    data->d[15] = -0.065711f;
    data->d[16] = 2.001765f;
    data->d[17] = -3.175770f;
    data->d[18] = 1.648734f;
    data->d[19] = 0.286506f;
    data->d[20] = 0.523599f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = -42201683186052843888412332559599403008.000000f;
    data->d[31] = 0.000000f;
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
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 0, 15);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 0, 18);
    instructions->SetOperation(16, 1, 25);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 16);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 0, 9);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 268;
    state.m_index = 1;
    state.m_test = 0;
    state.m_seed = 636064089989035013;
} // LoadState
