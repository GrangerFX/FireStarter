#pragma once
#include "FireStarterState.h"

// Run date: 03/23/25 11:15:36 Pacific Daylight Time
// Run duration = 1269.689407 seconds
// Run generation = 119
// Run evolution = 9
// Run max result = 0.00000024
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.753393f;
    data->d[1] = 0.284927f;
    data->d[2] = -0.680463f;
    data->d[3] = -0.247654f;
    data->d[4] = 4.815069f;
    data->d[5] = 0.782785f;
    data->d[6] = -2.084465f;
    data->d[7] = 1.764962f;
    data->d[8] = 0.059109f;
    data->d[9] = -0.250681f;
    data->d[10] = 1.021218f;
    data->d[11] = 1.203631f;
    data->d[12] = 0.057598f;
    data->d[13] = -1.563427f;
    data->d[14] = -0.512473f;
    data->d[15] = -1.309087f;
    data->d[16] = 1.527250f;
    data->d[17] = 0.255483f;
    data->d[18] = -0.731638f;
    data->d[19] = -0.801368f;
    data->d[20] = 0.792537f;
    data->d[21] = -0.059731f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.104357f;
    data->d[1] = 0.626228f;
    data->d[2] = -1.243877f;
    data->d[3] = 0.155242f;
    data->d[4] = -3.030651f;
    data->d[5] = -0.242528f;
    data->d[6] = 2.380495f;
    data->d[7] = -0.875087f;
    data->d[8] = -2.447578f;
    data->d[9] = 1.088746f;
    data->d[10] = -2.417171f;
    data->d[11] = 0.941002f;
    data->d[12] = 0.004282f;
    data->d[13] = -0.137361f;
    data->d[14] = 1.132524f;
    data->d[15] = 1.454087f;
    data->d[16] = 0.508127f;
    data->d[17] = 0.158972f;
    data->d[18] = 1.926475f;
    data->d[19] = -0.019858f;
    data->d[20] = 0.091324f;
    data->d[21] = -0.654823f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.428103f;
    data->d[1] = -0.260183f;
    data->d[2] = 0.792544f;
    data->d[3] = 0.719056f;
    data->d[4] = -3.895751f;
    data->d[5] = 1.524704f;
    data->d[6] = -0.209438f;
    data->d[7] = -3.394825f;
    data->d[8] = -0.672090f;
    data->d[9] = -2.323818f;
    data->d[10] = 2.086505f;
    data->d[11] = 0.049176f;
    data->d[12] = -0.092396f;
    data->d[13] = -1.070347f;
    data->d[14] = -4.164815f;
    data->d[15] = 0.447721f;
    data->d[16] = -0.048602f;
    data->d[17] = -0.711970f;
    data->d[18] = -0.246025f;
    data->d[19] = -4.009449f;
    data->d[20] = -0.345307f;
    data->d[21] = 5.415161f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 1, 6);
    instructions->SetOperation(1, 0, 14);
    instructions->SetOperation(2, 1, 29);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 29);
    instructions->SetOperation(5, 1, 16);
    instructions->SetOperation(6, 0, 29);
    instructions->SetOperation(7, 1, 17);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 1, 5);
    instructions->SetOperation(12, 1, 27);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 28);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 0, 9);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 1, 22);
    instructions->SetOperation(21, 0, 28);
    instructions->SetOperation(22, 1, 2);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 24);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 1, 26);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 1, 24);
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
    state.m_generation = 119;
    state.m_evolution = 9;
    state.m_index = 3;
    state.m_copy_index = 26;
    state.m_id = 26;
    state.m_test = 1;
    state.m_seed = 3345244282156351211;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000144f;
    state.m_optimizeValid = true;
} // LoadState
