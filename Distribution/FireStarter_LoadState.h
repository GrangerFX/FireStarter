#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_TEST;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 100;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 14);
    instructions->SetOperation(2, 1, 9);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 1, 16);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 1, 17);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 1, 31);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 27);
    instructions->SetOperation(17, 1, 6);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 25);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.366299f;
    data->d[1] = -0.137801f;
    data->d[2] = 1.867229f;
    data->d[3] = -0.235504f;
    data->d[4] = 0.047546f;
    data->d[5] = 0.073254f;
    data->d[6] = -1.005494f;
    data->d[7] = 1.855744f;
    data->d[8] = -3.074121f;
    data->d[9] = -1.042183f;
    data->d[10] = -0.860694f;
    data->d[11] = -0.149762f;
    data->d[12] = -0.515296f;
    data->d[13] = -0.857987f;
    data->d[14] = 3.221663f;
    data->d[15] = 0.805800f;
    data->d[16] = -16.746035f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(0) = 0.000324f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.572057f;
    data->d[1] = -0.461113f;
    data->d[2] = -0.045228f;
    data->d[3] = -0.950064f;
    data->d[4] = -0.086198f;
    data->d[5] = 1.349150f;
    data->d[6] = -3.895080f;
    data->d[7] = 3.590934f;
    data->d[8] = 2.880927f;
    data->d[9] = -1.451125f;
    data->d[10] = 7.413726f;
    data->d[11] = -105.318306f;
    data->d[12] = -0.015835f;
    data->d[13] = -1.330995f;
    data->d[14] = -1.164020f;
    data->d[15] = -0.799708f;
    data->d[16] = -9.286030f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(1) = 0.000354f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.572370f;
    data->d[1] = 0.406433f;
    data->d[2] = -0.231943f;
    data->d[3] = -0.101836f;
    data->d[4] = -1.388063f;
    data->d[5] = 0.833299f;
    data->d[6] = -1.599501f;
    data->d[7] = -3.545660f;
    data->d[8] = -3.190162f;
    data->d[9] = -2.070603f;
    data->d[10] = -1.045413f;
    data->d[11] = -0.345885f;
    data->d[12] = -0.257640f;
    data->d[13] = 0.634677f;
    data->d[14] = -0.746554f;
    data->d[15] = -0.215268f;
    data->d[16] = -5.137845f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(2) = 0.003263f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.003263f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 4;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
