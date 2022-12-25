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
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
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
    data->d[0] = -3.141586f;
    data->d[1] = 0.269305f;
    data->d[2] = -0.719494f;
    data->d[3] = 1.942532f;
    data->d[4] = 0.780528f;
    data->d[5] = -1.294612f;
    data->d[6] = 1.819947f;
    data->d[7] = -0.115236f;
    data->d[8] = 1.497005f;
    data->d[9] = -1.406055f;
    data->d[10] = -0.031994f;
    data->d[11] = 0.750329f;
    data->d[12] = 1.143371f;
    data->d[13] = -1.718232f;
    data->d[14] = 1.538444f;
    data->d[15] = -3.578527f;
    data->d[16] = -0.652497f;
    data->d[17] = 0.761504f;
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
    *result->MinResult(0) = 0.000013f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090664f;
    data->d[1] = 0.345580f;
    data->d[2] = 1.106724f;
    data->d[3] = -5.093850f;
    data->d[4] = -0.606781f;
    data->d[5] = -0.465947f;
    data->d[6] = 1.210662f;
    data->d[7] = -0.110353f;
    data->d[8] = 0.448178f;
    data->d[9] = -1.397070f;
    data->d[10] = -0.574125f;
    data->d[11] = -4.814585f;
    data->d[12] = 1.039049f;
    data->d[13] = 0.136184f;
    data->d[14] = -0.863480f;
    data->d[15] = 2.508216f;
    data->d[16] = -0.000792f;
    data->d[17] = 55.020584f;
    data->d[18] = -0.118134f;
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
    *result->MinResult(1) = 0.000009f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617993f;
    data->d[1] = -0.837080f;
    data->d[2] = -0.015140f;
    data->d[3] = 1.688339f;
    data->d[4] = -0.549975f;
    data->d[5] = -1.764148f;
    data->d[6] = -1.021595f;
    data->d[7] = 0.737519f;
    data->d[8] = -0.552283f;
    data->d[9] = -1.821986f;
    data->d[10] = 0.076417f;
    data->d[11] = 0.393736f;
    data->d[12] = -4.554288f;
    data->d[13] = 2.578515f;
    data->d[14] = -2.054039f;
    data->d[15] = 0.290115f;
    data->d[16] = -0.075153f;
    data->d[17] = 0.737967f;
    data->d[18] = 0.523597f;
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
    *result->MinResult(2) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000013f;
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
