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
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 1);
    instructions->SetOperation(3, 1, 4);
    instructions->SetOperation(4, 1, 5);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 1, 5);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 1, 30);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 15);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 25);
    instructions->SetOperation(18, 1, 30);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 1, 12);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 0, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.372021f;
    data->d[1] = 0.389392f;
    data->d[2] = 0.704183f;
    data->d[3] = -0.469196f;
    data->d[4] = 0.196910f;
    data->d[5] = 1.226822f;
    data->d[6] = -0.811499f;
    data->d[7] = -0.417134f;
    data->d[8] = -0.901926f;
    data->d[9] = 0.395866f;
    data->d[10] = -0.281579f;
    data->d[11] = -0.505264f;
    data->d[12] = -0.340672f;
    data->d[13] = -0.500439f;
    data->d[14] = 1.286576f;
    data->d[15] = -0.569012f;
    data->d[16] = 0.413425f;
    data->d[17] = -2.283776f;
    data->d[18] = -1.060336f;
    data->d[19] = -1.832407f;
    data->d[20] = 2.112442f;
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
    *(result->MinResult()) = 0.000366f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.020439f;
    data->d[1] = 0.172324f;
    data->d[2] = 3.310316f;
    data->d[3] = -3.775379f;
    data->d[4] = 0.164193f;
    data->d[5] = 0.563583f;
    data->d[6] = -0.079897f;
    data->d[7] = 0.552958f;
    data->d[8] = -0.801477f;
    data->d[9] = 0.773276f;
    data->d[10] = -0.075133f;
    data->d[11] = 0.098536f;
    data->d[12] = -0.625133f;
    data->d[13] = 0.650520f;
    data->d[14] = -2.185732f;
    data->d[15] = -0.283155f;
    data->d[16] = -0.947095f;
    data->d[17] = 0.536950f;
    data->d[18] = 1.079588f;
    data->d[19] = 0.039205f;
    data->d[20] = 1.700141f;
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
    *(result->MinResult()) = 0.000247f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.364524f;
    data->d[1] = -0.405154f;
    data->d[2] = -1.051855f;
    data->d[3] = 1.476142f;
    data->d[4] = -0.291880f;
    data->d[5] = -2.032273f;
    data->d[6] = -1.013096f;
    data->d[7] = 0.874085f;
    data->d[8] = -1.398414f;
    data->d[9] = 1.505472f;
    data->d[10] = 0.967290f;
    data->d[11] = -0.712250f;
    data->d[12] = -0.589480f;
    data->d[13] = 0.838484f;
    data->d[14] = -1.357058f;
    data->d[15] = -1.744446f;
    data->d[16] = -0.892095f;
    data->d[17] = -0.491998f;
    data->d[18] = -0.164793f;
    data->d[19] = 1.664543f;
    data->d[20] = -0.634850f;
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
    *(result->MinResult()) = 0.000379f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000379f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 77;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 460643412246216642;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
