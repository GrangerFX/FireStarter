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
    program.m_dataSize = 21;
    program.m_maxRegisters = 4;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 22};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 2, 7, 29};
    program.m_registers[7] = {7, 3, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 0, 14, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 17, 17};
    program.m_registers[15] = {15, 15, 18, 18};
    program.m_registers[16] = {16, 16, 23, 23};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 27, 27};
    program.m_registers[19] = {19, 19, 28, 28};
    program.m_registers[20] = {20, 20, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 0, 20);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141594f;
    data->d[1] = -0.745808f;
    data->d[2] = 0.802188f;
    data->d[3] = -0.955301f;
    data->d[4] = 0.712600f;
    data->d[5] = -0.402654f;
    data->d[6] = -0.752730f;
    data->d[7] = 0.017185f;
    data->d[8] = -0.609406f;
    data->d[9] = 0.778277f;
    data->d[10] = 0.303973f;
    data->d[11] = -0.464482f;
    data->d[12] = 0.988330f;
    data->d[13] = -1.175779f;
    data->d[14] = 0.543752f;
    data->d[15] = -0.916783f;
    data->d[16] = -0.128368f;
    data->d[17] = 0.355574f;
    data->d[18] = -0.000001f;
    data->d[19] = 0.593888f;
    data->d[20] = 1.010730f;
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
    *result->MinResult(0) = 0.000007f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090658f;
    data->d[1] = 0.650397f;
    data->d[2] = 0.960113f;
    data->d[3] = 0.742522f;
    data->d[4] = 0.447384f;
    data->d[5] = 0.452856f;
    data->d[6] = -1.095339f;
    data->d[7] = 0.188533f;
    data->d[8] = -0.546271f;
    data->d[9] = -0.764971f;
    data->d[10] = -0.301994f;
    data->d[11] = 0.714369f;
    data->d[12] = -0.523760f;
    data->d[13] = 0.701470f;
    data->d[14] = 0.465041f;
    data->d[15] = -0.808638f;
    data->d[16] = -1.297184f;
    data->d[17] = 0.787671f;
    data->d[18] = -0.598749f;
    data->d[19] = 0.243597f;
    data->d[20] = 0.809928f;
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
    *result->MinResult(1) = 0.000011f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617999f;
    data->d[1] = -0.955120f;
    data->d[2] = -2.180244f;
    data->d[3] = 0.923171f;
    data->d[4] = -0.155046f;
    data->d[5] = -0.370471f;
    data->d[6] = -0.415190f;
    data->d[7] = 0.498886f;
    data->d[8] = -0.110252f;
    data->d[9] = -0.240543f;
    data->d[10] = -0.321058f;
    data->d[11] = -0.912992f;
    data->d[12] = -0.990738f;
    data->d[13] = -0.378746f;
    data->d[14] = 0.163730f;
    data->d[15] = 0.763609f;
    data->d[16] = 0.463078f;
    data->d[17] = -0.721411f;
    data->d[18] = -0.850095f;
    data->d[19] = 0.575660f;
    data->d[20] = -1.069959f;
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
    *result->MinResult(2) = 0.000010f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000011f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
