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
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 100;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 1, 26);
    instructions->SetOperation(2, 1, 22);
    instructions->SetOperation(3, 0, 15);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 1, 7);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 1, 18);
    instructions->SetOperation(8, 1, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 0, 29);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 0, 7);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 1, 30);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 1, 14);
    instructions->SetOperation(29, 1, 18);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.249559f;
    data->d[1] = -0.839759f;
    data->d[2] = 0.860054f;
    data->d[3] = -1.816214f;
    data->d[4] = -0.843786f;
    data->d[5] = 1.471112f;
    data->d[6] = 0.338150f;
    data->d[7] = -0.177138f;
    data->d[8] = 1.158627f;
    data->d[9] = 0.460668f;
    data->d[10] = -2.084241f;
    data->d[11] = 0.363871f;
    data->d[12] = -1.187329f;
    data->d[13] = -2.135066f;
    data->d[14] = 2.015667f;
    data->d[15] = -0.997157f;
    data->d[16] = -0.958246f;
    data->d[17] = -0.319337f;
    data->d[18] = 2.510461f;
    data->d[19] = -0.580256f;
    data->d[20] = -0.320899f;
    data->d[21] = 1.046920f;
    data->d[22] = -0.649697f;
    data->d[23] = -0.057325f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000341f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.400948f;
    data->d[1] = -0.158889f;
    data->d[2] = -1.662744f;
    data->d[3] = 0.148383f;
    data->d[4] = -0.318965f;
    data->d[5] = 0.270321f;
    data->d[6] = -1.174651f;
    data->d[7] = -1.796574f;
    data->d[8] = -0.598885f;
    data->d[9] = 3.689360f;
    data->d[10] = -0.037057f;
    data->d[11] = -1.227062f;
    data->d[12] = -0.516761f;
    data->d[13] = 0.503623f;
    data->d[14] = -0.043364f;
    data->d[15] = 0.670260f;
    data->d[16] = -0.320857f;
    data->d[17] = -1.702343f;
    data->d[18] = 1.557690f;
    data->d[19] = 1.612246f;
    data->d[20] = -0.614111f;
    data->d[21] = 0.157673f;
    data->d[22] = 0.566417f;
    data->d[23] = -0.255232f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000089f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.596832f;
    data->d[1] = -0.666981f;
    data->d[2] = 0.052507f;
    data->d[3] = -0.890073f;
    data->d[4] = 1.946660f;
    data->d[5] = 1.181725f;
    data->d[6] = 1.206530f;
    data->d[7] = 1.263337f;
    data->d[8] = 0.360349f;
    data->d[9] = -0.230123f;
    data->d[10] = -0.010426f;
    data->d[11] = -0.651140f;
    data->d[12] = 3.852804f;
    data->d[13] = -1.326472f;
    data->d[14] = -1.106601f;
    data->d[15] = 0.192577f;
    data->d[16] = -0.114799f;
    data->d[17] = -0.755015f;
    data->d[18] = -1.270205f;
    data->d[19] = -1.713975f;
    data->d[20] = -2.108683f;
    data->d[21] = 0.714480f;
    data->d[22] = -0.344762f;
    data->d[23] = 0.593181f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.000515f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000515f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 22;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
