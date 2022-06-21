#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_evolution = 1;
    settings.m_seed = 1;

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

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 20;
    program.m_maxRegisters = 7;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 24};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 1, 4, 28};
    program.m_registers[5] = {5, 2, 6, 29};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 3, 8, 17};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 4, 11, 16};
    program.m_registers[10] = {10, 5, 13, 25};
    program.m_registers[11] = {11, 6, 14, 26};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 3, 21, 22};
    program.m_registers[16] = {16, 16, 23, 23};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 30, 30};
    program.m_registers[19] = {19, 19, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 1, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.235302f;
    data->d[1] = 0.953129f;
    data->d[2] = -0.704576f;
    data->d[3] = -0.912330f;
    data->d[4] = 0.541892f;
    data->d[5] = 5.107500f;
    data->d[6] = 1.188709f;
    data->d[7] = 0.578131f;
    data->d[8] = 0.366854f;
    data->d[9] = 0.371588f;
    data->d[10] = -0.992664f;
    data->d[11] = 1.282795f;
    data->d[12] = -0.977576f;
    data->d[13] = -0.115276f;
    data->d[14] = -0.259169f;
    data->d[15] = 0.114674f;
    data->d[16] = 0.108771f;
    data->d[17] = -0.041745f;
    data->d[18] = -0.033835f;
    data->d[19] = 0.033836f;
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
    *result->MinResult(0) = 0.000009f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.169367f;
    data->d[1] = 0.123506f;
    data->d[2] = 0.446366f;
    data->d[3] = 2.656496f;
    data->d[4] = 0.521113f;
    data->d[5] = -0.725082f;
    data->d[6] = -1.423971f;
    data->d[7] = -0.965404f;
    data->d[8] = -0.916213f;
    data->d[9] = 0.229574f;
    data->d[10] = 0.828297f;
    data->d[11] = 0.737986f;
    data->d[12] = 0.041859f;
    data->d[13] = 1.246311f;
    data->d[14] = 1.544567f;
    data->d[15] = 0.227638f;
    data->d[16] = -0.201386f;
    data->d[17] = -0.848573f;
    data->d[18] = 0.585010f;
    data->d[19] = -0.703143f;
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
    *result->MinResult(1) = 0.000009f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.384525f;
    data->d[1] = 0.337264f;
    data->d[2] = -0.339519f;
    data->d[3] = 1.153761f;
    data->d[4] = 1.145722f;
    data->d[5] = -0.973732f;
    data->d[6] = 1.082753f;
    data->d[7] = 1.427652f;
    data->d[8] = 0.103495f;
    data->d[9] = -1.392687f;
    data->d[10] = -0.127420f;
    data->d[11] = -0.564447f;
    data->d[12] = 0.388422f;
    data->d[13] = 1.604158f;
    data->d[14] = -2.929341f;
    data->d[15] = -2.347973f;
    data->d[16] = -0.602061f;
    data->d[17] = -0.849468f;
    data->d[18] = 0.705052f;
    data->d[19] = -0.181452f;
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
    *result->MinResult(2) = 0.000009f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000009f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 3;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
