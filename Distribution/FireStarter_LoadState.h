#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_evolution = 0;
    settings.m_seed = 0;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 4;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 512;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 19;
    program.m_maxRegisters = 7;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 21};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 1, 2, 30};
    program.m_registers[3] = {3, 2, 3, 5};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 2, 6, 31};
    program.m_registers[6] = {6, 3, 7, 26};
    program.m_registers[7] = {7, 4, 8, 28};
    program.m_registers[8] = {8, 5, 9, 24};
    program.m_registers[9] = {9, 9, 10, 10};
    program.m_registers[10] = {10, 6, 12, 17};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 6, 20, 29};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 27, 27};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 5);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 6);
    instructions->SetOperation(24, 1, 8);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 6);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 1, 7);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 5);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.721433f;
    data->d[1] = -0.444418f;
    data->d[2] = -1.816077f;
    data->d[3] = 0.875182f;
    data->d[4] = -0.745885f;
    data->d[5] = -0.675479f;
    data->d[6] = -0.993198f;
    data->d[7] = -0.451742f;
    data->d[8] = -0.995389f;
    data->d[9] = -1.173059f;
    data->d[10] = 0.342729f;
    data->d[11] = -1.726623f;
    data->d[12] = -0.285980f;
    data->d[13] = -0.143623f;
    data->d[14] = 0.492395f;
    data->d[15] = -1.149842f;
    data->d[16] = 0.220293f;
    data->d[17] = -1.888745f;
    data->d[18] = 1.193255f;
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
    *result->MinResult(0) = 0.000162f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.331969f;
    data->d[1] = 0.488723f;
    data->d[2] = 1.313206f;
    data->d[3] = -0.836378f;
    data->d[4] = -0.783834f;
    data->d[5] = 1.401555f;
    data->d[6] = 1.890531f;
    data->d[7] = -0.800285f;
    data->d[8] = -1.323454f;
    data->d[9] = 0.250370f;
    data->d[10] = 3.538327f;
    data->d[11] = -0.816191f;
    data->d[12] = -0.384436f;
    data->d[13] = -0.224646f;
    data->d[14] = -0.781952f;
    data->d[15] = 0.875417f;
    data->d[16] = 0.217470f;
    data->d[17] = 0.616835f;
    data->d[18] = 1.444070f;
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
    *result->MinResult(1) = 0.000086f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.928469f;
    data->d[1] = -0.339389f;
    data->d[2] = 1.506440f;
    data->d[3] = 0.098661f;
    data->d[4] = -0.371646f;
    data->d[5] = 0.118248f;
    data->d[6] = 0.917028f;
    data->d[7] = -0.342885f;
    data->d[8] = -0.900360f;
    data->d[9] = 1.386624f;
    data->d[10] = -1.073027f;
    data->d[11] = -1.026601f;
    data->d[12] = -0.330888f;
    data->d[13] = -0.183044f;
    data->d[14] = -0.151541f;
    data->d[15] = -1.058950f;
    data->d[16] = 0.123699f;
    data->d[17] = 3.794210f;
    data->d[18] = 0.609209f;
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
    *result->MinResult(2) = 0.000347f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000347f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1700;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
