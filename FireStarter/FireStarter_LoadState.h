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

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 1, 3);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 19);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 15};
    program.m_registers[2] = {2, 1, 2, 4};
    program.m_registers[3] = {3, 2, 3, 26};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 1, 6, 30};
    program.m_registers[6] = {6, 3, 7, 9};
    program.m_registers[7] = {7, 4, 8, 29};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 3, 11, 27};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 5, 14, 24};
    program.m_registers[12] = {12, 0, 16, 19};
    program.m_registers[13] = {13, 13, 17, 17};
    program.m_registers[14] = {14, 14, 18, 18};
    program.m_registers[15] = {15, 0, 20, 25};
    program.m_registers[16] = {16, 16, 21, 21};
    program.m_registers[17] = {17, 6, 22, 28};
    program.m_registers[18] = {18, 18, 23, 23};
    program.m_registers[19] = {19, 19, 31, 31};
    program.m_programMode = 0;
    program.m_dataSize = 20;
    program.m_maxRegisters = 7;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.313911f;
    data->d[1] = -0.986182f;
    data->d[2] = 0.609946f;
    data->d[3] = 0.000000f;
    data->d[4] = 0.365083f;
    data->d[5] = -0.726907f;
    data->d[6] = -0.621133f;
    data->d[7] = -1.369757f;
    data->d[8] = 0.207489f;
    data->d[9] = 1.300962f;
    data->d[10] = -1.565800f;
    data->d[11] = 0.016773f;
    data->d[12] = -0.679394f;
    data->d[13] = -0.286878f;
    data->d[14] = -1.341186f;
    data->d[15] = -0.580179f;
    data->d[16] = -0.544320f;
    data->d[17] = -0.832113f;
    data->d[18] = -1.587907f;
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
    *result->MinResult(0) = 0.000000f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.256043f;
    data->d[1] = -0.791342f;
    data->d[2] = 0.839535f;
    data->d[3] = 0.000001f;
    data->d[4] = -0.873399f;
    data->d[5] = -0.335048f;
    data->d[6] = -1.087727f;
    data->d[7] = -0.684824f;
    data->d[8] = -1.275205f;
    data->d[9] = -0.555013f;
    data->d[10] = -2.345151f;
    data->d[11] = 0.048564f;
    data->d[12] = 0.731198f;
    data->d[13] = 0.077249f;
    data->d[14] = 0.156300f;
    data->d[15] = -0.979654f;
    data->d[16] = -0.673927f;
    data->d[17] = -0.412960f;
    data->d[18] = -2.025124f;
    data->d[19] = -0.118130f;
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
    *result->MinResult(1) = 0.000003f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.390838f;
    data->d[1] = -1.023210f;
    data->d[2] = -0.609173f;
    data->d[3] = 0.000001f;
    data->d[4] = -3.332212f;
    data->d[5] = 0.715856f;
    data->d[6] = -1.287192f;
    data->d[7] = -0.181425f;
    data->d[8] = 1.017457f;
    data->d[9] = -0.761802f;
    data->d[10] = 0.639722f;
    data->d[11] = 0.203074f;
    data->d[12] = 0.543386f;
    data->d[13] = 0.018879f;
    data->d[14] = -3.056961f;
    data->d[15] = 0.266150f;
    data->d[16] = -0.064768f;
    data->d[17] = -0.704002f;
    data->d[18] = 0.446631f;
    data->d[19] = 0.523597f;
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

    state.Result()->maxResult = 0.000003f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 921600;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
