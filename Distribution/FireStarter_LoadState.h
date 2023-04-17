#pragma once
#include "FireStarterState.h"

// Run date: 04/17/23 12:09:45 Pacific Daylight Time
// Run duration = 815.475277 seconds
// Run generation = 388
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
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

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.360714f;
    data->d[2] = 0.778549f;
    data->d[3] = 1.687743f;
    data->d[4] = 0.000758f;
    data->d[5] = -9.304515f;
    data->d[6] = -1.807942f;
    data->d[7] = 1.133468f;
    data->d[8] = 0.371544f;
    data->d[9] = -2.179975f;
    data->d[10] = 2.159131f;
    data->d[11] = -1.023706f;
    data->d[12] = 0.039146f;
    data->d[13] = 2.657004f;
    data->d[14] = -0.227334f;
    data->d[15] = 2.513987f;
    data->d[16] = 2.106599f;
    data->d[17] = 0.689511f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.106858f;
    data->d[2] = -3.557950f;
    data->d[3] = 3.005664f;
    data->d[4] = 0.007515f;
    data->d[5] = 6.398844f;
    data->d[6] = 0.760194f;
    data->d[7] = -0.749820f;
    data->d[8] = 0.229563f;
    data->d[9] = -0.108050f;
    data->d[10] = -21.016314f;
    data->d[11] = 2.008389f;
    data->d[12] = -3.683797f;
    data->d[13] = -7.004233f;
    data->d[14] = -2.581872f;
    data->d[15] = 4.639570f;
    data->d[16] = 1.548514f;
    data->d[17] = -0.056961f;
    data->d[18] = -0.118132f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.104160f;
    data->d[2] = -0.107565f;
    data->d[3] = 0.693342f;
    data->d[4] = 2.167446f;
    data->d[5] = 3.702005f;
    data->d[6] = 0.002089f;
    data->d[7] = 1.150950f;
    data->d[8] = -1.341541f;
    data->d[9] = -1.049101f;
    data->d[10] = -15.233865f;
    data->d[11] = -1.563461f;
    data->d[12] = 6.603357f;
    data->d[13] = -1.089723f;
    data->d[14] = 0.222445f;
    data->d[15] = 1.613798f;
    data->d[16] = -1.769138f;
    data->d[17] = 0.286362f;
    data->d[18] = 0.523599f;
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
    data->d[29] = 0.000000f;
    data->d[30] = -0.000000f;
    data->d[31] = 0.000000f;
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
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 7);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 1, 20);
    instructions->SetOperation(5, 1, 7);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 23);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 1, 11);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 1, 25);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 1, 29);
    instructions->SetOperation(28, 1, 4);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 388;
    state.m_index = 2;
    state.m_test = 24;
    state.m_seed = 17390246194293057706;
} // LoadState
