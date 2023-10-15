#pragma once
#include "FireStarterState.h"

// Run date: 10/15/23 10:56:36 Pacific Daylight Time
// Run duration = 14241.037977 seconds
// Run generation = 37
// Run evolution = 7
// Run result = 0.00000023
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000021
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.009899f;
    data->d[1] = -0.999499f;
    data->d[2] = 0.081139f;
    data->d[3] = 0.677058f;
    data->d[4] = 2.328737f;
    data->d[5] = 13.658149f;
    data->d[6] = -0.330422f;
    data->d[7] = -4.279247f;
    data->d[8] = 0.278863f;
    data->d[9] = -0.494483f;
    data->d[10] = -0.531611f;
    data->d[11] = 0.244325f;
    data->d[12] = -0.068306f;
    data->d[13] = 0.606574f;
    data->d[14] = 0.851984f;
    data->d[15] = -0.559014f;
    data->d[16] = 0.725857f;
    data->d[17] = 59.965321f;
    data->d[18] = 1.848332f;
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
    data->d[0] = -1.623545f;
    data->d[1] = -0.394868f;
    data->d[2] = 0.139916f;
    data->d[3] = 1.396511f;
    data->d[4] = -9.308390f;
    data->d[5] = 1.404547f;
    data->d[6] = 1.216541f;
    data->d[7] = 42.881252f;
    data->d[8] = 0.139091f;
    data->d[9] = 0.246703f;
    data->d[10] = -0.512524f;
    data->d[11] = 2.561413f;
    data->d[12] = -0.098127f;
    data->d[13] = -0.086810f;
    data->d[14] = -1.443395f;
    data->d[15] = -0.385218f;
    data->d[16] = 0.831771f;
    data->d[17] = 3.908463f;
    data->d[18] = 0.768705f;
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

// Variation: 2  result = 0.00000023
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.931957f;
    data->d[1] = 7.346881f;
    data->d[2] = -0.016594f;
    data->d[3] = 0.599567f;
    data->d[4] = 1.433846f;
    data->d[5] = 2.695724f;
    data->d[6] = 1.083644f;
    data->d[7] = -1.648560f;
    data->d[8] = 1.237167f;
    data->d[9] = 0.320072f;
    data->d[10] = -1.882395f;
    data->d[11] = -3.256705f;
    data->d[12] = 0.254290f;
    data->d[13] = -0.036242f;
    data->d[14] = -3.388764f;
    data->d[15] = 1.633627f;
    data->d[16] = -1.841858f;
    data->d[17] = 1.747293f;
    data->d[18] = -0.094277f;
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
    instructions->SetOperation(0, 0, 28);
    instructions->SetOperation(1, 1, 6);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 1, 27);
    instructions->SetOperation(4, 1, 23);
    instructions->SetOperation(5, 1, 18);
    instructions->SetOperation(6, 1, 10);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 1, 5);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 28);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 0, 3);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 0, 24);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 24);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 1, 4);
    instructions->SetOperation(25, 1, 12);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 15);
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
    state.m_generation = 37;
    state.m_evolution = 7;
    state.m_age = 5;
    state.m_index = 12;
    state.m_id = 57;
    state.m_copy_id = 63;
    state.m_test = 14;
    state.m_seed = 3629504792739456242;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = false;
} // LoadState
