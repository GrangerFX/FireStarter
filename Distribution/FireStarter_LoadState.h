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
    settings.m_seed = 7263;

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
    settings.m_evolveFailures = 100;
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
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.742311f;
    data->d[1] = -0.874869f;
    data->d[2] = -0.075074f;
    data->d[3] = 0.728985f;
    data->d[4] = -1.219476f;
    data->d[5] = -0.700481f;
    data->d[6] = -0.320719f;
    data->d[7] = 0.490421f;
    data->d[8] = 0.567473f;
    data->d[9] = -0.067774f;
    data->d[10] = -0.684733f;
    data->d[11] = 1.325979f;
    data->d[12] = -0.911305f;
    data->d[13] = 2.179276f;
    data->d[14] = 0.396907f;
    data->d[15] = -0.324007f;
    data->d[16] = -0.132298f;
    data->d[17] = 1.012190f;
    data->d[18] = 1.345400f;
    data->d[19] = 0.290225f;
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
    *result->MinResult(0) = 0.000045f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.199872f;
    data->d[1] = -0.489779f;
    data->d[2] = -0.566324f;
    data->d[3] = -1.092064f;
    data->d[4] = -0.595617f;
    data->d[5] = -0.164917f;
    data->d[6] = 0.091797f;
    data->d[7] = -0.366338f;
    data->d[8] = -0.752612f;
    data->d[9] = 0.680247f;
    data->d[10] = 0.357582f;
    data->d[11] = 0.318915f;
    data->d[12] = -2.277209f;
    data->d[13] = -0.336021f;
    data->d[14] = 0.733768f;
    data->d[15] = 0.427982f;
    data->d[16] = -0.249098f;
    data->d[17] = 0.659297f;
    data->d[18] = -1.142707f;
    data->d[19] = 0.749705f;
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
    *result->MinResult(1) = 0.000260f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.654905f;
    data->d[1] = -0.891885f;
    data->d[2] = -0.459715f;
    data->d[3] = -0.966533f;
    data->d[4] = 0.364043f;
    data->d[5] = 0.481745f;
    data->d[6] = 0.051182f;
    data->d[7] = -0.674438f;
    data->d[8] = 0.190737f;
    data->d[9] = 0.916682f;
    data->d[10] = -0.911123f;
    data->d[11] = -0.233793f;
    data->d[12] = -1.059167f;
    data->d[13] = -1.269757f;
    data->d[14] = -0.509933f;
    data->d[15] = 0.245855f;
    data->d[16] = -0.281078f;
    data->d[17] = 0.831262f;
    data->d[18] = 0.713731f;
    data->d[19] = 0.759706f;
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
    *result->MinResult(2) = 0.000050f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000260f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
