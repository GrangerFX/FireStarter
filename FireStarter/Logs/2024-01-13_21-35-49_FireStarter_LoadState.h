#pragma once
#include "FireStarterState.h"

// Run date: 01/13/24 21:35:49 Pacific Standard Time
// Run duration = 3261.782590 seconds
// Run generation = 77
// Run evolution = 8
// Run max result = 0.00000022
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
// Run tests = 1
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    settings.m_tests = 1;
    settings.m_states = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.038175f;
    data->d[1] = -0.896394f;
    data->d[2] = 2.923607f;
    data->d[3] = 0.356384f;
    data->d[4] = -1.746195f;
    data->d[5] = 0.542214f;
    data->d[6] = -0.264671f;
    data->d[7] = -0.289920f;
    data->d[8] = -1.492324f;
    data->d[9] = 2.613958f;
    data->d[10] = -2.905812f;
    data->d[11] = -0.363266f;
    data->d[12] = 0.004841f;
    data->d[13] = 667.582947f;
    data->d[14] = -4.864509f;
    data->d[15] = -0.000597f;
    data->d[16] = -0.689333f;
    data->d[17] = -0.085811f;
    data->d[18] = 2.775221f;
    data->d[19] = 4.019798f;
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
    data->d[0] = 0.945512f;
    data->d[1] = -0.507217f;
    data->d[2] = 1.482219f;
    data->d[3] = 1.077666f;
    data->d[4] = -2.183653f;
    data->d[5] = 0.624608f;
    data->d[6] = -0.002727f;
    data->d[7] = -2.701568f;
    data->d[8] = -0.166694f;
    data->d[9] = 1.092065f;
    data->d[10] = -0.679165f;
    data->d[11] = -0.590107f;
    data->d[12] = 1.535422f;
    data->d[13] = -0.763565f;
    data->d[14] = 0.205716f;
    data->d[15] = 0.003191f;
    data->d[16] = -0.323965f;
    data->d[17] = -199.678360f;
    data->d[18] = -0.123255f;
    data->d[19] = 0.951681f;
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

// Variation: 2  result = 0.00000022
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.817464f;
    data->d[1] = -0.177664f;
    data->d[2] = -0.845345f;
    data->d[3] = -1.988742f;
    data->d[4] = -0.677296f;
    data->d[5] = 1.463391f;
    data->d[6] = 0.059957f;
    data->d[7] = -1.055384f;
    data->d[8] = 1.296307f;
    data->d[9] = -0.805373f;
    data->d[10] = 1.372694f;
    data->d[11] = 0.654837f;
    data->d[12] = 0.000001f;
    data->d[13] = 2.630903f;
    data->d[14] = 0.315598f;
    data->d[15] = 0.169770f;
    data->d[16] = -0.524999f;
    data->d[17] = 1.776575f;
    data->d[18] = 0.592099f;
    data->d[19] = -1.202663f;
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
    instructions->SetOperation(0, 0, 28);
    instructions->SetOperation(1, 0, 19);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 20);
    instructions->SetOperation(7, 1, 25);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 1, 17);
    instructions->SetOperation(11, 1, 16);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 1, 26);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 20);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 1, 25);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 1, 14);
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
    state.m_evolution = 8;
    state.m_children = 70;
    state.m_index = 55;
    state.m_copy_index = 414;
    state.m_id = 283;
    state.m_test = 0;
    state.m_seed = 18050311677156405306;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000003f;
    state.m_optimizeValid = true;
} // LoadState
