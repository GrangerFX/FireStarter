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
    settings.m_attempts = 16;
    settings.m_seed = 15;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 8);
    instructions->SetOperation(1, 1, 31);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 0, 31);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 22);
    instructions->SetOperation(8, 1, 5);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 1, 18);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 1, 24);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 0, 4);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 1, 3);
    instructions->SetOperation(25, 1, 12);
    instructions->SetOperation(26, 1, 28);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 28);
    instructions->SetOperation(31, 0, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.855162f;
    data->d[1] = -2.239538f;
    data->d[2] = 12.636043f;
    data->d[3] = 1.821683f;
    data->d[4] = 1.137102f;
    data->d[5] = -1.153645f;
    data->d[6] = 0.033909f;
    data->d[7] = -0.128040f;
    data->d[8] = -1.955118f;
    data->d[9] = 3.239980f;
    data->d[10] = 1.861154f;
    data->d[11] = -1.602769f;
    data->d[12] = -0.003009f;
    data->d[13] = 1.581116f;
    data->d[14] = -1.331533f;
    data->d[15] = -0.197653f;
    data->d[16] = 1.921319f;
    data->d[17] = -1.987330f;
    data->d[18] = 2.028094f;
    data->d[19] = -0.458885f;
    data->d[20] = -1.169249f;
    data->d[21] = 0.077842f;
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
    *(result->MinResult()) = 0.000735f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.048309f;
    data->d[1] = 2.038501f;
    data->d[2] = -2.489654f;
    data->d[3] = -1.435300f;
    data->d[4] = -1.130261f;
    data->d[5] = 1.596754f;
    data->d[6] = -0.155280f;
    data->d[7] = 3.307780f;
    data->d[8] = -0.768390f;
    data->d[9] = -0.069045f;
    data->d[10] = -1.555699f;
    data->d[11] = -1.346391f;
    data->d[12] = -1.473716f;
    data->d[13] = -1.286587f;
    data->d[14] = 1.827684f;
    data->d[15] = -2.031276f;
    data->d[16] = -1.126202f;
    data->d[17] = 0.887386f;
    data->d[18] = -0.105619f;
    data->d[19] = 1.569134f;
    data->d[20] = -1.100874f;
    data->d[21] = -2.176659f;
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
    *(result->MinResult()) = 0.000233f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.149217f;
    data->d[1] = -1.445749f;
    data->d[2] = 1.843682f;
    data->d[3] = -2.195991f;
    data->d[4] = 1.876595f;
    data->d[5] = -1.876601f;
    data->d[6] = 0.185402f;
    data->d[7] = -2.327167f;
    data->d[8] = 0.990344f;
    data->d[9] = -0.624975f;
    data->d[10] = -1.725858f;
    data->d[11] = -2.406264f;
    data->d[12] = 0.782947f;
    data->d[13] = -0.024489f;
    data->d[14] = 0.812986f;
    data->d[15] = -0.072447f;
    data->d[16] = 0.860118f;
    data->d[17] = 1.147180f;
    data->d[18] = -1.152041f;
    data->d[19] = -3.055915f;
    data->d[20] = -10.024282f;
    data->d[21] = -0.756466f;
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
    *(result->MinResult()) = 0.000839f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000839f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 2;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 18419607116196415875;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
