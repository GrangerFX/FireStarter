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

    settings.m_evolveMode = 2;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 4;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
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
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
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
    program.m_programMode = 0;
    program.m_dataSize = 19;
    program.m_maxRegisters = 5;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.242370f;
    data->d[1] = 0.329777f;
    data->d[2] = 0.042367f;
    data->d[3] = -0.315581f;
    data->d[4] = -0.761938f;
    data->d[5] = 0.188392f;
    data->d[6] = -0.052958f;
    data->d[7] = 0.376125f;
    data->d[8] = 0.418901f;
    data->d[9] = -1.863422f;
    data->d[10] = -0.241803f;
    data->d[11] = 0.216802f;
    data->d[12] = -0.632880f;
    data->d[13] = -0.335176f;
    data->d[14] = 1.252271f;
    data->d[15] = -1.310145f;
    data->d[16] = 0.787400f;
    data->d[17] = 0.655453f;
    data->d[18] = 0.076636f;
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
    *result->MinResult(0) = 0.000042f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.020012f;
    data->d[1] = -0.452920f;
    data->d[2] = -0.931511f;
    data->d[3] = 0.022388f;
    data->d[4] = 0.381598f;
    data->d[5] = -0.776385f;
    data->d[6] = -0.346391f;
    data->d[7] = 0.672813f;
    data->d[8] = 0.591565f;
    data->d[9] = -1.374101f;
    data->d[10] = 0.611101f;
    data->d[11] = 0.011444f;
    data->d[12] = 0.232713f;
    data->d[13] = -0.734753f;
    data->d[14] = -1.348576f;
    data->d[15] = -0.974085f;
    data->d[16] = 0.996679f;
    data->d[17] = 1.333195f;
    data->d[18] = -0.001475f;
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
    *result->MinResult(1) = 0.000062f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.076111f;
    data->d[1] = -0.141082f;
    data->d[2] = -0.544895f;
    data->d[3] = -0.020759f;
    data->d[4] = -0.275918f;
    data->d[5] = 0.297371f;
    data->d[6] = -0.117264f;
    data->d[7] = 0.769497f;
    data->d[8] = 0.674565f;
    data->d[9] = 0.425019f;
    data->d[10] = 1.350450f;
    data->d[11] = 0.032932f;
    data->d[12] = -0.424767f;
    data->d[13] = -0.464711f;
    data->d[14] = -1.520630f;
    data->d[15] = 0.414801f;
    data->d[16] = 0.539416f;
    data->d[17] = 0.651263f;
    data->d[18] = 0.356120f;
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
    *result->MinResult(2) = 0.000034f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000062f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 7;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
