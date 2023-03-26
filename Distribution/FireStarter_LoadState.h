#pragma once
#include "FireStarterState.h"

// Run date: 03/26/23 11:59:12 Pacific Daylight Time
// Run duration = 14.579360 seconds
// Run generation = 0
// Run result = 0.00013089
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run units = 8
// Run processes = 16
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 12
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_units = 8;
    settings.m_processes = 16;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 12;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 6);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 1, 23);
    instructions->SetOperation(3, 0, 14);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 1, 26);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 14);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 1, 16);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 16);
    instructions->SetOperation(16, 1, 29);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 0, 25);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 1, 26);
    instructions->SetOperation(23, 0, 25);
    instructions->SetOperation(24, 1, 4);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 1, 25);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

// Variation: 0  result = 0.00009606
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.199318f;
    data->d[1] = -1.482013f;
    data->d[2] = -0.235372f;
    data->d[3] = -0.108605f;
    data->d[4] = 1.952804f;
    data->d[5] = 0.119784f;
    data->d[6] = -1.243317f;
    data->d[7] = 0.065574f;
    data->d[8] = 1.036920f;
    data->d[9] = -1.211721f;
    data->d[10] = 0.925278f;
    data->d[11] = 0.087326f;
    data->d[12] = -2.165953f;
    data->d[13] = -2.229095f;
    data->d[14] = -2.901203f;
    data->d[15] = -0.215847f;
    data->d[16] = -0.110227f;
    data->d[17] = 0.044336f;
    data->d[18] = -0.115669f;
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
    *(result->MinResult()) = 0.000096f;
} // LoadVariation0

// Variation: 1  result = 0.00007987
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.444964f;
    data->d[1] = -0.032945f;
    data->d[2] = -1.214361f;
    data->d[3] = -0.196781f;
    data->d[4] = 0.786222f;
    data->d[5] = -0.485061f;
    data->d[6] = -20.680252f;
    data->d[7] = -4.448051f;
    data->d[8] = 0.008414f;
    data->d[9] = -1.507824f;
    data->d[10] = 1.274343f;
    data->d[11] = 0.422282f;
    data->d[12] = 1.398138f;
    data->d[13] = 1.126566f;
    data->d[14] = 1.729675f;
    data->d[15] = -0.968629f;
    data->d[16] = 0.182488f;
    data->d[17] = 0.231552f;
    data->d[18] = 3.258762f;
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
    *(result->MinResult()) = 0.000080f;
} // LoadVariation1

// Variation: 2  result = 0.00013089
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.560276f;
    data->d[1] = -0.895816f;
    data->d[2] = -2.085387f;
    data->d[3] = -0.114338f;
    data->d[4] = 1.471721f;
    data->d[5] = -0.063490f;
    data->d[6] = 1.474726f;
    data->d[7] = -2.584834f;
    data->d[8] = 0.266620f;
    data->d[9] = -0.854689f;
    data->d[10] = 0.901354f;
    data->d[11] = 0.280534f;
    data->d[12] = -2.251166f;
    data->d[13] = -1.222350f;
    data->d[14] = -1.724555f;
    data->d[15] = -0.234362f;
    data->d[16] = -0.319973f;
    data->d[17] = 0.023227f;
    data->d[18] = -0.900732f;
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
    *(result->MinResult()) = 0.000131f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000131f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 0;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 17283548006553293144;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
