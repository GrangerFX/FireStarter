#include "FireStarter.h"

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_instructions.i[0].SetOperation(32);
    program.m_instructions.i[1].SetOperation(33);
    program.m_instructions.i[2].SetOperation(2);
    program.m_instructions.i[3].SetOperation(3);
    program.m_instructions.i[4].SetOperation(36);
    program.m_instructions.i[5].SetOperation(5);
    program.m_instructions.i[6].SetOperation(38);
    program.m_instructions.i[7].SetOperation(39);
    program.m_instructions.i[8].SetOperation(72);
    program.m_instructions.i[9].SetOperation(9);
    program.m_instructions.i[10].SetOperation(42);
    program.m_instructions.i[11].SetOperation(33);
    program.m_instructions.i[12].SetOperation(43);
    program.m_instructions.i[13].SetOperation(10);
    program.m_instructions.i[14].SetOperation(44);
    program.m_instructions.i[15].SetOperation(8);
    program.m_instructions.i[16].SetOperation(45);
    program.m_instructions.i[17].SetOperation(13);
    program.m_instructions.i[18].SetOperation(13);
    program.m_instructions.i[19].SetOperation(14);
    program.m_instructions.i[20].SetOperation(42);
    program.m_instructions.i[21].SetOperation(15);
    program.m_instructions.i[22].SetOperation(36);
    program.m_instructions.i[23].SetOperation(38);
    program.m_instructions.i[24].SetOperation(36);
    program.m_instructions.i[25].SetOperation(48);
    program.m_instructions.i[26].SetOperation(43);
    program.m_instructions.i[27].SetOperation(49);
    program.m_instructions.i[28].SetOperation(9);
    program.m_instructions.i[29].SetOperation(2);
    program.m_instructions.i[30].SetOperation(43);
    program.m_instructions.i[31].SetOperation(2);
    program.m_opcodes.resize(16);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_opcodes[2] = (FireStarterOpcode)0;
    program.m_opcodes[3] = (FireStarterOpcode)1;
    program.m_opcodes[4] = (FireStarterOpcode)0;
    program.m_opcodes[5] = (FireStarterOpcode)1;
    program.m_opcodes[6] = (FireStarterOpcode)0;
    program.m_opcodes[7] = (FireStarterOpcode)1;
    program.m_opcodes[8] = (FireStarterOpcode)0;
    program.m_opcodes[9] = (FireStarterOpcode)1;
    program.m_opcodes[10] = (FireStarterOpcode)0;
    program.m_opcodes[11] = (FireStarterOpcode)1;
    program.m_opcodes[12] = (FireStarterOpcode)0;
    program.m_opcodes[13] = (FireStarterOpcode)1;
    program.m_opcodes[14] = (FireStarterOpcode)0;
    program.m_opcodes[15] = (FireStarterOpcode)2;
    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 11};
    program.m_registers[2] = {2, 1, 2, 31};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 2, 4, 24};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 3, 6, 23};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 4, 8, 15};
    program.m_registers[9] = {9, 5, 9, 28};
    program.m_registers[10] = {10, 6, 10, 20};
    program.m_registers[11] = {11, 0, 12, 30};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 4, 16, 18};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 16, 25, 25};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_programMode = (FireStarterProgramMode)1;
    program.m_dataSize = 18;
    program.m_maxRegisters = 7;
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    LoadProgram(state.m_program);

    state.m_result.data[0].d[0] = -0.740838f;
    state.m_result.data[0].d[1] = -0.751019f;
    state.m_result.data[0].d[2] = 0.697933f;
    state.m_result.data[0].d[3] = 0.593821f;
    state.m_result.data[0].d[4] = 0.672030f;
    state.m_result.data[0].d[5] = -0.534894f;
    state.m_result.data[0].d[6] = -0.578023f;
    state.m_result.data[0].d[7] = 0.305929f;
    state.m_result.data[0].d[8] = 0.129545f;
    state.m_result.data[0].d[9] = 0.326337f;
    state.m_result.data[0].d[10] = -0.537813f;
    state.m_result.data[0].d[11] = -0.354333f;
    state.m_result.data[0].d[12] = -0.532613f;
    state.m_result.data[0].d[13] = 0.049161f;
    state.m_result.data[0].d[14] = 0.089808f;
    state.m_result.data[0].d[15] = 0.322541f;
    state.m_result.data[0].d[16] = 0.835469f;
    state.m_result.data[0].d[17] = 0.783526f;
    state.m_result.data[0].d[18] = 0.434333f;
    state.m_result.data[0].d[19] = 0.165582f;
    state.m_result.data[0].d[20] = 0.653324f;
    state.m_result.data[0].d[21] = 0.939395f;
    state.m_result.data[0].d[22] = -0.273505f;
    state.m_result.data[0].d[23] = 0.281970f;
    state.m_result.data[0].d[24] = 0.482076f;
    state.m_result.data[0].d[25] = 0.314536f;
    state.m_result.data[0].d[26] = 0.123553f;
    state.m_result.data[0].d[27] = -0.329539f;
    state.m_result.data[0].d[28] = -0.186060f;
    state.m_result.data[0].d[29] = -0.047196f;
    state.m_result.data[0].d[30] = -0.515442f;
    state.m_result.data[0].d[31] = -0.818080f;
    state.m_result.minResult[0] = 0.003318f;

    state.m_result.maxResult = 0.003318f;
    state.m_processingTime = 0.000000;
    state.SortResults();
} // LoadState
