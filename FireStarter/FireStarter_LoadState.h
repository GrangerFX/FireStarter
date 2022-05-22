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

    settings.m_evolveMode = 3;
    settings.m_evolveUnits = 4;
    settings.m_evolveStates = 8;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 128;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 64;
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
    data->d[0] = -0.198260f;
    data->d[1] = 0.622852f;
    data->d[2] = -0.985502f;
    data->d[3] = 0.000002f;
    data->d[4] = -0.916270f;
    data->d[5] = 0.539494f;
    data->d[6] = -1.346341f;
    data->d[7] = -0.409200f;
    data->d[8] = -0.321518f;
    data->d[9] = 1.312728f;
    data->d[10] = 0.820041f;
    data->d[11] = 0.029899f;
    data->d[12] = -0.841312f;
    data->d[13] = 0.024572f;
    data->d[14] = -0.934870f;
    data->d[15] = 0.598078f;
    data->d[16] = 0.284066f;
    data->d[17] = -1.411628f;
    data->d[18] = 2.413211f;
    data->d[19] = 0.000003f;
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
    *result->MinResult(0) = 0.000005f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.886729f;
    data->d[1] = -2.740696f;
    data->d[2] = 0.254649f;
    data->d[3] = 0.000043f;
    data->d[4] = -0.798410f;
    data->d[5] = -0.343996f;
    data->d[6] = -0.854429f;
    data->d[7] = -0.347025f;
    data->d[8] = -0.589691f;
    data->d[9] = 0.586472f;
    data->d[10] = 0.148650f;
    data->d[11] = 0.019096f;
    data->d[12] = -0.282557f;
    data->d[13] = -0.755668f;
    data->d[14] = 1.166536f;
    data->d[15] = -0.234121f;
    data->d[16] = 0.461341f;
    data->d[17] = 2.134894f;
    data->d[18] = 1.410691f;
    data->d[19] = -0.118071f;
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
    *result->MinResult(1) = 0.000033f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.343503f;
    data->d[1] = -0.899338f;
    data->d[2] = -0.828497f;
    data->d[3] = -0.000055f;
    data->d[4] = -0.229934f;
    data->d[5] = -4.659703f;
    data->d[6] = -0.915570f;
    data->d[7] = -0.177848f;
    data->d[8] = 0.622244f;
    data->d[9] = -0.226789f;
    data->d[10] = -0.510846f;
    data->d[11] = -0.248341f;
    data->d[12] = 0.267569f;
    data->d[13] = 0.926210f;
    data->d[14] = 1.184577f;
    data->d[15] = -0.124803f;
    data->d[16] = 0.209487f;
    data->d[17] = -0.879350f;
    data->d[18] = 0.641355f;
    data->d[19] = 0.523672f;
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
    *result->MinResult(2) = 0.000031f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000033f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 4;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
