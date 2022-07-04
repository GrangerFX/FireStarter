#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_process = 1;
    settings.m_clients = 4;
    settings.m_seed = 8337;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 3;
    settings.m_evolveStates = 4;
    settings.m_evolveUnits = 4;
    settings.m_evolvePopulation = 17408;
    settings.m_evolveIterations = 128;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 0;
    settings.m_evolveAttempts = 10000;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 21;
    program.m_maxRegisters = 4;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 22};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 2, 7, 29};
    program.m_registers[7] = {7, 3, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 0, 14, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 17, 17};
    program.m_registers[15] = {15, 15, 18, 18};
    program.m_registers[16] = {16, 16, 23, 23};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 27, 27};
    program.m_registers[19] = {19, 19, 28, 28};
    program.m_registers[20] = {20, 20, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 4);
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
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 0, 20);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141598f;
    data->d[1] = -0.540155f;
    data->d[2] = 1.214507f;
    data->d[3] = -0.675008f;
    data->d[4] = -0.900862f;
    data->d[5] = -0.025149f;
    data->d[6] = 1.775437f;
    data->d[7] = 0.698369f;
    data->d[8] = -0.710413f;
    data->d[9] = 0.590870f;
    data->d[10] = 0.923112f;
    data->d[11] = -0.734600f;
    data->d[12] = -0.423807f;
    data->d[13] = 0.258241f;
    data->d[14] = -2.045800f;
    data->d[15] = 0.209740f;
    data->d[16] = -0.038588f;
    data->d[17] = -0.677419f;
    data->d[18] = 0.000265f;
    data->d[19] = 0.172108f;
    data->d[20] = 0.325031f;
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
    *result->MinResult(0) = 0.000035f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090656f;
    data->d[1] = -0.518944f;
    data->d[2] = -0.551302f;
    data->d[3] = -0.356217f;
    data->d[4] = -1.545744f;
    data->d[5] = 0.417271f;
    data->d[6] = 0.258374f;
    data->d[7] = 0.552781f;
    data->d[8] = 0.216649f;
    data->d[9] = -0.987818f;
    data->d[10] = -0.170658f;
    data->d[11] = -0.482500f;
    data->d[12] = -1.082526f;
    data->d[13] = 1.325265f;
    data->d[14] = -0.947135f;
    data->d[15] = -0.523495f;
    data->d[16] = -1.197482f;
    data->d[17] = -0.610848f;
    data->d[18] = -0.273459f;
    data->d[19] = -0.331194f;
    data->d[20] = -1.304325f;
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
    *result->MinResult(1) = 0.000024f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617973f;
    data->d[1] = 0.719388f;
    data->d[2] = -1.058278f;
    data->d[3] = 1.516362f;
    data->d[4] = -0.185096f;
    data->d[5] = -0.822503f;
    data->d[6] = -0.034336f;
    data->d[7] = -1.600529f;
    data->d[8] = -0.860429f;
    data->d[9] = -0.020660f;
    data->d[10] = -0.258340f;
    data->d[11] = 0.627450f;
    data->d[12] = 1.025828f;
    data->d[13] = 0.209083f;
    data->d[14] = -0.245384f;
    data->d[15] = -1.359341f;
    data->d[16] = -0.171362f;
    data->d[17] = 0.131617f;
    data->d[18] = -0.726557f;
    data->d[19] = 0.721912f;
    data->d[20] = -0.998251f;
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
    *result->MinResult(2) = 0.000027f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000035f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
