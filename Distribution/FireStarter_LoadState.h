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
    program.m_dataSize = 20;
    program.m_maxRegisters = 6;

    program.m_registers.resize(20);
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
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 5, 14, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 18, 18};
    program.m_registers[15] = {15, 15, 23, 23};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 28, 28};
    program.m_registers[18] = {18, 18, 29, 29};
    program.m_registers[19] = {19, 19, 31, 31};

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
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 1, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = 0.684876f;
    data->d[2] = 0.876205f;
    data->d[3] = -0.732908f;
    data->d[4] = 0.845461f;
    data->d[5] = 0.002244f;
    data->d[6] = 0.110183f;
    data->d[7] = -0.365658f;
    data->d[8] = 1.422526f;
    data->d[9] = -0.033482f;
    data->d[10] = 0.594344f;
    data->d[11] = -0.627636f;
    data->d[12] = -1.757940f;
    data->d[13] = -0.586488f;
    data->d[14] = 1.035937f;
    data->d[15] = -0.089921f;
    data->d[16] = 0.358795f;
    data->d[17] = -0.303794f;
    data->d[18] = 0.628038f;
    data->d[19] = 0.068456f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090659f;
    data->d[1] = -0.803374f;
    data->d[2] = 0.422613f;
    data->d[3] = 0.625465f;
    data->d[4] = -0.462094f;
    data->d[5] = 0.163792f;
    data->d[6] = -1.068108f;
    data->d[7] = 0.187901f;
    data->d[8] = -0.958663f;
    data->d[9] = 0.420837f;
    data->d[10] = -0.169212f;
    data->d[11] = 0.949054f;
    data->d[12] = -1.041609f;
    data->d[13] = 0.749439f;
    data->d[14] = 2.135265f;
    data->d[15] = 0.059976f;
    data->d[16] = 0.486487f;
    data->d[17] = -1.385493f;
    data->d[18] = 1.145998f;
    data->d[19] = 0.654298f;
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
    *result->MinResult(1) = 0.000002f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = 0.629608f;
    data->d[2] = -0.998999f;
    data->d[3] = -0.878492f;
    data->d[4] = -1.106405f;
    data->d[5] = -0.019852f;
    data->d[6] = 1.103058f;
    data->d[7] = -1.443107f;
    data->d[8] = 0.038231f;
    data->d[9] = 1.261899f;
    data->d[10] = 1.016205f;
    data->d[11] = 0.316837f;
    data->d[12] = 0.138605f;
    data->d[13] = 1.195785f;
    data->d[14] = -1.563892f;
    data->d[15] = 0.019892f;
    data->d[16] = 0.046444f;
    data->d[17] = -0.605926f;
    data->d[18] = -0.480213f;
    data->d[19] = 0.510085f;
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
    *result->MinResult(2) = 0.000002f;
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
