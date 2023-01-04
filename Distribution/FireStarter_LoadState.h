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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_units = 8;
    settings.m_processes = 16;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 1000;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 30);
    instructions->SetOperation(1, 0, 29);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 0, 29);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 31);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 0, 18);
    instructions->SetOperation(11, 0, 31);
    instructions->SetOperation(12, 1, 25);
    instructions->SetOperation(13, 0, 24);
    instructions->SetOperation(14, 1, 24);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 16);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 0, 12);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 1, 22);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.691042f;
    data->d[1] = -0.362438f;
    data->d[2] = 1.776595f;
    data->d[3] = -0.201420f;
    data->d[4] = -0.087420f;
    data->d[5] = 1.507948f;
    data->d[6] = -0.505017f;
    data->d[7] = 0.268152f;
    data->d[8] = 0.084822f;
    data->d[9] = -2.161195f;
    data->d[10] = -1.685384f;
    data->d[11] = -0.243690f;
    data->d[12] = -0.681268f;
    data->d[13] = 0.653180f;
    data->d[14] = -0.334736f;
    data->d[15] = 2.116616f;
    data->d[16] = -1.125398f;
    data->d[17] = -1.172901f;
    data->d[18] = 1.771777f;
    data->d[19] = -0.419470f;
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
    *result->MinResult(0) = 0.000110f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.537636f;
    data->d[1] = -0.238904f;
    data->d[2] = 1.220023f;
    data->d[3] = 0.357068f;
    data->d[4] = -0.004062f;
    data->d[5] = 0.068373f;
    data->d[6] = 2.083378f;
    data->d[7] = 0.563281f;
    data->d[8] = -4.190536f;
    data->d[9] = -0.865342f;
    data->d[10] = -0.370619f;
    data->d[11] = -0.863468f;
    data->d[12] = -1.827143f;
    data->d[13] = 1.271968f;
    data->d[14] = 1.862111f;
    data->d[15] = -1.159754f;
    data->d[16] = -1.638770f;
    data->d[17] = 1.020953f;
    data->d[18] = 1.631645f;
    data->d[19] = -2.988055f;
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
    *result->MinResult(1) = 0.000100f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.510698f;
    data->d[1] = 0.530404f;
    data->d[2] = -2.234791f;
    data->d[3] = -0.628363f;
    data->d[4] = 0.587720f;
    data->d[5] = -0.037088f;
    data->d[6] = -1.075630f;
    data->d[7] = -0.312116f;
    data->d[8] = 2.039426f;
    data->d[9] = 1.376825f;
    data->d[10] = 1.428836f;
    data->d[11] = -0.283864f;
    data->d[12] = 2.105870f;
    data->d[13] = -1.572774f;
    data->d[14] = 3.770059f;
    data->d[15] = 1.746953f;
    data->d[16] = 0.895401f;
    data->d[17] = 0.581927f;
    data->d[18] = 0.213138f;
    data->d[19] = -0.973898f;
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
    *result->MinResult(2) = 0.000201f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000201f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 898;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
