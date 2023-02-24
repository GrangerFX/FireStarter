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
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 15);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 29);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 11);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 22);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 1, 26);
    instructions->SetOperation(29, 1, 29);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.802798f;
    data->d[1] = 1.221548f;
    data->d[2] = 0.187551f;
    data->d[3] = 0.214361f;
    data->d[4] = 0.038833f;
    data->d[5] = -0.210032f;
    data->d[6] = 1.571498f;
    data->d[7] = -1.308466f;
    data->d[8] = -1.049607f;
    data->d[9] = -1.159774f;
    data->d[10] = 0.949454f;
    data->d[11] = 1.333196f;
    data->d[12] = -1.157979f;
    data->d[13] = -0.591897f;
    data->d[14] = -1.327611f;
    data->d[15] = 0.354873f;
    data->d[16] = 0.267382f;
    data->d[17] = 0.655393f;
    data->d[18] = 0.193806f;
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
    *(result->MinResult()) = 0.000124f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.239412f;
    data->d[1] = -0.644514f;
    data->d[2] = 1.184945f;
    data->d[3] = -0.821932f;
    data->d[4] = 0.016304f;
    data->d[5] = -1.993484f;
    data->d[6] = 0.842232f;
    data->d[7] = 1.228677f;
    data->d[8] = -1.642470f;
    data->d[9] = -0.362698f;
    data->d[10] = 1.181567f;
    data->d[11] = 0.248304f;
    data->d[12] = -0.911302f;
    data->d[13] = -0.213609f;
    data->d[14] = -1.060967f;
    data->d[15] = 2.378434f;
    data->d[16] = -0.311104f;
    data->d[17] = 3.067237f;
    data->d[18] = 0.022489f;
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
    *(result->MinResult()) = 0.000191f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.173225f;
    data->d[1] = -1.706787f;
    data->d[2] = 1.224288f;
    data->d[3] = 1.493434f;
    data->d[4] = 1.046887f;
    data->d[5] = -0.019452f;
    data->d[6] = 0.973432f;
    data->d[7] = -0.657703f;
    data->d[8] = -0.794718f;
    data->d[9] = -0.274574f;
    data->d[10] = -2.137314f;
    data->d[11] = -1.512206f;
    data->d[12] = -2.091229f;
    data->d[13] = 0.017541f;
    data->d[14] = -0.951251f;
    data->d[15] = -0.221160f;
    data->d[16] = 0.161084f;
    data->d[17] = 2.846770f;
    data->d[18] = 0.629034f;
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
    *(result->MinResult()) = 0.000221f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000221f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 55;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 2396192517636882494;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
