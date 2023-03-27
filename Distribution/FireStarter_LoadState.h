#pragma once
#include "FireStarterState.h"

// Run date: 03/27/23 12:03:30 Pacific Daylight Time
// Run duration = 2745.398708 seconds
// Run generation = 143
// Run result = 0.00002697
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 6

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
    settings.m_registers = 32;
    settings.m_opcodes = 6;

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

// Variation: 0  result = 0.00000578
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.440100f;
    data->d[1] = -1.701492f;
    data->d[2] = -0.084000f;
    data->d[3] = 1.078282f;
    data->d[4] = -1.352320f;
    data->d[5] = 0.100193f;
    data->d[6] = -4.085443f;
    data->d[7] = 1.301734f;
    data->d[8] = -1.133945f;
    data->d[9] = 0.969260f;
    data->d[10] = -1.456447f;
    data->d[11] = -1.454434f;
    data->d[12] = 0.935671f;
    data->d[13] = 1.893162f;
    data->d[14] = 0.624651f;
    data->d[15] = 3.428385f;
    data->d[16] = 0.287689f;
    data->d[17] = -0.649344f;
    data->d[18] = 0.003053f;
    data->d[19] = 3.246506f;
    data->d[20] = 0.181099f;
    data->d[21] = -0.000001f;
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
    *(result->MinResult()) = 0.000006f;
} // LoadVariation0

// Variation: 1  result = 0.00001442
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.231918f;
    data->d[1] = -1.858745f;
    data->d[2] = 0.099812f;
    data->d[3] = 0.230737f;
    data->d[4] = -1.405230f;
    data->d[5] = -0.039336f;
    data->d[6] = -0.972780f;
    data->d[7] = -1.327804f;
    data->d[8] = -17.911688f;
    data->d[9] = 0.653790f;
    data->d[10] = 2.566545f;
    data->d[11] = -1.211806f;
    data->d[12] = 2.733228f;
    data->d[13] = -0.416888f;
    data->d[14] = 17.168837f;
    data->d[15] = -2.071579f;
    data->d[16] = 0.677446f;
    data->d[17] = 0.129825f;
    data->d[18] = -0.896845f;
    data->d[19] = -0.023855f;
    data->d[20] = 4.292506f;
    data->d[21] = -0.118133f;
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
    *(result->MinResult()) = 0.000014f;
} // LoadVariation1

// Variation: 2  result = 0.00002697
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.693679f;
    data->d[1] = -4.311691f;
    data->d[2] = 0.117742f;
    data->d[3] = 1.786362f;
    data->d[4] = 0.730048f;
    data->d[5] = 0.461925f;
    data->d[6] = -2.553239f;
    data->d[7] = -0.598706f;
    data->d[8] = 0.474934f;
    data->d[9] = -0.782550f;
    data->d[10] = 0.791154f;
    data->d[11] = 1.759868f;
    data->d[12] = 1.924910f;
    data->d[13] = 0.691873f;
    data->d[14] = 0.716129f;
    data->d[15] = 0.958144f;
    data->d[16] = 2.659216f;
    data->d[17] = 0.108783f;
    data->d[18] = -2.090828f;
    data->d[19] = -0.475962f;
    data->d[20] = 7.843280f;
    data->d[21] = 0.523607f;
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
    *(result->MinResult()) = 0.000027f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000027f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 8);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 0, 6);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 0, 8);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 0, 18);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 0, 30);
    instructions->SetOperation(17, 1, 29);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 30);
    instructions->SetOperation(28, 0, 23);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 0, 18);
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
    state.m_generation = 143;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 6306009465733930371;
} // LoadState
