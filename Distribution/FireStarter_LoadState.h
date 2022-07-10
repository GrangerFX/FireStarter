#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_process = 0;
    settings.m_clients = 4;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 2;
    settings.m_evolveStates = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveAttempts = 32;
    settings.m_evolveSeed = 8337;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 6;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 1, 2, 31};
    program.m_registers[3] = {3, 2, 3, 22};
    program.m_registers[4] = {4, 3, 5, 17};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 4, 7, 29};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 0, 10, 26};
    program.m_registers[9] = {9, 5, 11, 23};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 3, 21, 30};
    program.m_registers[15] = {15, 15, 25, 25};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 28, 28};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 1, 2);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = 0.333506f;
    data->d[2] = 0.488024f;
    data->d[3] = -2.495348f;
    data->d[4] = 0.288637f;
    data->d[5] = 0.021656f;
    data->d[6] = 0.115942f;
    data->d[7] = 0.079399f;
    data->d[8] = -0.009231f;
    data->d[9] = 0.940072f;
    data->d[10] = 0.983632f;
    data->d[11] = 0.829380f;
    data->d[12] = 0.145651f;
    data->d[13] = 1.114011f;
    data->d[14] = 0.995646f;
    data->d[15] = 1.793310f;
    data->d[16] = -0.355387f;
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
    *result->MinResult(0) = 0.000002f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090658f;
    data->d[1] = -0.685526f;
    data->d[2] = 0.443689f;
    data->d[3] = 1.115247f;
    data->d[4] = -0.849553f;
    data->d[5] = 0.004379f;
    data->d[6] = -0.372153f;
    data->d[7] = 0.033255f;
    data->d[8] = 0.227470f;
    data->d[9] = 0.583885f;
    data->d[10] = -0.737238f;
    data->d[11] = 0.447910f;
    data->d[12] = 0.646940f;
    data->d[13] = 1.276008f;
    data->d[14] = -0.791690f;
    data->d[15] = 1.965914f;
    data->d[16] = -0.258474f;
    data->d[17] = 0.457035f;
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
    *result->MinResult(1) = 0.000003f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617992f;
    data->d[1] = -0.491497f;
    data->d[2] = -0.430235f;
    data->d[3] = 0.807830f;
    data->d[4] = 0.433827f;
    data->d[5] = -0.085599f;
    data->d[6] = -1.252520f;
    data->d[7] = 0.049141f;
    data->d[8] = -0.397321f;
    data->d[9] = -0.276007f;
    data->d[10] = -1.637915f;
    data->d[11] = -0.902688f;
    data->d[12] = -0.892086f;
    data->d[13] = -0.417314f;
    data->d[14] = -0.809919f;
    data->d[15] = 0.111767f;
    data->d[16] = 0.845387f;
    data->d[17] = 0.619358f;
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
    *result->MinResult(2) = 0.000004f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000004f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 38;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
