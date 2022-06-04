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

    settings.m_evolveMode = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 1;
    settings.m_evolvePopulation = 4352;
    settings.m_evolveIterations = 512;
    settings.m_evolveGenerations = 10;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 1, 16);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 1, 3);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 1, 2);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 29};
    program.m_registers[1] = {1, 1, 1, 23};
    program.m_registers[2] = {2, 2, 2, 31};
    program.m_registers[3] = {3, 3, 3, 28};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 4, 5, 7};
    program.m_registers[6] = {6, 6, 6, 6};
    program.m_registers[7] = {7, 4, 8, 10};
    program.m_registers[8] = {8, 5, 9, 20};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 4, 16, 24};
    program.m_registers[14] = {14, 14, 17, 17};
    program.m_registers[15] = {15, 15, 18, 18};
    program.m_registers[16] = {16, 16, 19, 19};
    program.m_registers[17] = {17, 5, 21, 25};
    program.m_registers[18] = {18, 18, 22, 22};
    program.m_registers[19] = {19, 19, 27, 27};
    program.m_registers[20] = {20, 20, 30, 30};
    program.m_programMode = 0;
    program.m_dataSize = 21;
    program.m_maxRegisters = 6;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.471768f;
    data->d[1] = 0.235754f;
    data->d[2] = 0.622268f;
    data->d[3] = 0.245563f;
    data->d[4] = 0.762090f;
    data->d[5] = -0.518228f;
    data->d[6] = -3.730425f;
    data->d[7] = -0.283357f;
    data->d[8] = -0.747909f;
    data->d[9] = -0.227776f;
    data->d[10] = 0.397253f;
    data->d[11] = 0.727594f;
    data->d[12] = -0.034889f;
    data->d[13] = 0.940248f;
    data->d[14] = -0.620821f;
    data->d[15] = -0.243679f;
    data->d[16] = 0.312899f;
    data->d[17] = 0.795905f;
    data->d[18] = -1.208523f;
    data->d[19] = 0.627341f;
    data->d[20] = 0.301369f;
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
    *result->MinResult(0) = 0.007118f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.776673f;
    data->d[1] = -0.164559f;
    data->d[2] = -1.006456f;
    data->d[3] = -0.293374f;
    data->d[4] = -0.388499f;
    data->d[5] = -0.605871f;
    data->d[6] = 0.486023f;
    data->d[7] = -0.461294f;
    data->d[8] = 0.635033f;
    data->d[9] = -0.194206f;
    data->d[10] = 0.985641f;
    data->d[11] = -0.230007f;
    data->d[12] = -0.856270f;
    data->d[13] = 0.983639f;
    data->d[14] = -0.497359f;
    data->d[15] = 0.232119f;
    data->d[16] = 0.132883f;
    data->d[17] = -0.542129f;
    data->d[18] = -0.867992f;
    data->d[19] = 1.403940f;
    data->d[20] = 0.421746f;
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
    *result->MinResult(1) = 0.009725f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.176107f;
    data->d[1] = 0.747672f;
    data->d[2] = 0.361875f;
    data->d[3] = -0.183934f;
    data->d[4] = -1.261104f;
    data->d[5] = 1.284831f;
    data->d[6] = 1.455020f;
    data->d[7] = 0.386522f;
    data->d[8] = -0.614801f;
    data->d[9] = -0.705975f;
    data->d[10] = 0.737949f;
    data->d[11] = 0.240989f;
    data->d[12] = 0.431568f;
    data->d[13] = 0.478213f;
    data->d[14] = -0.642944f;
    data->d[15] = 0.105608f;
    data->d[16] = -0.838374f;
    data->d[17] = 0.368264f;
    data->d[18] = 0.149250f;
    data->d[19] = -0.639809f;
    data->d[20] = -0.033911f;
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
    *result->MinResult(2) = 0.011005f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.011005f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 170;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
