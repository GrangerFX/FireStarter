#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 19:42:10 Pacific Daylight Time
// Run duration = 5328.683531 seconds
// Run generation = 708
// Run evolution = 11
// Run max result = 0.00000015
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
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -8.565926f;
    data->d[1] = -0.214683f;
    data->d[2] = -1.164510f;
    data->d[3] = -0.972030f;
    data->d[4] = 1.198437f;
    data->d[5] = 0.529893f;
    data->d[6] = -0.017974f;
    data->d[7] = -5.883608f;
    data->d[8] = 54.951641f;
    data->d[9] = -0.005202f;
    data->d[10] = -2.314139f;
    data->d[11] = -1.814171f;
    data->d[12] = 1.997096f;
    data->d[13] = -0.702821f;
    data->d[14] = -1.883443f;
    data->d[15] = 2.394190f;
    data->d[16] = -56.402695f;
    data->d[17] = 0.069186f;
    data->d[18] = 1.736692f;
    data->d[19] = -0.304127f;
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
    data->d[0] = -0.132731f;
    data->d[1] = -0.280980f;
    data->d[2] = 0.831117f;
    data->d[3] = 2.092953f;
    data->d[4] = -0.075978f;
    data->d[5] = 0.622216f;
    data->d[6] = 2.077711f;
    data->d[7] = -0.203485f;
    data->d[8] = -0.590848f;
    data->d[9] = 0.095564f;
    data->d[10] = 1.716534f;
    data->d[11] = -0.557998f;
    data->d[12] = 1.795671f;
    data->d[13] = -2.037793f;
    data->d[14] = 2.817981f;
    data->d[15] = 2.350476f;
    data->d[16] = 154.306915f;
    data->d[17] = -0.000003f;
    data->d[18] = -0.606296f;
    data->d[19] = -0.240272f;
    data->d[20] = -0.118132f;
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

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.543232f;
    data->d[1] = -0.324971f;
    data->d[2] = -0.300675f;
    data->d[3] = 0.291267f;
    data->d[4] = -3.249076f;
    data->d[5] = 0.498028f;
    data->d[6] = 1.051333f;
    data->d[7] = 1.019053f;
    data->d[8] = 12.963850f;
    data->d[9] = 0.000390f;
    data->d[10] = -0.581052f;
    data->d[11] = 0.628067f;
    data->d[12] = 10.563917f;
    data->d[13] = 2.001168f;
    data->d[14] = -2.196311f;
    data->d[15] = 0.502476f;
    data->d[16] = 0.655689f;
    data->d[17] = 2.054044f;
    data->d[18] = 1.052586f;
    data->d[19] = -0.331763f;
    data->d[20] = 0.523599f;
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
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 0, 15);
    instructions->SetOperation(2, 1, 19);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 26);
    instructions->SetOperation(9, 1, 21);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 1, 13);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 0, 1);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 0, 24);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 708;
    state.m_evolution = 11;
    state.m_index = 7;
    state.m_copy_index = 467;
    state.m_id = 467;
    state.m_test = 13;
    state.m_seed = 5913359016317975172;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000006f;
    state.m_optimizeValid = true;
} // LoadState
