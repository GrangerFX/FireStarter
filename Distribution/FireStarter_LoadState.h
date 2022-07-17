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
    program.m_dataSize = 19;
    program.m_maxRegisters = 7;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 22};
    program.m_registers[4] = {4, 2, 5, 17};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 3, 7, 24};
    program.m_registers[7] = {7, 4, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 0, 11, 25};
    program.m_registers[10] = {10, 5, 12, 18};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 6, 14, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 23, 23};
    program.m_registers[15] = {15, 15, 27, 27};
    program.m_registers[16] = {16, 16, 28, 28};
    program.m_registers[17] = {17, 17, 29, 29};
    program.m_registers[18] = {18, 18, 31, 31};

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
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 15);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 1, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = -0.778339f;
    data->d[2] = 0.476981f;
    data->d[3] = -0.621408f;
    data->d[4] = 0.883795f;
    data->d[5] = -0.248635f;
    data->d[6] = 0.393987f;
    data->d[7] = 0.431739f;
    data->d[8] = 0.151303f;
    data->d[9] = -0.009523f;
    data->d[10] = -1.122965f;
    data->d[11] = -1.122390f;
    data->d[12] = 0.603939f;
    data->d[13] = -0.564928f;
    data->d[14] = -0.655806f;
    data->d[15] = -1.683939f;
    data->d[16] = -1.435536f;
    data->d[17] = 0.685333f;
    data->d[18] = -1.656693f;
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
    *result->MinResult(0) = 0.000002f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090659f;
    data->d[1] = -0.317965f;
    data->d[2] = -0.827821f;
    data->d[3] = 1.534555f;
    data->d[4] = 0.314664f;
    data->d[5] = -0.228443f;
    data->d[6] = 0.603177f;
    data->d[7] = 0.305445f;
    data->d[8] = 0.164698f;
    data->d[9] = -0.155176f;
    data->d[10] = -1.112094f;
    data->d[11] = -0.487848f;
    data->d[12] = 0.909051f;
    data->d[13] = 0.010169f;
    data->d[14] = 0.453432f;
    data->d[15] = 0.633596f;
    data->d[16] = -0.317244f;
    data->d[17] = 1.351053f;
    data->d[18] = 0.153437f;
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
    *result->MinResult(1) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = 0.244172f;
    data->d[2] = -1.139568f;
    data->d[3] = 1.365824f;
    data->d[4] = 0.179805f;
    data->d[5] = 0.010825f;
    data->d[6] = 0.434256f;
    data->d[7] = -0.516677f;
    data->d[8] = -0.880276f;
    data->d[9] = 1.501003f;
    data->d[10] = -0.762435f;
    data->d[11] = 0.863610f;
    data->d[12] = 0.675166f;
    data->d[13] = 0.840731f;
    data->d[14] = -0.270908f;
    data->d[15] = 0.598600f;
    data->d[16] = -1.204337f;
    data->d[17] = -1.009128f;
    data->d[18] = -0.203898f;
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
    *result->MinResult(2) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000002f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 27;
    state.m_seed = 4173641463;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
