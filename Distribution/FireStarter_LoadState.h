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
    settings.m_evolveStates = 1;
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
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 1, 2);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 17);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 13};
    program.m_registers[1] = {1, 1, 1, 11};
    program.m_registers[2] = {2, 2, 2, 20};
    program.m_registers[3] = {3, 3, 3, 15};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 4, 10, 22};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 0, 14, 17};
    program.m_registers[12] = {12, 3, 16, 30};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 23, 23};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 4, 25, 31};
    program.m_registers[18] = {18, 18, 26, 26};
    program.m_registers[19] = {19, 19, 27, 27};
    program.m_registers[20] = {20, 20, 28, 28};
    program.m_registers[21] = {21, 21, 29, 29};
    program.m_programMode = 0;
    program.m_dataSize = 22;
    program.m_maxRegisters = 5;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.005122f;
    data->d[1] = -0.599398f;
    data->d[2] = 0.549922f;
    data->d[3] = -0.106722f;
    data->d[4] = -0.790276f;
    data->d[5] = -0.038091f;
    data->d[6] = 0.243906f;
    data->d[7] = 1.041869f;
    data->d[8] = -0.735557f;
    data->d[9] = 0.858534f;
    data->d[10] = -0.832346f;
    data->d[11] = -1.374369f;
    data->d[12] = -0.563897f;
    data->d[13] = -0.045626f;
    data->d[14] = -0.254457f;
    data->d[15] = -1.074829f;
    data->d[16] = -0.379841f;
    data->d[17] = 1.267791f;
    data->d[18] = -1.373504f;
    data->d[19] = -0.368276f;
    data->d[20] = 0.057197f;
    data->d[21] = -0.147188f;
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
    *result->MinResult(0) = 0.000162f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.034091f;
    data->d[1] = 0.241009f;
    data->d[2] = -0.402640f;
    data->d[3] = 0.085992f;
    data->d[4] = 0.371476f;
    data->d[5] = 1.397022f;
    data->d[6] = -0.073014f;
    data->d[7] = 0.792595f;
    data->d[8] = -0.335553f;
    data->d[9] = -0.047451f;
    data->d[10] = -0.727884f;
    data->d[11] = -0.229061f;
    data->d[12] = -0.608054f;
    data->d[13] = -0.890931f;
    data->d[14] = -0.083526f;
    data->d[15] = 0.879231f;
    data->d[16] = 1.389418f;
    data->d[17] = 0.297072f;
    data->d[18] = -0.276860f;
    data->d[19] = -0.801719f;
    data->d[20] = 1.080409f;
    data->d[21] = -0.289203f;
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
    data->d[0] = -4.129671f;
    data->d[1] = 0.812078f;
    data->d[2] = 0.161292f;
    data->d[3] = -0.395672f;
    data->d[4] = -1.516428f;
    data->d[5] = -0.090070f;
    data->d[6] = -0.553854f;
    data->d[7] = -0.631009f;
    data->d[8] = -0.387399f;
    data->d[9] = 0.050434f;
    data->d[10] = 0.126419f;
    data->d[11] = 0.220740f;
    data->d[12] = -0.000065f;
    data->d[13] = 0.611099f;
    data->d[14] = -0.415305f;
    data->d[15] = -0.189515f;
    data->d[16] = 0.713399f;
    data->d[17] = 0.468990f;
    data->d[18] = -1.093983f;
    data->d[19] = 0.683275f;
    data->d[20] = -0.720549f;
    data->d[21] = -1.319241f;
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
    *result->MinResult(2) = 0.000167f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000167f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 16;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
