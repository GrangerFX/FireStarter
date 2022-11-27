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
    settings.m_seed = 2;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 6);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 1, 3);
    instructions->SetOperation(11, 1, 22);
    instructions->SetOperation(12, 1, 31);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 0, 31);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 31);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 1, 2);
    instructions->SetOperation(27, 1, 4);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 0, 31);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.494775f;
    data->d[1] = -3.138469f;
    data->d[2] = -1.212487f;
    data->d[3] = 0.485473f;
    data->d[4] = 0.540578f;
    data->d[5] = 0.803589f;
    data->d[6] = -0.694298f;
    data->d[7] = -1.074507f;
    data->d[8] = -0.963596f;
    data->d[9] = -0.562881f;
    data->d[10] = 0.782945f;
    data->d[11] = -0.622401f;
    data->d[12] = -0.553869f;
    data->d[13] = 0.529813f;
    data->d[14] = -1.715088f;
    data->d[15] = -0.050291f;
    data->d[16] = -0.787438f;
    data->d[17] = -1.389450f;
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
    *result->MinResult(0) = 0.000078f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.817198f;
    data->d[1] = 0.797464f;
    data->d[2] = 0.314179f;
    data->d[3] = -0.762597f;
    data->d[4] = -0.111562f;
    data->d[5] = 0.636996f;
    data->d[6] = -0.586242f;
    data->d[7] = 0.156742f;
    data->d[8] = 0.076607f;
    data->d[9] = 0.107540f;
    data->d[10] = -0.483559f;
    data->d[11] = 1.156715f;
    data->d[12] = 0.896703f;
    data->d[13] = -1.560668f;
    data->d[14] = -0.355626f;
    data->d[15] = -2.434808f;
    data->d[16] = -0.700317f;
    data->d[17] = -1.317443f;
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
    *result->MinResult(1) = 0.000062f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -3.352043f;
    data->d[1] = 0.309379f;
    data->d[2] = -0.276247f;
    data->d[3] = -0.623374f;
    data->d[4] = 0.569103f;
    data->d[5] = 0.619382f;
    data->d[6] = 0.303081f;
    data->d[7] = 0.647349f;
    data->d[8] = 2.087239f;
    data->d[9] = -1.012754f;
    data->d[10] = -0.397564f;
    data->d[11] = -2.895749f;
    data->d[12] = -0.284342f;
    data->d[13] = -0.462877f;
    data->d[14] = 0.032212f;
    data->d[15] = -0.002953f;
    data->d[16] = -0.027305f;
    data->d[17] = -0.368983f;
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
    *result->MinResult(2) = 0.000058f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000078f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 92;
    state.m_index = 2;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
