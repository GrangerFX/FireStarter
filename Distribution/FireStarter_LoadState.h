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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 5;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_INDIVIDUAL;
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
    program.m_dataSize = 19;
    program.m_maxRegisters = 7;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 29};
    program.m_registers[1] = {1, 1, 1, 8};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 4};
    program.m_registers[4] = {4, 2, 5, 13};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 3, 7, 20};
    program.m_registers[7] = {7, 1, 10, 31};
    program.m_registers[8] = {8, 4, 11, 26};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 10, 15, 15};
    program.m_registers[11] = {11, 2, 16, 28};
    program.m_registers[12] = {12, 5, 17, 30};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 6, 19, 24};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 23, 23};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 27, 27};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 1, 0);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 6);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 1, 8);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 0, 7);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.713056f;
    data->d[1] = 3.910259f;
    data->d[2] = 0.733253f;
    data->d[3] = -0.243357f;
    data->d[4] = 0.790677f;
    data->d[5] = 0.387796f;
    data->d[6] = -0.909966f;
    data->d[7] = 0.206174f;
    data->d[8] = 1.748486f;
    data->d[9] = 0.126827f;
    data->d[10] = 0.940696f;
    data->d[11] = 0.415339f;
    data->d[12] = 0.431284f;
    data->d[13] = 1.006547f;
    data->d[14] = -0.458911f;
    data->d[15] = -0.536677f;
    data->d[16] = 0.826059f;
    data->d[17] = -0.015552f;
    data->d[18] = 0.306523f;
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
    *result->MinResult(0) = 0.003607f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.660254f;
    data->d[1] = -2.128611f;
    data->d[2] = -0.828129f;
    data->d[3] = -0.114401f;
    data->d[4] = -0.856789f;
    data->d[5] = -0.686538f;
    data->d[6] = -0.148830f;
    data->d[7] = -0.432111f;
    data->d[8] = -0.761018f;
    data->d[9] = 0.055504f;
    data->d[10] = -0.660718f;
    data->d[11] = 0.178530f;
    data->d[12] = -0.800714f;
    data->d[13] = 0.868003f;
    data->d[14] = -0.412552f;
    data->d[15] = 0.907565f;
    data->d[16] = -0.397695f;
    data->d[17] = 0.243895f;
    data->d[18] = -0.111614f;
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
    *result->MinResult(1) = 0.005608f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.282761f;
    data->d[1] = -1.504596f;
    data->d[2] = 0.464066f;
    data->d[3] = -1.070342f;
    data->d[4] = -2.671704f;
    data->d[5] = 0.134649f;
    data->d[6] = -0.733328f;
    data->d[7] = 0.628595f;
    data->d[8] = -0.814850f;
    data->d[9] = 0.096146f;
    data->d[10] = -1.080906f;
    data->d[11] = 0.155729f;
    data->d[12] = -0.148609f;
    data->d[13] = 0.794315f;
    data->d[14] = -0.479808f;
    data->d[15] = 0.312440f;
    data->d[16] = 0.427419f;
    data->d[17] = -1.244938f;
    data->d[18] = -0.010223f;
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
    *result->MinResult(2) = 0.005714f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.005714f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1480;
    state.m_seed = 3232321335;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
