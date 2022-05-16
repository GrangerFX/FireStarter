#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;
    settings.m_evolveMode = 3;
    settings.m_evolveUnits = 4;
    settings.m_evolveStates = 8;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 128;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 1, 3);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 19);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 19};
    program.m_registers[2] = {2, 1, 2, 4};
    program.m_registers[3] = {3, 2, 3, 26};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 1, 6, 30};
    program.m_registers[6] = {6, 3, 7, 9};
    program.m_registers[7] = {7, 4, 8, 29};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 3, 11, 27};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 5, 14, 24};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 13, 17, 17};
    program.m_registers[14] = {14, 14, 18, 18};
    program.m_registers[15] = {15, 0, 20, 25};
    program.m_registers[16] = {16, 16, 21, 21};
    program.m_registers[17] = {17, 6, 22, 28};
    program.m_registers[18] = {18, 18, 23, 23};
    program.m_registers[19] = {19, 19, 31, 31};
    program.m_programMode = 0;
    program.m_dataSize = 20;
    program.m_maxRegisters = 7;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.341107f;
    data->d[1] = 1.071720f;
    data->d[2] = -0.744125f;
    data->d[3] = 0.000101f;
    data->d[4] = -1.094001f;
    data->d[5] = 0.458124f;
    data->d[6] = -1.082450f;
    data->d[7] = -2.140152f;
    data->d[8] = -0.768546f;
    data->d[9] = 0.973119f;
    data->d[10] = -0.736813f;
    data->d[11] = -0.001396f;
    data->d[12] = -0.544150f;
    data->d[13] = -0.524607f;
    data->d[14] = -1.236177f;
    data->d[15] = 0.061287f;
    data->d[16] = 1.042642f;
    data->d[17] = 0.894505f;
    data->d[18] = -0.127447f;
    data->d[19] = 0.000113f;
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
    *result->MinResult(0) = 0.000020f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.395916f;
    data->d[1] = 1.222958f;
    data->d[2] = -0.530966f;
    data->d[3] = -0.000500f;
    data->d[4] = -0.657973f;
    data->d[5] = -0.330986f;
    data->d[6] = -1.042881f;
    data->d[7] = -0.224993f;
    data->d[8] = 0.319446f;
    data->d[9] = -0.276749f;
    data->d[10] = -0.660374f;
    data->d[11] = 0.708841f;
    data->d[12] = -0.018716f;
    data->d[13] = 2.211579f;
    data->d[14] = 0.033467f;
    data->d[15] = 1.171361f;
    data->d[16] = 1.247457f;
    data->d[17] = 1.004315f;
    data->d[18] = -0.257632f;
    data->d[19] = -0.118876f;
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
    *result->MinResult(1) = 0.000078f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.475999f;
    data->d[1] = 1.246189f;
    data->d[2] = -0.483995f;
    data->d[3] = 0.000015f;
    data->d[4] = -3.671200f;
    data->d[5] = 0.623929f;
    data->d[6] = -0.378845f;
    data->d[7] = 0.127834f;
    data->d[8] = 0.155903f;
    data->d[9] = -0.889290f;
    data->d[10] = 0.404743f;
    data->d[11] = -0.640250f;
    data->d[12] = -0.129894f;
    data->d[13] = 0.944813f;
    data->d[14] = -0.513031f;
    data->d[15] = 0.050907f;
    data->d[16] = -0.695000f;
    data->d[17] = 0.868810f;
    data->d[18] = -0.500493f;
    data->d[19] = 0.523617f;
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
    *result->MinResult(2) = 0.000025f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000078f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 2;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
