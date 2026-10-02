#pragma once
#include "FireStarterState.h"

// Run date: 01/05/24 17:28:21 Pacific Standard Time
// Run duration = 5611.463372 seconds
// Run generation = 92
// Run evolution = 11
// Run max result = 0.00000215
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.561739f;
    data->d[1] = -1.579854f;
    data->d[2] = 0.639060f;
    data->d[3] = 0.070734f;
    data->d[4] = 0.312013f;
    data->d[5] = 0.000030f;
    data->d[6] = -0.036204f;
    data->d[7] = -1.259757f;
    data->d[8] = -0.245676f;
    data->d[9] = 0.530782f;
    data->d[10] = 1.716046f;
    data->d[11] = -0.582737f;
    data->d[12] = 1.510504f;
    data->d[13] = -1.294920f;
    data->d[14] = 1.346297f;
    data->d[15] = -5132.004395f;
    data->d[16] = 2.080803f;
    data->d[17] = -2.066599f;
    data->d[18] = 0.239362f;
    data->d[19] = 0.000001f;
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

// Variation: 1  result = 0.00000215
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.605779f;
    data->d[1] = -3.696376f;
    data->d[2] = -0.282197f;
    data->d[3] = -0.249691f;
    data->d[4] = -0.381926f;
    data->d[5] = -1.787439f;
    data->d[6] = -1.931011f;
    data->d[7] = -1.011935f;
    data->d[8] = 0.600789f;
    data->d[9] = -0.447026f;
    data->d[10] = 1.167503f;
    data->d[11] = -0.855111f;
    data->d[12] = 0.626141f;
    data->d[13] = -5.033473f;
    data->d[14] = 0.218915f;
    data->d[15] = 0.329120f;
    data->d[16] = 2.126056f;
    data->d[17] = 0.031822f;
    data->d[18] = -144.684799f;
    data->d[19] = -0.118151f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000010
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.254915f;
    data->d[1] = -1.363078f;
    data->d[2] = -0.239573f;
    data->d[3] = -1.595857f;
    data->d[4] = -0.035800f;
    data->d[5] = -0.007706f;
    data->d[6] = 0.068548f;
    data->d[7] = -14.992945f;
    data->d[8] = -0.601349f;
    data->d[9] = 0.144781f;
    data->d[10] = 0.408261f;
    data->d[11] = -2.449415f;
    data->d[12] = 0.692118f;
    data->d[13] = -1.314943f;
    data->d[14] = -1.642004f;
    data->d[15] = -13.068728f;
    data->d[16] = 4.159033f;
    data->d[17] = 0.155010f;
    data->d[18] = 3.667406f;
    data->d[19] = 0.523598f;
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
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 1, 24);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 11);
    instructions->SetOperation(7, 0, 20);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 1, 0);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 1, 22);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 0, 27);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 1, 5);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 1, 2);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 0, 21);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 92;
    state.m_evolution = 11;
    state.m_children = 4294967295;
    state.m_index = 0;
    state.m_copy_index = 7;
    state.m_id = 216;
    state.m_test = 3;
    state.m_seed = 5387327049620901430;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000007f;
    state.m_maxResult = 0.000002f;
    state.m_optimizeValid = true;
} // LoadState
