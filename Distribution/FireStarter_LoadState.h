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
    settings.m_seed = 0;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 4;
    settings.m_evolveStates = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 512;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveAttempts = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 22;
    program.m_maxRegisters = 4;

    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 13};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 1, 4, 6};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 1, 7, 30};
    program.m_registers[7] = {7, 2, 8, 18};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 3, 10, 15};
    program.m_registers[10] = {10, 10, 11, 11};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 3, 17, 21};
    program.m_registers[15] = {15, 2, 19, 28};
    program.m_registers[16] = {16, 0, 20, 29};
    program.m_registers[17] = {17, 3, 22, 25};
    program.m_registers[18] = {18, 18, 23, 23};
    program.m_registers[19] = {19, 19, 24, 24};
    program.m_registers[20] = {20, 20, 27, 27};
    program.m_registers[21] = {21, 21, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 2);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 1, 19);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 21);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.705259f;
    data->d[1] = -0.622968f;
    data->d[2] = 0.609829f;
    data->d[3] = 0.033529f;
    data->d[4] = 0.355289f;
    data->d[5] = 0.329345f;
    data->d[6] = -0.007042f;
    data->d[7] = -1.096262f;
    data->d[8] = -0.743946f;
    data->d[9] = -0.965197f;
    data->d[10] = 0.657679f;
    data->d[11] = 0.221607f;
    data->d[12] = -0.849478f;
    data->d[13] = -0.054522f;
    data->d[14] = 1.351563f;
    data->d[15] = -0.864706f;
    data->d[16] = 0.117430f;
    data->d[17] = -0.176173f;
    data->d[18] = -0.886596f;
    data->d[19] = 0.118434f;
    data->d[20] = -0.102665f;
    data->d[21] = 0.041274f;
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
    *result->MinResult(0) = 0.000043f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.421832f;
    data->d[1] = -0.356996f;
    data->d[2] = -1.101482f;
    data->d[3] = -0.591623f;
    data->d[4] = 0.146587f;
    data->d[5] = -0.195205f;
    data->d[6] = 0.751884f;
    data->d[7] = -0.968736f;
    data->d[8] = -0.305029f;
    data->d[9] = 2.892542f;
    data->d[10] = -0.097446f;
    data->d[11] = 0.766493f;
    data->d[12] = -0.976942f;
    data->d[13] = -0.313558f;
    data->d[14] = 0.726560f;
    data->d[15] = -1.866203f;
    data->d[16] = 1.371387f;
    data->d[17] = -1.033808f;
    data->d[18] = -0.794760f;
    data->d[19] = -0.382669f;
    data->d[20] = -0.057776f;
    data->d[21] = 0.023825f;
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
    data->d[0] = -0.814390f;
    data->d[1] = 0.764230f;
    data->d[2] = -0.774382f;
    data->d[3] = -0.082316f;
    data->d[4] = 0.253413f;
    data->d[5] = 0.345808f;
    data->d[6] = -0.710815f;
    data->d[7] = -0.821657f;
    data->d[8] = 0.092283f;
    data->d[9] = -0.758136f;
    data->d[10] = -0.023592f;
    data->d[11] = 1.609485f;
    data->d[12] = 0.817740f;
    data->d[13] = -0.483190f;
    data->d[14] = -1.118277f;
    data->d[15] = -0.563430f;
    data->d[16] = 0.379939f;
    data->d[17] = 0.216572f;
    data->d[18] = -0.981459f;
    data->d[19] = 0.033925f;
    data->d[20] = -0.176539f;
    data->d[21] = 0.586879f;
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
    *result->MinResult(2) = 0.000063f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000063f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
