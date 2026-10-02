#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 16:30:11 Pacific Daylight Time
// Run duration = 1555.318797 seconds
// Run generation = 750
// Run evolution = 13
// Run max result = 0.00000012
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

// Variation: 0  result = 0.00000010
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -1.820978f;
    data->d[2] = -1.617123f;
    data->d[3] = -0.470811f;
    data->d[4] = -0.006075f;
    data->d[5] = 0.071055f;
    data->d[6] = -2.480799f;
    data->d[7] = 0.035897f;
    data->d[8] = -0.016719f;
    data->d[9] = -5.297752f;
    data->d[10] = -2.623898f;
    data->d[11] = 0.079527f;
    data->d[12] = -2.671916f;
    data->d[13] = -2.527078f;
    data->d[14] = 1.745930f;
    data->d[15] = 0.002334f;
    data->d[16] = -0.002334f;
    data->d[17] = 7.177525f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 1.090185f;
    data->d[2] = -1.399637f;
    data->d[3] = -3.406034f;
    data->d[4] = -0.090658f;
    data->d[5] = 1.325683f;
    data->d[6] = -0.056213f;
    data->d[7] = -0.140277f;
    data->d[8] = -0.019348f;
    data->d[9] = -2.672623f;
    data->d[10] = -29.841820f;
    data->d[11] = -0.017406f;
    data->d[12] = 0.341164f;
    data->d[13] = -1.107080f;
    data->d[14] = 2.143717f;
    data->d[15] = 0.354617f;
    data->d[16] = -0.478953f;
    data->d[17] = 0.950103f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.731415f;
    data->d[2] = 0.349891f;
    data->d[3] = -0.342740f;
    data->d[4] = 0.276458f;
    data->d[5] = -1.888068f;
    data->d[6] = -1.293269f;
    data->d[7] = 0.029121f;
    data->d[8] = -0.430346f;
    data->d[9] = 0.093718f;
    data->d[10] = -0.908629f;
    data->d[11] = -0.025264f;
    data->d[12] = -2.481606f;
    data->d[13] = 0.768985f;
    data->d[14] = -0.485684f;
    data->d[15] = 0.159129f;
    data->d[16] = 0.005254f;
    data->d[17] = 3.185242f;
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
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 1, 0);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 1, 21);
    instructions->SetOperation(13, 1, 26);
    instructions->SetOperation(14, 0, 21);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 1, 0);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 21);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 0, 28);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 1, 0);
    instructions->SetOperation(29, 1, 18);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 0, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 750;
    state.m_evolution = 13;
    state.m_index = 15;
    state.m_copy_index = 75;
    state.m_id = 75;
    state.m_test = 3;
    state.m_seed = 10826852244403444611;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000014f;
    state.m_optimizeValid = true;
} // LoadState
