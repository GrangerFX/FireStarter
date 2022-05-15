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
    program.m_instructions.SetOperation(0, 1, 0);
    program.m_instructions.SetOperation(1, 1, 1);
    program.m_instructions.SetOperation(2, 1, 2);
    program.m_instructions.SetOperation(3, 1, 3);
    program.m_instructions.SetOperation(4, 1, 4);
    program.m_instructions.SetOperation(5, 0, 5);
    program.m_instructions.SetOperation(6, 1, 6);
    program.m_instructions.SetOperation(7, 1, 1);
    program.m_instructions.SetOperation(8, 0, 7);
    program.m_instructions.SetOperation(9, 1, 8);
    program.m_instructions.SetOperation(10, 1, 9);
    program.m_instructions.SetOperation(11, 0, 10);
    program.m_instructions.SetOperation(12, 1, 11);
    program.m_instructions.SetOperation(13, 0, 7);
    program.m_instructions.SetOperation(14, 0, 12);
    program.m_instructions.SetOperation(15, 1, 13);
    program.m_instructions.SetOperation(16, 0, 14);
    program.m_instructions.SetOperation(17, 0, 5);
    program.m_instructions.SetOperation(18, 0, 13);
    program.m_instructions.SetOperation(19, 0, 15);
    program.m_instructions.SetOperation(20, 1, 16);
    program.m_instructions.SetOperation(21, 0, 9);
    program.m_instructions.SetOperation(22, 0, 17);
    program.m_instructions.SetOperation(23, 1, 18);
    program.m_instructions.SetOperation(24, 1, 17);
    program.m_instructions.SetOperation(25, 1, 18);
    program.m_instructions.SetOperation(26, 0, 8);
    program.m_instructions.SetOperation(27, 1, 19);
    program.m_instructions.SetOperation(28, 0, 17);
    program.m_instructions.SetOperation(29, 0, 1);
    program.m_instructions.SetOperation(30, 0, 8);
    program.m_instructions.SetOperation(31, 1, 20);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 29};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 1, 5, 17};
    program.m_registers[6] = {6, 6, 6, 6};
    program.m_registers[7] = {7, 2, 8, 13};
    program.m_registers[8] = {8, 3, 9, 30};
    program.m_registers[9] = {9, 4, 10, 21};
    program.m_registers[10] = {10, 10, 11, 11};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 2, 15, 18};
    program.m_registers[14] = {14, 14, 16, 16};
    program.m_registers[15] = {15, 15, 19, 19};
    program.m_registers[16] = {16, 16, 20, 20};
    program.m_registers[17] = {17, 4, 22, 28};
    program.m_registers[18] = {18, 2, 23, 25};
    program.m_registers[19] = {19, 19, 27, 27};
    program.m_registers[20] = {20, 20, 31, 31};
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 21;
    program.m_maxRegisters = 5;
} // LoadProgram

inline void LoadResult0(FireStarterResult& result)
{
    result.minResult[0] = 0.000050f;
    result.data[0].d[0] = -0.485591f;
    result.data[0].d[1] = -0.614295f;
    result.data[0].d[2] = -0.296985f;
    result.data[0].d[3] = -0.906335f;
    result.data[0].d[4] = 0.170182f;
    result.data[0].d[5] = -0.263763f;
    result.data[0].d[6] = 0.453433f;
    result.data[0].d[7] = 0.210379f;
    result.data[0].d[8] = -0.973184f;
    result.data[0].d[9] = 0.042306f;
    result.data[0].d[10] = 1.875421f;
    result.data[0].d[11] = 0.965532f;
    result.data[0].d[12] = -0.053384f;
    result.data[0].d[13] = 0.994388f;
    result.data[0].d[14] = 0.341266f;
    result.data[0].d[15] = -1.062364f;
    result.data[0].d[16] = 0.285737f;
    result.data[0].d[17] = -0.939851f;
    result.data[0].d[18] = 0.829641f;
    result.data[0].d[19] = 1.127068f;
    result.data[0].d[20] = 0.113676f;
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
    result.minResult[1] = 0.000075f;
    result.data[1].d[0] = 0.268235f;
    result.data[1].d[1] = 0.164564f;
    result.data[1].d[2] = -0.851064f;
    result.data[1].d[3] = -0.596967f;
    result.data[1].d[4] = 0.798129f;
    result.data[1].d[5] = -1.509801f;
    result.data[1].d[6] = 0.828096f;
    result.data[1].d[7] = 0.100766f;
    result.data[1].d[8] = -0.504788f;
    result.data[1].d[9] = 0.623273f;
    result.data[1].d[10] = -0.621275f;
    result.data[1].d[11] = 1.506519f;
    result.data[1].d[12] = -0.225683f;
    result.data[1].d[13] = -0.541299f;
    result.data[1].d[14] = 1.579676f;
    result.data[1].d[15] = 1.407411f;
    result.data[1].d[16] = -0.672374f;
    result.data[1].d[17] = -0.490795f;
    result.data[1].d[18] = 0.728104f;
    result.data[1].d[19] = -0.767912f;
    result.data[1].d[20] = -0.146335f;
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
    result.minResult[2] = 0.000025f;
    result.data[2].d[0] = -0.438158f;
    result.data[2].d[1] = -0.921826f;
    result.data[2].d[2] = -0.665307f;
    result.data[2].d[3] = -0.456680f;
    result.data[2].d[4] = -0.263588f;
    result.data[2].d[5] = 0.407029f;
    result.data[2].d[6] = 1.633588f;
    result.data[2].d[7] = 0.176163f;
    result.data[2].d[8] = -0.435647f;
    result.data[2].d[9] = -0.961769f;
    result.data[2].d[10] = 0.834286f;
    result.data[2].d[11] = 0.887069f;
    result.data[2].d[12] = -0.067101f;
    result.data[2].d[13] = 0.812455f;
    result.data[2].d[14] = 0.633867f;
    result.data[2].d[15] = 0.797583f;
    result.data[2].d[16] = 0.389504f;
    result.data[2].d[17] = -0.402075f;
    result.data[2].d[18] = 0.642793f;
    result.data[2].d[19] = -1.014201f;
    result.data[2].d[20] = 0.779134f;
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
    state.m_generation = 11;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);

    LoadResult0(state.m_result);
    LoadResult1(state.m_result);
    LoadResult2(state.m_result);

    state.m_result.maxResult = 0.000075f;
    state.m_result.instructions = state.m_program.m_instructions;
} // LoadState
