#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_evolveMode = 5;
    settings.m_evolveUnits = 4;
    settings.m_evolveStates = 8;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 128;
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
    result.minResult[0] = 0.000011f;
    result.data[0].d[0] = -0.209399f;
    result.data[0].d[1] = 0.657866f;
    result.data[0].d[2] = -1.102399f;
    result.data[0].d[3] = 0.000030f;
    result.data[0].d[4] = -0.807426f;
    result.data[0].d[5] = 0.281498f;
    result.data[0].d[6] = -1.289646f;
    result.data[0].d[7] = -0.822163f;
    result.data[0].d[8] = -1.279316f;
    result.data[0].d[9] = -0.239787f;
    result.data[0].d[10] = -1.331248f;
    result.data[0].d[11] = 0.106671f;
    result.data[0].d[12] = -0.547955f;
    result.data[0].d[13] = 1.782472f;
    result.data[0].d[14] = 0.144593f;
    result.data[0].d[15] = 1.013737f;
    result.data[0].d[16] = 1.057310f;
    result.data[0].d[17] = 0.992680f;
    result.data[0].d[18] = 0.477938f;
    result.data[0].d[19] = 0.000035f;
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
    result.minResult[1] = 0.000033f;
    result.data[1].d[0] = 0.627712f;
    result.data[1].d[1] = -1.940056f;
    result.data[1].d[2] = 0.417420f;
    result.data[1].d[3] = 0.000006f;
    result.data[1].d[4] = -1.021660f;
    result.data[1].d[5] = -0.517988f;
    result.data[1].d[6] = -0.677891f;
    result.data[1].d[7] = -1.550236f;
    result.data[1].d[8] = 0.000685f;
    result.data[1].d[9] = -0.660736f;
    result.data[1].d[10] = 0.082832f;
    result.data[1].d[11] = 0.018660f;
    result.data[1].d[12] = -0.804627f;
    result.data[1].d[13] = 0.142819f;
    result.data[1].d[14] = 1.651815f;
    result.data[1].d[15] = 0.573834f;
    result.data[1].d[16] = 1.150982f;
    result.data[1].d[17] = -0.867679f;
    result.data[1].d[18] = -1.763588f;
    result.data[1].d[19] = -0.118125f;
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
    result.minResult[2] = 0.000031f;
    result.data[2].d[0] = 0.307585f;
    result.data[2].d[1] = -0.805168f;
    result.data[2].d[2] = 0.834457f;
    result.data[2].d[3] = -0.000097f;
    result.data[2].d[4] = -1.475733f;
    result.data[2].d[5] = -1.461500f;
    result.data[2].d[6] = -1.527028f;
    result.data[2].d[7] = -0.316593f;
    result.data[2].d[8] = 0.294502f;
    result.data[2].d[9] = -1.052078f;
    result.data[2].d[10] = -0.955246f;
    result.data[2].d[11] = -0.479396f;
    result.data[2].d[12] = 0.245495f;
    result.data[2].d[13] = 0.138229f;
    result.data[2].d[14] = -0.827258f;
    result.data[2].d[15] = -0.341804f;
    result.data[2].d[16] = -0.012908f;
    result.data[2].d[17] = 0.722844f;
    result.data[2].d[18] = 0.161826f;
    result.data[2].d[19] = 0.523478f;
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
    state.m_generation = 4;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);

    LoadResult0(state.m_result);
    LoadResult1(state.m_result);
    LoadResult2(state.m_result);

    state.m_result.maxResult = 0.000033f;
    state.m_result.test = 0;
    state.m_result.instructions = state.m_program.m_instructions;
} // LoadState
