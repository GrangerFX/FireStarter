#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
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
    data->d[0] = 0.219880f;
    data->d[1] = -0.690831f;
    data->d[2] = -0.758247f;
    data->d[3] = -0.000058f;
    data->d[4] = 0.527533f;
    data->d[5] = -1.997099f;
    data->d[6] = -0.117000f;
    data->d[7] = -0.913046f;
    data->d[8] = -0.536037f;
    data->d[9] = -1.637135f;
    data->d[10] = -0.457316f;
    data->d[11] = -0.580465f;
    data->d[12] = 0.237719f;
    data->d[13] = 1.799661f;
    data->d[14] = 0.051486f;
    data->d[15] = 0.166372f;
    data->d[16] = 0.593831f;
    data->d[17] = -0.648450f;
    data->d[18] = 0.341292f;
    data->d[19] = 0.000104f;
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
    data->d[0] = -0.243710f;
    data->d[1] = 0.753233f;
    data->d[2] = 0.927009f;
    data->d[3] = -0.000014f;
    data->d[4] = -0.824597f;
    data->d[5] = -0.330473f;
    data->d[6] = -0.559498f;
    data->d[7] = -0.170110f;
    data->d[8] = -1.892158f;
    data->d[9] = -0.480413f;
    data->d[10] = 0.070364f;
    data->d[11] = 0.691322f;
    data->d[12] = -0.097050f;
    data->d[13] = 0.781612f;
    data->d[14] = 0.346395f;
    data->d[15] = 0.965520f;
    data->d[16] = 1.543502f;
    data->d[17] = 1.271047f;
    data->d[18] = 0.219519f;
    data->d[19] = -0.118111f;
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
    *result->MinResult(1) = 0.000039f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.420127f;
    data->d[1] = -1.100130f;
    data->d[2] = 0.542209f;
    data->d[3] = 0.000180f;
    data->d[4] = -3.360620f;
    data->d[5] = -0.742382f;
    data->d[6] = 0.489159f;
    data->d[7] = 1.015780f;
    data->d[8] = -0.234762f;
    data->d[9] = 1.053789f;
    data->d[10] = 0.961513f;
    data->d[11] = 0.338634f;
    data->d[12] = -0.119551f;
    data->d[13] = -0.990054f;
    data->d[14] = 0.062556f;
    data->d[15] = -0.108811f;
    data->d[16] = -0.425548f;
    data->d[17] = -0.195917f;
    data->d[18] = -0.614524f;
    data->d[19] = 0.523819f;
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
    state.m_generation = 3;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
