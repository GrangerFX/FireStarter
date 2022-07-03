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
    settings.m_seed = 510;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 3;
    settings.m_evolveStates = 1;
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
    program.m_dataSize = 20;
    program.m_maxRegisters = 6;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 5};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 29};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 0, 6, 28};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 2, 9, 23};
    program.m_registers[9] = {9, 3, 10, 16};
    program.m_registers[10] = {10, 4, 11, 15};
    program.m_registers[11] = {11, 5, 13, 14};
    program.m_registers[12] = {12, 3, 17, 30};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 2, 24, 27};
    program.m_registers[18] = {18, 18, 25, 25};
    program.m_registers[19] = {19, 19, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.094908f;
    data->d[1] = -3.027296f;
    data->d[2] = 0.280161f;
    data->d[3] = 0.274723f;
    data->d[4] = -0.573372f;
    data->d[5] = 0.342806f;
    data->d[6] = -0.688292f;
    data->d[7] = 0.655679f;
    data->d[8] = 0.169225f;
    data->d[9] = -0.677859f;
    data->d[10] = -0.462380f;
    data->d[11] = -0.872921f;
    data->d[12] = -0.524032f;
    data->d[13] = -0.222082f;
    data->d[14] = -0.614980f;
    data->d[15] = 0.134917f;
    data->d[16] = 1.397039f;
    data->d[17] = -0.804406f;
    data->d[18] = -0.854300f;
    data->d[19] = -0.000044f;
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
    *result->MinResult(0) = 0.000024f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.140879f;
    data->d[1] = 0.257465f;
    data->d[2] = -0.053338f;
    data->d[3] = 0.011056f;
    data->d[4] = -0.002682f;
    data->d[5] = 1.081374f;
    data->d[6] = 0.700150f;
    data->d[7] = 0.660401f;
    data->d[8] = 0.811078f;
    data->d[9] = 1.106193f;
    data->d[10] = 1.061920f;
    data->d[11] = 0.040111f;
    data->d[12] = 0.202810f;
    data->d[13] = 1.544946f;
    data->d[14] = 0.429962f;
    data->d[15] = 0.267904f;
    data->d[16] = -0.803920f;
    data->d[17] = 0.043564f;
    data->d[18] = 0.320687f;
    data->d[19] = -0.118164f;
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
    *result->MinResult(1) = 0.000008f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -3.799654f;
    data->d[1] = 0.407180f;
    data->d[2] = 0.127328f;
    data->d[3] = 0.098617f;
    data->d[4] = 0.150450f;
    data->d[5] = -0.195407f;
    data->d[6] = -0.318370f;
    data->d[7] = -0.400035f;
    data->d[8] = -1.677149f;
    data->d[9] = 0.683000f;
    data->d[10] = 0.822230f;
    data->d[11] = 0.162180f;
    data->d[12] = 0.569215f;
    data->d[13] = 0.866324f;
    data->d[14] = -1.781198f;
    data->d[15] = 0.407584f;
    data->d[16] = 0.197121f;
    data->d[17] = -1.288772f;
    data->d[18] = -0.219363f;
    data->d[19] = 0.523626f;
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
    *result->MinResult(2) = 0.000029f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000029f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
