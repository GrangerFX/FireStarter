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
    settings.m_seed = 57;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 3;
    settings.m_evolveStates = 4;
    settings.m_evolveUnits = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 0;
    settings.m_evolveAttempts = 10000;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 6;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 3};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 0, 4, 29};
    program.m_registers[4] = {4, 1, 5, 30};
    program.m_registers[5] = {5, 2, 6, 14};
    program.m_registers[6] = {6, 3, 7, 17};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 4, 9, 15};
    program.m_registers[9] = {9, 9, 10, 10};
    program.m_registers[10] = {10, 5, 13, 16};
    program.m_registers[11] = {11, 11, 18, 18};
    program.m_registers[12] = {12, 3, 19, 28};
    program.m_registers[13] = {13, 13, 23, 23};
    program.m_registers[14] = {14, 14, 25, 25};
    program.m_registers[15] = {15, 15, 26, 26};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 0);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 5);
    instructions->SetOperation(15, 1, 8);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 1, 3);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 1, 4);
    instructions->SetOperation(31, 1, 17);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.685230f;
    data->d[1] = -1.356168f;
    data->d[2] = -0.463524f;
    data->d[3] = -0.534336f;
    data->d[4] = -0.231085f;
    data->d[5] = -0.671445f;
    data->d[6] = 1.706384f;
    data->d[7] = 0.539043f;
    data->d[8] = 0.865196f;
    data->d[9] = -0.680052f;
    data->d[10] = -0.864897f;
    data->d[11] = 0.315153f;
    data->d[12] = 0.555360f;
    data->d[13] = 1.468605f;
    data->d[14] = -0.032254f;
    data->d[15] = 0.309470f;
    data->d[16] = 1.692684f;
    data->d[17] = 0.124952f;
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
    *result->MinResult(0) = 0.000253f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.517400f;
    data->d[1] = 0.321454f;
    data->d[2] = -0.831539f;
    data->d[3] = -0.752589f;
    data->d[4] = -1.256213f;
    data->d[5] = 2.492686f;
    data->d[6] = 0.745487f;
    data->d[7] = 0.174118f;
    data->d[8] = -0.673927f;
    data->d[9] = 0.762411f;
    data->d[10] = 0.790576f;
    data->d[11] = -0.060866f;
    data->d[12] = -0.729218f;
    data->d[13] = -0.272920f;
    data->d[14] = -0.133003f;
    data->d[15] = -0.255302f;
    data->d[16] = -1.069049f;
    data->d[17] = -0.151091f;
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
    *result->MinResult(1) = 0.000181f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.575476f;
    data->d[1] = 0.575527f;
    data->d[2] = -0.527985f;
    data->d[3] = -0.059228f;
    data->d[4] = -0.674379f;
    data->d[5] = -0.692465f;
    data->d[6] = -1.582943f;
    data->d[7] = -0.019263f;
    data->d[8] = -0.584950f;
    data->d[9] = 0.553719f;
    data->d[10] = 1.079030f;
    data->d[11] = -0.686914f;
    data->d[12] = -0.168141f;
    data->d[13] = -3.083375f;
    data->d[14] = 0.218572f;
    data->d[15] = -0.523228f;
    data->d[16] = -1.182144f;
    data->d[17] = -0.144488f;
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
    *result->MinResult(2) = 0.000233f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000253f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
