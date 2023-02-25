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
    settings.m_seed = 10016;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 1, 17);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 3);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 1, 17);
    instructions->SetOperation(11, 0, 26);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 0, 5);
    instructions->SetOperation(15, 0, 30);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 1, 22);
    instructions->SetOperation(19, 0, 31);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 1, 1);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 1, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.139397f;
    data->d[1] = -0.391845f;
    data->d[2] = 1.499268f;
    data->d[3] = -1.708548f;
    data->d[4] = 1.735454f;
    data->d[5] = -0.366945f;
    data->d[6] = -1.779893f;
    data->d[7] = -0.128288f;
    data->d[8] = -0.678628f;
    data->d[9] = -0.800735f;
    data->d[10] = -0.219929f;
    data->d[11] = -0.269803f;
    data->d[12] = -1.380050f;
    data->d[13] = -4.061647f;
    data->d[14] = -5.648843f;
    data->d[15] = 2.682713f;
    data->d[16] = 0.124944f;
    data->d[17] = 3.571695f;
    data->d[18] = -0.452693f;
    data->d[19] = -0.711173f;
    data->d[20] = -4.769838f;
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
    *(result->MinResult()) = 0.000132f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.198840f;
    data->d[1] = 0.339287f;
    data->d[2] = -1.339696f;
    data->d[3] = -0.512052f;
    data->d[4] = -1.703273f;
    data->d[5] = 0.781979f;
    data->d[6] = -0.474309f;
    data->d[7] = 0.209463f;
    data->d[8] = 1.510900f;
    data->d[9] = 1.931655f;
    data->d[10] = -0.544005f;
    data->d[11] = -1.848824f;
    data->d[12] = -0.025852f;
    data->d[13] = 1.707866f;
    data->d[14] = -1.579721f;
    data->d[15] = 0.814186f;
    data->d[16] = -0.610796f;
    data->d[17] = -3.630355f;
    data->d[18] = -0.029099f;
    data->d[19] = 0.212781f;
    data->d[20] = 1.635376f;
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
    *(result->MinResult()) = 0.000207f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.933213f;
    data->d[1] = -0.347890f;
    data->d[2] = 1.445273f;
    data->d[3] = -1.168617f;
    data->d[4] = -0.850465f;
    data->d[5] = 2.195333f;
    data->d[6] = -1.422517f;
    data->d[7] = -0.274025f;
    data->d[8] = -1.412026f;
    data->d[9] = 1.744585f;
    data->d[10] = -0.668129f;
    data->d[11] = -0.911831f;
    data->d[12] = -1.228323f;
    data->d[13] = -0.332033f;
    data->d[14] = -0.728776f;
    data->d[15] = -1.143029f;
    data->d[16] = -0.407167f;
    data->d[17] = -0.720430f;
    data->d[18] = -0.451861f;
    data->d[19] = -0.239259f;
    data->d[20] = -3.847083f;
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
    *(result->MinResult()) = 0.000213f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000213f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 32;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 12313311958015315764;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
