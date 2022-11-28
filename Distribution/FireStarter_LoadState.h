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
    settings.m_units = 10;
    settings.m_processes = 16;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 9;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 14);
    instructions->SetOperation(1, 1, 22);
    instructions->SetOperation(2, 1, 14);
    instructions->SetOperation(3, 1, 29);
    instructions->SetOperation(4, 0, 31);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 20);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 1, 17);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 1, 27);
    instructions->SetOperation(18, 1, 24);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 1, 23);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 27);
    instructions->SetOperation(23, 1, 24);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 22);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 0, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.217272f;
    data->d[1] = 0.682581f;
    data->d[2] = 1.365153f;
    data->d[3] = 0.271600f;
    data->d[4] = -0.379629f;
    data->d[5] = -0.611204f;
    data->d[6] = 1.852847f;
    data->d[7] = 0.634404f;
    data->d[8] = -0.003162f;
    data->d[9] = 0.556815f;
    data->d[10] = 7.555788f;
    data->d[11] = 1.660263f;
    data->d[12] = -0.104727f;
    data->d[13] = -0.359801f;
    data->d[14] = -2.514423f;
    data->d[15] = -1.152940f;
    data->d[16] = -2.118269f;
    data->d[17] = 0.000040f;
    data->d[18] = -0.150183f;
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
    *result->MinResult(0) = 0.000002f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.149785f;
    data->d[1] = -0.462931f;
    data->d[2] = -0.925881f;
    data->d[3] = 0.352127f;
    data->d[4] = -0.677320f;
    data->d[5] = 1.006559f;
    data->d[6] = -0.315730f;
    data->d[7] = -0.448416f;
    data->d[8] = 0.074363f;
    data->d[9] = 8.697587f;
    data->d[10] = -2.843076f;
    data->d[11] = -4.033508f;
    data->d[12] = -2.308535f;
    data->d[13] = 1.055889f;
    data->d[14] = -1.388541f;
    data->d[15] = -0.474911f;
    data->d[16] = 1.685124f;
    data->d[17] = -0.077117f;
    data->d[18] = 1.531575f;
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
    *result->MinResult(1) = 0.000003f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.498184f;
    data->d[1] = -1.304254f;
    data->d[2] = -2.608417f;
    data->d[3] = 0.202486f;
    data->d[4] = -0.657299f;
    data->d[5] = 0.102719f;
    data->d[6] = -0.760448f;
    data->d[7] = -4.181678f;
    data->d[8] = -0.002805f;
    data->d[9] = 0.110299f;
    data->d[10] = 0.621459f;
    data->d[11] = -4.585499f;
    data->d[12] = -0.995654f;
    data->d[13] = 0.431350f;
    data->d[14] = -8.715538f;
    data->d[15] = 0.258606f;
    data->d[16] = -1.463254f;
    data->d[17] = 0.653664f;
    data->d[18] = 0.800979f;
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
    *result->MinResult(2) = 0.000006f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000006f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 110;
    state.m_index = 9;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
