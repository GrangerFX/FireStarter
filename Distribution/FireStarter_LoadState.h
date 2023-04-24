#pragma once
#include "FireStarterState.h"

// Run date: 04/23/23 17:13:52 Pacific Daylight Time
// Run duration = 839.406964 seconds
// Run generation = 192
// Run result = 0.00000703
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

// Variation: 0  result = 0.00000703
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.421017f;
    data->d[1] = 1.663396f;
    data->d[2] = -0.908214f;
    data->d[3] = 0.457550f;
    data->d[4] = 0.142060f;
    data->d[5] = 1.028518f;
    data->d[6] = -1.726821f;
    data->d[7] = 0.303844f;
    data->d[8] = 0.940721f;
    data->d[9] = 2.265271f;
    data->d[10] = 0.371108f;
    data->d[11] = 9.292581f;
    data->d[12] = 0.000436f;
    data->d[13] = 1.509945f;
    data->d[14] = 1.370885f;
    data->d[15] = 1.027641f;
    data->d[16] = 1.133481f;
    data->d[17] = -1.447301f;
    data->d[18] = 0.008248f;
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
    data->d[30] = 0.000006f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000007f;
} // LoadVariation0

// Variation: 1  result = 0.00000596
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.080920f;
    data->d[1] = -3.329118f;
    data->d[2] = 0.090273f;
    data->d[3] = 0.964395f;
    data->d[4] = -0.001465f;
    data->d[5] = -4.319408f;
    data->d[6] = 1.596730f;
    data->d[7] = -0.228056f;
    data->d[8] = -0.262567f;
    data->d[9] = -5.085732f;
    data->d[10] = -5.902464f;
    data->d[11] = -3.718638f;
    data->d[12] = 2.392866f;
    data->d[13] = -0.295210f;
    data->d[14] = 0.814043f;
    data->d[15] = 0.696013f;
    data->d[16] = -0.606331f;
    data->d[17] = 0.417187f;
    data->d[18] = -0.118851f;
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
    data->d[30] = 0.000003f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation1

// Variation: 2  result = 0.00000334
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.500739f;
    data->d[1] = -1.565422f;
    data->d[2] = -0.806365f;
    data->d[3] = -1.127807f;
    data->d[4] = 0.227677f;
    data->d[5] = -0.230301f;
    data->d[6] = 2.388920f;
    data->d[7] = -0.213969f;
    data->d[8] = 0.603038f;
    data->d[9] = -0.524208f;
    data->d[10] = 3.776740f;
    data->d[11] = 0.197053f;
    data->d[12] = 1.826824f;
    data->d[13] = -1.298382f;
    data->d[14] = 0.958766f;
    data->d[15] = -1.192967f;
    data->d[16] = 0.583495f;
    data->d[17] = -0.538909f;
    data->d[18] = 0.515428f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000007f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 16);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 22);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 1, 18);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 0, 28);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 31);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 1, 3);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 0, 2);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 192;
    state.m_index = 2;
    state.m_test = 37;
    state.m_seed = 4599955845034900751;
} // LoadState
