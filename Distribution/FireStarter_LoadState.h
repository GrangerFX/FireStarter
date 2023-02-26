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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 999;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 12);
    instructions->SetOperation(1, 1, 11);
    instructions->SetOperation(2, 0, 30);
    instructions->SetOperation(3, 1, 26);
    instructions->SetOperation(4, 1, 21);
    instructions->SetOperation(5, 0, 31);
    instructions->SetOperation(6, 1, 20);
    instructions->SetOperation(7, 1, 24);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 1, 15);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 2);
    instructions->SetOperation(14, 0, 31);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 0, 25);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 4);
    instructions->SetOperation(20, 1, 22);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 21);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 1, 23);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 31);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 1, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.397008f;
    data->d[1] = -2.104557f;
    data->d[2] = 0.247030f;
    data->d[3] = -0.568185f;
    data->d[4] = -1.470194f;
    data->d[5] = -1.567975f;
    data->d[6] = -2.081857f;
    data->d[7] = -1.010345f;
    data->d[8] = 0.502739f;
    data->d[9] = 0.034019f;
    data->d[10] = 0.211158f;
    data->d[11] = -0.286877f;
    data->d[12] = -0.854630f;
    data->d[13] = 0.442012f;
    data->d[14] = 0.951641f;
    data->d[15] = 0.915664f;
    data->d[16] = -0.765237f;
    data->d[17] = 4.596669f;
    data->d[18] = -0.019920f;
    data->d[19] = -2.295071f;
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
    *(result->MinResult()) = 0.000427f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.566555f;
    data->d[1] = 2.047222f;
    data->d[2] = 0.157827f;
    data->d[3] = -1.031781f;
    data->d[4] = -1.774376f;
    data->d[5] = -0.215029f;
    data->d[6] = 0.918823f;
    data->d[7] = -1.293725f;
    data->d[8] = 2.513007f;
    data->d[9] = 0.475675f;
    data->d[10] = 0.107390f;
    data->d[11] = -1.234858f;
    data->d[12] = -1.208847f;
    data->d[13] = 1.027300f;
    data->d[14] = -0.651201f;
    data->d[15] = -0.583505f;
    data->d[16] = 2.341413f;
    data->d[17] = -0.823448f;
    data->d[18] = 2.012995f;
    data->d[19] = -0.818298f;
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
    *(result->MinResult()) = 0.000321f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.764083f;
    data->d[1] = -1.267152f;
    data->d[2] = -0.136718f;
    data->d[3] = -0.921285f;
    data->d[4] = 0.792513f;
    data->d[5] = -1.269779f;
    data->d[6] = -0.296891f;
    data->d[7] = -0.634100f;
    data->d[8] = -1.819567f;
    data->d[9] = -1.563949f;
    data->d[10] = -0.053985f;
    data->d[11] = 3.076803f;
    data->d[12] = -1.469485f;
    data->d[13] = 0.526790f;
    data->d[14] = -0.424326f;
    data->d[15] = 1.697055f;
    data->d[16] = -0.334312f;
    data->d[17] = -1.057142f;
    data->d[18] = -0.968478f;
    data->d[19] = 0.042388f;
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
    *(result->MinResult()) = 0.000305f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000427f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 19;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 1137118126220194393;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
