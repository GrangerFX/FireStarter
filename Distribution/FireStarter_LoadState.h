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
    program.m_dataSize = 17;
    program.m_maxRegisters = 8;

    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;

    program.m_registers.resize(17);
    program.m_registers[0] = {0, 0, 0, 12};
    program.m_registers[1] = {1, 1, 1, 18};
    program.m_registers[2] = {2, 2, 2, 24};
    program.m_registers[3] = {3, 3, 4, 26};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 4, 6, 16};
    program.m_registers[6] = {6, 5, 7, 25};
    program.m_registers[7] = {7, 6, 8, 23};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 9, 13, 13};
    program.m_registers[10] = {10, 0, 14, 31};
    program.m_registers[11] = {11, 7, 15, 20};
    program.m_registers[12] = {12, 1, 19, 27};
    program.m_registers[13] = {13, 13, 21, 21};
    program.m_registers[14] = {14, 14, 22, 22};
    program.m_registers[15] = {15, 15, 28, 28};
    program.m_registers[16] = {16, 16, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 1, 1);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 1, 11);
    instructions->SetOperation(21, 1, 13);
    instructions->SetOperation(22, 1, 14);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 6);
    instructions->SetOperation(26, 1, 3);
    instructions->SetOperation(27, 0, 12);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 1, 16);
    instructions->SetOperation(31, 1, 10);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.210594f;
    data->d[1] = 0.064438f;
    data->d[2] = -0.472220f;
    data->d[3] = -1.410192f;
    data->d[4] = 0.641266f;
    data->d[5] = 0.239139f;
    data->d[6] = -1.054208f;
    data->d[7] = -0.928590f;
    data->d[8] = -0.645918f;
    data->d[9] = 0.639758f;
    data->d[10] = 0.315127f;
    data->d[11] = -0.657469f;
    data->d[12] = -0.236630f;
    data->d[13] = -0.690765f;
    data->d[14] = 0.844235f;
    data->d[15] = 0.924418f;
    data->d[16] = -2.109830f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(0) = 0.000107f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.435269f;
    data->d[1] = 0.039508f;
    data->d[2] = 3.269615f;
    data->d[3] = -1.147375f;
    data->d[4] = -0.433117f;
    data->d[5] = 0.591237f;
    data->d[6] = 0.465600f;
    data->d[7] = 0.535086f;
    data->d[8] = 0.659355f;
    data->d[9] = 2.494280f;
    data->d[10] = 0.004300f;
    data->d[11] = 1.372587f;
    data->d[12] = 0.010769f;
    data->d[13] = 0.205926f;
    data->d[14] = -0.061472f;
    data->d[15] = 1.196155f;
    data->d[16] = -2.758760f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(1) = 0.000056f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.331779f;
    data->d[1] = -0.449587f;
    data->d[2] = -0.838032f;
    data->d[3] = 0.129422f;
    data->d[4] = 0.365137f;
    data->d[5] = -0.834902f;
    data->d[6] = 0.127290f;
    data->d[7] = -0.083776f;
    data->d[8] = -1.142395f;
    data->d[9] = -0.925933f;
    data->d[10] = 0.255560f;
    data->d[11] = 0.758142f;
    data->d[12] = 0.470133f;
    data->d[13] = 1.327512f;
    data->d[14] = 1.035840f;
    data->d[15] = -0.105183f;
    data->d[16] = 1.275928f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(2) = 0.000109f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000109f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 700;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program, state.m_settings);
    LoadResult(state);
} // LoadState
