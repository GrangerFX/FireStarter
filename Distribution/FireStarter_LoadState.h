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
    settings.m_attempts = 64;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 21);
    instructions->SetOperation(2, 0, 35);
    instructions->SetOperation(3, 1, 17);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 1, 39);
    instructions->SetOperation(6, 0, 11);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 0, 25);
    instructions->SetOperation(11, 1, 19);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 28);
    instructions->SetOperation(17, 1, 36);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 0, 38);
    instructions->SetOperation(25, 1, 11);
    instructions->SetOperation(26, 0, 53);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 3);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.487202f;
    data->d[1] = 2.144166f;
    data->d[2] = -1.582376f;
    data->d[3] = -1.081228f;
    data->d[4] = 0.764214f;
    data->d[5] = 2.068934f;
    data->d[6] = 0.008080f;
    data->d[7] = -0.888474f;
    data->d[8] = -0.699653f;
    data->d[9] = -1.094645f;
    data->d[10] = 0.875483f;
    data->d[11] = 0.740041f;
    data->d[12] = -0.261656f;
    data->d[13] = 0.612347f;
    data->d[14] = -18.084984f;
    data->d[15] = 0.067880f;
    data->d[16] = 0.949361f;
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
    *(result->MinResult()) = 0.000083f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.428985f;
    data->d[1] = 2.038368f;
    data->d[2] = -1.235991f;
    data->d[3] = -1.045166f;
    data->d[4] = -1.484239f;
    data->d[5] = -0.229373f;
    data->d[6] = -0.073619f;
    data->d[7] = -0.240062f;
    data->d[8] = 1.717439f;
    data->d[9] = 0.601055f;
    data->d[10] = -0.650326f;
    data->d[11] = -0.327426f;
    data->d[12] = -1.127882f;
    data->d[13] = 0.457687f;
    data->d[14] = 0.183370f;
    data->d[15] = -0.385548f;
    data->d[16] = 0.615616f;
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
    *(result->MinResult()) = 0.000262f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.371436f;
    data->d[1] = 1.258039f;
    data->d[2] = -1.915487f;
    data->d[3] = -1.247284f;
    data->d[4] = 1.916073f;
    data->d[5] = 1.077776f;
    data->d[6] = 0.379893f;
    data->d[7] = -1.687034f;
    data->d[8] = 0.628684f;
    data->d[9] = -0.642701f;
    data->d[10] = -1.535800f;
    data->d[11] = -0.112427f;
    data->d[12] = 1.035266f;
    data->d[13] = -0.222156f;
    data->d[14] = -0.120576f;
    data->d[15] = 0.388926f;
    data->d[16] = 0.366479f;
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
    *(result->MinResult()) = 0.000232f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000262f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 40;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 8574791641826491792;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
