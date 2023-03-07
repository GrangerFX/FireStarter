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
    settings.m_units = 2;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_seed = 1;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 24);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 1, 27);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 0, 12);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 0, 29);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 26);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 11);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 0, 23);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 0, 30);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 1, 5);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 8);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.569913f;
    data->d[1] = -0.187851f;
    data->d[2] = -0.927132f;
    data->d[3] = -0.177383f;
    data->d[4] = 2.061114f;
    data->d[5] = 1.762238f;
    data->d[6] = -1.589053f;
    data->d[7] = -0.755430f;
    data->d[8] = 1.583684f;
    data->d[9] = -1.954971f;
    data->d[10] = -4.125781f;
    data->d[11] = 1.978282f;
    data->d[12] = -0.378907f;
    data->d[13] = 4.052359f;
    data->d[14] = -3.182143f;
    data->d[15] = -1.191643f;
    data->d[16] = -1.486618f;
    data->d[17] = -0.133952f;
    data->d[18] = 0.177307f;
    data->d[19] = -1.110461f;
    data->d[20] = -0.690098f;
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
    *(result->MinResult()) = 0.000115f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.354277f;
    data->d[1] = -0.417125f;
    data->d[2] = 0.187927f;
    data->d[3] = -1.857757f;
    data->d[4] = 1.118152f;
    data->d[5] = 1.182773f;
    data->d[6] = 1.679913f;
    data->d[7] = -0.630873f;
    data->d[8] = -1.492186f;
    data->d[9] = 2.573383f;
    data->d[10] = 0.347626f;
    data->d[11] = 0.516956f;
    data->d[12] = -1.220051f;
    data->d[13] = -1.063129f;
    data->d[14] = 0.353891f;
    data->d[15] = 1.034568f;
    data->d[16] = -0.426650f;
    data->d[17] = 0.115057f;
    data->d[18] = 0.787697f;
    data->d[19] = 0.851814f;
    data->d[20] = 0.463663f;
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
    *(result->MinResult()) = 0.000166f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.300621f;
    data->d[1] = -1.142313f;
    data->d[2] = -0.643103f;
    data->d[3] = -0.276865f;
    data->d[4] = -0.069250f;
    data->d[5] = -1.734816f;
    data->d[6] = 0.862387f;
    data->d[7] = -1.036142f;
    data->d[8] = 0.958658f;
    data->d[9] = -0.083449f;
    data->d[10] = -0.597147f;
    data->d[11] = 1.027869f;
    data->d[12] = 2.778114f;
    data->d[13] = -1.554956f;
    data->d[14] = 0.815574f;
    data->d[15] = 0.504103f;
    data->d[16] = -0.615395f;
    data->d[17] = 0.921076f;
    data->d[18] = -1.153336f;
    data->d[19] = 1.243547f;
    data->d[20] = -0.997730f;
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
    *(result->MinResult()) = 0.000188f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000188f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 12;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 6668899472133475204;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
