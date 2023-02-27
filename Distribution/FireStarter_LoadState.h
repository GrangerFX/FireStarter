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
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 7);
    instructions->SetOperation(5, 1, 6);
    instructions->SetOperation(6, 1, 20);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 29);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 0, 25);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.181164f;
    data->d[1] = 0.309510f;
    data->d[2] = -0.425792f;
    data->d[3] = -0.732459f;
    data->d[4] = -0.899852f;
    data->d[5] = 0.632410f;
    data->d[6] = 1.434028f;
    data->d[7] = 0.307769f;
    data->d[8] = 1.456324f;
    data->d[9] = -1.685745f;
    data->d[10] = -1.481761f;
    data->d[11] = -1.611929f;
    data->d[12] = -0.768320f;
    data->d[13] = -2.320204f;
    data->d[14] = -0.583430f;
    data->d[15] = 1.802377f;
    data->d[16] = 1.592027f;
    data->d[17] = 0.984660f;
    data->d[18] = -1.847342f;
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
    *(result->MinResult()) = 0.000521f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.314613f;
    data->d[1] = -2.446937f;
    data->d[2] = 0.800283f;
    data->d[3] = 1.420404f;
    data->d[4] = 1.899231f;
    data->d[5] = -0.377164f;
    data->d[6] = -0.182306f;
    data->d[7] = 1.626494f;
    data->d[8] = -0.617652f;
    data->d[9] = -0.340421f;
    data->d[10] = -0.212558f;
    data->d[11] = 1.355736f;
    data->d[12] = 0.487710f;
    data->d[13] = 0.156885f;
    data->d[14] = -0.075621f;
    data->d[15] = 13.709693f;
    data->d[16] = 7.421882f;
    data->d[17] = -0.158807f;
    data->d[18] = -2.336216f;
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
    *(result->MinResult()) = 0.000360f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.200723f;
    data->d[1] = 2.446800f;
    data->d[2] = -0.207162f;
    data->d[3] = 1.268630f;
    data->d[4] = -0.194257f;
    data->d[5] = 1.854602f;
    data->d[6] = -0.259703f;
    data->d[7] = -1.282972f;
    data->d[8] = 0.927474f;
    data->d[9] = 1.629917f;
    data->d[10] = -0.680702f;
    data->d[11] = 1.427254f;
    data->d[12] = -0.224695f;
    data->d[13] = 0.022780f;
    data->d[14] = -0.489481f;
    data->d[15] = -1.252921f;
    data->d[16] = 0.716606f;
    data->d[17] = -0.015356f;
    data->d[18] = 2.811272f;
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
    *(result->MinResult()) = 0.000390f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000521f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 12;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 4893173385933618636;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
