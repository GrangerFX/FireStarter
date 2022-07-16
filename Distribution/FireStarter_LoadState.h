#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = FIRESTARTER_UNIT;
    settings.m_evolveStates = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolveProcess = 0;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveAttempts = 32;
    settings.m_evolveSeed = 8337;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 20;
    program.m_maxRegisters = 5;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 22};
    program.m_registers[4] = {4, 2, 5, 17};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 3, 7, 29};
    program.m_registers[7] = {7, 4, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 0, 14, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 18, 18};
    program.m_registers[15] = {15, 15, 23, 23};
    program.m_registers[16] = {16, 16, 25, 25};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 28, 28};
    program.m_registers[19] = {19, 19, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 0, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = -0.802470f;
    data->d[2] = -0.531074f;
    data->d[3] = -0.410750f;
    data->d[4] = -0.726949f;
    data->d[5] = 0.103002f;
    data->d[6] = -0.705197f;
    data->d[7] = -0.108986f;
    data->d[8] = 0.649652f;
    data->d[9] = 0.487025f;
    data->d[10] = 0.187371f;
    data->d[11] = 0.552614f;
    data->d[12] = -1.463728f;
    data->d[13] = -0.652564f;
    data->d[14] = 1.389517f;
    data->d[15] = 0.648222f;
    data->d[16] = 1.177588f;
    data->d[17] = 0.150105f;
    data->d[18] = -0.000000f;
    data->d[19] = 0.848698f;
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
    *result->MinResult(0) = 0.000000f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090658f;
    data->d[1] = 0.392416f;
    data->d[2] = 0.472134f;
    data->d[3] = -0.753057f;
    data->d[4] = 1.376921f;
    data->d[5] = 0.894422f;
    data->d[6] = 1.433825f;
    data->d[7] = -0.023359f;
    data->d[8] = -0.302253f;
    data->d[9] = 0.837830f;
    data->d[10] = -1.252501f;
    data->d[11] = 0.745817f;
    data->d[12] = -2.022929f;
    data->d[13] = 0.677963f;
    data->d[14] = 0.270349f;
    data->d[15] = 0.062190f;
    data->d[16] = -1.849249f;
    data->d[17] = 0.848561f;
    data->d[18] = 0.092073f;
    data->d[19] = -1.511983f;
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
    *result->MinResult(1) = 0.000005f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = -0.624292f;
    data->d[2] = -0.847382f;
    data->d[3] = 1.003497f;
    data->d[4] = 1.023548f;
    data->d[5] = 0.005442f;
    data->d[6] = 0.255747f;
    data->d[7] = -0.610374f;
    data->d[8] = 1.039188f;
    data->d[9] = -0.468506f;
    data->d[10] = -1.245412f;
    data->d[11] = -0.969166f;
    data->d[12] = -0.804457f;
    data->d[13] = 0.071398f;
    data->d[14] = 0.614976f;
    data->d[15] = 0.002196f;
    data->d[16] = -0.218853f;
    data->d[17] = 1.236876f;
    data->d[18] = -0.322713f;
    data->d[19] = -1.311763f;
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
    *result->MinResult(2) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000005f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 4;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
