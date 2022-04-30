#pragma once
#include "FireStarterState.h"

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_instructions.SetOperation(0, 1, 0);
    program.m_instructions.SetOperation(1, 1, 1);
    program.m_instructions.SetOperation(2, 0, 2);
    program.m_instructions.SetOperation(3, 1, 3);
    program.m_instructions.SetOperation(4, 1, 4);
    program.m_instructions.SetOperation(5, 1, 5);
    program.m_instructions.SetOperation(6, 0, 3);
    program.m_instructions.SetOperation(7, 1, 6);
    program.m_instructions.SetOperation(8, 0, 7);
    program.m_instructions.SetOperation(9, 1, 8);
    program.m_instructions.SetOperation(10, 1, 9);
    program.m_instructions.SetOperation(11, 0, 10);
    program.m_instructions.SetOperation(12, 0, 11);
    program.m_instructions.SetOperation(13, 0, 7);
    program.m_instructions.SetOperation(14, 0, 12);
    program.m_instructions.SetOperation(15, 1, 13);
    program.m_instructions.SetOperation(16, 0, 14);
    program.m_instructions.SetOperation(17, 0, 15);
    program.m_instructions.SetOperation(18, 0, 13);
    program.m_instructions.SetOperation(19, 0, 16);
    program.m_instructions.SetOperation(20, 1, 17);
    program.m_instructions.SetOperation(21, 1, 15);
    program.m_instructions.SetOperation(22, 0, 18);
    program.m_instructions.SetOperation(23, 1, 19);
    program.m_instructions.SetOperation(24, 1, 18);
    program.m_instructions.SetOperation(25, 1, 17);
    program.m_instructions.SetOperation(26, 1, 19);
    program.m_instructions.SetOperation(27, 0, 1);
    program.m_instructions.SetOperation(28, 0, 18);
    program.m_instructions.SetOperation(29, 0, 6);
    program.m_instructions.SetOperation(30, 0, 20);
    program.m_instructions.SetOperation(31, 1, 1);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 31};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 6};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 1, 7, 29};
    program.m_registers[7] = {7, 2, 8, 13};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 9, 10, 10};
    program.m_registers[10] = {10, 10, 11, 11};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 2, 15, 18};
    program.m_registers[14] = {14, 14, 16, 16};
    program.m_registers[15] = {15, 3, 17, 21};
    program.m_registers[16] = {16, 16, 19, 19};
    program.m_registers[17] = {17, 2, 20, 25};
    program.m_registers[18] = {18, 3, 22, 28};
    program.m_registers[19] = {19, 4, 23, 26};
    program.m_registers[20] = {20, 20, 30, 30};
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 21;
    program.m_maxRegisters = 5;
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    state.m_result.data[0].d[0] = -0.781957f;
    state.m_result.data[0].d[1] = -2.359636f;
    state.m_result.data[0].d[2] = 0.602561f;
    state.m_result.data[0].d[3] = 0.704381f;
    state.m_result.data[0].d[4] = -0.777448f;
    state.m_result.data[0].d[5] = -0.631314f;
    state.m_result.data[0].d[6] = -0.787647f;
    state.m_result.data[0].d[7] = 1.084867f;
    state.m_result.data[0].d[8] = -64.701653f;
    state.m_result.data[0].d[9] = -0.710638f;
    state.m_result.data[0].d[10] = -7.454107f;
    state.m_result.data[0].d[11] = -0.103288f;
    state.m_result.data[0].d[12] = -0.009103f;
    state.m_result.data[0].d[13] = -15.356449f;
    state.m_result.data[0].d[14] = 0.605875f;
    state.m_result.data[0].d[15] = -0.051658f;
    state.m_result.data[0].d[16] = -0.181232f;
    state.m_result.data[0].d[17] = -0.035503f;
    state.m_result.data[0].d[18] = -0.463571f;
    state.m_result.data[0].d[19] = 0.335330f;
    state.m_result.data[0].d[20] = 0.390241f;
    state.m_result.data[0].d[21] = 0.000000f;
    state.m_result.data[0].d[22] = 0.000000f;
    state.m_result.data[0].d[23] = 0.000000f;
    state.m_result.data[0].d[24] = 0.000000f;
    state.m_result.data[0].d[25] = 0.000000f;
    state.m_result.data[0].d[26] = 0.000000f;
    state.m_result.data[0].d[27] = 0.000000f;
    state.m_result.data[0].d[28] = 0.000000f;
    state.m_result.data[0].d[29] = 0.000000f;
    state.m_result.data[0].d[30] = 0.000000f;
    state.m_result.data[0].d[31] = 0.000000f;
    state.m_result.minResult[0] = 0.000000f;

    state.m_result.maxResult = 0.000000f;
    state.m_result.test = 5;

    state.m_bestResult = 0.000000f;
    state.m_generation = 1400;

    LoadProgram(state.m_program);
    state.m_result.instructions = state.m_program.m_instructions;
} // LoadState
