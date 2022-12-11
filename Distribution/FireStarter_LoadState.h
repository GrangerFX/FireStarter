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

    settings.m_mode = FIRESTARTER_TEST;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 11);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 19);
    instructions->SetOperation(20, 1, 31);
    instructions->SetOperation(21, 1, 27);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 0, 31);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -2.763998f;
    data->d[1] = -0.733751f;
    data->d[2] = 0.751294f;
    data->d[3] = 0.562999f;
    data->d[4] = -0.072742f;
    data->d[5] = -0.009506f;
    data->d[6] = 3.882779f;
    data->d[7] = -10.515841f;
    data->d[8] = -0.053881f;
    data->d[9] = 1.253736f;
    data->d[10] = 0.499363f;
    data->d[11] = -0.784522f;
    data->d[12] = -0.347047f;
    data->d[13] = -1.657501f;
    data->d[14] = 1.217318f;
    data->d[15] = 0.036632f;
    data->d[16] = 0.824805f;
    data->d[17] = -0.127712f;
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
    *result->MinResult(0) = 0.000075f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.125217f;
    data->d[1] = -0.284646f;
    data->d[2] = 0.017876f;
    data->d[3] = 1.721412f;
    data->d[4] = -0.792092f;
    data->d[5] = 0.444066f;
    data->d[6] = -0.438147f;
    data->d[7] = 8.461301f;
    data->d[8] = 3.133471f;
    data->d[9] = 1.114103f;
    data->d[10] = -0.980953f;
    data->d[11] = -0.417948f;
    data->d[12] = 1.487235f;
    data->d[13] = -1.571182f;
    data->d[14] = 1.028193f;
    data->d[15] = 0.607480f;
    data->d[16] = -0.031619f;
    data->d[17] = -0.164708f;
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
    *result->MinResult(1) = 0.000107f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.764615f;
    data->d[1] = -0.595869f;
    data->d[2] = 0.939535f;
    data->d[3] = 0.843678f;
    data->d[4] = 0.283365f;
    data->d[5] = -0.029245f;
    data->d[6] = -1.720074f;
    data->d[7] = 3.532278f;
    data->d[8] = -0.156668f;
    data->d[9] = 3.779418f;
    data->d[10] = -1.017300f;
    data->d[11] = 0.103297f;
    data->d[12] = 2.649001f;
    data->d[13] = 0.573625f;
    data->d[14] = -0.681345f;
    data->d[15] = -0.880731f;
    data->d[16] = 1.132839f;
    data->d[17] = 0.055561f;
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
    *result->MinResult(2) = 0.000081f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000107f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 14;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
