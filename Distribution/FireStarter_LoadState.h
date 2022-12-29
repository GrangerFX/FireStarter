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

    settings.m_mode = FIRESTARTER_TEST;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 1, 31);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 29);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 0, 24);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 1, 26);
    instructions->SetOperation(29, 1, 29);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.443177f;
    data->d[1] = 0.202715f;
    data->d[2] = -1.096518f;
    data->d[3] = 0.197125f;
    data->d[4] = 0.000261f;
    data->d[5] = -3.721534f;
    data->d[6] = 0.824701f;
    data->d[7] = -0.598375f;
    data->d[8] = -0.267609f;
    data->d[9] = 0.951964f;
    data->d[10] = -7.558352f;
    data->d[11] = 2.718231f;
    data->d[12] = -0.043025f;
    data->d[13] = 1.293285f;
    data->d[14] = -0.134830f;
    data->d[15] = 0.878884f;
    data->d[16] = -1.666461f;
    data->d[17] = 0.918402f;
    data->d[18] = -0.195767f;
    data->d[19] = -3.261238f;
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
    *result->MinResult(0) = 0.000029f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.035417f;
    data->d[1] = 0.030955f;
    data->d[2] = -1.128393f;
    data->d[3] = -0.816969f;
    data->d[4] = 1.602673f;
    data->d[5] = 0.184996f;
    data->d[6] = -0.997960f;
    data->d[7] = 1.255103f;
    data->d[8] = 0.992575f;
    data->d[9] = -0.598835f;
    data->d[10] = -0.485057f;
    data->d[11] = -1.899829f;
    data->d[12] = 1.194958f;
    data->d[13] = -0.107598f;
    data->d[14] = 0.088555f;
    data->d[15] = -0.817112f;
    data->d[16] = -1.182967f;
    data->d[17] = 1.071793f;
    data->d[18] = -0.561609f;
    data->d[19] = -0.116800f;
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
    *result->MinResult(1) = 0.000080f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.142978f;
    data->d[1] = 0.805559f;
    data->d[2] = 1.029816f;
    data->d[3] = -0.356677f;
    data->d[4] = 0.122505f;
    data->d[5] = -1.004880f;
    data->d[6] = -0.235312f;
    data->d[7] = 0.256613f;
    data->d[8] = -0.474568f;
    data->d[9] = -1.725217f;
    data->d[10] = 2.101897f;
    data->d[11] = -0.817477f;
    data->d[12] = -0.047897f;
    data->d[13] = 0.045445f;
    data->d[14] = 1.411091f;
    data->d[15] = 1.122111f;
    data->d[16] = 1.246970f;
    data->d[17] = -1.290792f;
    data->d[18] = 1.518459f;
    data->d[19] = -1.393541f;
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
    *result->MinResult(2) = 0.000066f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000080f;
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
