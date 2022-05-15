#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_evolveMode = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 1;
    settings.m_evolvePopulation = 4352;
    settings.m_evolveIterations = 512;
    settings.m_evolveGenerations = 10;
    settings.m_evolvePrecision = 256;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_instructions.SetOperation(0, 0, 0);
    program.m_instructions.SetOperation(1, 1, 1);
    program.m_instructions.SetOperation(2, 1, 2);
    program.m_instructions.SetOperation(3, 1, 3);
    program.m_instructions.SetOperation(4, 1, 4);
    program.m_instructions.SetOperation(5, 0, 5);
    program.m_instructions.SetOperation(6, 1, 6);
    program.m_instructions.SetOperation(7, 1, 2);
    program.m_instructions.SetOperation(8, 1, 7);
    program.m_instructions.SetOperation(9, 1, 5);
    program.m_instructions.SetOperation(10, 0, 8);
    program.m_instructions.SetOperation(11, 1, 3);
    program.m_instructions.SetOperation(12, 1, 9);
    program.m_instructions.SetOperation(13, 0, 10);
    program.m_instructions.SetOperation(14, 1, 6);
    program.m_instructions.SetOperation(15, 0, 11);
    program.m_instructions.SetOperation(16, 0, 9);
    program.m_instructions.SetOperation(17, 0, 0);
    program.m_instructions.SetOperation(18, 1, 12);
    program.m_instructions.SetOperation(19, 0, 13);
    program.m_instructions.SetOperation(20, 0, 2);
    program.m_instructions.SetOperation(21, 1, 14);
    program.m_instructions.SetOperation(22, 0, 12);
    program.m_instructions.SetOperation(23, 1, 15);
    program.m_instructions.SetOperation(24, 1, 16);
    program.m_instructions.SetOperation(25, 0, 1);
    program.m_instructions.SetOperation(26, 1, 17);
    program.m_instructions.SetOperation(27, 1, 18);
    program.m_instructions.SetOperation(28, 0, 19);
    program.m_instructions.SetOperation(29, 1, 20);
    program.m_instructions.SetOperation(30, 0, 4);
    program.m_instructions.SetOperation(31, 1, 18);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 17};
    program.m_registers[1] = {1, 1, 1, 25};
    program.m_registers[2] = {2, 2, 2, 20};
    program.m_registers[3] = {3, 3, 3, 11};
    program.m_registers[4] = {4, 4, 4, 30};
    program.m_registers[5] = {5, 5, 5, 9};
    program.m_registers[6] = {6, 6, 6, 14};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 3, 12, 16};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 0, 18, 22};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 23, 23};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 17, 26, 26};
    program.m_registers[18] = {18, 1, 27, 31};
    program.m_registers[19] = {19, 19, 28, 28};
    program.m_registers[20] = {20, 20, 29, 29};
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 21;
    program.m_maxRegisters = 7;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.534305f;
    data->d[1] = -0.126907f;
    data->d[2] = -1.895375f;
    data->d[3] = 0.044192f;
    data->d[4] = -0.986695f;
    data->d[5] = 0.067151f;
    data->d[6] = -0.457808f;
    data->d[7] = 1.074258f;
    data->d[8] = -0.573054f;
    data->d[9] = -1.113066f;
    data->d[10] = -0.798327f;
    data->d[11] = 0.423025f;
    data->d[12] = -1.050393f;
    data->d[13] = 0.297208f;
    data->d[14] = 0.010406f;
    data->d[15] = -0.691880f;
    data->d[16] = 0.358483f;
    data->d[17] = -0.496923f;
    data->d[18] = -0.121437f;
    data->d[19] = 0.876286f;
    data->d[20] = 0.244565f;
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
    *result->MinResult(0) = 0.015062f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.246960f;
    data->d[1] = -0.770102f;
    data->d[2] = 0.252975f;
    data->d[3] = -0.548422f;
    data->d[4] = -0.018037f;
    data->d[5] = -0.434115f;
    data->d[6] = -1.146918f;
    data->d[7] = 0.717808f;
    data->d[8] = -3.196086f;
    data->d[9] = 0.266045f;
    data->d[10] = 0.332283f;
    data->d[11] = 1.214264f;
    data->d[12] = 0.840307f;
    data->d[13] = 4.297648f;
    data->d[14] = -0.792480f;
    data->d[15] = -0.554726f;
    data->d[16] = -0.036030f;
    data->d[17] = -1.372224f;
    data->d[18] = 1.448504f;
    data->d[19] = 0.547759f;
    data->d[20] = 0.658167f;
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
    *result->MinResult(1) = 0.007274f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.448987f;
    data->d[1] = 0.874259f;
    data->d[2] = 0.267812f;
    data->d[3] = 0.810390f;
    data->d[4] = -0.320601f;
    data->d[5] = -0.543638f;
    data->d[6] = -0.383804f;
    data->d[7] = 0.089669f;
    data->d[8] = 0.252618f;
    data->d[9] = 1.271268f;
    data->d[10] = 0.868958f;
    data->d[11] = 0.966538f;
    data->d[12] = 0.376558f;
    data->d[13] = -0.874271f;
    data->d[14] = -0.618430f;
    data->d[15] = -0.342091f;
    data->d[16] = -1.090344f;
    data->d[17] = -0.612172f;
    data->d[18] = 1.193618f;
    data->d[19] = 0.124884f;
    data->d[20] = 0.627434f;
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
    *result->MinResult(2) = 0.011977f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.m_result);
    LoadVariation1(state.m_result);
    LoadVariation2(state.m_result);

    state.m_result->maxResult = 0.015062f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 80;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
