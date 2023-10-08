#pragma once
#include "FireStarterState.h"

// Run date: 10/07/23 20:36:30 Pacific Daylight Time
// Run duration = 1566.622714 seconds
// Run generation = 17
// Run evolution = 8
// Run result = 0.00000039
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
// Run tests = 1
// Run units = 1
// Run processes = 0
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
    settings.m_tests = 1;
    settings.m_units = 1;
    settings.m_processes = 0;
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

// Variation: 0  result = 0.00000039
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.192376f;
    data->d[1] = 0.314898f;
    data->d[2] = -0.766097f;
    data->d[3] = 0.378153f;
    data->d[4] = 1.071394f;
    data->d[5] = 1.405753f;
    data->d[6] = 0.999632f;
    data->d[7] = -1.537140f;
    data->d[8] = -2.230414f;
    data->d[9] = -0.000354f;
    data->d[10] = -0.020419f;
    data->d[11] = -0.740100f;
    data->d[12] = 1.180616f;
    data->d[13] = -0.131336f;
    data->d[14] = 2.008231f;
    data->d[15] = 0.397702f;
    data->d[16] = -0.371761f;
    data->d[17] = 0.680934f;
    data->d[18] = 0.691259f;
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
    data->d[0] = -2.561135f;
    data->d[1] = 0.693013f;
    data->d[2] = -1.659229f;
    data->d[3] = 1.099139f;
    data->d[4] = 0.100204f;
    data->d[5] = 0.547638f;
    data->d[6] = 0.689059f;
    data->d[7] = -0.449213f;
    data->d[8] = 0.815681f;
    data->d[9] = 0.603523f;
    data->d[10] = 0.145976f;
    data->d[11] = 3.084528f;
    data->d[12] = -0.005165f;
    data->d[13] = -10.453000f;
    data->d[14] = 1.817865f;
    data->d[15] = 0.293070f;
    data->d[16] = 0.456834f;
    data->d[17] = 0.203621f;
    data->d[18] = 0.609711f;
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

// Variation: 2  result = 0.00000039
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.332845f;
    data->d[1] = 0.148023f;
    data->d[2] = -0.642449f;
    data->d[3] = -0.383131f;
    data->d[4] = -1.694008f;
    data->d[5] = 1.195266f;
    data->d[6] = 0.999840f;
    data->d[7] = -0.990453f;
    data->d[8] = -3.736607f;
    data->d[9] = -0.000065f;
    data->d[10] = -0.036786f;
    data->d[11] = -1.837234f;
    data->d[12] = 0.264458f;
    data->d[13] = -0.245315f;
    data->d[14] = 1.660880f;
    data->d[15] = 1.771418f;
    data->d[16] = 2.165829f;
    data->d[17] = -0.991591f;
    data->d[18] = -0.042133f;
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
    instructions->SetOperation(0, 1, 8);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 24);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 4);
    instructions->SetOperation(8, 1, 3);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 1, 20);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 24);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 1, 3);
    instructions->SetOperation(31, 1, 7);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 17;
    state.m_evolution = 8;
    state.m_age = 0;
    state.m_index = 0;
    state.m_id = 39;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 2423884504270165347;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
} // LoadState
