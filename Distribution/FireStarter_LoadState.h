#pragma once
#include "FireStarterState.h"

// Run date: 05/20/23 10:33:52 Pacific Daylight Time
// Run duration = 1117.949262 seconds
// Run generation = 24
// Run evolution = 0
// Run result = 0.00012076
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 60
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
    settings.m_seed = 60;
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

// Variation: 0  result = 0.00004464
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141601f;
    data->d[1] = 0.544053f;
    data->d[2] = -0.626109f;
    data->d[3] = -0.346148f;
    data->d[4] = -0.459549f;
    data->d[5] = 14.849460f;
    data->d[6] = -0.094043f;
    data->d[7] = -1.549976f;
    data->d[8] = -1.840412f;
    data->d[9] = 0.748913f;
    data->d[10] = 18.987806f;
    data->d[11] = 10.422504f;
    data->d[12] = -0.031278f;
    data->d[13] = -11.219724f;
    data->d[14] = 3.206889f;
    data->d[15] = 0.996820f;
    data->d[16] = 0.015821f;
    data->d[17] = 0.557687f;
    data->d[18] = -3.207385f;
    data->d[19] = -13.091589f;
    data->d[20] = -41.989769f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000015f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000045f;
} // LoadVariation0

// Variation: 1  result = 0.00001538
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090675f;
    data->d[1] = 0.127650f;
    data->d[2] = 2.699929f;
    data->d[3] = -0.155737f;
    data->d[4] = 2.213184f;
    data->d[5] = -0.172264f;
    data->d[6] = 2.538290f;
    data->d[7] = 1.031165f;
    data->d[8] = -1.230468f;
    data->d[9] = 0.926623f;
    data->d[10] = 1.619058f;
    data->d[11] = 4.204015f;
    data->d[12] = 1.580316f;
    data->d[13] = -36.116131f;
    data->d[14] = 1.727932f;
    data->d[15] = -14.324789f;
    data->d[16] = -0.032178f;
    data->d[17] = 0.230985f;
    data->d[18] = 10.283544f;
    data->d[19] = -4.550131f;
    data->d[20] = 46.673328f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000121f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000015f;
} // LoadVariation1

// Variation: 2  result = 0.00012076
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617979f;
    data->d[1] = 0.988110f;
    data->d[2] = 0.283991f;
    data->d[3] = -0.209887f;
    data->d[4] = -2.881037f;
    data->d[5] = -0.147578f;
    data->d[6] = 0.796609f;
    data->d[7] = -2.952121f;
    data->d[8] = -0.773168f;
    data->d[9] = -1.200629f;
    data->d[10] = -2.092944f;
    data->d[11] = -1.949415f;
    data->d[12] = 0.509269f;
    data->d[13] = -2.898793f;
    data->d[14] = 0.567434f;
    data->d[15] = 0.149582f;
    data->d[16] = 0.405491f;
    data->d[17] = 3.272062f;
    data->d[18] = 0.205129f;
    data->d[19] = -3.098152f;
    data->d[20] = 1.159026f;
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
    *(result->MinResult()) = 0.000121f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000121f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 0, 25);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 0, 16);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 15);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 0, 11);
    instructions->SetOperation(8, 1, 16);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 1, 26);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 1);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 16);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 0, 3);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 1, 0);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 0, 21);
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
    state.m_generation = 24;
    state.m_evolution = 0;
    state.m_index = 3;
    state.m_test = 0;
    state.m_seed = 13321844206964506690;
} // LoadState
