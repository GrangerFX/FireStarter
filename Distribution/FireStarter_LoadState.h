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
    settings.m_units = 2;
    settings.m_processes = 2;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 100;
    settings.m_seed = 3533;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_uniqueRegisters = 21;

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 20);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.884243f;
    data->d[1] = -4.025828f;
    data->d[2] = -0.000013f;
    data->d[3] = 0.318972f;
    data->d[4] = -6.149226f;
    data->d[5] = -4.394787f;
    data->d[6] = 0.678398f;
    data->d[7] = 0.486751f;
    data->d[8] = -8.880745f;
    data->d[9] = -0.042820f;
    data->d[10] = 0.913242f;
    data->d[11] = -0.482878f;
    data->d[12] = -4.428780f;
    data->d[13] = -0.272595f;
    data->d[14] = 0.642895f;
    data->d[15] = -0.137174f;
    data->d[16] = -0.109821f;
    data->d[17] = 2.059426f;
    data->d[18] = 1.139000f;
    data->d[19] = -0.116762f;
    data->d[20] = 0.000007f;
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
    *result->MinResult(0) = 0.000002f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.877379f;
    data->d[1] = 0.786767f;
    data->d[2] = -0.000083f;
    data->d[3] = 0.594750f;
    data->d[4] = -0.966539f;
    data->d[5] = -1.041265f;
    data->d[6] = -0.411295f;
    data->d[7] = 0.613503f;
    data->d[8] = -1.686184f;
    data->d[9] = -0.855986f;
    data->d[10] = 1.125291f;
    data->d[11] = 0.656925f;
    data->d[12] = 2.536751f;
    data->d[13] = -0.005686f;
    data->d[14] = -0.360261f;
    data->d[15] = 0.895327f;
    data->d[16] = 0.017360f;
    data->d[17] = -0.389523f;
    data->d[18] = -0.271000f;
    data->d[19] = -0.472445f;
    data->d[20] = -0.118078f;
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
    *result->MinResult(1) = 0.000004f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.449408f;
    data->d[1] = -3.067385f;
    data->d[2] = -0.000031f;
    data->d[3] = 0.117912f;
    data->d[4] = 0.591931f;
    data->d[5] = 79.803093f;
    data->d[6] = -0.313348f;
    data->d[7] = 0.103702f;
    data->d[8] = -0.175549f;
    data->d[9] = -0.204597f;
    data->d[10] = 0.809130f;
    data->d[11] = 0.517429f;
    data->d[12] = -1.361803f;
    data->d[13] = -0.226157f;
    data->d[14] = 1.209392f;
    data->d[15] = -0.717067f;
    data->d[16] = -4.626062f;
    data->d[17] = 0.987319f;
    data->d[18] = 0.610950f;
    data->d[19] = 0.086829f;
    data->d[20] = 0.523616f;
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
    *result->MinResult(2) = 0.000005f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000005f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 318;
    state.m_bestIndex = 5109;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
