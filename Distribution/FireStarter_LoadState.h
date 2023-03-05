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
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 13);
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
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 0, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.266356f;
    data->d[1] = 0.836866f;
    data->d[2] = 0.741489f;
    data->d[3] = -0.384989f;
    data->d[4] = -0.917132f;
    data->d[5] = -1.006003f;
    data->d[6] = 0.000080f;
    data->d[7] = 0.449846f;
    data->d[8] = -1.246141f;
    data->d[9] = -0.186299f;
    data->d[10] = -1.153178f;
    data->d[11] = -0.918171f;
    data->d[12] = -1.863818f;
    data->d[13] = 0.441571f;
    data->d[14] = -0.596445f;
    data->d[15] = 3.279143f;
    data->d[16] = 0.723406f;
    data->d[17] = 1.636839f;
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
    *(result->MinResult()) = 0.000353f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.190227f;
    data->d[1] = 0.592305f;
    data->d[2] = 0.949305f;
    data->d[3] = -1.221199f;
    data->d[4] = 0.398594f;
    data->d[5] = -1.853316f;
    data->d[6] = 0.031114f;
    data->d[7] = -0.629582f;
    data->d[8] = 0.953315f;
    data->d[9] = -3.726424f;
    data->d[10] = 3.321569f;
    data->d[11] = -0.079269f;
    data->d[12] = 1.293138f;
    data->d[13] = 1.062189f;
    data->d[14] = 0.288955f;
    data->d[15] = 0.122715f;
    data->d[16] = 1.045076f;
    data->d[17] = 2.494835f;
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
    *(result->MinResult()) = 0.000284f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.101649f;
    data->d[1] = -0.539734f;
    data->d[2] = 1.804079f;
    data->d[3] = -0.948237f;
    data->d[4] = 0.569325f;
    data->d[5] = 0.202017f;
    data->d[6] = 0.651556f;
    data->d[7] = -1.404533f;
    data->d[8] = -1.458783f;
    data->d[9] = -0.630867f;
    data->d[10] = 2.425165f;
    data->d[11] = -1.779795f;
    data->d[12] = 1.141870f;
    data->d[13] = -1.266076f;
    data->d[14] = -1.956291f;
    data->d[15] = 5.759198f;
    data->d[16] = -6.168197f;
    data->d[17] = -12.934385f;
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
    *(result->MinResult()) = 0.000476f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000476f;
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
    state.m_test = 0;
    state.m_seed = 7294716128747844043;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
