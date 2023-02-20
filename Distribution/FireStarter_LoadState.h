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
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 19);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 1, 17);
    instructions->SetOperation(6, 1, 20);
    instructions->SetOperation(7, 0, 20);
    instructions->SetOperation(8, 1, 29);
    instructions->SetOperation(9, 0, 13);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 27);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 29);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 30);
    instructions->SetOperation(31, 0, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 2.176355f;
    data->d[2] = 0.027749f;
    data->d[3] = -7.146534f;
    data->d[4] = 1.759859f;
    data->d[5] = 1.894950f;
    data->d[6] = -2.310476f;
    data->d[7] = 0.006424f;
    data->d[8] = 0.513562f;
    data->d[9] = -0.117296f;
    data->d[10] = 0.856532f;
    data->d[11] = 1.477298f;
    data->d[12] = 0.426470f;
    data->d[13] = 1.026922f;
    data->d[14] = -5.698450f;
    data->d[15] = 0.557271f;
    data->d[16] = -0.557271f;
    data->d[17] = -0.555883f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090660f;
    data->d[1] = 0.073064f;
    data->d[2] = -1.642705f;
    data->d[3] = 1.654638f;
    data->d[4] = 1.469042f;
    data->d[5] = -4.005348f;
    data->d[6] = -3.671800f;
    data->d[7] = 0.016665f;
    data->d[8] = 0.955191f;
    data->d[9] = -3.168563f;
    data->d[10] = 0.020005f;
    data->d[11] = 0.726382f;
    data->d[12] = -0.001611f;
    data->d[13] = -0.456781f;
    data->d[14] = -2.635096f;
    data->d[15] = 0.293705f;
    data->d[16] = -0.236140f;
    data->d[17] = -2.052176f;
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
    *(result->MinResult()) = 0.000006f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617995f;
    data->d[1] = -1.907340f;
    data->d[2] = -0.087145f;
    data->d[3] = -0.810505f;
    data->d[4] = 0.294674f;
    data->d[5] = 1.813465f;
    data->d[6] = -1.339957f;
    data->d[7] = -0.574844f;
    data->d[8] = 1.433211f;
    data->d[9] = 1.081078f;
    data->d[10] = 1.781540f;
    data->d[11] = -4.398753f;
    data->d[12] = 0.001557f;
    data->d[13] = -0.924566f;
    data->d[14] = -0.280625f;
    data->d[15] = 1.991277f;
    data->d[16] = -1.451698f;
    data->d[17] = 0.970385f;
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
    *(result->MinResult()) = 0.000007f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000007f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 112;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 16469176738490659771;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
