#pragma once
#include "FireStarterState.h"

// Run date: 09/24/23 10:24:27 Pacific Daylight Time
// Run duration = 903.963571 seconds
// Run generation = 77
// Run evolution = 17
// Run result = 0.00001591
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
// Run units = 4
// Run processes = 4
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
    settings.m_units = 4;
    settings.m_processes = 4;
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

// Variation: 0  result = 0.00001591
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.300940f;
    data->d[1] = 1.777727f;
    data->d[2] = 0.240955f;
    data->d[3] = 0.646529f;
    data->d[4] = -0.228360f;
    data->d[5] = -1.910536f;
    data->d[6] = -0.054798f;
    data->d[7] = -0.963724f;
    data->d[8] = 1.107840f;
    data->d[9] = -1.352306f;
    data->d[10] = 2.182495f;
    data->d[11] = 0.717210f;
    data->d[12] = 3.225994f;
    data->d[13] = 5.030968f;
    data->d[14] = -7.694762f;
    data->d[15] = 6.130600f;
    data->d[16] = -0.000000f;
    data->d[17] = 3.099473f;
    data->d[18] = -0.008546f;
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
    *(result->MinResult()) = 0.000016f;
} // LoadVariation0

// Variation: 1  result = 0.00000513
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.189510f;
    data->d[1] = -2.465492f;
    data->d[2] = 0.038253f;
    data->d[3] = -3.258600f;
    data->d[4] = -0.935277f;
    data->d[5] = 1.164064f;
    data->d[6] = -0.140969f;
    data->d[7] = -3.970101f;
    data->d[8] = -2.924521f;
    data->d[9] = -0.165865f;
    data->d[10] = -2.006371f;
    data->d[11] = -1.921537f;
    data->d[12] = 0.042706f;
    data->d[13] = 0.549036f;
    data->d[14] = 3.046239f;
    data->d[15] = -0.873839f;
    data->d[16] = -1.658167f;
    data->d[17] = 2.428109f;
    data->d[18] = 1.664725f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000644
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.350559f;
    data->d[1] = -1.095013f;
    data->d[2] = 0.317225f;
    data->d[3] = -1.958011f;
    data->d[4] = 3.003955f;
    data->d[5] = -1.375551f;
    data->d[6] = 0.406612f;
    data->d[7] = 2.818676f;
    data->d[8] = -0.042917f;
    data->d[9] = 1.014857f;
    data->d[10] = 1.410944f;
    data->d[11] = 1.860728f;
    data->d[12] = -1.723397f;
    data->d[13] = -0.694419f;
    data->d[14] = -2.411777f;
    data->d[15] = -4.211426f;
    data->d[16] = -0.736746f;
    data->d[17] = -7.829131f;
    data->d[18] = -0.008950f;
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
    *(result->MinResult()) = 0.000006f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000016f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 1, 23);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 17);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 1, 16);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 1, 22);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 77;
    state.m_evolution = 17;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 11;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 5381090526487582272;
    state.m_maxResult = 0.000016f;
    state.m_optimizePass = true;
} // LoadState
