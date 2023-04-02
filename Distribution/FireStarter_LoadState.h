#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 13:52:46 Pacific Daylight Time
// Run duration = 2566.700005 seconds
// Run generation = 92
// Run result = 0.00026427
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

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
    settings.m_registers = 30;
    settings.m_opcodes = 4;

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

// Variation: 0  result = 0.00001603
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.094942f;
    data->d[1] = -0.596537f;
    data->d[2] = -0.627925f;
    data->d[3] = -0.801919f;
    data->d[4] = -1.162724f;
    data->d[5] = 1.553072f;
    data->d[6] = 1.181348f;
    data->d[7] = 0.051033f;
    data->d[8] = 0.561610f;
    data->d[9] = -1.213049f;
    data->d[10] = -1.425987f;
    data->d[11] = 2.264133f;
    data->d[12] = -0.710629f;
    data->d[13] = 0.509198f;
    data->d[14] = 1.517536f;
    data->d[15] = -0.970478f;
    data->d[16] = 1.204647f;
    data->d[17] = 0.375582f;
    data->d[18] = -0.012208f;
    data->d[19] = 3.013251f;
    data->d[20] = 0.000007f;
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
    data->d[31] = 0.000142f;
    *(result->MinResult()) = 0.000016f;
} // LoadVariation0

// Variation: 1  result = 0.00014168
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.125048f;
    data->d[1] = 0.994845f;
    data->d[2] = 0.236263f;
    data->d[3] = -0.626108f;
    data->d[4] = 0.789859f;
    data->d[5] = 2.493913f;
    data->d[6] = -1.623371f;
    data->d[7] = 0.158336f;
    data->d[8] = -1.387917f;
    data->d[9] = -0.879948f;
    data->d[10] = 0.792484f;
    data->d[11] = 1.938223f;
    data->d[12] = 2.469814f;
    data->d[13] = 0.623357f;
    data->d[14] = -1.384759f;
    data->d[15] = -0.753605f;
    data->d[16] = -0.230580f;
    data->d[17] = -1.499398f;
    data->d[18] = -0.035477f;
    data->d[19] = 0.760237f;
    data->d[20] = 0.852416f;
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
    data->d[31] = 0.000264f;
    *(result->MinResult()) = 0.000142f;
} // LoadVariation1

// Variation: 2  result = 0.00026427
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.264578f;
    data->d[1] = 1.460759f;
    data->d[2] = 0.159757f;
    data->d[3] = 0.193871f;
    data->d[4] = 0.596820f;
    data->d[5] = 1.338016f;
    data->d[6] = 1.976158f;
    data->d[7] = -0.452227f;
    data->d[8] = 1.684956f;
    data->d[9] = 1.379242f;
    data->d[10] = 1.559337f;
    data->d[11] = -0.562567f;
    data->d[12] = 1.607888f;
    data->d[13] = 0.296470f;
    data->d[14] = 1.768662f;
    data->d[15] = -1.529768f;
    data->d[16] = 0.108223f;
    data->d[17] = -3.602300f;
    data->d[18] = -0.152328f;
    data->d[19] = -2.321087f;
    data->d[20] = 0.000264f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 24501957241775559842041109151744.000000f;
    data->d[31] = -0.000000f;
    *(result->MinResult()) = 0.000264f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000264f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 1, 30);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 6);
    instructions->SetOperation(6, 0, 24);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 29);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 0, 19);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 0, 31);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 23);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 29);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 29);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 0, 17);
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
    state.m_generation = 92;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 6570303855404584743;
} // LoadState
