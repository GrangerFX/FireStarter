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
    settings.m_seed = 124;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 1, 22);
    instructions->SetOperation(3, 0, 23);
    instructions->SetOperation(4, 1, 6);
    instructions->SetOperation(5, 1, 17);
    instructions->SetOperation(6, 0, 28);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 1, 28);
    instructions->SetOperation(10, 0, 18);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 26);
    instructions->SetOperation(15, 1, 14);
    instructions->SetOperation(16, 0, 5);
    instructions->SetOperation(17, 1, 3);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 1, 2);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 1, 20);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 1, 31);
    instructions->SetOperation(25, 1, 30);
    instructions->SetOperation(26, 1, 22);
    instructions->SetOperation(27, 0, 31);
    instructions->SetOperation(28, 1, 27);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 1, 13);
    instructions->SetOperation(31, 0, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.016841f;
    data->d[1] = 0.703635f;
    data->d[2] = 0.420281f;
    data->d[3] = 0.046444f;
    data->d[4] = -0.194163f;
    data->d[5] = -1.214806f;
    data->d[6] = 0.404269f;
    data->d[7] = 3.653611f;
    data->d[8] = -2.710775f;
    data->d[9] = 2.533818f;
    data->d[10] = 0.058958f;
    data->d[11] = -0.805967f;
    data->d[12] = 1.212302f;
    data->d[13] = -1.869617f;
    data->d[14] = -3.894812f;
    data->d[15] = 1.416145f;
    data->d[16] = -18.407730f;
    data->d[17] = 7.768316f;
    data->d[18] = 97.049583f;
    data->d[19] = 0.024972f;
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
    *(result->MinResult()) = 0.000400f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.585362f;
    data->d[1] = -0.512696f;
    data->d[2] = -0.863844f;
    data->d[3] = 0.264441f;
    data->d[4] = -1.008169f;
    data->d[5] = 1.452055f;
    data->d[6] = 0.675201f;
    data->d[7] = -0.995375f;
    data->d[8] = -0.043554f;
    data->d[9] = -2.589129f;
    data->d[10] = 0.166423f;
    data->d[11] = 3.408731f;
    data->d[12] = 2.226866f;
    data->d[13] = 0.347670f;
    data->d[14] = -1.156740f;
    data->d[15] = 0.230197f;
    data->d[16] = -0.609106f;
    data->d[17] = 7.362422f;
    data->d[18] = 3.573315f;
    data->d[19] = -0.039588f;
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
    *(result->MinResult()) = 0.000327f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.348133f;
    data->d[1] = -1.638145f;
    data->d[2] = -0.724810f;
    data->d[3] = -0.091690f;
    data->d[4] = -0.875843f;
    data->d[5] = 1.670913f;
    data->d[6] = -0.590005f;
    data->d[7] = -0.769131f;
    data->d[8] = 1.471483f;
    data->d[9] = -0.284231f;
    data->d[10] = 0.813152f;
    data->d[11] = 0.018846f;
    data->d[12] = -1.717344f;
    data->d[13] = -0.281182f;
    data->d[14] = 0.632969f;
    data->d[15] = -1.085282f;
    data->d[16] = 0.638368f;
    data->d[17] = 0.272259f;
    data->d[18] = 1.541674f;
    data->d[19] = -0.481091f;
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
    *(result->MinResult()) = 0.000492f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000492f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 65;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 344549890386350195;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
