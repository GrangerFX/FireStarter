#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_process = 0;
    settings.m_clients = 4;
    settings.m_seed = 1;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 3;
    settings.m_evolveStates = 4;
    settings.m_evolveUnits = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 0;
    settings.m_evolveAttempts = 10000;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 7;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 2};
    program.m_registers[1] = {1, 1, 1, 27};
    program.m_registers[2] = {2, 0, 3, 14};
    program.m_registers[3] = {3, 3, 4, 4};
    program.m_registers[4] = {4, 2, 5, 10};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 3, 7, 28};
    program.m_registers[7] = {7, 4, 9, 17};
    program.m_registers[8] = {8, 2, 11, 19};
    program.m_registers[9] = {9, 5, 12, 21};
    program.m_registers[10] = {10, 6, 13, 20};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 22, 22};
    program.m_registers[13] = {13, 5, 23, 30};
    program.m_registers[14] = {14, 6, 24, 31};
    program.m_registers[15] = {15, 15, 25, 25};
    program.m_registers[16] = {16, 16, 26, 26};
    program.m_registers[17] = {17, 17, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 14);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 0, 14);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.035775f;
    data->d[1] = 0.582742f;
    data->d[2] = -0.695900f;
    data->d[3] = 0.163723f;
    data->d[4] = -2.275883f;
    data->d[5] = 0.681378f;
    data->d[6] = 0.592186f;
    data->d[7] = -0.496978f;
    data->d[8] = 0.156119f;
    data->d[9] = 0.045137f;
    data->d[10] = 0.567163f;
    data->d[11] = -0.300747f;
    data->d[12] = -0.101181f;
    data->d[13] = -1.223174f;
    data->d[14] = -0.675960f;
    data->d[15] = -0.383559f;
    data->d[16] = 0.579141f;
    data->d[17] = 0.955096f;
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
    *result->MinResult(0) = 0.000156f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.519468f;
    data->d[1] = 0.341662f;
    data->d[2] = 0.662647f;
    data->d[3] = 0.033365f;
    data->d[4] = 0.756445f;
    data->d[5] = 1.224948f;
    data->d[6] = 0.501656f;
    data->d[7] = -0.239010f;
    data->d[8] = 0.763098f;
    data->d[9] = 1.087826f;
    data->d[10] = -0.348994f;
    data->d[11] = 0.179765f;
    data->d[12] = -0.283702f;
    data->d[13] = -1.189642f;
    data->d[14] = -0.885253f;
    data->d[15] = -0.225432f;
    data->d[16] = -1.257728f;
    data->d[17] = -0.472942f;
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
    *result->MinResult(1) = 0.000079f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.184717f;
    data->d[1] = -1.056681f;
    data->d[2] = -0.069460f;
    data->d[3] = -0.298635f;
    data->d[4] = 0.598661f;
    data->d[5] = 0.222959f;
    data->d[6] = 0.782099f;
    data->d[7] = -0.020895f;
    data->d[8] = 1.110114f;
    data->d[9] = -0.802425f;
    data->d[10] = 0.289077f;
    data->d[11] = -0.074456f;
    data->d[12] = 0.687550f;
    data->d[13] = -1.258754f;
    data->d[14] = 0.935008f;
    data->d[15] = -0.115026f;
    data->d[16] = -0.450187f;
    data->d[17] = 0.687482f;
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
    *result->MinResult(2) = 0.000085f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000156f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
