#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_seed = 0;

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
    program.m_dataSize = 18;
    program.m_maxRegisters = 7;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 31};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 4, 30};
    program.m_registers[4] = {4, 2, 5, 16};
    program.m_registers[5] = {5, 5, 7, 7};
    program.m_registers[6] = {6, 6, 9, 9};
    program.m_registers[7] = {7, 3, 10, 22};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 4, 12, 19};
    program.m_registers[10] = {10, 5, 15, 21};
    program.m_registers[11] = {11, 2, 17, 20};
    program.m_registers[12] = {12, 6, 18, 29};
    program.m_registers[13] = {13, 13, 24, 24};
    program.m_registers[14] = {14, 14, 25, 25};
    program.m_registers[15] = {15, 15, 26, 26};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 28, 28};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 3);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 1, 15);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 0, 1);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.092850f;
    data->d[1] = 0.176616f;
    data->d[2] = -0.594537f;
    data->d[3] = -0.298291f;
    data->d[4] = -0.589094f;
    data->d[5] = -1.996668f;
    data->d[6] = 0.339203f;
    data->d[7] = 0.365243f;
    data->d[8] = 0.883961f;
    data->d[9] = -0.825455f;
    data->d[10] = 0.416513f;
    data->d[11] = 0.781220f;
    data->d[12] = 0.884991f;
    data->d[13] = 0.684640f;
    data->d[14] = -0.793375f;
    data->d[15] = 0.078649f;
    data->d[16] = 0.093956f;
    data->d[17] = 0.901543f;
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
    *result->MinResult(0) = 0.000159f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.161849f;
    data->d[1] = -0.417393f;
    data->d[2] = 0.491702f;
    data->d[3] = -0.512613f;
    data->d[4] = -0.450550f;
    data->d[5] = -0.167269f;
    data->d[6] = 0.557958f;
    data->d[7] = 0.834189f;
    data->d[8] = 0.281560f;
    data->d[9] = 1.779838f;
    data->d[10] = 0.023990f;
    data->d[11] = 0.816501f;
    data->d[12] = 0.579157f;
    data->d[13] = 1.426634f;
    data->d[14] = 2.102683f;
    data->d[15] = 0.494773f;
    data->d[16] = 0.084461f;
    data->d[17] = -0.218592f;
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
    *result->MinResult(1) = 0.000095f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.772632f;
    data->d[1] = 0.224692f;
    data->d[2] = -0.519104f;
    data->d[3] = 0.150754f;
    data->d[4] = -0.933648f;
    data->d[5] = -3.535522f;
    data->d[6] = 1.900888f;
    data->d[7] = -0.907104f;
    data->d[8] = 0.711971f;
    data->d[9] = -0.073309f;
    data->d[10] = 0.215669f;
    data->d[11] = 0.573326f;
    data->d[12] = 1.071194f;
    data->d[13] = -0.362569f;
    data->d[14] = -0.336462f;
    data->d[15] = 0.562015f;
    data->d[16] = 0.107792f;
    data->d[17] = 0.622993f;
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
    *result->MinResult(2) = 0.000183f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000183f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 7;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program, state.m_settings);
    LoadResult(state);
} // LoadState
