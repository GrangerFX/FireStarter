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
    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 20);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 18);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 17};
    program.m_registers[1] = {1, 1, 1, 25};
    program.m_registers[2] = {2, 2, 2, 20};
    program.m_registers[3] = {3, 3, 3, 11};
    program.m_registers[4] = {4, 4, 4, 30};
    program.m_registers[5] = {5, 5, 5, 9};
    program.m_registers[6] = {6, 6, 6, 14};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 3, 12, 16};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 0, 18, 22};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 23, 23};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 17, 26, 26};
    program.m_registers[18] = {18, 1, 27, 31};
    program.m_registers[19] = {19, 19, 28, 28};
    program.m_registers[20] = {20, 20, 29, 29};
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 21;
    program.m_maxRegisters = 7;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.345669f;
    data->d[1] = 1.169062f;
    data->d[2] = 0.012866f;
    data->d[3] = 0.183014f;
    data->d[4] = -0.956285f;
    data->d[5] = 0.834749f;
    data->d[6] = 1.941883f;
    data->d[7] = -0.714650f;
    data->d[8] = -0.526918f;
    data->d[9] = 0.516051f;
    data->d[10] = 0.197164f;
    data->d[11] = -2.499542f;
    data->d[12] = -0.550028f;
    data->d[13] = 0.052288f;
    data->d[14] = 1.349428f;
    data->d[15] = -1.287886f;
    data->d[16] = 1.301378f;
    data->d[17] = 0.731348f;
    data->d[18] = -0.149911f;
    data->d[19] = 0.727090f;
    data->d[20] = 0.655112f;
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
    *result->MinResult(0) = 0.000121f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.290007f;
    data->d[1] = 1.048295f;
    data->d[2] = 0.601891f;
    data->d[3] = 0.073682f;
    data->d[4] = -1.238859f;
    data->d[5] = 0.739345f;
    data->d[6] = 0.242181f;
    data->d[7] = -4.256843f;
    data->d[8] = 0.000016f;
    data->d[9] = 1.148477f;
    data->d[10] = -0.388080f;
    data->d[11] = 0.655225f;
    data->d[12] = 0.248299f;
    data->d[13] = 1.088356f;
    data->d[14] = 2.594957f;
    data->d[15] = 0.315639f;
    data->d[16] = 0.784985f;
    data->d[17] = -1.009055f;
    data->d[18] = -0.118277f;
    data->d[19] = 0.393719f;
    data->d[20] = -0.355161f;
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
    *result->MinResult(1) = 0.000054f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.600550f;
    data->d[1] = -2.956985f;
    data->d[2] = 0.362661f;
    data->d[3] = -1.302477f;
    data->d[4] = 0.521790f;
    data->d[5] = -1.182775f;
    data->d[6] = -0.700877f;
    data->d[7] = -0.360728f;
    data->d[8] = -0.226757f;
    data->d[9] = -1.410330f;
    data->d[10] = 0.636768f;
    data->d[11] = -0.870281f;
    data->d[12] = 0.481307f;
    data->d[13] = 0.050386f;
    data->d[14] = -0.215499f;
    data->d[15] = -0.751914f;
    data->d[16] = 0.533606f;
    data->d[17] = -0.058246f;
    data->d[18] = 0.661988f;
    data->d[19] = 0.528277f;
    data->d[20] = -0.355351f;
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
    *result->MinResult(2) = 0.000160f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.m_result);
    LoadVariation1(state.m_result);
    LoadVariation2(state.m_result);

    state.m_result->maxResult = 0.000160f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 512000;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
