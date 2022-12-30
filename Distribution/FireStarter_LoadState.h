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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_units = 8;
    settings.m_processes = 16;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 11000;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 9);
    instructions->SetOperation(4, 1, 29);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 0, 31);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 1, 21);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 31);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 0, 31);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141597f;
    data->d[1] = -0.337021f;
    data->d[2] = 1.859952f;
    data->d[3] = -7.797740f;
    data->d[4] = 1.218880f;
    data->d[5] = -0.590784f;
    data->d[6] = -0.691457f;
    data->d[7] = -0.337625f;
    data->d[8] = 0.471743f;
    data->d[9] = 0.180546f;
    data->d[10] = 0.052319f;
    data->d[11] = 3.228355f;
    data->d[12] = -1.049961f;
    data->d[13] = -0.161887f;
    data->d[14] = -0.980843f;
    data->d[15] = -0.582288f;
    data->d[16] = -0.028907f;
    data->d[17] = -0.743289f;
    data->d[18] = 0.000001f;
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
    *result->MinResult(0) = 0.000008f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090662f;
    data->d[1] = -0.557780f;
    data->d[2] = -0.027782f;
    data->d[3] = 1.036813f;
    data->d[4] = -1.880784f;
    data->d[5] = -3.393807f;
    data->d[6] = 0.203952f;
    data->d[7] = -1.125437f;
    data->d[8] = 0.266123f;
    data->d[9] = -0.145047f;
    data->d[10] = -0.757258f;
    data->d[11] = -0.015875f;
    data->d[12] = -3.807035f;
    data->d[13] = 3.165124f;
    data->d[14] = -0.978436f;
    data->d[15] = 0.012900f;
    data->d[16] = 0.384340f;
    data->d[17] = 0.673251f;
    data->d[18] = -0.118133f;
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
    *result->MinResult(1) = 0.000017f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617939f;
    data->d[1] = -0.888828f;
    data->d[2] = -0.022830f;
    data->d[3] = 2.789218f;
    data->d[4] = 0.319643f;
    data->d[5] = 1.340212f;
    data->d[6] = 1.429339f;
    data->d[7] = 0.216018f;
    data->d[8] = 1.431610f;
    data->d[9] = -1.431571f;
    data->d[10] = 0.493125f;
    data->d[11] = 0.140474f;
    data->d[12] = -0.121630f;
    data->d[13] = -5.640915f;
    data->d[14] = -2.690082f;
    data->d[15] = 0.181926f;
    data->d[16] = 1.285712f;
    data->d[17] = 1.356092f;
    data->d[18] = 0.523567f;
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
    *result->MinResult(2) = 0.000085f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000085f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 10484;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
