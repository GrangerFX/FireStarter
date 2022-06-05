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

    settings.m_evolveMode = 2;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 4;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program, const FireStarterSettings& settings)
{
    program.InitProgram(settings);
    program.m_dataSize = 19;
    program.m_maxRegisters = 5;

    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 20};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 27};
    program.m_registers[4] = {4, 2, 4, 7};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 6, 8, 8};
    program.m_registers[7] = {7, 2, 9, 16};
    program.m_registers[8] = {8, 3, 11, 23};
    program.m_registers[9] = {9, 4, 12, 14};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 11, 18, 18};
    program.m_registers[12] = {12, 2, 19, 29};
    program.m_registers[13] = {13, 13, 22, 22};
    program.m_registers[14] = {14, 14, 24, 24};
    program.m_registers[15] = {15, 15, 25, 25};
    program.m_registers[16] = {16, 16, 28, 28};
    program.m_registers[17] = {17, 17, 30, 30};
    program.m_registers[18] = {18, 18, 31, 31};

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
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 1, 13);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 1, 12);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 1, 12);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 1, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.577805f;
    data->d[1] = -0.663227f;
    data->d[2] = -2.745391f;
    data->d[3] = 0.333744f;
    data->d[4] = 0.791887f;
    data->d[5] = 0.089798f;
    data->d[6] = -0.008734f;
    data->d[7] = -1.434438f;
    data->d[8] = -0.653087f;
    data->d[9] = 0.430428f;
    data->d[10] = -0.070807f;
    data->d[11] = 0.344432f;
    data->d[12] = 0.391300f;
    data->d[13] = -0.237306f;
    data->d[14] = 0.274692f;
    data->d[15] = -0.626237f;
    data->d[16] = 0.556508f;
    data->d[17] = 0.521619f;
    data->d[18] = -0.459124f;
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
    *result->MinResult(0) = 0.000105f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.816344f;
    data->d[1] = 0.156943f;
    data->d[2] = 0.246868f;
    data->d[3] = 0.074263f;
    data->d[4] = -0.092316f;
    data->d[5] = -0.464835f;
    data->d[6] = -0.050303f;
    data->d[7] = 0.079926f;
    data->d[8] = -0.900414f;
    data->d[9] = 0.657462f;
    data->d[10] = 0.233661f;
    data->d[11] = -1.032521f;
    data->d[12] = -1.361627f;
    data->d[13] = 0.743389f;
    data->d[14] = 1.402722f;
    data->d[15] = 0.194570f;
    data->d[16] = -0.101596f;
    data->d[17] = 0.788892f;
    data->d[18] = -0.682399f;
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
    *result->MinResult(1) = 0.000038f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.777387f;
    data->d[1] = -0.572894f;
    data->d[2] = -1.287076f;
    data->d[3] = 0.545113f;
    data->d[4] = -0.278585f;
    data->d[5] = -1.331777f;
    data->d[6] = -0.400706f;
    data->d[7] = -0.977097f;
    data->d[8] = 0.356125f;
    data->d[9] = -1.231140f;
    data->d[10] = -0.742983f;
    data->d[11] = 0.714559f;
    data->d[12] = -0.457888f;
    data->d[13] = -0.207143f;
    data->d[14] = 0.463202f;
    data->d[15] = -1.013456f;
    data->d[16] = -0.556043f;
    data->d[17] = -0.661300f;
    data->d[18] = 1.125347f;
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
    *result->MinResult(2) = 0.000149f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000149f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 15;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program, state.m_settings);
    LoadResult(state);
} // LoadState
