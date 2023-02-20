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
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 8);
    instructions->SetOperation(2, 0, 31);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 5);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 1, 25);
    instructions->SetOperation(7, 0, 19);
    instructions->SetOperation(8, 1, 16);
    instructions->SetOperation(9, 0, 27);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 1, 23);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 1, 23);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 16);
    instructions->SetOperation(17, 1, 2);
    instructions->SetOperation(18, 0, 31);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 0, 29);
    instructions->SetOperation(24, 0, 30);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 0, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.332852f;
    data->d[1] = -1.084749f;
    data->d[2] = 0.960746f;
    data->d[3] = 1.119766f;
    data->d[4] = -2.046434f;
    data->d[5] = -0.198773f;
    data->d[6] = -1.009441f;
    data->d[7] = -1.043461f;
    data->d[8] = 1.302185f;
    data->d[9] = -2.054115f;
    data->d[10] = -6.391372f;
    data->d[11] = -1.059695f;
    data->d[12] = 1.809453f;
    data->d[13] = -1.323967f;
    data->d[14] = 0.091835f;
    data->d[15] = 2.043205f;
    data->d[16] = -2.005759f;
    data->d[17] = 0.118076f;
    data->d[18] = 0.087954f;
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
    *(result->MinResult()) = 0.000117f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.290231f;
    data->d[1] = 1.677414f;
    data->d[2] = 0.645771f;
    data->d[3] = -0.486955f;
    data->d[4] = -1.059915f;
    data->d[5] = -0.368201f;
    data->d[6] = 0.651260f;
    data->d[7] = -0.742177f;
    data->d[8] = -1.903430f;
    data->d[9] = 1.140430f;
    data->d[10] = 0.259437f;
    data->d[11] = 0.386673f;
    data->d[12] = -1.088469f;
    data->d[13] = 0.792496f;
    data->d[14] = 0.251545f;
    data->d[15] = 3.474580f;
    data->d[16] = -0.390221f;
    data->d[17] = -2.082890f;
    data->d[18] = 0.111323f;
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
    *(result->MinResult()) = 0.000089f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.496208f;
    data->d[1] = 1.395270f;
    data->d[2] = -0.622046f;
    data->d[3] = -0.697428f;
    data->d[4] = 0.486497f;
    data->d[5] = -1.626794f;
    data->d[6] = -1.358846f;
    data->d[7] = 0.134855f;
    data->d[8] = 0.336633f;
    data->d[9] = -2.216459f;
    data->d[10] = 0.823662f;
    data->d[11] = -1.384683f;
    data->d[12] = 0.816195f;
    data->d[13] = -0.911302f;
    data->d[14] = 0.333635f;
    data->d[15] = 1.664542f;
    data->d[16] = 0.008987f;
    data->d[17] = 0.333034f;
    data->d[18] = -0.497899f;
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
    *(result->MinResult()) = 0.000037f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000117f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 201;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 4544152501351833970;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
