#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_evolution = 1;
    settings.m_seed = 7263;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 2;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 4;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 256;
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
    program.m_maxRegisters = 5;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 29};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 1, 5, 17};
    program.m_registers[6] = {6, 2, 8, 13};
    program.m_registers[7] = {7, 3, 9, 30};
    program.m_registers[8] = {8, 4, 10, 21};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 2, 15, 18};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 2, 19, 20};
    program.m_registers[15] = {15, 4, 22, 28};
    program.m_registers[16] = {16, 2, 23, 25};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 15);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 1, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.325652f;
    data->d[1] = 0.947366f;
    data->d[2] = -0.421763f;
    data->d[3] = -0.763246f;
    data->d[4] = 0.618105f;
    data->d[5] = -0.369965f;
    data->d[6] = -0.096364f;
    data->d[7] = 0.370445f;
    data->d[8] = 0.400095f;
    data->d[9] = -0.527227f;
    data->d[10] = 0.426229f;
    data->d[11] = 0.747439f;
    data->d[12] = 1.016806f;
    data->d[13] = -0.320823f;
    data->d[14] = 1.450991f;
    data->d[15] = 0.305965f;
    data->d[16] = 0.994716f;
    data->d[17] = 0.786104f;
    data->d[18] = 0.045404f;
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
    *result->MinResult(0) = 0.000031f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.440273f;
    data->d[1] = -0.214756f;
    data->d[2] = -0.642780f;
    data->d[3] = -0.230381f;
    data->d[4] = 0.268973f;
    data->d[5] = -0.789716f;
    data->d[6] = 0.287090f;
    data->d[7] = -0.566780f;
    data->d[8] = -0.425529f;
    data->d[9] = 0.383876f;
    data->d[10] = -0.130239f;
    data->d[11] = 2.729718f;
    data->d[12] = 1.908601f;
    data->d[13] = 0.483867f;
    data->d[14] = -0.042934f;
    data->d[15] = -1.055778f;
    data->d[16] = 1.213813f;
    data->d[17] = -1.192958f;
    data->d[18] = -0.106644f;
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
    *result->MinResult(1) = 0.000041f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.124953f;
    data->d[1] = -0.316563f;
    data->d[2] = -1.714297f;
    data->d[3] = 0.807106f;
    data->d[4] = 0.163087f;
    data->d[5] = 0.264375f;
    data->d[6] = -0.150268f;
    data->d[7] = 0.881718f;
    data->d[8] = 0.889423f;
    data->d[9] = 1.553311f;
    data->d[10] = 0.020122f;
    data->d[11] = 0.517037f;
    data->d[12] = -0.566402f;
    data->d[13] = 1.309110f;
    data->d[14] = 0.254662f;
    data->d[15] = 0.387550f;
    data->d[16] = 0.472237f;
    data->d[17] = 0.784930f;
    data->d[18] = 0.474090f;
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
    *result->MinResult(2) = 0.000053f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000053f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 7;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
