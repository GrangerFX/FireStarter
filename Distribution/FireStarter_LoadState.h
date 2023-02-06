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
    settings.m_attempts = 128;
    settings.m_seed = 56;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 1, 6);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 0, 30);
    instructions->SetOperation(4, 1, 16);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 1, 3);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 1, 25);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 1, 2);
    instructions->SetOperation(13, 0, 1);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 1, 28);
    instructions->SetOperation(18, 1, 16);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 1, 23);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 0, 31);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 1, 26);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 1, 31);
    instructions->SetOperation(31, 1, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.762401f;
    data->d[1] = -1.375460f;
    data->d[2] = -0.437933f;
    data->d[3] = 1.468678f;
    data->d[4] = 1.273892f;
    data->d[5] = -0.433670f;
    data->d[6] = -0.062872f;
    data->d[7] = 2.663847f;
    data->d[8] = 0.106815f;
    data->d[9] = -0.160085f;
    data->d[10] = -0.763422f;
    data->d[11] = -0.820746f;
    data->d[12] = -0.031252f;
    data->d[13] = 2.026683f;
    data->d[14] = -2.087696f;
    data->d[15] = -3.213529f;
    data->d[16] = -0.544700f;
    data->d[17] = -4.116553f;
    data->d[18] = -2.009731f;
    data->d[19] = -1.027092f;
    data->d[20] = -0.067961f;
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
    *(result->MinResult()) = 0.000062f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.987555f;
    data->d[1] = -0.928317f;
    data->d[2] = 0.921426f;
    data->d[3] = -0.106851f;
    data->d[4] = 0.241213f;
    data->d[5] = -1.889340f;
    data->d[6] = 0.017874f;
    data->d[7] = -0.968473f;
    data->d[8] = 1.109041f;
    data->d[9] = -0.019975f;
    data->d[10] = 0.443812f;
    data->d[11] = -1.455407f;
    data->d[12] = -2.127956f;
    data->d[13] = 3.144872f;
    data->d[14] = 1.034731f;
    data->d[15] = -0.826142f;
    data->d[16] = 0.165729f;
    data->d[17] = -4.751502f;
    data->d[18] = -0.290437f;
    data->d[19] = -0.743029f;
    data->d[20] = -0.648967f;
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
    *(result->MinResult()) = 0.000017f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.884834f;
    data->d[1] = -1.603286f;
    data->d[2] = -1.558874f;
    data->d[3] = 0.363048f;
    data->d[4] = 1.020111f;
    data->d[5] = -0.728416f;
    data->d[6] = -0.139629f;
    data->d[7] = 1.857209f;
    data->d[8] = 0.326961f;
    data->d[9] = 0.663017f;
    data->d[10] = 2.467234f;
    data->d[11] = 1.233326f;
    data->d[12] = -7.262179f;
    data->d[13] = -1.829868f;
    data->d[14] = -2.738850f;
    data->d[15] = -0.505127f;
    data->d[16] = -0.053823f;
    data->d[17] = 2.335751f;
    data->d[18] = 3.437189f;
    data->d[19] = -0.021319f;
    data->d[20] = -0.459614f;
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
    *(result->MinResult()) = 0.000072f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000072f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 286;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 16190864721430679862;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
