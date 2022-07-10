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
    program.m_dataSize = 19;
    program.m_maxRegisters = 4;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 22};
    program.m_registers[4] = {4, 2, 5, 26};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 3, 7, 29};
    program.m_registers[7] = {7, 7, 10, 10};
    program.m_registers[8] = {8, 0, 11, 14};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 11, 17, 17};
    program.m_registers[12] = {12, 12, 18, 18};
    program.m_registers[13] = {13, 0, 21, 30};
    program.m_registers[14] = {14, 14, 23, 23};
    program.m_registers[15] = {15, 15, 25, 25};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 28, 28};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 4);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 13);
    instructions->SetOperation(31, 0, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = 0.603367f;
    data->d[2] = -1.004008f;
    data->d[3] = 0.939380f;
    data->d[4] = 0.676727f;
    data->d[5] = -0.020051f;
    data->d[6] = -0.807207f;
    data->d[7] = 0.036440f;
    data->d[8] = -0.085432f;
    data->d[9] = 0.500546f;
    data->d[10] = -0.114351f;
    data->d[11] = 0.549479f;
    data->d[12] = -0.706981f;
    data->d[13] = 0.641484f;
    data->d[14] = 0.221054f;
    data->d[15] = -0.775502f;
    data->d[16] = 0.957806f;
    data->d[17] = 0.000000f;
    data->d[18] = 1.358304f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090657f;
    data->d[1] = -0.202199f;
    data->d[2] = -0.919667f;
    data->d[3] = 1.160507f;
    data->d[4] = 0.337789f;
    data->d[5] = -0.780100f;
    data->d[6] = -0.660315f;
    data->d[7] = 0.358181f;
    data->d[8] = 0.553419f;
    data->d[9] = -0.059309f;
    data->d[10] = 0.640131f;
    data->d[11] = -1.464478f;
    data->d[12] = -0.032552f;
    data->d[13] = -1.566862f;
    data->d[14] = -0.006401f;
    data->d[15] = -2.608489f;
    data->d[16] = -0.157044f;
    data->d[17] = -0.379344f;
    data->d[18] = -1.982921f;
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
    data->d[0] = -2.617994f;
    data->d[1] = -0.645546f;
    data->d[2] = 0.660621f;
    data->d[3] = -0.882890f;
    data->d[4] = 0.412712f;
    data->d[5] = 0.023612f;
    data->d[6] = 0.771277f;
    data->d[7] = -0.001203f;
    data->d[8] = -1.428470f;
    data->d[9] = 1.611274f;
    data->d[10] = 0.445634f;
    data->d[11] = 2.892395f;
    data->d[12] = -0.440107f;
    data->d[13] = -1.447320f;
    data->d[14] = 0.630264f;
    data->d[15] = 0.113607f;
    data->d[16] = 1.209353f;
    data->d[17] = 0.738829f;
    data->d[18] = 0.586005f;
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
    *result->MinResult(2) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000003f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 34;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
