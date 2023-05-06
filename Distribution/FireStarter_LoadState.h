#pragma once
#include "FireStarterState.h"

// Run date: 05/06/23 12:26:57 Pacific Daylight Time
// Run duration = 2103.362322 seconds
// Run generation = 386
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.576379f;
    data->d[1] = -0.565214f;
    data->d[2] = -0.409227f;
    data->d[3] = -0.350127f;
    data->d[4] = 1.922563f;
    data->d[5] = -0.720543f;
    data->d[6] = 0.030027f;
    data->d[7] = 0.568877f;
    data->d[8] = 0.969548f;
    data->d[9] = -1.817273f;
    data->d[10] = 0.623919f;
    data->d[11] = 2.769863f;
    data->d[12] = 0.037386f;
    data->d[13] = 0.690664f;
    data->d[14] = 13.813206f;
    data->d[15] = 10.123484f;
    data->d[16] = 0.748808f;
    data->d[17] = -3.095299f;
    data->d[18] = -0.902434f;
    data->d[19] = 0.247591f;
    data->d[20] = -0.000000f;
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
    data->d[0] = -1.365119f;
    data->d[1] = -1.725539f;
    data->d[2] = 0.109757f;
    data->d[3] = 2.242394f;
    data->d[4] = 3.093178f;
    data->d[5] = 2.358572f;
    data->d[6] = -0.172062f;
    data->d[7] = 1.810924f;
    data->d[8] = -1.291615f;
    data->d[9] = 1.912443f;
    data->d[10] = 0.037573f;
    data->d[11] = 1.649371f;
    data->d[12] = 0.217774f;
    data->d[13] = 0.202069f;
    data->d[14] = 1.084312f;
    data->d[15] = 1.270393f;
    data->d[16] = -77.562752f;
    data->d[17] = 1.999569f;
    data->d[18] = -0.440404f;
    data->d[19] = -0.202857f;
    data->d[20] = -0.118132f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.050803f;
    data->d[1] = -1.567190f;
    data->d[2] = -0.105146f;
    data->d[3] = -0.222813f;
    data->d[4] = 0.568563f;
    data->d[5] = -0.157997f;
    data->d[6] = 0.318482f;
    data->d[7] = 1.625243f;
    data->d[8] = 0.691082f;
    data->d[9] = -0.448124f;
    data->d[10] = 0.508743f;
    data->d[11] = -1.740944f;
    data->d[12] = -2.673264f;
    data->d[13] = -1.740519f;
    data->d[14] = 1.792894f;
    data->d[15] = -3.577644f;
    data->d[16] = -0.000000f;
    data->d[17] = 0.147807f;
    data->d[18] = 1.910685f;
    data->d[19] = 0.041301f;
    data->d[20] = 0.523599f;
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
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 1, 22);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 1, 0);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 1, 24);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 1, 16);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 3);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 27);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 19);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 1, 0);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 0, 23);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 1, 23);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 386;
    state.m_index = 1;
    state.m_test = 65;
    state.m_seed = 9611244119417831909;
} // LoadState
