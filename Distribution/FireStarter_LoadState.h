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
    settings.m_process = 0;
    settings.m_clients = 4;
    settings.m_seed = 15;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 2;
    settings.m_evolveStates = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolvePopulation = 69632;
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
    program.m_dataSize = 22;
    program.m_maxRegisters = 5;

    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 9};
    program.m_registers[1] = {1, 1, 1, 4};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 30};
    program.m_registers[4] = {4, 1, 5, 17};
    program.m_registers[5] = {5, 3, 6, 11};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 4, 8, 24};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 3, 12, 16};
    program.m_registers[10] = {10, 0, 13, 27};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 12, 18, 18};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 26, 26};
    program.m_registers[19] = {19, 19, 28, 28};
    program.m_registers[20] = {20, 20, 29, 29};
    program.m_registers[21] = {21, 21, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 5);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 7);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 1, 3);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 20);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 1, 21);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.100476f;
    data->d[1] = 0.571718f;
    data->d[2] = -1.607269f;
    data->d[3] = -1.027112f;
    data->d[4] = -0.044606f;
    data->d[5] = 0.454348f;
    data->d[6] = -0.560206f;
    data->d[7] = 0.611290f;
    data->d[8] = -0.071203f;
    data->d[9] = -0.405703f;
    data->d[10] = 0.644242f;
    data->d[11] = 0.395631f;
    data->d[12] = -0.270021f;
    data->d[13] = 1.891714f;
    data->d[14] = -5.188652f;
    data->d[15] = 0.604276f;
    data->d[16] = -0.686084f;
    data->d[17] = -0.051975f;
    data->d[18] = -0.575309f;
    data->d[19] = -1.101523f;
    data->d[20] = 0.116749f;
    data->d[21] = 0.636344f;
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
    *result->MinResult(0) = 0.000282f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.501981f;
    data->d[1] = -1.063176f;
    data->d[2] = -3.321442f;
    data->d[3] = -0.474177f;
    data->d[4] = 0.725853f;
    data->d[5] = -0.190123f;
    data->d[6] = 0.271052f;
    data->d[7] = -0.688525f;
    data->d[8] = 0.550398f;
    data->d[9] = -1.139403f;
    data->d[10] = 0.098420f;
    data->d[11] = 0.710534f;
    data->d[12] = -1.326558f;
    data->d[13] = 0.856049f;
    data->d[14] = -0.411406f;
    data->d[15] = 0.371219f;
    data->d[16] = 2.477021f;
    data->d[17] = -0.487980f;
    data->d[18] = -1.355615f;
    data->d[19] = -0.052534f;
    data->d[20] = 0.257021f;
    data->d[21] = -0.264509f;
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
    *result->MinResult(1) = 0.000355f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.152338f;
    data->d[1] = -0.886149f;
    data->d[2] = 2.060328f;
    data->d[3] = 0.624590f;
    data->d[4] = 0.375906f;
    data->d[5] = -0.384760f;
    data->d[6] = 0.479090f;
    data->d[7] = 1.471164f;
    data->d[8] = -0.969840f;
    data->d[9] = -0.231994f;
    data->d[10] = -0.095566f;
    data->d[11] = 0.411015f;
    data->d[12] = -0.855036f;
    data->d[13] = 1.003424f;
    data->d[14] = 0.445543f;
    data->d[15] = 0.677439f;
    data->d[16] = -0.919810f;
    data->d[17] = 0.763727f;
    data->d[18] = 0.737400f;
    data->d[19] = 1.692155f;
    data->d[20] = -0.271643f;
    data->d[21] = 0.777569f;
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
    *result->MinResult(2) = 0.000600f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000600f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
