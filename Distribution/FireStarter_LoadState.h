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
    settings.m_seed = 8337;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 4;
    settings.m_evolveStates = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 512;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveAttempts = 32;
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
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 22};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 2, 7, 29};
    program.m_registers[7] = {7, 3, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 0, 11, 23};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 4, 14, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 17, 17};
    program.m_registers[15] = {15, 15, 18, 18};
    program.m_registers[16] = {16, 16, 25, 25};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 28, 28};
    program.m_registers[19] = {19, 19, 31, 31};

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
    instructions->SetOperation(11, 1, 9);
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
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 0, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = 0.719145f;
    data->d[2] = -0.832963f;
    data->d[3] = -1.066593f;
    data->d[4] = 0.048594f;
    data->d[5] = -0.563074f;
    data->d[6] = 0.762252f;
    data->d[7] = 0.705585f;
    data->d[8] = 0.790191f;
    data->d[9] = -0.547342f;
    data->d[10] = -0.007725f;
    data->d[11] = 0.843198f;
    data->d[12] = 1.249772f;
    data->d[13] = 1.157935f;
    data->d[14] = -0.272605f;
    data->d[15] = 0.489291f;
    data->d[16] = 3.101225f;
    data->d[17] = 6.523477f;
    data->d[18] = 0.000000f;
    data->d[19] = 1.545749f;
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
    data->d[0] = -3.090659f;
    data->d[1] = -0.856537f;
    data->d[2] = 0.450907f;
    data->d[3] = -0.760224f;
    data->d[4] = -0.515314f;
    data->d[5] = 0.423642f;
    data->d[6] = -1.374320f;
    data->d[7] = -0.006825f;
    data->d[8] = -1.343228f;
    data->d[9] = -1.197906f;
    data->d[10] = -0.416165f;
    data->d[11] = -0.533679f;
    data->d[12] = 0.698942f;
    data->d[13] = -0.317697f;
    data->d[14] = 0.376289f;
    data->d[15] = -0.676742f;
    data->d[16] = -0.179548f;
    data->d[17] = 0.194498f;
    data->d[18] = -0.656609f;
    data->d[19] = 0.925006f;
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
    *result->MinResult(1) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = -0.439502f;
    data->d[2] = -0.170447f;
    data->d[3] = -1.687150f;
    data->d[4] = 0.624347f;
    data->d[5] = -0.532356f;
    data->d[6] = 0.964454f;
    data->d[7] = 0.563118f;
    data->d[8] = 1.286286f;
    data->d[9] = -0.175872f;
    data->d[10] = 2.037619f;
    data->d[11] = -0.189278f;
    data->d[12] = -0.026916f;
    data->d[13] = -0.400321f;
    data->d[14] = 1.261675f;
    data->d[15] = 3.092687f;
    data->d[16] = 1.479696f;
    data->d[17] = -0.309000f;
    data->d[18] = 0.919641f;
    data->d[19] = -1.842562f;
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
    *result->MinResult(2) = 0.000003f;
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
    state.m_generation = 700;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
