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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_units = 10;
    settings.m_processes = 10;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 3533;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 1);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 1, 15);
    instructions->SetOperation(3, 0, 4);
    instructions->SetOperation(4, 0, 12);
    instructions->SetOperation(5, 1, 21);
    instructions->SetOperation(6, 1, 28);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 0, 28);
    instructions->SetOperation(10, 1, 24);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 1, 29);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 0, 22);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 1, 11);
    instructions->SetOperation(20, 0, 29);
    instructions->SetOperation(21, 0, 28);
    instructions->SetOperation(22, 1, 27);
    instructions->SetOperation(23, 1, 30);
    instructions->SetOperation(24, 1, 28);
    instructions->SetOperation(25, 1, 31);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 1, 1);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 1, 31);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.820901f;
    data->d[1] = 0.186438f;
    data->d[2] = 1.042983f;
    data->d[3] = 0.318399f;
    data->d[4] = 1.835029f;
    data->d[5] = 0.212773f;
    data->d[6] = 0.852084f;
    data->d[7] = -2.287194f;
    data->d[8] = 0.524942f;
    data->d[9] = 0.725349f;
    data->d[10] = -0.904937f;
    data->d[11] = 3.247881f;
    data->d[12] = -0.737145f;
    data->d[13] = -0.104836f;
    data->d[14] = -0.802956f;
    data->d[15] = -1.642874f;
    data->d[16] = 0.463393f;
    data->d[17] = -2.064667f;
    data->d[18] = 2.182405f;
    data->d[19] = -0.090221f;
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
    *result->MinResult(0) = 0.000052f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.584473f;
    data->d[1] = -0.882623f;
    data->d[2] = -1.471657f;
    data->d[3] = 0.278300f;
    data->d[4] = 1.056167f;
    data->d[5] = -0.318095f;
    data->d[6] = -0.630344f;
    data->d[7] = 2.065040f;
    data->d[8] = -0.609791f;
    data->d[9] = 0.621960f;
    data->d[10] = 0.284267f;
    data->d[11] = 0.593616f;
    data->d[12] = 3.836571f;
    data->d[13] = 1.277402f;
    data->d[14] = 0.238954f;
    data->d[15] = -2.132962f;
    data->d[16] = -2.996113f;
    data->d[17] = 2.131315f;
    data->d[18] = -1.478771f;
    data->d[19] = 0.193090f;
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
    *result->MinResult(1) = 0.000089f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.248112f;
    data->d[1] = 1.534943f;
    data->d[2] = 1.148357f;
    data->d[3] = 0.558836f;
    data->d[4] = -1.108459f;
    data->d[5] = -0.097669f;
    data->d[6] = -0.933496f;
    data->d[7] = 2.506173f;
    data->d[8] = -0.744598f;
    data->d[9] = -1.057885f;
    data->d[10] = -0.060264f;
    data->d[11] = 0.686381f;
    data->d[12] = -1.629916f;
    data->d[13] = 0.437617f;
    data->d[14] = -0.387997f;
    data->d[15] = -0.966415f;
    data->d[16] = 0.408183f;
    data->d[17] = -1.381986f;
    data->d[18] = -0.990030f;
    data->d[19] = 0.648092f;
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
    *result->MinResult(2) = 0.000055f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000089f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 49;
    state.m_index = 153;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
