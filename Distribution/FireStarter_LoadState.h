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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 139264;
    settings.m_iterations = 512;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 17;
    program.m_maxRegisters = 8;

    program.m_registers.resize(17);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 0, 3, 18};
    program.m_registers[4] = {4, 1, 4, 17};
    program.m_registers[5] = {5, 2, 5, 22};
    program.m_registers[6] = {6, 3, 6, 14};
    program.m_registers[7] = {7, 4, 7, 29};
    program.m_registers[8] = {8, 5, 8, 30};
    program.m_registers[9] = {9, 6, 9, 31};
    program.m_registers[10] = {10, 7, 11, 28};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 3, 15, 23};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 25, 25};
    program.m_registers[15] = {15, 15, 26, 26};
    program.m_registers[16] = {16, 16, 27, 27};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 1, 15);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 8);
    instructions->SetOperation(31, 0, 9);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.582999f;
    data->d[1] = 0.229158f;
    data->d[2] = -0.899996f;
    data->d[3] = -0.366201f;
    data->d[4] = 1.341562f;
    data->d[5] = -0.653916f;
    data->d[6] = -0.647920f;
    data->d[7] = 0.083899f;
    data->d[8] = 0.547657f;
    data->d[9] = 0.107895f;
    data->d[10] = 0.748955f;
    data->d[11] = 0.300676f;
    data->d[12] = -0.096415f;
    data->d[13] = -2.704572f;
    data->d[14] = 1.524210f;
    data->d[15] = 1.600297f;
    data->d[16] = -0.928540f;
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
    *result->MinResult(0) = 0.000035f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.788912f;
    data->d[1] = 0.519596f;
    data->d[2] = -0.265737f;
    data->d[3] = -0.712221f;
    data->d[4] = -0.050620f;
    data->d[5] = -0.048145f;
    data->d[6] = 0.247300f;
    data->d[7] = 0.106659f;
    data->d[8] = 0.304133f;
    data->d[9] = -0.482302f;
    data->d[10] = 1.800420f;
    data->d[11] = 1.978971f;
    data->d[12] = 0.796254f;
    data->d[13] = 1.134685f;
    data->d[14] = 0.599229f;
    data->d[15] = 0.634759f;
    data->d[16] = 0.409285f;
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
    *result->MinResult(1) = 0.000069f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.526539f;
    data->d[1] = 0.359636f;
    data->d[2] = -0.327555f;
    data->d[3] = -0.676312f;
    data->d[4] = 0.322215f;
    data->d[5] = 0.292068f;
    data->d[6] = 0.376467f;
    data->d[7] = 0.305687f;
    data->d[8] = 1.166401f;
    data->d[9] = 0.234770f;
    data->d[10] = -2.553183f;
    data->d[11] = 0.809549f;
    data->d[12] = -0.721688f;
    data->d[13] = -2.114100f;
    data->d[14] = 1.018955f;
    data->d[15] = 0.664042f;
    data->d[16] = 0.120074f;
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
    *result->MinResult(2) = 0.000082f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000082f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 400;
    state.m_seed = 3232320350;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
