#pragma once
#include "FireStarterState.h"

// Run date: 01/14/24 21:23:32 Pacific Standard Time
// Run duration = 614.970054 seconds
// Run generation = 12
// Run evolution = 5
// Run max result = 0.00000030
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

// Variation: 0  result = 0.00000030
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.178599f;
    data->d[2] = 0.886989f;
    data->d[3] = 1.556380f;
    data->d[4] = -0.991373f;
    data->d[5] = 0.277530f;
    data->d[6] = -0.743174f;
    data->d[7] = 2.043015f;
    data->d[8] = 0.505666f;
    data->d[9] = -0.969476f;
    data->d[10] = -0.645475f;
    data->d[11] = -0.753747f;
    data->d[12] = -1.610084f;
    data->d[13] = 0.000004f;
    data->d[14] = 0.000010f;
    data->d[15] = -0.884553f;
    data->d[16] = 3.319810f;
    data->d[17] = -4.348210f;
    data->d[18] = -337972.562500f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.205429f;
    data->d[2] = -2.127072f;
    data->d[3] = -1.483093f;
    data->d[4] = -0.037544f;
    data->d[5] = -1.835678f;
    data->d[6] = 0.949824f;
    data->d[7] = 0.716075f;
    data->d[8] = 0.011558f;
    data->d[9] = 1.684259f;
    data->d[10] = 1.551215f;
    data->d[11] = 16.855646f;
    data->d[12] = 14506.262695f;
    data->d[13] = -0.721225f;
    data->d[14] = 0.299851f;
    data->d[15] = -7.609130f;
    data->d[16] = -8.394701f;
    data->d[17] = -0.017382f;
    data->d[18] = 0.001452f;
    data->d[19] = -0.118132f;
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

// Variation: 2  result = 0.00000030
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.214256f;
    data->d[2] = -3.395207f;
    data->d[3] = -1.231381f;
    data->d[4] = 1.004684f;
    data->d[5] = -1.184394f;
    data->d[6] = 0.989880f;
    data->d[7] = -1.512354f;
    data->d[8] = -1.454772f;
    data->d[9] = -0.214104f;
    data->d[10] = -0.163737f;
    data->d[11] = -1.214049f;
    data->d[12] = -1.408461f;
    data->d[13] = 0.000041f;
    data->d[14] = -0.654793f;
    data->d[15] = 3.353719f;
    data->d[16] = -2.038527f;
    data->d[17] = 2.538351f;
    data->d[18] = 4.408134f;
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
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 8);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 21);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 18);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 1, 22);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 0, 16);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 1, 17);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 12;
    state.m_evolution = 5;
    state.m_children0 = 208;
    state.m_children1 = 46;
    state.m_index = 45;
    state.m_copy_index = 117;
    state.m_id = 57;
    state.m_test = 3;
    state.m_seed = 8773714186545103937;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000001f;
    state.m_optimizeValid = true;
} // LoadState
