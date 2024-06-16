#pragma once
#include "FireStarterState.h"

// Run date: 06/15/24 17:57:07 Pacific Daylight Time
// Run duration = 63.132745 seconds
// Run generation = 7
// Run evolution = 1
// Run max result = 0.00126201
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
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
    settings.m_registers = 30;
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00054300
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 4.081605f;
    data->d[1] = 0.678320f;
    data->d[2] = 2.481338f;
    data->d[3] = 1.339819f;
    data->d[4] = 0.049582f;
    data->d[5] = -0.631831f;
    data->d[6] = 0.454620f;
    data->d[7] = -0.306874f;
    data->d[8] = -0.895055f;
    data->d[9] = 1.973723f;
    data->d[10] = 1.565426f;
    data->d[11] = -0.377069f;
    data->d[12] = -0.418740f;
    data->d[13] = 0.806189f;
    data->d[14] = -0.756716f;
    data->d[15] = 1.599300f;
    data->d[16] = 2.304268f;
    data->d[17] = 1.730757f;
    data->d[18] = -4.932302f;
    data->d[19] = -1.040547f;
    data->d[20] = -0.595655f;
    data->d[21] = 1.000244f;
    data->d[22] = 4.755714f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000543f;
} // LoadVariation0

// Variation: 1  result = 0.00019404
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.496093f;
    data->d[1] = 0.166586f;
    data->d[2] = -1.798972f;
    data->d[3] = 0.881192f;
    data->d[4] = 1.149298f;
    data->d[5] = -2.780736f;
    data->d[6] = -0.258575f;
    data->d[7] = -1.162123f;
    data->d[8] = -0.618716f;
    data->d[9] = 1.242514f;
    data->d[10] = -1.422246f;
    data->d[11] = -0.586796f;
    data->d[12] = 1.325976f;
    data->d[13] = -0.454227f;
    data->d[14] = 2.252730f;
    data->d[15] = -0.067197f;
    data->d[16] = 0.961274f;
    data->d[17] = 0.270485f;
    data->d[18] = -5.330507f;
    data->d[19] = 1.240464f;
    data->d[20] = -3.145052f;
    data->d[21] = -0.183382f;
    data->d[22] = -6.305476f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000194f;
} // LoadVariation1

// Variation: 2  result = 0.00126201
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 3.431663f;
    data->d[1] = 0.612661f;
    data->d[2] = -0.461170f;
    data->d[3] = 0.781295f;
    data->d[4] = -0.868054f;
    data->d[5] = -0.934609f;
    data->d[6] = 0.861122f;
    data->d[7] = -0.652442f;
    data->d[8] = -0.721270f;
    data->d[9] = 1.238647f;
    data->d[10] = 0.070581f;
    data->d[11] = 0.122971f;
    data->d[12] = -2.127566f;
    data->d[13] = -0.295682f;
    data->d[14] = -0.088574f;
    data->d[15] = -3.031141f;
    data->d[16] = -0.661191f;
    data->d[17] = 7.592816f;
    data->d[18] = -4.125913f;
    data->d[19] = -0.756607f;
    data->d[20] = 7.959517f;
    data->d[21] = 1.276405f;
    data->d[22] = 14.601345f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.001262f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.001262f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 1, 15);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 7;
    state.m_evolution = 1;
    state.m_index = 10;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 3879871234414712982;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.001270f;
    state.m_maxResult = 0.001262f;
    state.m_evolveWeight = 0.005081f;
    state.m_optimizeValid = true;
} // LoadState
