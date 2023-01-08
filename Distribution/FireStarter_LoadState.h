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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 1;
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
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 31);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 0, 27);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 0, 29);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 31);
    instructions->SetOperation(24, 1, 31);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 0, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.858965f;
    data->d[1] = 0.919740f;
    data->d[2] = -4.594807f;
    data->d[3] = 0.499821f;
    data->d[4] = 0.649260f;
    data->d[5] = 0.026990f;
    data->d[6] = 5.701551f;
    data->d[7] = 0.781947f;
    data->d[8] = -0.447543f;
    data->d[9] = 0.648860f;
    data->d[10] = 0.291600f;
    data->d[11] = -0.107254f;
    data->d[12] = 0.597025f;
    data->d[13] = -0.530870f;
    data->d[14] = 0.714914f;
    data->d[15] = 3.394706f;
    data->d[16] = -0.749057f;
    data->d[17] = -8.609006f;
    data->d[18] = -0.916124f;
    data->d[19] = 3.553504f;
    data->d[20] = -2.704449f;
    data->d[21] = -3.716483f;
    data->d[22] = -0.554407f;
    data->d[23] = -0.695044f;
    data->d[24] = 0.126835f;
    data->d[25] = -0.398198f;
    data->d[26] = 2.332877f;
    data->d[27] = -0.460171f;
    data->d[28] = 0.713443f;
    data->d[29] = 0.484470f;
    data->d[30] = 7.150134f;
    data->d[31] = -0.018158f;
    *(result->MinResult()) = 0.003857f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.904748f;
    data->d[1] = -1.258708f;
    data->d[2] = 0.124986f;
    data->d[3] = 1.185735f;
    data->d[4] = 0.179857f;
    data->d[5] = -1.063845f;
    data->d[6] = 0.451394f;
    data->d[7] = -0.564201f;
    data->d[8] = 0.592924f;
    data->d[9] = 0.827688f;
    data->d[10] = 0.422105f;
    data->d[11] = -0.493831f;
    data->d[12] = 0.653674f;
    data->d[13] = -1.122652f;
    data->d[14] = 0.311963f;
    data->d[15] = -0.319634f;
    data->d[16] = 1.883706f;
    data->d[17] = 0.618754f;
    data->d[18] = 0.962769f;
    data->d[19] = 0.773368f;
    data->d[20] = -0.835122f;
    data->d[21] = -0.536122f;
    data->d[22] = 1.164227f;
    data->d[23] = 0.227446f;
    data->d[24] = -0.210487f;
    data->d[25] = -0.201252f;
    data->d[26] = -0.453757f;
    data->d[27] = 0.344144f;
    data->d[28] = -0.458101f;
    data->d[29] = -0.754569f;
    data->d[30] = -1.026483f;
    data->d[31] = -0.789475f;
    *(result->MinResult()) = 0.011649f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.171553f;
    data->d[1] = 1.252745f;
    data->d[2] = 0.747028f;
    data->d[3] = 0.522649f;
    data->d[4] = -3.026175f;
    data->d[5] = -0.780181f;
    data->d[6] = 0.632095f;
    data->d[7] = -0.564887f;
    data->d[8] = 0.217509f;
    data->d[9] = 0.402559f;
    data->d[10] = -0.612595f;
    data->d[11] = -0.074882f;
    data->d[12] = -1.422300f;
    data->d[13] = 0.095315f;
    data->d[14] = -0.185715f;
    data->d[15] = -1.668308f;
    data->d[16] = 1.290311f;
    data->d[17] = 0.770144f;
    data->d[18] = 0.488515f;
    data->d[19] = -0.439144f;
    data->d[20] = 0.111429f;
    data->d[21] = 0.113168f;
    data->d[22] = 0.855850f;
    data->d[23] = 0.551785f;
    data->d[24] = 0.304962f;
    data->d[25] = 0.002665f;
    data->d[26] = -0.667315f;
    data->d[27] = 0.203712f;
    data->d[28] = -0.731345f;
    data->d[29] = 1.635263f;
    data->d[30] = 1.894108f;
    data->d[31] = 0.488515f;
    *(result->MinResult()) = 0.011851f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(651403535));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(1));

    state.m_maxResult = 0.011851f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 40;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
