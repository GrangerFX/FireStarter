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
    settings.m_attempts = 32;
    settings.m_seed = 1;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 24);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 1, 27);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 0, 12);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 0, 29);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 26);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 11);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 0, 23);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 0, 30);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 8);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.571405f;
    data->d[1] = 0.948054f;
    data->d[2] = 0.379026f;
    data->d[3] = 0.055387f;
    data->d[4] = -1.456551f;
    data->d[5] = 1.301264f;
    data->d[6] = -1.075551f;
    data->d[7] = -1.164058f;
    data->d[8] = 1.279168f;
    data->d[9] = -3.235847f;
    data->d[10] = -1.068862f;
    data->d[11] = -1.710465f;
    data->d[12] = 0.438190f;
    data->d[13] = -1.571111f;
    data->d[14] = 0.996321f;
    data->d[15] = 2.478503f;
    data->d[16] = -0.677311f;
    data->d[17] = 0.087210f;
    data->d[18] = -0.239587f;
    data->d[19] = -0.056802f;
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
    *(result->MinResult()) = 0.000110f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.361164f;
    data->d[1] = -0.859986f;
    data->d[2] = -0.118486f;
    data->d[3] = -1.780491f;
    data->d[4] = -1.167247f;
    data->d[5] = -2.103102f;
    data->d[6] = -0.811215f;
    data->d[7] = 0.249535f;
    data->d[8] = 0.968078f;
    data->d[9] = -0.776043f;
    data->d[10] = 2.045475f;
    data->d[11] = -0.253864f;
    data->d[12] = 1.645660f;
    data->d[13] = 3.177494f;
    data->d[14] = -1.445083f;
    data->d[15] = 0.147661f;
    data->d[16] = -2.266634f;
    data->d[17] = -1.612169f;
    data->d[18] = -2.799353f;
    data->d[19] = -0.085130f;
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
    *(result->MinResult()) = 0.000087f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.303406f;
    data->d[1] = 0.239603f;
    data->d[2] = 1.501639f;
    data->d[3] = -0.768419f;
    data->d[4] = -0.215496f;
    data->d[5] = -1.795354f;
    data->d[6] = -0.723272f;
    data->d[7] = 0.433765f;
    data->d[8] = -1.434008f;
    data->d[9] = 0.166942f;
    data->d[10] = -0.705096f;
    data->d[11] = -0.878472f;
    data->d[12] = 0.969868f;
    data->d[13] = -1.245744f;
    data->d[14] = 0.418335f;
    data->d[15] = -0.100389f;
    data->d[16] = 1.454218f;
    data->d[17] = 0.689129f;
    data->d[18] = -1.651412f;
    data->d[19] = -1.491202f;
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
    *(result->MinResult()) = 0.000205f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000205f;
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
    state.m_test = 99;
    state.m_seed = 11410605036054213473;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
