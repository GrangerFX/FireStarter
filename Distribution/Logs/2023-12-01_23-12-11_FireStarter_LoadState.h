#pragma once
#include "FireStarterState.h"

// Run date: 12/01/23 23:12:11 Pacific Standard Time
// Run duration = 2959.352807 seconds
// Run generation = 58
// Run evolution = 17
// Run max result = 0.00000036
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
// Run seeds = 64
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
    settings.m_seeds = 64;
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
    data->d[0] = 0.871381f;
    data->d[1] = 0.419826f;
    data->d[2] = -1.008071f;
    data->d[3] = 1.555952f;
    data->d[4] = -3.344178f;
    data->d[5] = -0.429137f;
    data->d[6] = -0.382245f;
    data->d[7] = -0.000004f;
    data->d[8] = 12.482420f;
    data->d[9] = -0.822431f;
    data->d[10] = -1.040193f;
    data->d[11] = -0.027144f;
    data->d[12] = 1.623116f;
    data->d[13] = -1.427299f;
    data->d[14] = 0.540155f;
    data->d[15] = -1.167705f;
    data->d[16] = -0.254579f;
    data->d[17] = 0.517316f;
    data->d[18] = -1.465241f;
    data->d[19] = -0.478291f;
    data->d[20] = 1.673240f;
    data->d[21] = 1.037304f;
    data->d[22] = -0.000000f;
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
    data->d[0] = -1.233355f;
    data->d[1] = -1.955395f;
    data->d[2] = -1.167107f;
    data->d[3] = -0.750715f;
    data->d[4] = -5.205745f;
    data->d[5] = -1.960637f;
    data->d[6] = -0.235260f;
    data->d[7] = -17.279692f;
    data->d[8] = 0.000000f;
    data->d[9] = -3.179151f;
    data->d[10] = 1.922439f;
    data->d[11] = 0.030089f;
    data->d[12] = -0.724264f;
    data->d[13] = 2.818248f;
    data->d[14] = -3.322684f;
    data->d[15] = 0.084573f;
    data->d[16] = -0.316123f;
    data->d[17] = -1.331174f;
    data->d[18] = 1.307652f;
    data->d[19] = -0.557897f;
    data->d[20] = -2.829096f;
    data->d[21] = 0.218211f;
    data->d[22] = -0.118132f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.236967f;
    data->d[1] = 1.265296f;
    data->d[2] = 0.709614f;
    data->d[3] = -0.642157f;
    data->d[4] = -0.811342f;
    data->d[5] = -0.258519f;
    data->d[6] = 0.958424f;
    data->d[7] = -2.046527f;
    data->d[8] = 0.007967f;
    data->d[9] = 1.445886f;
    data->d[10] = -1.089292f;
    data->d[11] = -0.438451f;
    data->d[12] = -1.281422f;
    data->d[13] = -1.574407f;
    data->d[14] = -0.567774f;
    data->d[15] = -0.369929f;
    data->d[16] = 0.087875f;
    data->d[17] = 1.375498f;
    data->d[18] = 1.498300f;
    data->d[19] = 0.336495f;
    data->d[20] = 5.037892f;
    data->d[21] = -1.743873f;
    data->d[22] = 0.523599f;
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
    instructions->SetOperation(0, 0, 26);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 1, 10);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 1, 11);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 1, 12);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 1, 14);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 1, 27);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 0, 21);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 1, 13);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 1, 8);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 0, 24);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 1, 28);
    instructions->SetOperation(30, 0, 19);
    instructions->SetOperation(31, 1, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 58;
    state.m_evolution = 17;
    state.m_index = 0;
    state.m_copy_index = 3;
    state.m_id = 36;
    state.m_copy_id = 40;
    state.m_test = 0;
    state.m_seed = 10632633776638625948;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
