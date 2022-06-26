#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_evolution = 0;
    settings.m_seed = 1;

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
    program.m_dataSize = 19;
    program.m_maxRegisters = 6;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 23};
    program.m_registers[2] = {2, 1, 2, 26};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 2, 4, 10};
    program.m_registers[5] = {5, 3, 5, 20};
    program.m_registers[6] = {6, 4, 6, 30};
    program.m_registers[7] = {7, 5, 8, 14};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 2, 13, 16};
    program.m_registers[10] = {10, 10, 15, 15};
    program.m_registers[11] = {11, 2, 17, 24};
    program.m_registers[12] = {12, 12, 18, 18};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 2, 25, 28};
    program.m_registers[17] = {17, 17, 29, 29};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 1);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 11);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 1, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.484715f;
    data->d[1] = -0.497119f;
    data->d[2] = 2.755634f;
    data->d[3] = -1.107139f;
    data->d[4] = 0.357737f;
    data->d[5] = -0.066562f;
    data->d[6] = -1.285216f;
    data->d[7] = -0.307340f;
    data->d[8] = -0.262692f;
    data->d[9] = -0.009695f;
    data->d[10] = 0.278274f;
    data->d[11] = -0.376744f;
    data->d[12] = -1.160444f;
    data->d[13] = -0.573931f;
    data->d[14] = 0.538258f;
    data->d[15] = -0.890580f;
    data->d[16] = 0.111233f;
    data->d[17] = 0.302912f;
    data->d[18] = -0.056761f;
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
    *result->MinResult(0) = 0.000216f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.468177f;
    data->d[1] = -0.166006f;
    data->d[2] = 0.880873f;
    data->d[3] = -0.844011f;
    data->d[4] = 0.089862f;
    data->d[5] = 1.012134f;
    data->d[6] = 0.181453f;
    data->d[7] = 1.697971f;
    data->d[8] = -0.009272f;
    data->d[9] = -0.827354f;
    data->d[10] = -0.392813f;
    data->d[11] = 2.110602f;
    data->d[12] = 2.861134f;
    data->d[13] = 1.315238f;
    data->d[14] = -1.086205f;
    data->d[15] = 0.878823f;
    data->d[16] = -0.198136f;
    data->d[17] = -1.334440f;
    data->d[18] = 0.447992f;
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
    *result->MinResult(1) = 0.000165f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.665967f;
    data->d[1] = -0.182952f;
    data->d[2] = 0.624727f;
    data->d[3] = 0.713910f;
    data->d[4] = -1.004104f;
    data->d[5] = -1.334507f;
    data->d[6] = -1.347151f;
    data->d[7] = 1.201240f;
    data->d[8] = 0.116982f;
    data->d[9] = -0.890489f;
    data->d[10] = -0.585908f;
    data->d[11] = -1.265750f;
    data->d[12] = -0.007436f;
    data->d[13] = -1.292341f;
    data->d[14] = -0.169747f;
    data->d[15] = -0.291311f;
    data->d[16] = 1.017981f;
    data->d[17] = 0.735760f;
    data->d[18] = 0.046462f;
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
    *result->MinResult(2) = 0.000246f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000246f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
