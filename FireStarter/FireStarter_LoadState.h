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
    program.m_instructions.SetOperation(15, 0, 12);
    program.m_instructions.SetOperation(16, 0, 1);
    program.m_instructions.SetOperation(17, 0, 13);
    program.m_instructions.SetOperation(18, 0, 14);
    program.m_instructions.SetOperation(19, 1, 1);
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
    program.m_registers[1] = {1, 0, 1, 19};
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
    program.m_registers[12] = {12, 12, 15, 15};
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

inline void LoadState(FireStarterState& state)
{
    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);

    state.m_result.data[0].d[0] = -0.179278f;
    state.m_result.data[0].d[1] = 0.563208f;
    state.m_result.data[0].d[2] = -1.144109f;
    state.m_result.data[0].d[3] = -0.000017f;
    state.m_result.data[0].d[4] = -0.381997f;
    state.m_result.data[0].d[5] = -0.033232f;
    state.m_result.data[0].d[6] = -0.601221f;
    state.m_result.data[0].d[7] = -1.674648f;
    state.m_result.data[0].d[8] = -0.330077f;
    state.m_result.data[0].d[9] = 0.581153f;
    state.m_result.data[0].d[10] = 0.955764f;
    state.m_result.data[0].d[11] = -0.042944f;
    state.m_result.data[0].d[12] = -1.483482f;
    state.m_result.data[0].d[13] = -1.171958f;
    state.m_result.data[0].d[14] = 0.010459f;
    state.m_result.data[0].d[15] = -0.676289f;
    state.m_result.data[0].d[16] = 0.949968f;
    state.m_result.data[0].d[17] = 1.202753f;
    state.m_result.data[0].d[18] = 3.284665f;
    state.m_result.data[0].d[19] = -0.000029f;
    state.m_result.data[0].d[20] = 0.000000f;
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
    state.m_result.minResult[0] = 0.000018f;

    state.m_result.data[1].d[0] = -0.356144f;
    state.m_result.data[1].d[1] = 1.100649f;
    state.m_result.data[1].d[2] = 0.629010f;
    state.m_result.data[1].d[3] = 0.000062f;
    state.m_result.data[1].d[4] = -0.747084f;
    state.m_result.data[1].d[5] = -0.416252f;
    state.m_result.data[1].d[6] = -0.618933f;
    state.m_result.data[1].d[7] = 0.218119f;
    state.m_result.data[1].d[8] = -3.006079f;
    state.m_result.data[1].d[9] = -0.365646f;
    state.m_result.data[1].d[10] = -1.550303f;
    state.m_result.data[1].d[11] = 0.113910f;
    state.m_result.data[1].d[12] = -0.336174f;
    state.m_result.data[1].d[13] = 0.834113f;
    state.m_result.data[1].d[14] = -1.296564f;
    state.m_result.data[1].d[15] = 0.239934f;
    state.m_result.data[1].d[16] = -1.140848f;
    state.m_result.data[1].d[17] = 1.222856f;
    state.m_result.data[1].d[18] = -0.990509f;
    state.m_result.data[1].d[19] = -0.118225f;
    state.m_result.data[1].d[20] = 0.000000f;
    state.m_result.data[1].d[21] = 0.000000f;
    state.m_result.data[1].d[22] = 0.000000f;
    state.m_result.data[1].d[23] = 0.000000f;
    state.m_result.data[1].d[24] = 0.000000f;
    state.m_result.data[1].d[25] = 0.000000f;
    state.m_result.data[1].d[26] = 0.000000f;
    state.m_result.data[1].d[27] = 0.000000f;
    state.m_result.data[1].d[28] = 0.000000f;
    state.m_result.data[1].d[29] = 0.000000f;
    state.m_result.data[1].d[30] = 0.000000f;
    state.m_result.data[1].d[31] = 0.000000f;
    state.m_result.minResult[1] = 0.000030f;

    state.m_result.data[2].d[0] = 0.439950f;
    state.m_result.data[2].d[1] = -1.151827f;
    state.m_result.data[2].d[2] = 0.568840f;
    state.m_result.data[2].d[3] = 0.000030f;
    state.m_result.data[2].d[4] = 0.212755f;
    state.m_result.data[2].d[5] = -4.284518f;
    state.m_result.data[2].d[6] = 0.075181f;
    state.m_result.data[2].d[7] = 0.208505f;
    state.m_result.data[2].d[8] = 0.277710f;
    state.m_result.data[2].d[9] = -0.622881f;
    state.m_result.data[2].d[10] = 0.617749f;
    state.m_result.data[2].d[11] = -0.500187f;
    state.m_result.data[2].d[12] = 0.239595f;
    state.m_result.data[2].d[13] = -0.558366f;
    state.m_result.data[2].d[14] = 0.504169f;
    state.m_result.data[2].d[15] = 0.125118f;
    state.m_result.data[2].d[16] = 0.152003f;
    state.m_result.data[2].d[17] = -0.991747f;
    state.m_result.data[2].d[18] = -0.251909f;
    state.m_result.data[2].d[19] = 0.523637f;
    state.m_result.data[2].d[20] = 0.000000f;
    state.m_result.data[2].d[21] = 0.000000f;
    state.m_result.data[2].d[22] = 0.000000f;
    state.m_result.data[2].d[23] = 0.000000f;
    state.m_result.data[2].d[24] = 0.000000f;
    state.m_result.data[2].d[25] = 0.000000f;
    state.m_result.data[2].d[26] = 0.000000f;
    state.m_result.data[2].d[27] = 0.000000f;
    state.m_result.data[2].d[28] = 0.000000f;
    state.m_result.data[2].d[29] = 0.000000f;
    state.m_result.data[2].d[30] = 0.000000f;
    state.m_result.data[2].d[31] = 0.000000f;
    state.m_result.minResult[2] = 0.000023f;

    state.m_result.maxResult = 0.000030f;
    state.m_result.test = 0;
    state.m_result.instructions = state.m_program.m_instructions;

    state.m_generation = 300;
} // LoadState
