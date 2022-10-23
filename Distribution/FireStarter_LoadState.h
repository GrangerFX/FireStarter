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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 512;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_uniqueRegisters = 19;

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 9);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 12);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -4.035352f;
    data->d[1] = 0.893759f;
    data->d[2] = 0.000001f;
    data->d[3] = 0.283701f;
    data->d[4] = 0.194967f;
    data->d[5] = 0.173869f;
    data->d[6] = -13.276315f;
    data->d[7] = 8.647816f;
    data->d[8] = 0.000540f;
    data->d[9] = -3.403981f;
    data->d[10] = -5.357340f;
    data->d[11] = 0.091067f;
    data->d[12] = -0.255138f;
    data->d[13] = 0.149289f;
    data->d[14] = 7.669986f;
    data->d[15] = -6.014521f;
    data->d[16] = -0.699227f;
    data->d[17] = -1.376199f;
    data->d[18] = -0.000000f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.326131f;
    data->d[1] = 0.235474f;
    data->d[2] = -0.000003f;
    data->d[3] = -0.162894f;
    data->d[4] = -0.772871f;
    data->d[5] = 0.977822f;
    data->d[6] = -1.217946f;
    data->d[7] = 1.469010f;
    data->d[8] = -0.361706f;
    data->d[9] = -0.045374f;
    data->d[10] = 0.198355f;
    data->d[11] = 0.111215f;
    data->d[12] = 3.820499f;
    data->d[13] = -0.982572f;
    data->d[14] = 5.888733f;
    data->d[15] = -7.614750f;
    data->d[16] = 30.186790f;
    data->d[17] = 0.678487f;
    data->d[18] = -0.118130f;
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
    *result->MinResult(1) = 0.000002f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.624511f;
    data->d[1] = -1.993481f;
    data->d[2] = -0.000004f;
    data->d[3] = 0.117797f;
    data->d[4] = -4.558999f;
    data->d[5] = 0.819865f;
    data->d[6] = -0.394798f;
    data->d[7] = -0.675449f;
    data->d[8] = -0.302135f;
    data->d[9] = 0.272568f;
    data->d[10] = 0.345310f;
    data->d[11] = 0.509359f;
    data->d[12] = -0.671915f;
    data->d[13] = 0.345599f;
    data->d[14] = 5.169489f;
    data->d[15] = 8.909068f;
    data->d[16] = 9.302976f;
    data->d[17] = 0.724661f;
    data->d[18] = 0.523601f;
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
    *result->MinResult(2) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000002f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 7;
    state.m_bestIndex = 35655;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
