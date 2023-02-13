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
    settings.m_attempts = 128;
    settings.m_seed = 1;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 24);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 0, 28);
    instructions->SetOperation(8, 1, 14);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 0, 29);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 1, 21);
    instructions->SetOperation(19, 1, 26);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 0, 29);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 1, 21);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 1, 5);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.778418f;
    data->d[1] = -1.363176f;
    data->d[2] = 0.815757f;
    data->d[3] = -0.214813f;
    data->d[4] = 2.937409f;
    data->d[5] = 1.535034f;
    data->d[6] = 0.207602f;
    data->d[7] = 0.447458f;
    data->d[8] = -1.677774f;
    data->d[9] = -0.318739f;
    data->d[10] = -15.218308f;
    data->d[11] = 3.002568f;
    data->d[12] = 0.094291f;
    data->d[13] = 0.725261f;
    data->d[14] = 1.589763f;
    data->d[15] = 0.289918f;
    data->d[16] = 0.021933f;
    data->d[17] = 2.791447f;
    data->d[18] = 0.040120f;
    data->d[19] = -0.808935f;
    data->d[20] = 1.680501f;
    data->d[21] = 1.359417f;
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

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.747045f;
    data->d[1] = -1.343616f;
    data->d[2] = 0.550944f;
    data->d[3] = -1.623459f;
    data->d[4] = -0.539895f;
    data->d[5] = -1.512474f;
    data->d[6] = 1.428820f;
    data->d[7] = 1.244970f;
    data->d[8] = 1.296525f;
    data->d[9] = -0.663899f;
    data->d[10] = -6.432269f;
    data->d[11] = 0.020539f;
    data->d[12] = -0.355163f;
    data->d[13] = 1.082281f;
    data->d[14] = -3.617573f;
    data->d[15] = 1.062471f;
    data->d[16] = 0.490391f;
    data->d[17] = -0.238962f;
    data->d[18] = -1.067819f;
    data->d[19] = -0.305356f;
    data->d[20] = 1.127008f;
    data->d[21] = 0.226007f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.393562f;
    data->d[1] = -1.224432f;
    data->d[2] = -0.120769f;
    data->d[3] = -1.324603f;
    data->d[4] = -1.011299f;
    data->d[5] = -2.517522f;
    data->d[6] = -2.043835f;
    data->d[7] = -1.841175f;
    data->d[8] = 0.056841f;
    data->d[9] = -2.669099f;
    data->d[10] = -1.855443f;
    data->d[11] = 2.116719f;
    data->d[12] = 0.035896f;
    data->d[13] = 0.917419f;
    data->d[14] = -0.798787f;
    data->d[15] = 0.749602f;
    data->d[16] = 1.258223f;
    data->d[17] = 2.185018f;
    data->d[18] = 0.284370f;
    data->d[19] = -1.382387f;
    data->d[20] = 1.883360f;
    data->d[21] = 3.127131f;
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
    *(result->MinResult()) = 0.000004f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000006f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 422;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 913442252628604385;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
