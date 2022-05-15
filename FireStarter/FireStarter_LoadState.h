#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_evolveMode = 4;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 512;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_instructions.SetOperation(0, 1, 0);
    program.m_instructions.SetOperation(1, 1, 1);
    program.m_instructions.SetOperation(2, 1, 2);
    program.m_instructions.SetOperation(3, 1, 3);
    program.m_instructions.SetOperation(4, 1, 4);
    program.m_instructions.SetOperation(5, 0, 5);
    program.m_instructions.SetOperation(6, 1, 1);
    program.m_instructions.SetOperation(7, 1, 1);
    program.m_instructions.SetOperation(8, 0, 6);
    program.m_instructions.SetOperation(9, 1, 7);
    program.m_instructions.SetOperation(10, 1, 8);
    program.m_instructions.SetOperation(11, 0, 9);
    program.m_instructions.SetOperation(12, 0, 10);
    program.m_instructions.SetOperation(13, 0, 6);
    program.m_instructions.SetOperation(14, 0, 11);
    program.m_instructions.SetOperation(15, 1, 12);
    program.m_instructions.SetOperation(16, 0, 13);
    program.m_instructions.SetOperation(17, 0, 5);
    program.m_instructions.SetOperation(18, 0, 12);
    program.m_instructions.SetOperation(19, 0, 14);
    program.m_instructions.SetOperation(20, 1, 15);
    program.m_instructions.SetOperation(21, 0, 8);
    program.m_instructions.SetOperation(22, 0, 16);
    program.m_instructions.SetOperation(23, 1, 17);
    program.m_instructions.SetOperation(24, 1, 16);
    program.m_instructions.SetOperation(25, 1, 17);
    program.m_instructions.SetOperation(26, 0, 7);
    program.m_instructions.SetOperation(27, 1, 18);
    program.m_instructions.SetOperation(28, 0, 16);
    program.m_instructions.SetOperation(29, 0, 1);
    program.m_instructions.SetOperation(30, 0, 7);
    program.m_instructions.SetOperation(31, 1, 19);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(20);
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
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 4, 22, 28};
    program.m_registers[17] = {17, 2, 23, 25};
    program.m_registers[18] = {18, 18, 27, 27};
    program.m_registers[19] = {19, 19, 31, 31};
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 20;
    program.m_maxRegisters = 5;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.517665f;
    data->d[1] = 0.111730f;
    data->d[2] = -0.157544f;
    data->d[3] = -0.981161f;
    data->d[4] = 0.069656f;
    data->d[5] = -0.255093f;
    data->d[6] = 0.124723f;
    data->d[7] = -0.568944f;
    data->d[8] = -0.562226f;
    data->d[9] = 0.184264f;
    data->d[10] = -1.139020f;
    data->d[11] = -0.553227f;
    data->d[12] = -1.660424f;
    data->d[13] = -0.478236f;
    data->d[14] = -0.990769f;
    data->d[15] = -0.094654f;
    data->d[16] = 0.154089f;
    data->d[17] = 0.729536f;
    data->d[18] = -0.856240f;
    data->d[19] = 0.039839f;
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
    *result->MinResult(0) = 0.000018f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.463404f;
    data->d[1] = 1.536466f;
    data->d[2] = -0.363540f;
    data->d[3] = -0.655285f;
    data->d[4] = 0.422751f;
    data->d[5] = -0.701494f;
    data->d[6] = -0.175270f;
    data->d[7] = 0.471874f;
    data->d[8] = 0.421542f;
    data->d[9] = -0.456852f;
    data->d[10] = 4.151313f;
    data->d[11] = -0.047713f;
    data->d[12] = -0.874635f;
    data->d[13] = -0.948567f;
    data->d[14] = 0.941466f;
    data->d[15] = -0.125907f;
    data->d[16] = 0.292442f;
    data->d[17] = 1.131524f;
    data->d[18] = 1.032296f;
    data->d[19] = -0.057736f;
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
    *result->MinResult(1) = 0.000022f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.573265f;
    data->d[1] = -0.616109f;
    data->d[2] = -1.179465f;
    data->d[3] = 0.126606f;
    data->d[4] = 0.065949f;
    data->d[5] = 0.211580f;
    data->d[6] = -0.136768f;
    data->d[7] = 0.872084f;
    data->d[8] = 0.691330f;
    data->d[9] = -0.769291f;
    data->d[10] = -0.082416f;
    data->d[11] = -0.265030f;
    data->d[12] = 0.447461f;
    data->d[13] = -0.985845f;
    data->d[14] = 0.489480f;
    data->d[15] = -0.001490f;
    data->d[16] = -1.371142f;
    data->d[17] = 0.523842f;
    data->d[18] = 0.647729f;
    data->d[19] = 0.298410f;
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
    *result->MinResult(2) = 0.000009f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.m_result);
    LoadVariation1(state.m_result);
    LoadVariation2(state.m_result);

    state.m_result->maxResult = 0.000022f;
    state.m_result->instructions = state.m_program.m_instructions;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 512000;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
