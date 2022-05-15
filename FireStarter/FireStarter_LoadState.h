#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_evolveMode = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 1;
    settings.m_evolvePopulation = 4352;
    settings.m_evolveIterations = 512;
    settings.m_evolveGenerations = 10;
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
    data->d[0] = 0.534292f;
    data->d[1] = -0.126904f;
    data->d[2] = -1.895374f;
    data->d[3] = 0.044195f;
    data->d[4] = -0.986652f;
    data->d[5] = 0.067146f;
    data->d[6] = -0.457720f;
    data->d[7] = 1.074270f;
    data->d[8] = -0.573040f;
    data->d[9] = -1.113067f;
    data->d[10] = -0.798349f;
    data->d[11] = 0.423086f;
    data->d[12] = -1.050300f;
    data->d[13] = 0.297205f;
    data->d[14] = 0.010406f;
    data->d[15] = -0.692005f;
    data->d[16] = 0.358550f;
    data->d[17] = -0.496923f;
    data->d[18] = -0.121437f;
    data->d[19] = 0.876286f;
    data->d[20] = 0.244565f;
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
    *result->MinResult(0) = 0.015091f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.246880f;
    data->d[1] = -0.775259f;
    data->d[2] = 0.212467f;
    data->d[3] = -0.548227f;
    data->d[4] = -0.010625f;
    data->d[5] = -0.421253f;
    data->d[6] = -1.145223f;
    data->d[7] = 0.714175f;
    data->d[8] = -2.872612f;
    data->d[9] = 0.255019f;
    data->d[10] = 0.340406f;
    data->d[11] = 1.191332f;
    data->d[12] = 0.835975f;
    data->d[13] = 4.793280f;
    data->d[14] = -0.792253f;
    data->d[15] = -0.584880f;
    data->d[16] = -0.042569f;
    data->d[17] = -1.365016f;
    data->d[18] = 1.446543f;
    data->d[19] = 0.558995f;
    data->d[20] = 0.674628f;
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
    *result->MinResult(1) = 0.008765f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.415119f;
    data->d[1] = 0.786540f;
    data->d[2] = 0.198604f;
    data->d[3] = 0.790289f;
    data->d[4] = -0.281169f;
    data->d[5] = -0.549584f;
    data->d[6] = -0.380212f;
    data->d[7] = 0.025616f;
    data->d[8] = 0.278061f;
    data->d[9] = 1.271623f;
    data->d[10] = 0.860346f;
    data->d[11] = 1.311773f;
    data->d[12] = 0.380235f;
    data->d[13] = -0.860226f;
    data->d[14] = -0.588257f;
    data->d[15] = -0.341772f;
    data->d[16] = -1.264776f;
    data->d[17] = -0.611089f;
    data->d[18] = 1.206255f;
    data->d[19] = 0.152346f;
    data->d[20] = 0.680813f;
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
    *result->MinResult(2) = 0.006821f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.m_result);
    LoadVariation1(state.m_result);
    LoadVariation2(state.m_result);

    state.m_result->maxResult = 0.015091f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 30;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
