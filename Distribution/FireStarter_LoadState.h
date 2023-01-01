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
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 1, 26);
    instructions->SetOperation(4, 0, 19);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 1, 15);
    instructions->SetOperation(8, 0, 27);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 1, 31);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 0, 3);
    instructions->SetOperation(23, 1, 7);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 1, 0);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 1, 22);
    instructions->SetOperation(30, 0, 26);
    instructions->SetOperation(31, 1, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.570829f;
    data->d[1] = 0.467056f;
    data->d[2] = -0.816564f;
    data->d[3] = -1.303560f;
    data->d[4] = 0.837905f;
    data->d[5] = 0.745270f;
    data->d[6] = -1.345130f;
    data->d[7] = -0.508574f;
    data->d[8] = -1.617295f;
    data->d[9] = -0.678558f;
    data->d[10] = 0.241619f;
    data->d[11] = 0.737737f;
    data->d[12] = 0.179928f;
    data->d[13] = -1.378163f;
    data->d[14] = -0.959057f;
    data->d[15] = -2.728687f;
    data->d[16] = 0.018560f;
    data->d[17] = 1.888720f;
    data->d[18] = 0.695367f;
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
    *result->MinResult(0) = 0.000059f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 2.167590f;
    data->d[1] = 0.868915f;
    data->d[2] = 39.248013f;
    data->d[3] = -1.596041f;
    data->d[4] = 0.611742f;
    data->d[5] = -1.205912f;
    data->d[6] = -1.143249f;
    data->d[7] = -1.803333f;
    data->d[8] = 0.814628f;
    data->d[9] = -0.490351f;
    data->d[10] = -0.219163f;
    data->d[11] = -3.140614f;
    data->d[12] = 0.422825f;
    data->d[13] = -2.169209f;
    data->d[14] = 0.056623f;
    data->d[15] = 0.571600f;
    data->d[16] = -2.132985f;
    data->d[17] = -0.120353f;
    data->d[18] = -1.719322f;
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
    *result->MinResult(1) = 0.000810f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 1.377395f;
    data->d[1] = 0.176197f;
    data->d[2] = -0.230589f;
    data->d[3] = 1.523641f;
    data->d[4] = 1.852307f;
    data->d[5] = -2.504791f;
    data->d[6] = -0.691754f;
    data->d[7] = -0.120903f;
    data->d[8] = 0.142279f;
    data->d[9] = -0.102433f;
    data->d[10] = -0.736733f;
    data->d[11] = -1.605810f;
    data->d[12] = -0.447113f;
    data->d[13] = 1.453130f;
    data->d[14] = -0.653471f;
    data->d[15] = -0.965733f;
    data->d[16] = -0.843923f;
    data->d[17] = -0.198489f;
    data->d[18] = 0.370723f;
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
    *result->MinResult(2) = 0.000209f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000810f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 12;
    state.m_index = 15;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
