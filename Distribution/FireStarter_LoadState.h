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

    settings.m_mode = FIRESTARTER_TEST;
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
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 1, 29);
    instructions->SetOperation(2, 1, 19);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 3);
    instructions->SetOperation(18, 0, 30);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 1, 22);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.379245f;
    data->d[1] = -2.530371f;
    data->d[2] = -1.990468f;
    data->d[3] = -0.379626f;
    data->d[4] = -0.135063f;
    data->d[5] = 1.325359f;
    data->d[6] = -0.841035f;
    data->d[7] = -1.138139f;
    data->d[8] = 0.332580f;
    data->d[9] = -1.556009f;
    data->d[10] = 0.597013f;
    data->d[11] = -0.473331f;
    data->d[12] = -1.747779f;
    data->d[13] = 0.362508f;
    data->d[14] = -0.410975f;
    data->d[15] = 0.682087f;
    data->d[16] = -0.274993f;
    data->d[17] = 0.488025f;
    data->d[18] = 0.712336f;
    data->d[19] = 0.226930f;
    data->d[20] = -0.000001f;
    data->d[21] = -1.470187f;
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
    *(result->MinResult()) = 0.000010f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.502954f;
    data->d[1] = -0.231522f;
    data->d[2] = -1.356187f;
    data->d[3] = 1.244707f;
    data->d[4] = -0.109589f;
    data->d[5] = 2.864615f;
    data->d[6] = -1.570037f;
    data->d[7] = 0.080668f;
    data->d[8] = 1.171662f;
    data->d[9] = 0.286939f;
    data->d[10] = -1.552349f;
    data->d[11] = 0.375804f;
    data->d[12] = 1.153086f;
    data->d[13] = 1.806328f;
    data->d[14] = -0.592479f;
    data->d[15] = 0.075909f;
    data->d[16] = -0.244622f;
    data->d[17] = -1.759188f;
    data->d[18] = 0.014070f;
    data->d[19] = -0.250228f;
    data->d[20] = -0.076622f;
    data->d[21] = 1.541761f;
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
    *(result->MinResult()) = 0.000012f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.054064f;
    data->d[1] = -1.490695f;
    data->d[2] = -0.073234f;
    data->d[3] = 0.727838f;
    data->d[4] = -0.142430f;
    data->d[5] = -0.513219f;
    data->d[6] = -0.669406f;
    data->d[7] = -0.295909f;
    data->d[8] = -0.461210f;
    data->d[9] = -1.243721f;
    data->d[10] = 0.651579f;
    data->d[11] = 0.828942f;
    data->d[12] = -0.776229f;
    data->d[13] = 2.106034f;
    data->d[14] = -0.653352f;
    data->d[15] = -2.444086f;
    data->d[16] = 0.127854f;
    data->d[17] = 4.189898f;
    data->d[18] = -0.003288f;
    data->d[19] = 0.278933f;
    data->d[20] = 0.432490f;
    data->d[21] = 1.210661f;
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
    *(result->MinResult()) = 0.000011f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000012f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 92;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
