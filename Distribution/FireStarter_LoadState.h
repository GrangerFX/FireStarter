#pragma once
#include "FireStarterState.h"

// Run date: 03/04/24 22:29:09 Pacific Standard Time
// Run duration = 9635.864898 seconds
// Run generation = 1004
// Run evolution = 26
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
// Run evolveSeed = 1
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
    settings.m_evolveSeed = 1;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.879032f;
    data->d[1] = -0.026840f;
    data->d[2] = -0.124987f;
    data->d[3] = -0.110734f;
    data->d[4] = -0.974296f;
    data->d[5] = 0.511980f;
    data->d[6] = -1.921165f;
    data->d[7] = -1.552057f;
    data->d[8] = -1.461348f;
    data->d[9] = 0.045365f;
    data->d[10] = 0.172736f;
    data->d[11] = -7.480327f;
    data->d[12] = -0.002301f;
    data->d[13] = -1.940601f;
    data->d[14] = 0.046526f;
    data->d[15] = -182008.265625f;
    data->d[16] = -1.659124f;
    data->d[17] = -2.335399f;
    data->d[18] = -1.736128f;
    data->d[19] = 0.762485f;
    data->d[20] = -0.000000f;
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
    data->d[0] = -0.497437f;
    data->d[1] = -2.000187f;
    data->d[2] = 0.146486f;
    data->d[3] = -0.739520f;
    data->d[4] = -0.003333f;
    data->d[5] = -68346.992188f;
    data->d[6] = 1.294496f;
    data->d[7] = -1.354777f;
    data->d[8] = 0.093438f;
    data->d[9] = 0.237502f;
    data->d[10] = -0.548565f;
    data->d[11] = -1.082290f;
    data->d[12] = 0.189010f;
    data->d[13] = -0.205086f;
    data->d[14] = -1.649610f;
    data->d[15] = 4.812947f;
    data->d[16] = 0.922244f;
    data->d[17] = -1.215304f;
    data->d[18] = 0.564406f;
    data->d[19] = -0.172333f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.139805f;
    data->d[1] = 0.523944f;
    data->d[2] = -1.106366f;
    data->d[3] = -2.175376f;
    data->d[4] = -0.406624f;
    data->d[5] = 2.382398f;
    data->d[6] = -0.416140f;
    data->d[7] = -1.009387f;
    data->d[8] = 1.427307f;
    data->d[9] = 1.772341f;
    data->d[10] = -1.913651f;
    data->d[11] = 0.000118f;
    data->d[12] = -0.145803f;
    data->d[13] = -0.337989f;
    data->d[14] = 0.417399f;
    data->d[15] = -1.874833f;
    data->d[16] = -1.806026f;
    data->d[17] = -0.527491f;
    data->d[18] = -0.116928f;
    data->d[19] = 2.108806f;
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
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 1, 15);
    instructions->SetOperation(3, 1, 22);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 3);
    instructions->SetOperation(7, 1, 4);
    instructions->SetOperation(8, 0, 9);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 0, 14);
    instructions->SetOperation(11, 1, 18);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 1, 3);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 1, 7);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 1, 28);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 1, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1004;
    state.m_evolution = 26;
    state.m_children0 = 1004;
    state.m_children1 = 25;
    state.m_index = 6;
    state.m_copy_index = 6;
    state.m_id = 6;
    state.m_test = 0;
    state.m_seed = 4451293060530848690;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 1004.000000f;
    state.m_optimizeValid = true;
} // LoadState
