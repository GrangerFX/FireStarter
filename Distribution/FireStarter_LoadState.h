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
    settings.m_processes = 1;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 14);
    instructions->SetOperation(2, 1, 9);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 1, 16);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 1, 17);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 1, 31);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 27);
    instructions->SetOperation(17, 1, 6);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 25);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.316869f;
    data->d[1] = 0.606799f;
    data->d[2] = 1.163746f;
    data->d[3] = 0.464008f;
    data->d[4] = -0.044990f;
    data->d[5] = 0.768081f;
    data->d[6] = -1.579466f;
    data->d[7] = 0.131300f;
    data->d[8] = -1.006060f;
    data->d[9] = -0.557397f;
    data->d[10] = 0.096426f;
    data->d[11] = 0.465319f;
    data->d[12] = 0.407218f;
    data->d[13] = 0.662079f;
    data->d[14] = -1.094142f;
    data->d[15] = 2.783497f;
    data->d[16] = -3.798737f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(0) = 0.001546f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.215840f;
    data->d[1] = 0.313996f;
    data->d[2] = -0.972294f;
    data->d[3] = -0.024046f;
    data->d[4] = 0.002394f;
    data->d[5] = 4.214772f;
    data->d[6] = -333.408234f;
    data->d[7] = 37.484932f;
    data->d[8] = 10.975280f;
    data->d[9] = 162.475586f;
    data->d[10] = 12.665271f;
    data->d[11] = -1.574964f;
    data->d[12] = -0.361063f;
    data->d[13] = -0.887822f;
    data->d[14] = 7.673779f;
    data->d[15] = 2.339675f;
    data->d[16] = -6.073681f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(1) = 0.000390f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.893519f;
    data->d[1] = -0.633828f;
    data->d[2] = 0.816968f;
    data->d[3] = -0.353079f;
    data->d[4] = -0.163456f;
    data->d[5] = 0.750997f;
    data->d[6] = -1.150079f;
    data->d[7] = -1.234739f;
    data->d[8] = 5.636045f;
    data->d[9] = -6.308109f;
    data->d[10] = -3.705622f;
    data->d[11] = 2.110663f;
    data->d[12] = -0.147022f;
    data->d[13] = 0.631013f;
    data->d[14] = -0.259184f;
    data->d[15] = -0.410069f;
    data->d[16] = -6.822074f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(2) = 0.002120f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.002120f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 5;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
