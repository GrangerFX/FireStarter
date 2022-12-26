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
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 9);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 1, 8);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 0, 29);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 1, 23);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 0, 21);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 22);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 1);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 21);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 1, 22);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 1, 29);
    instructions->SetOperation(27, 1, 25);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 1, 30);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 1, 31);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141609f;
    data->d[1] = 0.000030f;
    data->d[2] = -1.355093f;
    data->d[3] = 3.511981f;
    data->d[4] = -0.101552f;
    data->d[5] = -0.427221f;
    data->d[6] = 2.105238f;
    data->d[7] = -0.184060f;
    data->d[8] = -0.581121f;
    data->d[9] = 0.016259f;
    data->d[10] = 0.856431f;
    data->d[11] = -1.580272f;
    data->d[12] = 0.696721f;
    data->d[13] = 1.761084f;
    data->d[14] = 0.374152f;
    data->d[15] = -0.044045f;
    data->d[16] = -1.856350f;
    data->d[17] = -0.121414f;
    data->d[18] = -1.180907f;
    data->d[19] = 1.795927f;
    data->d[20] = -0.000018f;
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
    *result->MinResult(0) = 0.000005f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090777f;
    data->d[1] = 0.000208f;
    data->d[2] = -1.351195f;
    data->d[3] = 2.237025f;
    data->d[4] = 2.092159f;
    data->d[5] = -0.004185f;
    data->d[6] = -0.431099f;
    data->d[7] = 0.025252f;
    data->d[8] = -0.303573f;
    data->d[9] = -0.384454f;
    data->d[10] = -0.189410f;
    data->d[11] = -3.691993f;
    data->d[12] = -0.394057f;
    data->d[13] = 0.847176f;
    data->d[14] = 1.786974f;
    data->d[15] = -12.809285f;
    data->d[16] = -1.387333f;
    data->d[17] = -2.951655f;
    data->d[18] = 0.210390f;
    data->d[19] = 4.070409f;
    data->d[20] = -0.118265f;
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
    *result->MinResult(1) = 0.000014f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = -0.000000f;
    data->d[2] = 0.931992f;
    data->d[3] = -2.128821f;
    data->d[4] = -0.023827f;
    data->d[5] = 0.676302f;
    data->d[6] = 2.016030f;
    data->d[7] = -0.086152f;
    data->d[8] = 1.244269f;
    data->d[9] = 0.192076f;
    data->d[10] = 0.783378f;
    data->d[11] = 0.204674f;
    data->d[12] = -3.177971f;
    data->d[13] = -1.036211f;
    data->d[14] = 0.390312f;
    data->d[15] = -1.773833f;
    data->d[16] = -4.276666f;
    data->d[17] = 0.048881f;
    data->d[18] = -1.016767f;
    data->d[19] = 0.600495f;
    data->d[20] = 0.523599f;
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
    *result->MinResult(2) = 0.000007f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000014f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 101;
    state.m_index = 108;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
