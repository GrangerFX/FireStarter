#pragma once
#include "FireStarterState.h"

// Run date: 05/13/23 16:37:21 Pacific Daylight Time
// Run duration = 1339.168907 seconds
// Run generation = 228
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 8
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
    settings.m_seed = 8;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.038260f;
    data->d[2] = 0.195387f;
    data->d[3] = -1.123971f;
    data->d[4] = -1.371209f;
    data->d[5] = -1.535178f;
    data->d[6] = 1.973887f;
    data->d[7] = -1.584768f;
    data->d[8] = 1.904417f;
    data->d[9] = 2.618081f;
    data->d[10] = 0.606853f;
    data->d[11] = 2.217245f;
    data->d[12] = -5.400101f;
    data->d[13] = -0.002086f;
    data->d[14] = 2.246034f;
    data->d[15] = 1.920512f;
    data->d[16] = -0.692744f;
    data->d[17] = 0.028613f;
    data->d[18] = -0.773336f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.089374f;
    data->d[2] = -0.310062f;
    data->d[3] = 3.517341f;
    data->d[4] = -0.614682f;
    data->d[5] = 0.786254f;
    data->d[6] = -1.509620f;
    data->d[7] = 2.479279f;
    data->d[8] = 1.364101f;
    data->d[9] = -4.435393f;
    data->d[10] = 2.974916f;
    data->d[11] = -0.336611f;
    data->d[12] = 0.122109f;
    data->d[13] = 0.714513f;
    data->d[14] = -1.725593f;
    data->d[15] = -6.131547f;
    data->d[16] = 0.486436f;
    data->d[17] = 2.005028f;
    data->d[18] = -0.085446f;
    data->d[19] = -0.118131f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.522953f;
    data->d[2] = -0.116273f;
    data->d[3] = 7.153099f;
    data->d[4] = -0.122575f;
    data->d[5] = -1.025578f;
    data->d[6] = -3.645432f;
    data->d[7] = -1.039291f;
    data->d[8] = -3.726138f;
    data->d[9] = 0.309003f;
    data->d[10] = -1.207616f;
    data->d[11] = 0.861453f;
    data->d[12] = -0.163180f;
    data->d[13] = 0.022352f;
    data->d[14] = -72.797371f;
    data->d[15] = -4.282781f;
    data->d[16] = 0.408379f;
    data->d[17] = 0.320512f;
    data->d[18] = 0.352780f;
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
    data->d[29] = 0.000000f;
    data->d[30] = -0.000000f;
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
    instructions->SetOperation(0, 1, 16);
    instructions->SetOperation(1, 0, 23);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 1, 20);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 2);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 22);
    instructions->SetOperation(18, 0, 27);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 0, 4);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 0, 1);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 1, 4);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 1, 23);
    instructions->SetOperation(31, 1, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 228;
    state.m_index = 2;
    state.m_test = 0;
    state.m_seed = 4418534186468139945;
} // LoadState
