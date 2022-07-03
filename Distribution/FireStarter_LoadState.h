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
    data->d[0] = 0.184866f;
    data->d[1] = -0.450098f;
    data->d[2] = -0.456934f;
    data->d[3] = -0.132836f;
    data->d[4] = 0.554640f;
    data->d[5] = -0.437804f;
    data->d[6] = 0.130307f;
    data->d[7] = -0.950799f;
    data->d[8] = -0.971077f;
    data->d[9] = 1.356912f;
    data->d[10] = 0.208819f;
    data->d[11] = 0.424144f;
    data->d[12] = -0.809140f;
    data->d[13] = 0.428603f;
    data->d[14] = -1.602717f;
    data->d[15] = 1.200573f;
    data->d[16] = -0.787495f;
    data->d[17] = -2.560397f;
    data->d[18] = -1.372975f;
    data->d[19] = 0.309425f;
    data->d[20] = -0.013465f;
    data->d[21] = 0.195295f;
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
    *result->MinResult(0) = 0.000008f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.063424f;
    data->d[1] = -0.236828f;
    data->d[2] = -1.541910f;
    data->d[3] = -0.427243f;
    data->d[4] = 0.131966f;
    data->d[5] = -0.134946f;
    data->d[6] = 0.722949f;
    data->d[7] = -0.873366f;
    data->d[8] = -0.262235f;
    data->d[9] = 3.695985f;
    data->d[10] = -0.059360f;
    data->d[11] = 0.947732f;
    data->d[12] = -1.595451f;
    data->d[13] = 0.612659f;
    data->d[14] = 0.577452f;
    data->d[15] = -1.955986f;
    data->d[16] = 1.381952f;
    data->d[17] = -0.935734f;
    data->d[18] = 0.165009f;
    data->d[19] = -1.786403f;
    data->d[20] = -0.069317f;
    data->d[21] = 0.088453f;
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
    *result->MinResult(1) = 0.000013f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.689495f;
    data->d[1] = -0.926750f;
    data->d[2] = 0.190351f;
    data->d[3] = 0.789430f;
    data->d[4] = -0.797393f;
    data->d[5] = 0.715477f;
    data->d[6] = -0.435953f;
    data->d[7] = -0.915732f;
    data->d[8] = 0.139493f;
    data->d[9] = 0.890891f;
    data->d[10] = -0.726098f;
    data->d[11] = -0.589370f;
    data->d[12] = -1.535355f;
    data->d[13] = -0.843930f;
    data->d[14] = -0.693308f;
    data->d[15] = -0.828853f;
    data->d[16] = 1.462247f;
    data->d[17] = -1.164902f;
    data->d[18] = -0.482848f;
    data->d[19] = 2.147433f;
    data->d[20] = -0.194617f;
    data->d[21] = 0.557982f;
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
    *result->MinResult(2) = 0.000005f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000013f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 2100;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
