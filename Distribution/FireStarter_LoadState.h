#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_seed = 1144277844;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 3;
    settings.m_evolveUnits = 4;
    settings.m_evolveStates = 4;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 16;
    program.m_maxRegisters = 7;

    program.m_registers.resize(16);
    program.m_registers[0] = {0, 0, 0, 3};
    program.m_registers[1] = {1, 1, 1, 25};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 0, 4, 28};
    program.m_registers[4] = {4, 2, 5, 13};
    program.m_registers[5] = {5, 3, 7, 30};
    program.m_registers[6] = {6, 6, 8, 8};
    program.m_registers[7] = {7, 4, 9, 14};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 5, 11, 26};
    program.m_registers[10] = {10, 6, 12, 29};
    program.m_registers[11] = {11, 4, 17, 27};
    program.m_registers[12] = {12, 2, 18, 24};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 23, 23};
    program.m_registers[15] = {15, 15, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 0);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 1, 11);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 0, 15);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.236014f;
    data->d[1] = -1.161464f;
    data->d[2] = -0.769228f;
    data->d[3] = 1.022452f;
    data->d[4] = -0.149799f;
    data->d[5] = 0.921157f;
    data->d[6] = -3.172677f;
    data->d[7] = -0.009684f;
    data->d[8] = -0.197194f;
    data->d[9] = 0.169662f;
    data->d[10] = 0.811912f;
    data->d[11] = 1.884516f;
    data->d[12] = 0.036781f;
    data->d[13] = 0.817580f;
    data->d[14] = 0.087327f;
    data->d[15] = -1.525821f;
    data->d[16] = 0.000000f;
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
    *result->MinResult(0) = 0.000197f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.169415f;
    data->d[1] = -0.943166f;
    data->d[2] = 0.461121f;
    data->d[3] = -0.770248f;
    data->d[4] = -1.020907f;
    data->d[5] = -0.250694f;
    data->d[6] = 1.987909f;
    data->d[7] = 0.532500f;
    data->d[8] = -0.860735f;
    data->d[9] = -0.839725f;
    data->d[10] = 1.075748f;
    data->d[11] = 0.173634f;
    data->d[12] = 0.941644f;
    data->d[13] = 0.552148f;
    data->d[14] = -1.429122f;
    data->d[15] = 1.296869f;
    data->d[16] = 0.000000f;
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
    *result->MinResult(1) = 0.000204f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.168177f;
    data->d[1] = 0.104004f;
    data->d[2] = 0.347857f;
    data->d[3] = -0.554155f;
    data->d[4] = -0.256982f;
    data->d[5] = 1.089663f;
    data->d[6] = 1.551550f;
    data->d[7] = -0.363325f;
    data->d[8] = 0.175482f;
    data->d[9] = -0.169961f;
    data->d[10] = -0.618184f;
    data->d[11] = 0.620568f;
    data->d[12] = -0.293508f;
    data->d[13] = 1.040186f;
    data->d[14] = 0.509854f;
    data->d[15] = 1.183250f;
    data->d[16] = 0.000000f;
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
    *result->MinResult(2) = 0.000202f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000204f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
