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
    settings.m_seed = 12;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 10);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 1, 23);
    instructions->SetOperation(5, 1, 20);
    instructions->SetOperation(6, 1, 23);
    instructions->SetOperation(7, 1, 3);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 0, 29);
    instructions->SetOperation(14, 0, 1);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 18);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 29);
    instructions->SetOperation(24, 1, 0);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 1, 28);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 1, 28);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 1, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.080714f;
    data->d[1] = 0.008322f;
    data->d[2] = -1.177509f;
    data->d[3] = -1.656235f;
    data->d[4] = 0.808800f;
    data->d[5] = -2.721472f;
    data->d[6] = 14.755502f;
    data->d[7] = 0.007756f;
    data->d[8] = 0.893359f;
    data->d[9] = 0.303504f;
    data->d[10] = -0.397227f;
    data->d[11] = 0.052013f;
    data->d[12] = -0.283834f;
    data->d[13] = -0.610425f;
    data->d[14] = 0.468312f;
    data->d[15] = 0.939209f;
    data->d[16] = 0.620588f;
    data->d[17] = -0.006118f;
    data->d[18] = -0.069163f;
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
    *(result->MinResult()) = 0.000018f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.259704f;
    data->d[1] = 0.189348f;
    data->d[2] = 1.923029f;
    data->d[3] = -3.861000f;
    data->d[4] = 5.998993f;
    data->d[5] = -6.936469f;
    data->d[6] = -1.692111f;
    data->d[7] = -0.001171f;
    data->d[8] = 1.737590f;
    data->d[9] = -1.528289f;
    data->d[10] = 4.896681f;
    data->d[11] = 0.036643f;
    data->d[12] = 0.565745f;
    data->d[13] = -0.635640f;
    data->d[14] = 0.189572f;
    data->d[15] = -0.303526f;
    data->d[16] = 0.502905f;
    data->d[17] = 0.114208f;
    data->d[18] = -0.126595f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.259685f;
    data->d[1] = -0.478168f;
    data->d[2] = -3.009433f;
    data->d[3] = 16.113169f;
    data->d[4] = -5.396084f;
    data->d[5] = 5.595222f;
    data->d[6] = 17.713564f;
    data->d[7] = 0.006763f;
    data->d[8] = 0.020629f;
    data->d[9] = 1.224299f;
    data->d[10] = 0.309052f;
    data->d[11] = 0.091271f;
    data->d[12] = 0.699473f;
    data->d[13] = -0.356317f;
    data->d[14] = -0.282644f;
    data->d[15] = 0.229850f;
    data->d[16] = 0.258862f;
    data->d[17] = -0.252888f;
    data->d[18] = 0.675545f;
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
    *(result->MinResult()) = 0.000033f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000033f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 379;
    state.m_index = 0;
    state.m_test = 12;
    state.m_seed = 305256492009065277;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
