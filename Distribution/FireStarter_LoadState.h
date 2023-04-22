#pragma once
#include "FireStarterState.h"

// Run date: 04/22/23 12:56:42 Pacific Daylight Time
// Run duration = 1925.879070 seconds
// Run generation = 194
// Run result = 0.00000012
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
    data->d[0] = 0.463824f;
    data->d[1] = -1.001073f;
    data->d[2] = 0.181427f;
    data->d[3] = 0.007545f;
    data->d[4] = 1.413765f;
    data->d[5] = 1.458713f;
    data->d[6] = 2.045019f;
    data->d[7] = -0.334770f;
    data->d[8] = 1.421033f;
    data->d[9] = 1.896835f;
    data->d[10] = 3.732510f;
    data->d[11] = -9.024371f;
    data->d[12] = 5.077734f;
    data->d[13] = -0.664888f;
    data->d[14] = 4.536399f;
    data->d[15] = -0.859506f;
    data->d[16] = -0.301329f;
    data->d[17] = 1.441224f;
    data->d[18] = -1.369103f;
    data->d[19] = 0.001563f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.357270f;
    data->d[1] = -1.009761f;
    data->d[2] = 0.932777f;
    data->d[3] = 0.000070f;
    data->d[4] = 2.153306f;
    data->d[5] = 1.114980f;
    data->d[6] = 1.102483f;
    data->d[7] = 1.756586f;
    data->d[8] = -1.141710f;
    data->d[9] = 0.614369f;
    data->d[10] = -1.458236f;
    data->d[11] = 2.703535f;
    data->d[12] = 1.999535f;
    data->d[13] = -2.304015f;
    data->d[14] = -3.222019f;
    data->d[15] = -1.631660f;
    data->d[16] = -0.359610f;
    data->d[17] = 1.340671f;
    data->d[18] = 0.012901f;
    data->d[19] = -0.107354f;
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

// Variation: 2  result = 0.00000006
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.605673f;
    data->d[1] = -0.912950f;
    data->d[2] = -0.012217f;
    data->d[3] = 0.000161f;
    data->d[4] = 2.666216f;
    data->d[5] = 1.447617f;
    data->d[6] = 1.407023f;
    data->d[7] = 1.439926f;
    data->d[8] = 1.250281f;
    data->d[9] = -0.653376f;
    data->d[10] = -5.446631f;
    data->d[11] = -1.034397f;
    data->d[12] = 1.312321f;
    data->d[13] = -4.354126f;
    data->d[14] = -2.401565f;
    data->d[15] = -0.705609f;
    data->d[16] = -0.478320f;
    data->d[17] = 1.857758f;
    data->d[18] = -1.717886f;
    data->d[19] = 0.385568f;
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
    data->d[30] = -7548747776.000000f;
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
    instructions->SetOperation(0, 0, 26);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 1, 29);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 1, 16);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 1, 17);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 22);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 29);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 194;
    state.m_index = 3;
    state.m_test = 76;
    state.m_seed = 2527719869974908826;
} // LoadState
