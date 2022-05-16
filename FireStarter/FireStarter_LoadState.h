#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_evolveMode = 2;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 4;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
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
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 1, 19);
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
    program.m_programMode = 0;
    program.m_dataSize = 20;
    program.m_maxRegisters = 5;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.630710f;
    data->d[1] = -0.367117f;
    data->d[2] = -0.589960f;
    data->d[3] = -0.179121f;
    data->d[4] = -0.494408f;
    data->d[5] = -0.384385f;
    data->d[6] = 0.281741f;
    data->d[7] = -0.944839f;
    data->d[8] = -0.989210f;
    data->d[9] = -0.046260f;
    data->d[10] = -1.146563f;
    data->d[11] = 0.739437f;
    data->d[12] = -1.924995f;
    data->d[13] = 0.047593f;
    data->d[14] = -1.939484f;
    data->d[15] = 0.095103f;
    data->d[16] = -0.148915f;
    data->d[17] = 0.535293f;
    data->d[18] = -1.235274f;
    data->d[19] = 0.207418f;
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
    *result->MinResult(0) = 0.000052f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.744240f;
    data->d[1] = -1.672691f;
    data->d[2] = -1.386858f;
    data->d[3] = 0.561782f;
    data->d[4] = -0.585419f;
    data->d[5] = -0.768662f;
    data->d[6] = -0.253178f;
    data->d[7] = 0.640961f;
    data->d[8] = 0.224520f;
    data->d[9] = -1.944614f;
    data->d[10] = 0.461219f;
    data->d[11] = 0.052787f;
    data->d[12] = 0.744895f;
    data->d[13] = -1.637977f;
    data->d[14] = -0.878632f;
    data->d[15] = -0.565222f;
    data->d[16] = -0.216227f;
    data->d[17] = 1.301739f;
    data->d[18] = 1.065487f;
    data->d[19] = -0.240539f;
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
    *result->MinResult(1) = 0.000057f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.212257f;
    data->d[1] = -0.311201f;
    data->d[2] = -1.154302f;
    data->d[3] = 0.621041f;
    data->d[4] = 0.820705f;
    data->d[5] = -1.253473f;
    data->d[6] = -0.563417f;
    data->d[7] = -0.832671f;
    data->d[8] = -0.513029f;
    data->d[9] = 1.100556f;
    data->d[10] = 0.403622f;
    data->d[11] = 0.178527f;
    data->d[12] = -1.554619f;
    data->d[13] = 0.877220f;
    data->d[14] = -1.066837f;
    data->d[15] = 0.619536f;
    data->d[16] = 0.021464f;
    data->d[17] = -0.977756f;
    data->d[18] = 0.860391f;
    data->d[19] = 0.142508f;
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
    *result->MinResult(2) = 0.000093f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000093f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
