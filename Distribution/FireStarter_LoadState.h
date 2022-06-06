#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_seed = 0;

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

inline void LoadProgram(FireStarterProgram& program, const FireStarterSettings& settings)
{
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 7;

    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 31};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 4, 30};
    program.m_registers[4] = {4, 2, 5, 20};
    program.m_registers[5] = {5, 3, 7, 21};
    program.m_registers[6] = {6, 4, 8, 15};
    program.m_registers[7] = {7, 7, 9, 9};
    program.m_registers[8] = {8, 5, 10, 22};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 6, 12, 19};
    program.m_registers[11] = {11, 11, 17, 17};
    program.m_registers[12] = {12, 4, 18, 29};
    program.m_registers[13] = {13, 13, 24, 24};
    program.m_registers[14] = {14, 14, 25, 25};
    program.m_registers[15] = {15, 15, 26, 26};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 28, 28};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 0, 4);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 1, 15);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 0, 1);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.702161f;
    data->d[1] = 0.305783f;
    data->d[2] = -1.053761f;
    data->d[3] = -0.437971f;
    data->d[4] = 0.078468f;
    data->d[5] = -0.107774f;
    data->d[6] = 0.809360f;
    data->d[7] = 1.405036f;
    data->d[8] = -0.634478f;
    data->d[9] = 1.235366f;
    data->d[10] = -0.579589f;
    data->d[11] = 0.386185f;
    data->d[12] = -0.762014f;
    data->d[13] = 2.040060f;
    data->d[14] = -0.458106f;
    data->d[15] = -0.200610f;
    data->d[16] = -0.382140f;
    data->d[17] = 0.572963f;
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
    *result->MinResult(0) = 0.000409f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.075031f;
    data->d[1] = -0.193962f;
    data->d[2] = 0.505901f;
    data->d[3] = 0.680414f;
    data->d[4] = -0.105799f;
    data->d[5] = -0.744360f;
    data->d[6] = 0.003021f;
    data->d[7] = -0.149255f;
    data->d[8] = -0.438627f;
    data->d[9] = -0.681627f;
    data->d[10] = -1.053954f;
    data->d[11] = 0.649786f;
    data->d[12] = 0.589920f;
    data->d[13] = -0.871388f;
    data->d[14] = 0.675453f;
    data->d[15] = 0.023180f;
    data->d[16] = -0.078532f;
    data->d[17] = 0.186819f;
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
    *result->MinResult(1) = 0.000099f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 2.500569f;
    data->d[1] = -0.089746f;
    data->d[2] = 0.019800f;
    data->d[3] = 1.002619f;
    data->d[4] = -0.469176f;
    data->d[5] = -0.686739f;
    data->d[6] = 0.971108f;
    data->d[7] = -0.072276f;
    data->d[8] = -0.625047f;
    data->d[9] = 1.459903f;
    data->d[10] = 0.914865f;
    data->d[11] = 1.569922f;
    data->d[12] = 1.117733f;
    data->d[13] = 0.742139f;
    data->d[14] = -0.332329f;
    data->d[15] = -0.432405f;
    data->d[16] = -0.071204f;
    data->d[17] = 2.664114f;
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
    *result->MinResult(2) = 0.000259f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000409f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program, state.m_settings);
    LoadResult(state);
} // LoadState
