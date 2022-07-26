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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_states = 1;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_generations = 4;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_INDIVIDUAL;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 20;
    program.m_maxRegisters = 5;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 12};
    program.m_registers[3] = {3, 1, 3, 21};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 2, 7, 30};
    program.m_registers[6] = {6, 6, 8, 8};
    program.m_registers[7] = {7, 7, 9, 9};
    program.m_registers[8] = {8, 3, 10, 13};
    program.m_registers[9] = {9, 4, 11, 27};
    program.m_registers[10] = {10, 10, 14, 14};
    program.m_registers[11] = {11, 11, 16, 16};
    program.m_registers[12] = {12, 12, 17, 17};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 1, 24, 25};
    program.m_registers[18] = {18, 4, 28, 31};
    program.m_registers[19] = {19, 19, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.252076f;
    data->d[1] = -0.151280f;
    data->d[2] = -0.317862f;
    data->d[3] = 0.123619f;
    data->d[4] = 0.234188f;
    data->d[5] = 0.440363f;
    data->d[6] = -0.825394f;
    data->d[7] = 0.694665f;
    data->d[8] = 0.149912f;
    data->d[9] = 1.371888f;
    data->d[10] = 0.063530f;
    data->d[11] = 3.411724f;
    data->d[12] = 9.983582f;
    data->d[13] = 0.000062f;
    data->d[14] = -1.602859f;
    data->d[15] = 1.769264f;
    data->d[16] = -0.159428f;
    data->d[17] = -0.301057f;
    data->d[18] = 0.256228f;
    data->d[19] = 0.601360f;
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
    *result->MinResult(0) = 0.009999f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.671213f;
    data->d[1] = 0.312115f;
    data->d[2] = 0.136624f;
    data->d[3] = 0.867617f;
    data->d[4] = -0.069155f;
    data->d[5] = 0.246185f;
    data->d[6] = 0.225289f;
    data->d[7] = -0.143550f;
    data->d[8] = 1.025525f;
    data->d[9] = -1.189217f;
    data->d[10] = 0.892839f;
    data->d[11] = -1.017638f;
    data->d[12] = -7.238458f;
    data->d[13] = 0.221018f;
    data->d[14] = 1.795144f;
    data->d[15] = -0.222710f;
    data->d[16] = 2.026299f;
    data->d[17] = -0.040514f;
    data->d[18] = -0.920198f;
    data->d[19] = -0.194093f;
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
    *result->MinResult(1) = 0.008475f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.221890f;
    data->d[1] = -0.278763f;
    data->d[2] = 0.549527f;
    data->d[3] = -0.960474f;
    data->d[4] = 0.080556f;
    data->d[5] = -0.170944f;
    data->d[6] = -0.847965f;
    data->d[7] = 0.163625f;
    data->d[8] = -0.535422f;
    data->d[9] = 2.662864f;
    data->d[10] = -0.681153f;
    data->d[11] = 0.879113f;
    data->d[12] = -0.128325f;
    data->d[13] = 0.352931f;
    data->d[14] = 1.242925f;
    data->d[15] = -0.242745f;
    data->d[16] = 1.595187f;
    data->d[17] = -0.421640f;
    data->d[18] = 0.529721f;
    data->d[19] = 0.926598f;
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
    *result->MinResult(2) = 0.012500f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.012500f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 352;
    state.m_seed = 3232320206;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
