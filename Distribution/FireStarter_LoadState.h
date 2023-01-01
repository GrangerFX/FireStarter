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
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 1, 11);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 0, 24);
    instructions->SetOperation(10, 0, 16);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 1, 7);
    instructions->SetOperation(13, 0, 30);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 1, 26);
    instructions->SetOperation(17, 0, 22);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 29);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 1, 12);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 0, 6);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141592f;
    data->d[1] = -0.379598f;
    data->d[2] = -0.454938f;
    data->d[3] = 0.000001f;
    data->d[4] = 1.379418f;
    data->d[5] = 0.435613f;
    data->d[6] = 0.312068f;
    data->d[7] = -0.625144f;
    data->d[8] = -2.761942f;
    data->d[9] = 0.707505f;
    data->d[10] = 1.486458f;
    data->d[11] = -3.415150f;
    data->d[12] = 0.511374f;
    data->d[13] = 1.344300f;
    data->d[14] = -0.994563f;
    data->d[15] = -1.732865f;
    data->d[16] = 1.177596f;
    data->d[17] = -1.664830f;
    data->d[18] = 1.007665f;
    data->d[19] = 1.729880f;
    data->d[20] = 0.291351f;
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
    *result->MinResult(0) = 0.000018f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.862675f;
    data->d[1] = 0.271981f;
    data->d[2] = -2.259558f;
    data->d[3] = -1.297058f;
    data->d[4] = 0.820130f;
    data->d[5] = -0.194223f;
    data->d[6] = 1.577837f;
    data->d[7] = 0.124033f;
    data->d[8] = -16.567255f;
    data->d[9] = -0.221665f;
    data->d[10] = -1.554405f;
    data->d[11] = -0.327951f;
    data->d[12] = 0.996913f;
    data->d[13] = -0.868749f;
    data->d[14] = 1.441064f;
    data->d[15] = 1.709946f;
    data->d[16] = -0.318674f;
    data->d[17] = -3.598609f;
    data->d[18] = 0.661929f;
    data->d[19] = 3.385154f;
    data->d[20] = -0.137400f;
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
    *result->MinResult(1) = 0.000645f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.000510f;
    data->d[1] = -0.421091f;
    data->d[2] = 0.631470f;
    data->d[3] = 0.025607f;
    data->d[4] = 0.702770f;
    data->d[5] = 0.825904f;
    data->d[6] = 0.728621f;
    data->d[7] = 1.449809f;
    data->d[8] = 0.263998f;
    data->d[9] = -1.151919f;
    data->d[10] = 0.630256f;
    data->d[11] = 0.827429f;
    data->d[12] = 0.524511f;
    data->d[13] = -1.173583f;
    data->d[14] = -0.239277f;
    data->d[15] = 0.917983f;
    data->d[16] = -1.064167f;
    data->d[17] = 1.350704f;
    data->d[18] = 3.621039f;
    data->d[19] = 0.784045f;
    data->d[20] = 1.806888f;
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
    *result->MinResult(2) = 0.000714f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000714f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 22;
    state.m_index = 5;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
