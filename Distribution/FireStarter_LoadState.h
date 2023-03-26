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
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 4834;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 12);
    instructions->SetOperation(1, 0, 4);
    instructions->SetOperation(2, 0, 25);
    instructions->SetOperation(3, 0, 16);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 0, 19);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 1, 0);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 1, 27);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 20);
    instructions->SetOperation(19, 0, 30);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 0, 0);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 1, 3);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.071475f;
    data->d[2] = -1.725387f;
    data->d[3] = 1.264586f;
    data->d[4] = 1.151443f;
    data->d[5] = -2.602033f;
    data->d[6] = 1.287884f;
    data->d[7] = -0.019972f;
    data->d[8] = -1.118371f;
    data->d[9] = 1.113915f;
    data->d[10] = 1.775819f;
    data->d[11] = 0.276328f;
    data->d[12] = 3.229033f;
    data->d[13] = -1.581871f;
    data->d[14] = 0.718780f;
    data->d[15] = -0.292276f;
    data->d[16] = 0.490801f;
    data->d[17] = -3.254690f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 1.610120f;
    data->d[2] = -0.232325f;
    data->d[3] = -0.219307f;
    data->d[4] = -0.104414f;
    data->d[5] = -2.257969f;
    data->d[6] = 0.229273f;
    data->d[7] = -0.031632f;
    data->d[8] = -3.165211f;
    data->d[9] = -0.282387f;
    data->d[10] = -0.059011f;
    data->d[11] = -2.499974f;
    data->d[12] = 0.694656f;
    data->d[13] = -1.675449f;
    data->d[14] = -5.141623f;
    data->d[15] = -0.966258f;
    data->d[16] = -1.538962f;
    data->d[17] = 2.552895f;
    data->d[18] = -0.118132f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.192184f;
    data->d[2] = -1.228529f;
    data->d[3] = 0.134825f;
    data->d[4] = -0.026938f;
    data->d[5] = 1.744810f;
    data->d[6] = 3.407415f;
    data->d[7] = 2.268641f;
    data->d[8] = -1.349447f;
    data->d[9] = 2.044035f;
    data->d[10] = 2.838272f;
    data->d[11] = 0.316809f;
    data->d[12] = 17.411850f;
    data->d[13] = 2.760290f;
    data->d[14] = 0.217817f;
    data->d[15] = 0.069652f;
    data->d[16] = 0.441465f;
    data->d[17] = 0.199041f;
    data->d[18] = 0.523599f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000003f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 0;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 5070927893088371485;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
