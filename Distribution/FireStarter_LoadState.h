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
    settings.m_seed = 99;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 30);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 1, 27);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.452834f;
    data->d[1] = 1.699600f;
    data->d[2] = 1.156891f;
    data->d[3] = -0.462233f;
    data->d[4] = -1.503922f;
    data->d[5] = 3.267163f;
    data->d[6] = 0.172280f;
    data->d[7] = -0.108897f;
    data->d[8] = 0.470035f;
    data->d[9] = 1.345754f;
    data->d[10] = 0.228198f;
    data->d[11] = -6.945742f;
    data->d[12] = 2.747889f;
    data->d[13] = -0.862749f;
    data->d[14] = -0.704846f;
    data->d[15] = 0.807665f;
    data->d[16] = -1.866129f;
    data->d[17] = -0.433952f;
    data->d[18] = 0.595621f;
    data->d[19] = -0.641369f;
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
    *(result->MinResult()) = 0.000210f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.370826f;
    data->d[1] = -1.710984f;
    data->d[2] = -0.715054f;
    data->d[3] = -0.708858f;
    data->d[4] = -0.906874f;
    data->d[5] = 1.723448f;
    data->d[6] = -0.185971f;
    data->d[7] = 0.849616f;
    data->d[8] = 0.893672f;
    data->d[9] = 1.619334f;
    data->d[10] = 0.116530f;
    data->d[11] = -3.380933f;
    data->d[12] = -0.142131f;
    data->d[13] = -2.732804f;
    data->d[14] = 0.044400f;
    data->d[15] = 0.899374f;
    data->d[16] = 1.015948f;
    data->d[17] = 0.386597f;
    data->d[18] = 1.128165f;
    data->d[19] = -0.449597f;
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
    *(result->MinResult()) = 0.000310f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.424079f;
    data->d[1] = -1.580985f;
    data->d[2] = 0.935921f;
    data->d[3] = 2.028316f;
    data->d[4] = -0.548743f;
    data->d[5] = -1.902789f;
    data->d[6] = 2.197074f;
    data->d[7] = 0.027034f;
    data->d[8] = -0.603267f;
    data->d[9] = 1.636907f;
    data->d[10] = -0.015655f;
    data->d[11] = -0.508293f;
    data->d[12] = -3.155991f;
    data->d[13] = -0.675572f;
    data->d[14] = 2.700016f;
    data->d[15] = 2.936725f;
    data->d[16] = 3.312800f;
    data->d[17] = -0.252366f;
    data->d[18] = -0.436352f;
    data->d[19] = -0.050790f;
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
    *(result->MinResult()) = 0.000367f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000367f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 9;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 7241345210498482023;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
