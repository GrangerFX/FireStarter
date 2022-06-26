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
    settings.m_seed = 1;

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
    program.m_maxRegisters = 9;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 25};
    program.m_registers[2] = {2, 1, 2, 20};
    program.m_registers[3] = {3, 2, 3, 22};
    program.m_registers[4] = {4, 3, 4, 18};
    program.m_registers[5] = {5, 4, 5, 30};
    program.m_registers[6] = {6, 5, 6, 16};
    program.m_registers[7] = {7, 6, 7, 21};
    program.m_registers[8] = {8, 7, 8, 10};
    program.m_registers[9] = {9, 8, 9, 11};
    program.m_registers[10] = {10, 8, 13, 26};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 13, 17, 17};
    program.m_registers[14] = {14, 3, 19, 28};
    program.m_registers[15] = {15, 15, 23, 23};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 8, 27, 31};
    program.m_registers[18] = {18, 18, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 4);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 2);
    instructions->SetOperation(21, 1, 7);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 17);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.684007f;
    data->d[1] = 0.190018f;
    data->d[2] = 4.759743f;
    data->d[3] = -0.702854f;
    data->d[4] = -0.779792f;
    data->d[5] = -0.754842f;
    data->d[6] = 0.115837f;
    data->d[7] = -0.413273f;
    data->d[8] = -0.608600f;
    data->d[9] = -0.898450f;
    data->d[10] = -1.295531f;
    data->d[11] = -0.504260f;
    data->d[12] = 1.304852f;
    data->d[13] = 1.572514f;
    data->d[14] = 0.627620f;
    data->d[15] = -0.644101f;
    data->d[16] = -1.825224f;
    data->d[17] = 0.201089f;
    data->d[18] = 0.897939f;
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
    *result->MinResult(0) = 0.000215f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.126873f;
    data->d[1] = -1.102017f;
    data->d[2] = 1.509497f;
    data->d[3] = -2.172572f;
    data->d[4] = 1.158695f;
    data->d[5] = -1.068368f;
    data->d[6] = -0.417348f;
    data->d[7] = -0.634151f;
    data->d[8] = 0.474147f;
    data->d[9] = 1.012714f;
    data->d[10] = -1.846339f;
    data->d[11] = 1.583522f;
    data->d[12] = 1.388949f;
    data->d[13] = -2.335774f;
    data->d[14] = 0.899936f;
    data->d[15] = 1.627980f;
    data->d[16] = -2.866485f;
    data->d[17] = -0.251164f;
    data->d[18] = -1.223463f;
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
    *result->MinResult(1) = 0.000163f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.396243f;
    data->d[1] = 1.035193f;
    data->d[2] = -0.936774f;
    data->d[3] = -1.962818f;
    data->d[4] = -0.805380f;
    data->d[5] = -1.273133f;
    data->d[6] = -0.247029f;
    data->d[7] = -1.012538f;
    data->d[8] = 0.292906f;
    data->d[9] = 1.132592f;
    data->d[10] = -1.423133f;
    data->d[11] = -1.021346f;
    data->d[12] = -0.548579f;
    data->d[13] = 2.579537f;
    data->d[14] = -0.661897f;
    data->d[15] = -2.374517f;
    data->d[16] = -0.920578f;
    data->d[17] = 0.343373f;
    data->d[18] = 1.306413f;
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
    *result->MinResult(2) = 0.000078f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000215f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 3;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
