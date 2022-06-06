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
    program.m_dataSize = 17;
    program.m_maxRegisters = 7;

    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;

    program.m_registers.resize(17);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 31};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 4, 30};
    program.m_registers[4] = {4, 2, 5, 20};
    program.m_registers[5] = {5, 3, 7, 21};
    program.m_registers[6] = {6, 4, 8, 15};
    program.m_registers[7] = {7, 5, 10, 22};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 6, 12, 19};
    program.m_registers[10] = {10, 10, 17, 17};
    program.m_registers[11] = {11, 4, 18, 29};
    program.m_registers[12] = {12, 12, 24, 24};
    program.m_registers[13] = {13, 13, 25, 25};
    program.m_registers[14] = {14, 14, 26, 26};
    program.m_registers[15] = {15, 15, 27, 27};
    program.m_registers[16] = {16, 16, 28, 28};

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
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 0, 4);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 0, 1);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.045621f;
    data->d[1] = 0.416750f;
    data->d[2] = -0.554206f;
    data->d[3] = 0.516288f;
    data->d[4] = 0.036742f;
    data->d[5] = -0.638010f;
    data->d[6] = -0.064019f;
    data->d[7] = 0.091277f;
    data->d[8] = -0.622112f;
    data->d[9] = 0.876687f;
    data->d[10] = 0.560197f;
    data->d[11] = -0.243690f;
    data->d[12] = 1.295379f;
    data->d[13] = 0.116704f;
    data->d[14] = 1.787018f;
    data->d[15] = 0.649534f;
    data->d[16] = -0.053087f;
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
    *result->MinResult(0) = 0.000158f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.662210f;
    data->d[1] = 0.215991f;
    data->d[2] = -0.577752f;
    data->d[3] = -0.424898f;
    data->d[4] = -0.099565f;
    data->d[5] = -0.736114f;
    data->d[6] = -0.004522f;
    data->d[7] = -1.190282f;
    data->d[8] = -0.640549f;
    data->d[9] = -0.352860f;
    data->d[10] = 0.716385f;
    data->d[11] = 0.516900f;
    data->d[12] = 1.230347f;
    data->d[13] = -0.183547f;
    data->d[14] = 1.489770f;
    data->d[15] = -0.277923f;
    data->d[16] = 0.105538f;
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
    *result->MinResult(1) = 0.000237f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.510994f;
    data->d[1] = 0.206026f;
    data->d[2] = -0.562561f;
    data->d[3] = 1.596976f;
    data->d[4] = -0.111847f;
    data->d[5] = 1.020444f;
    data->d[6] = 0.050044f;
    data->d[7] = -0.423064f;
    data->d[8] = -1.219711f;
    data->d[9] = 0.642167f;
    data->d[10] = 0.668671f;
    data->d[11] = 0.087302f;
    data->d[12] = -1.149748f;
    data->d[13] = 0.052110f;
    data->d[14] = 2.112997f;
    data->d[15] = -3.126777f;
    data->d[16] = -2.026871f;
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
    *result->MinResult(2) = 0.000861f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000861f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program, state.m_settings);
    LoadResult(state);
} // LoadState
