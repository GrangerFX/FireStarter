#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_evolveMode = 3;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 512;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_instructions.SetOperation(0, 0, 0);
    program.m_instructions.SetOperation(1, 1, 1);
    program.m_instructions.SetOperation(2, 0, 2);
    program.m_instructions.SetOperation(3, 1, 3);
    program.m_instructions.SetOperation(4, 0, 2);
    program.m_instructions.SetOperation(5, 1, 4);
    program.m_instructions.SetOperation(6, 1, 5);
    program.m_instructions.SetOperation(7, 1, 6);
    program.m_instructions.SetOperation(8, 1, 7);
    program.m_instructions.SetOperation(9, 1, 6);
    program.m_instructions.SetOperation(10, 1, 8);
    program.m_instructions.SetOperation(11, 0, 9);
    program.m_instructions.SetOperation(12, 0, 10);
    program.m_instructions.SetOperation(13, 0, 3);
    program.m_instructions.SetOperation(14, 0, 11);
    program.m_instructions.SetOperation(15, 0, 1);
    program.m_instructions.SetOperation(16, 0, 12);
    program.m_instructions.SetOperation(17, 0, 13);
    program.m_instructions.SetOperation(18, 0, 14);
    program.m_instructions.SetOperation(19, 1, 12);
    program.m_instructions.SetOperation(20, 1, 15);
    program.m_instructions.SetOperation(21, 0, 16);
    program.m_instructions.SetOperation(22, 0, 17);
    program.m_instructions.SetOperation(23, 1, 18);
    program.m_instructions.SetOperation(24, 0, 11);
    program.m_instructions.SetOperation(25, 0, 15);
    program.m_instructions.SetOperation(26, 1, 3);
    program.m_instructions.SetOperation(27, 0, 9);
    program.m_instructions.SetOperation(28, 0, 17);
    program.m_instructions.SetOperation(29, 0, 7);
    program.m_instructions.SetOperation(30, 0, 5);
    program.m_instructions.SetOperation(31, 1, 19);
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
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 20;
    program.m_maxRegisters = 7;
} // LoadProgram

inline void LoadResult0(FireStarterResult& result)
{
    result.minResult[0] = 0.000000f;
    result.data[0].d[0] = 0.390829f;
    result.data[0].d[1] = -1.227827f;
    result.data[0].d[2] = 0.701619f;
    result.data[0].d[3] = 0.000000f;
    result.data[0].d[4] = -0.130623f;
    result.data[0].d[5] = -0.611501f;
    result.data[0].d[6] = -0.807457f;
    result.data[0].d[7] = -3.129704f;
    result.data[0].d[8] = -1.061800f;
    result.data[0].d[9] = 0.239889f;
    result.data[0].d[10] = -0.979614f;
    result.data[0].d[11] = 0.063264f;
    result.data[0].d[12] = 0.484319f;
    result.data[0].d[13] = 0.006867f;
    result.data[0].d[14] = -0.684928f;
    result.data[0].d[15] = -0.698891f;
    result.data[0].d[16] = -1.061699f;
    result.data[0].d[17] = 0.464592f;
    result.data[0].d[18] = -0.720838f;
    result.data[0].d[19] = 0.000000f;
    result.data[0].d[20] = 0.000000f;
    result.data[0].d[21] = 0.000000f;
    result.data[0].d[22] = 0.000000f;
    result.data[0].d[23] = 0.000000f;
    result.data[0].d[24] = 0.000000f;
    result.data[0].d[25] = 0.000000f;
    result.data[0].d[26] = 0.000000f;
    result.data[0].d[27] = 0.000000f;
    result.data[0].d[28] = 0.000000f;
    result.data[0].d[29] = 0.000000f;
    result.data[0].d[30] = 0.000000f;
    result.data[0].d[31] = 0.000000f;
} // LoadResult0

inline void LoadResult1(FireStarterResult& result)
{
    result.minResult[1] = 0.000007f;
    result.data[1].d[0] = 0.324442f;
    result.data[1].d[1] = -1.002728f;
    result.data[1].d[2] = -0.490658f;
    result.data[1].d[3] = 0.000007f;
    result.data[1].d[4] = 0.550588f;
    result.data[1].d[5] = -1.140349f;
    result.data[1].d[6] = 1.661792f;
    result.data[1].d[7] = -4.345631f;
    result.data[1].d[8] = 0.392476f;
    result.data[1].d[9] = -1.341017f;
    result.data[1].d[10] = -1.087343f;
    result.data[1].d[11] = -0.269460f;
    result.data[1].d[12] = 0.141200f;
    result.data[1].d[13] = -1.878307f;
    result.data[1].d[14] = -0.096019f;
    result.data[1].d[15] = 1.649572f;
    result.data[1].d[16] = 0.247459f;
    result.data[1].d[17] = -2.603384f;
    result.data[1].d[18] = 2.128502f;
    result.data[1].d[19] = -0.118146f;
    result.data[1].d[20] = 0.000000f;
    result.data[1].d[21] = 0.000000f;
    result.data[1].d[22] = 0.000000f;
    result.data[1].d[23] = 0.000000f;
    result.data[1].d[24] = 0.000000f;
    result.data[1].d[25] = 0.000000f;
    result.data[1].d[26] = 0.000000f;
    result.data[1].d[27] = 0.000000f;
    result.data[1].d[28] = 0.000000f;
    result.data[1].d[29] = 0.000000f;
    result.data[1].d[30] = 0.000000f;
    result.data[1].d[31] = 0.000000f;
} // LoadResult1

inline void LoadResult2(FireStarterResult& result)
{
    result.minResult[2] = 0.000002f;
    result.data[2].d[0] = 0.325154f;
    result.data[2].d[1] = -0.851250f;
    result.data[2].d[2] = -0.750903f;
    result.data[2].d[3] = 0.000001f;
    result.data[2].d[4] = -4.046904f;
    result.data[2].d[5] = -0.408863f;
    result.data[2].d[6] = 0.680603f;
    result.data[2].d[7] = -1.086824f;
    result.data[2].d[8] = 2.099736f;
    result.data[2].d[9] = 0.864019f;
    result.data[2].d[10] = -0.378245f;
    result.data[2].d[11] = -0.531285f;
    result.data[2].d[12] = -0.115318f;
    result.data[2].d[13] = 0.095301f;
    result.data[2].d[14] = 1.113780f;
    result.data[2].d[15] = 0.052075f;
    result.data[2].d[16] = 0.804108f;
    result.data[2].d[17] = -0.365527f;
    result.data[2].d[18] = -0.834710f;
    result.data[2].d[19] = 0.523597f;
    result.data[2].d[20] = 0.000000f;
    result.data[2].d[21] = 0.000000f;
    result.data[2].d[22] = 0.000000f;
    result.data[2].d[23] = 0.000000f;
    result.data[2].d[24] = 0.000000f;
    result.data[2].d[25] = 0.000000f;
    result.data[2].d[26] = 0.000000f;
    result.data[2].d[27] = 0.000000f;
    result.data[2].d[28] = 0.000000f;
    result.data[2].d[29] = 0.000000f;
    result.data[2].d[30] = 0.000000f;
    result.data[2].d[31] = 0.000000f;
} // LoadResult2

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1228800;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);

    LoadResult0(state.m_result);
    LoadResult1(state.m_result);
    LoadResult2(state.m_result);

    state.m_result.maxResult = 0.000007f;
    state.m_result.instructions = state.m_program.m_instructions;
} // LoadState
