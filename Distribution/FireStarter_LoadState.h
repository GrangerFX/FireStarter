#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_seed = 0;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 4;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 512;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program, const FireStarterSettings& settings)
{
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 5;

    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 17};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 27};
    program.m_registers[4] = {4, 2, 4, 7};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 6, 8, 8};
    program.m_registers[7] = {7, 2, 9, 31};
    program.m_registers[8] = {8, 3, 12, 28};
    program.m_registers[9] = {9, 9, 13, 13};
    program.m_registers[10] = {10, 4, 14, 22};
    program.m_registers[11] = {11, 11, 16, 16};
    program.m_registers[12] = {12, 12, 18, 18};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 24, 24};
    program.m_registers[15] = {15, 15, 25, 25};
    program.m_registers[16] = {16, 4, 26, 29};
    program.m_registers[17] = {17, 17, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 4);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 3);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 0, 7);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.585864f;
    data->d[1] = -0.431714f;
    data->d[2] = -0.314303f;
    data->d[3] = 0.555503f;
    data->d[4] = -0.913570f;
    data->d[5] = -1.122350f;
    data->d[6] = -0.002539f;
    data->d[7] = -0.356487f;
    data->d[8] = -0.182019f;
    data->d[9] = 1.241608f;
    data->d[10] = -0.282463f;
    data->d[11] = 0.262987f;
    data->d[12] = 0.495386f;
    data->d[13] = 0.307672f;
    data->d[14] = -0.949748f;
    data->d[15] = -1.867445f;
    data->d[16] = 0.172598f;
    data->d[17] = 0.402251f;
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
    *result->MinResult(0) = 0.000097f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.000000f;
    data->d[1] = 1.000000f;
    data->d[2] = 1.000000f;
    data->d[3] = 1.000000f;
    data->d[4] = 1.000000f;
    data->d[5] = 1.000000f;
    data->d[6] = 1.000000f;
    data->d[7] = 1.000000f;
    data->d[8] = 1.000000f;
    data->d[9] = 1.000000f;
    data->d[10] = 1.000000f;
    data->d[11] = 1.000000f;
    data->d[12] = 1.000000f;
    data->d[13] = 1.000000f;
    data->d[14] = 1.000000f;
    data->d[15] = 1.000000f;
    data->d[16] = 1.000000f;
    data->d[17] = 1.000000f;
    data->d[18] = 1.000000f;
    data->d[19] = 1.000000f;
    data->d[20] = 1.000000f;
    data->d[21] = 1.000000f;
    data->d[22] = 1.000000f;
    data->d[23] = 1.000000f;
    data->d[24] = 1.000000f;
    data->d[25] = 1.000000f;
    data->d[26] = 1.000000f;
    data->d[27] = 1.000000f;
    data->d[28] = 1.000000f;
    data->d[29] = 1.000000f;
    data->d[30] = 1.000000f;
    data->d[31] = 1.000000f;
    *result->MinResult(1) = 10.000000f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 1.000000f;
    data->d[1] = 1.000000f;
    data->d[2] = 1.000000f;
    data->d[3] = 1.000000f;
    data->d[4] = 1.000000f;
    data->d[5] = 1.000000f;
    data->d[6] = 1.000000f;
    data->d[7] = 1.000000f;
    data->d[8] = 1.000000f;
    data->d[9] = 1.000000f;
    data->d[10] = 1.000000f;
    data->d[11] = 1.000000f;
    data->d[12] = 1.000000f;
    data->d[13] = 1.000000f;
    data->d[14] = 1.000000f;
    data->d[15] = 1.000000f;
    data->d[16] = 1.000000f;
    data->d[17] = 1.000000f;
    data->d[18] = 1.000000f;
    data->d[19] = 1.000000f;
    data->d[20] = 1.000000f;
    data->d[21] = 1.000000f;
    data->d[22] = 1.000000f;
    data->d[23] = 1.000000f;
    data->d[24] = 1.000000f;
    data->d[25] = 1.000000f;
    data->d[26] = 1.000000f;
    data->d[27] = 1.000000f;
    data->d[28] = 1.000000f;
    data->d[29] = 1.000000f;
    data->d[30] = 1.000000f;
    data->d[31] = 1.000000f;
    *result->MinResult(2) = 10.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000097f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 10;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program, state.m_settings);
    LoadResult(state);
} // LoadState
