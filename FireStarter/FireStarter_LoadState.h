#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_evolveMode = 2;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 4;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_instructions.SetOperation(0, 0, 0);
    program.m_instructions.SetOperation(1, 1, 1);
    program.m_instructions.SetOperation(2, 1, 2);
    program.m_instructions.SetOperation(3, 0, 3);
    program.m_instructions.SetOperation(4, 1, 4);
    program.m_instructions.SetOperation(5, 0, 5);
    program.m_instructions.SetOperation(6, 0, 6);
    program.m_instructions.SetOperation(7, 1, 0);
    program.m_instructions.SetOperation(8, 0, 7);
    program.m_instructions.SetOperation(9, 1, 8);
    program.m_instructions.SetOperation(10, 1, 9);
    program.m_instructions.SetOperation(11, 1, 9);
    program.m_instructions.SetOperation(12, 1, 10);
    program.m_instructions.SetOperation(13, 0, 3);
    program.m_instructions.SetOperation(14, 1, 11);
    program.m_instructions.SetOperation(15, 1, 5);
    program.m_instructions.SetOperation(16, 1, 12);
    program.m_instructions.SetOperation(17, 1, 3);
    program.m_instructions.SetOperation(18, 1, 10);
    program.m_instructions.SetOperation(19, 1, 13);
    program.m_instructions.SetOperation(20, 1, 14);
    program.m_instructions.SetOperation(21, 0, 15);
    program.m_instructions.SetOperation(22, 0, 16);
    program.m_instructions.SetOperation(23, 1, 17);
    program.m_instructions.SetOperation(24, 0, 8);
    program.m_instructions.SetOperation(25, 1, 2);
    program.m_instructions.SetOperation(26, 1, 18);
    program.m_instructions.SetOperation(27, 1, 19);
    program.m_instructions.SetOperation(28, 1, 2);
    program.m_instructions.SetOperation(29, 1, 17);
    program.m_instructions.SetOperation(30, 1, 10);
    program.m_instructions.SetOperation(31, 0, 12);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 7};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 1, 2, 28};
    program.m_registers[3] = {3, 2, 3, 17};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 3, 5, 15};
    program.m_registers[6] = {6, 6, 6, 6};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 0, 9, 24};
    program.m_registers[9] = {9, 4, 10, 11};
    program.m_registers[10] = {10, 4, 12, 30};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 3, 16, 31};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 2, 23, 29};
    program.m_registers[18] = {18, 18, 26, 26};
    program.m_registers[19] = {19, 19, 27, 27};
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 20;
    program.m_maxRegisters = 5;
} // LoadProgram

inline void LoadResult0(FireStarterResult& result)
{
    result.minResult[0] = 0.601122f;
    result.data[0].d[0] = -0.086377f;
    result.data[0].d[1] = 0.322154f;
    result.data[0].d[2] = 0.835229f;
    result.data[0].d[3] = 0.833905f;
    result.data[0].d[4] = -0.191577f;
    result.data[0].d[5] = -0.244059f;
    result.data[0].d[6] = -1.211464f;
    result.data[0].d[7] = 0.746264f;
    result.data[0].d[8] = 0.493020f;
    result.data[0].d[9] = 0.123191f;
    result.data[0].d[10] = -0.580630f;
    result.data[0].d[11] = -0.447147f;
    result.data[0].d[12] = 0.209957f;
    result.data[0].d[13] = -0.623616f;
    result.data[0].d[14] = 0.452320f;
    result.data[0].d[15] = 0.592754f;
    result.data[0].d[16] = -1.367049f;
    result.data[0].d[17] = 0.268916f;
    result.data[0].d[18] = -1.075113f;
    result.data[0].d[19] = 1.136576f;
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
    result.minResult[1] = 0.572579f;
    result.data[1].d[0] = 0.096742f;
    result.data[1].d[1] = -0.614356f;
    result.data[1].d[2] = 0.587187f;
    result.data[1].d[3] = -0.643653f;
    result.data[1].d[4] = -0.642775f;
    result.data[1].d[5] = -0.844673f;
    result.data[1].d[6] = -1.563204f;
    result.data[1].d[7] = -0.254303f;
    result.data[1].d[8] = 0.325184f;
    result.data[1].d[9] = 0.731830f;
    result.data[1].d[10] = -0.266415f;
    result.data[1].d[11] = -0.912265f;
    result.data[1].d[12] = 0.589018f;
    result.data[1].d[13] = 1.239479f;
    result.data[1].d[14] = 1.207726f;
    result.data[1].d[15] = 0.259245f;
    result.data[1].d[16] = 0.385907f;
    result.data[1].d[17] = 0.504925f;
    result.data[1].d[18] = 1.133385f;
    result.data[1].d[19] = 0.106065f;
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
    result.minResult[2] = 0.617801f;
    result.data[2].d[0] = 0.144215f;
    result.data[2].d[1] = 0.600816f;
    result.data[2].d[2] = -0.375803f;
    result.data[2].d[3] = 0.925441f;
    result.data[2].d[4] = -1.357250f;
    result.data[2].d[5] = -0.322663f;
    result.data[2].d[6] = 0.201334f;
    result.data[2].d[7] = -0.905315f;
    result.data[2].d[8] = 0.198228f;
    result.data[2].d[9] = 0.567559f;
    result.data[2].d[10] = -0.930597f;
    result.data[2].d[11] = -0.039613f;
    result.data[2].d[12] = 0.170119f;
    result.data[2].d[13] = -0.330243f;
    result.data[2].d[14] = -0.479708f;
    result.data[2].d[15] = -0.896700f;
    result.data[2].d[16] = 1.307099f;
    result.data[2].d[17] = 0.574728f;
    result.data[2].d[18] = 0.086332f;
    result.data[2].d[19] = -0.924034f;
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
    state.m_generation = 2;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);

    LoadResult0(state.m_result);
    LoadResult1(state.m_result);
    LoadResult2(state.m_result);

    state.m_result.maxResult = 0.617801f;
    state.m_result.instructions = state.m_program.m_instructions;
} // LoadState
