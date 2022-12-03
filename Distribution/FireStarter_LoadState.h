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
    settings.m_units = 10;
    settings.m_processes = 16;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 8;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 1, 28);
    instructions->SetOperation(4, 1, 1);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 10);
    instructions->SetOperation(9, 1, 28);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 1, 12);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 0, 3);
    instructions->SetOperation(15, 1, 29);
    instructions->SetOperation(16, 0, 28);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 31);
    instructions->SetOperation(19, 0, 31);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 1, 18);
    instructions->SetOperation(22, 1, 20);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 1, 22);
    instructions->SetOperation(26, 1, 29);
    instructions->SetOperation(27, 0, 31);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -7.919200f;
    data->d[1] = 2.637996f;
    data->d[2] = -0.587914f;
    data->d[3] = 0.942081f;
    data->d[4] = 1.004688f;
    data->d[5] = -0.143735f;
    data->d[6] = -0.955564f;
    data->d[7] = -0.181864f;
    data->d[8] = 1.118977f;
    data->d[9] = -0.048516f;
    data->d[10] = 0.309052f;
    data->d[11] = -0.594237f;
    data->d[12] = -0.070656f;
    data->d[13] = 0.995371f;
    data->d[14] = -0.593201f;
    data->d[15] = 0.676250f;
    data->d[16] = -0.125553f;
    data->d[17] = -0.629344f;
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
    *result->MinResult(0) = 0.000223f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.159859f;
    data->d[1] = -3.418517f;
    data->d[2] = 0.245764f;
    data->d[3] = 0.546597f;
    data->d[4] = -0.726152f;
    data->d[5] = 0.712587f;
    data->d[6] = -0.508935f;
    data->d[7] = -1.285876f;
    data->d[8] = -0.678024f;
    data->d[9] = 0.235550f;
    data->d[10] = 1.024886f;
    data->d[11] = 0.213836f;
    data->d[12] = -0.946537f;
    data->d[13] = -0.283836f;
    data->d[14] = -24.936449f;
    data->d[15] = -0.246693f;
    data->d[16] = -0.129492f;
    data->d[17] = -0.815817f;
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
    *result->MinResult(1) = 0.000233f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.810235f;
    data->d[1] = -2.243507f;
    data->d[2] = -0.538234f;
    data->d[3] = -1.332302f;
    data->d[4] = 0.672056f;
    data->d[5] = 1.160530f;
    data->d[6] = 0.608479f;
    data->d[7] = -1.093713f;
    data->d[8] = -0.575033f;
    data->d[9] = 0.861643f;
    data->d[10] = 0.444794f;
    data->d[11] = -1.206093f;
    data->d[12] = -0.031020f;
    data->d[13] = -0.547991f;
    data->d[14] = -1.302414f;
    data->d[15] = 1.951872f;
    data->d[16] = -0.531108f;
    data->d[17] = 0.429522f;
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
    *result->MinResult(2) = 0.000187f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000233f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 7;
    state.m_index = 8;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
