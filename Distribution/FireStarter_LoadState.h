#pragma once
#include "FireStarterState.h"

// Run date: 03/03/24 14:20:39 Pacific Standard Time
// Run duration = 835.505652 seconds
// Run generation = 64
// Run evolution = 7
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
// Run tests = 0
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
    settings.m_tests = 0;
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
    data->d[0] = -3.141593f;
    data->d[1] = 0.102371f;
    data->d[2] = 0.853508f;
    data->d[3] = -0.253631f;
    data->d[4] = 0.763752f;
    data->d[5] = -2.850899f;
    data->d[6] = 1.980956f;
    data->d[7] = 0.651574f;
    data->d[8] = -1.233862f;
    data->d[9] = 1.330960f;
    data->d[10] = 1.012341f;
    data->d[11] = 0.010807f;
    data->d[12] = 0.218049f;
    data->d[13] = 2.167926f;
    data->d[14] = 1.657965f;
    data->d[15] = 2.974377f;
    data->d[16] = 3.407769f;
    data->d[17] = -4.103904f;
    data->d[18] = 1.365745f;
    data->d[19] = -1.360493f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.225965f;
    data->d[2] = 0.396014f;
    data->d[3] = 0.962825f;
    data->d[4] = -2.221969f;
    data->d[5] = 1.315792f;
    data->d[6] = 0.225905f;
    data->d[7] = -0.508752f;
    data->d[8] = 1.351143f;
    data->d[9] = -2.747945f;
    data->d[10] = 0.060775f;
    data->d[11] = 0.057330f;
    data->d[12] = -0.000917f;
    data->d[13] = 596.060303f;
    data->d[14] = -0.313870f;
    data->d[15] = 0.000334f;
    data->d[16] = -5.766585f;
    data->d[17] = -0.583378f;
    data->d[18] = -1.330135f;
    data->d[19] = 0.393535f;
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

// Variation: 2  result = 0.00000030
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -1.161433f;
    data->d[2] = -0.201431f;
    data->d[3] = -0.201957f;
    data->d[4] = 2.090930f;
    data->d[5] = -1.551242f;
    data->d[6] = -0.008895f;
    data->d[7] = 1.508192f;
    data->d[8] = 0.621383f;
    data->d[9] = 0.856891f;
    data->d[10] = 0.228415f;
    data->d[11] = 0.384486f;
    data->d[12] = 0.050835f;
    data->d[13] = -15.981111f;
    data->d[14] = -2.225323f;
    data->d[15] = -0.297708f;
    data->d[16] = 0.182859f;
    data->d[17] = -4.629623f;
    data->d[18] = -1.151830f;
    data->d[19] = 0.564875f;
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
    instructions->SetOperation(0, 1, 16);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 17);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 0, 26);
    instructions->SetOperation(31, 1, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 64;
    state.m_evolution = 7;
    state.m_children0 = 64;
    state.m_children1 = 47;
    state.m_index = 9;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 12618882097150949897;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 64.000000f;
    state.m_optimizeValid = true;
} // LoadState
