#pragma once
#include "FireStarterState.h"

// Run date: 07/02/23 16:56:02 Pacific Daylight Time
// Run duration = 1535.484367 seconds
// Run generation = 116
// Run evolution = 0
// Run result = 0.00000119
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
// Run processes = 0
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
    settings.m_processes = 0;
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

// Variation: 0  result = 0.00000066
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.066512f;
    data->d[1] = -1.075080f;
    data->d[2] = 1.057617f;
    data->d[3] = -0.736437f;
    data->d[4] = -1.725805f;
    data->d[5] = 1.829724f;
    data->d[6] = -0.026010f;
    data->d[7] = 0.659563f;
    data->d[8] = -1.005868f;
    data->d[9] = -0.345041f;
    data->d[10] = -0.095669f;
    data->d[11] = 0.139672f;
    data->d[12] = 3.682868f;
    data->d[13] = -0.321470f;
    data->d[14] = 1.672746f;
    data->d[15] = -0.408680f;
    data->d[16] = 2.411938f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000119
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.673832f;
    data->d[1] = -1.416827f;
    data->d[2] = -0.352345f;
    data->d[3] = -1.348404f;
    data->d[4] = -1.650432f;
    data->d[5] = 3.283301f;
    data->d[6] = 0.146035f;
    data->d[7] = -0.696032f;
    data->d[8] = -0.635635f;
    data->d[9] = -0.042695f;
    data->d[10] = -0.721918f;
    data->d[11] = -0.359471f;
    data->d[12] = -1.076809f;
    data->d[13] = -0.202696f;
    data->d[14] = 0.685361f;
    data->d[15] = -1.745739f;
    data->d[16] = 20.815998f;
    data->d[17] = -0.118132f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000119
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.319161f;
    data->d[1] = -1.298832f;
    data->d[2] = 0.200893f;
    data->d[3] = -1.889016f;
    data->d[4] = 1.341710f;
    data->d[5] = -1.560463f;
    data->d[6] = -0.373259f;
    data->d[7] = -0.064904f;
    data->d[8] = -0.204194f;
    data->d[9] = 1.927182f;
    data->d[10] = -0.024840f;
    data->d[11] = 0.418972f;
    data->d[12] = -1.298206f;
    data->d[13] = 2.792081f;
    data->d[14] = -1.561365f;
    data->d[15] = -1.847813f;
    data->d[16] = -0.494175f;
    data->d[17] = 0.523599f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 1, 4);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 0, 13);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 2);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 116;
    state.m_evolution = 0;
    state.m_index = 39;
    state.m_test = 24;
    state.m_seed = 15708048111944458985;
} // LoadState
