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
    instructions->SetOperation(0, 1, 11);
    instructions->SetOperation(1, 0, 3);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 1, 26);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 0, 18);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 31);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 1, 11);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 25);
    instructions->SetOperation(25, 1, 28);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 0, 30);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 1, 5);
    instructions->SetOperation(30, 1, 10);
    instructions->SetOperation(31, 1, 8);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141600f;
    data->d[1] = -1.379831f;
    data->d[2] = 0.236409f;
    data->d[3] = -0.239242f;
    data->d[4] = 2.243076f;
    data->d[5] = -1.334593f;
    data->d[6] = -0.867185f;
    data->d[7] = -0.978559f;
    data->d[8] = -2.059223f;
    data->d[9] = 1.638339f;
    data->d[10] = 2.715660f;
    data->d[11] = -0.049470f;
    data->d[12] = 1.196007f;
    data->d[13] = -0.261491f;
    data->d[14] = 0.357649f;
    data->d[15] = 1.966437f;
    data->d[16] = -1.071075f;
    data->d[17] = -1.012154f;
    data->d[18] = -1.696785f;
    data->d[19] = 0.612693f;
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
    *(result->MinResult()) = 0.000010f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090668f;
    data->d[1] = -1.098975f;
    data->d[2] = 0.341659f;
    data->d[3] = 0.336683f;
    data->d[4] = -0.921158f;
    data->d[5] = 1.678546f;
    data->d[6] = -2.046504f;
    data->d[7] = -1.797073f;
    data->d[8] = -0.667117f;
    data->d[9] = -0.819474f;
    data->d[10] = 1.157495f;
    data->d[11] = -0.302106f;
    data->d[12] = 0.205934f;
    data->d[13] = 0.058547f;
    data->d[14] = -0.743158f;
    data->d[15] = -0.204576f;
    data->d[16] = -1.012667f;
    data->d[17] = -1.010936f;
    data->d[18] = -0.063024f;
    data->d[19] = -1.078852f;
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
    *(result->MinResult()) = 0.000008f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617986f;
    data->d[1] = 1.337812f;
    data->d[2] = -0.245732f;
    data->d[3] = 0.328171f;
    data->d[4] = -0.098849f;
    data->d[5] = -0.753088f;
    data->d[6] = 1.514055f;
    data->d[7] = 0.534909f;
    data->d[8] = 0.226494f;
    data->d[9] = -1.569256f;
    data->d[10] = -0.355549f;
    data->d[11] = -2.263781f;
    data->d[12] = 0.795888f;
    data->d[13] = -1.627077f;
    data->d[14] = 2.104682f;
    data->d[15] = -0.654671f;
    data->d[16] = 0.430109f;
    data->d[17] = -1.461007f;
    data->d[18] = -0.814018f;
    data->d[19] = 1.966001f;
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
    *(result->MinResult()) = 0.000015f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000015f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 178;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 1578818260048035124;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
