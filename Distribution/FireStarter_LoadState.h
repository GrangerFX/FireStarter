#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_states = 1;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_generations = 5;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 6;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 12};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 28};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 3, 7, 24};
    program.m_registers[7] = {7, 4, 8, 29};
    program.m_registers[8] = {8, 5, 9, 17};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 1, 13, 31};
    program.m_registers[11] = {11, 5, 18, 26};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 13, 20, 20};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 10);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.293549f;
    data->d[1] = 0.235901f;
    data->d[2] = -0.591895f;
    data->d[3] = -0.587378f;
    data->d[4] = -0.133013f;
    data->d[5] = 0.263135f;
    data->d[6] = -0.971859f;
    data->d[7] = -0.356539f;
    data->d[8] = -0.892853f;
    data->d[9] = -0.188894f;
    data->d[10] = -0.407764f;
    data->d[11] = -1.280763f;
    data->d[12] = -0.581514f;
    data->d[13] = -0.914867f;
    data->d[14] = 0.382818f;
    data->d[15] = -0.578395f;
    data->d[16] = 0.794753f;
    data->d[17] = -0.000759f;
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
    *result->MinResult(0) = 0.035292f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.028915f;
    data->d[1] = 1.575113f;
    data->d[2] = -0.970204f;
    data->d[3] = 0.537509f;
    data->d[4] = -0.166726f;
    data->d[5] = -0.123601f;
    data->d[6] = 0.616234f;
    data->d[7] = -0.300814f;
    data->d[8] = -0.766700f;
    data->d[9] = -0.310227f;
    data->d[10] = 0.656036f;
    data->d[11] = 0.219248f;
    data->d[12] = 0.193122f;
    data->d[13] = 0.755627f;
    data->d[14] = 0.784712f;
    data->d[15] = 3.880138f;
    data->d[16] = 0.057473f;
    data->d[17] = 0.021065f;
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
    *result->MinResult(1) = 0.031894f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.530341f;
    data->d[1] = 0.083560f;
    data->d[2] = 0.932898f;
    data->d[3] = -0.458591f;
    data->d[4] = -1.745834f;
    data->d[5] = 0.115948f;
    data->d[6] = 0.591024f;
    data->d[7] = 0.813992f;
    data->d[8] = 1.073466f;
    data->d[9] = 1.101145f;
    data->d[10] = -0.894070f;
    data->d[11] = -0.325365f;
    data->d[12] = -1.537587f;
    data->d[13] = 0.471507f;
    data->d[14] = 0.373020f;
    data->d[15] = 0.072988f;
    data->d[16] = 0.003433f;
    data->d[17] = 0.477711f;
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
    *result->MinResult(2) = 0.038864f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.038864f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 15;
    state.m_seed = 3232319870;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
