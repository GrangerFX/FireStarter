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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.555780f;
    data->d[1] = 0.511656f;
    data->d[2] = -2.634113f;
    data->d[3] = -0.415659f;
    data->d[4] = -0.368069f;
    data->d[5] = -0.150380f;
    data->d[6] = 0.269540f;
    data->d[7] = 0.231854f;
    data->d[8] = 1.498841f;
    data->d[9] = -0.005397f;
    data->d[10] = -0.858048f;
    data->d[11] = 0.658241f;
    data->d[12] = 0.874614f;
    data->d[13] = -7.751806f;
    data->d[14] = 5.925909f;
    data->d[15] = 0.000053f;
    data->d[16] = -3.920767f;
    data->d[17] = 0.625912f;
    data->d[18] = -0.001608f;
    data->d[19] = -0.000498f;
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
    *result->MinResult(0) = 0.000044f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.493091f;
    data->d[1] = -0.350737f;
    data->d[2] = 0.988035f;
    data->d[3] = 0.247350f;
    data->d[4] = 0.356801f;
    data->d[5] = -0.087656f;
    data->d[6] = 0.191194f;
    data->d[7] = -2.227422f;
    data->d[8] = 5.514306f;
    data->d[9] = -9.243276f;
    data->d[10] = 0.341889f;
    data->d[11] = -2.669154f;
    data->d[12] = -3.289138f;
    data->d[13] = -0.041007f;
    data->d[14] = 101.520729f;
    data->d[15] = -0.012869f;
    data->d[16] = -2.663949f;
    data->d[17] = 0.418425f;
    data->d[18] = -0.122642f;
    data->d[19] = 0.003668f;
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
    *result->MinResult(1) = 0.000027f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.135045f;
    data->d[1] = 1.948947f;
    data->d[2] = -1.041398f;
    data->d[3] = -0.958906f;
    data->d[4] = 0.523685f;
    data->d[5] = 0.501299f;
    data->d[6] = -1.093900f;
    data->d[7] = 0.154904f;
    data->d[8] = 1.001443f;
    data->d[9] = 0.097187f;
    data->d[10] = -1.880978f;
    data->d[11] = 0.542832f;
    data->d[12] = 1.271425f;
    data->d[13] = 6.752319f;
    data->d[14] = 3.240644f;
    data->d[15] = 0.001099f;
    data->d[16] = -2.230370f;
    data->d[17] = 0.548073f;
    data->d[18] = 1.085692f;
    data->d[19] = -0.563224f;
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
    *result->MinResult(2) = 0.000062f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000062f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 48;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
