#include "FireStarter.h"

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_opcodes.resize(13);
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
    program.m_opcodes[12] = (FireStarterOpcode)2;
    program.m_instructions.resize(32);
    program.m_instructions[0].operation = 0;
    program.m_instructions[1].operation = 33;
    program.m_instructions[2].operation = 34;
    program.m_instructions[3].operation = 3;
    program.m_instructions[4].operation = 4;
    program.m_instructions[5].operation = 37;
    program.m_instructions[6].operation = 34;
    program.m_instructions[7].operation = 4;
    program.m_instructions[8].operation = 38;
    program.m_instructions[9].operation = 7;
    program.m_instructions[10].operation = 32;
    program.m_instructions[11].operation = 8;
    program.m_instructions[12].operation = 41;
    program.m_instructions[13].operation = 42;
    program.m_instructions[14].operation = 6;
    program.m_instructions[15].operation = 43;
    program.m_instructions[16].operation = 5;
    program.m_instructions[17].operation = 76;
    program.m_instructions[18].operation = 1;
    program.m_instructions[19].operation = 9;
    program.m_instructions[20].operation = 13;
    program.m_instructions[21].operation = 46;
    program.m_instructions[22].operation = 41;
    program.m_instructions[23].operation = 0;
    program.m_instructions[24].operation = 15;
    program.m_instructions[25].operation = 47;
    program.m_instructions[26].operation = 16;
    program.m_instructions[27].operation = 34;
    program.m_instructions[28].operation = 17;
    program.m_instructions[29].operation = 46;
    program.m_instructions[30].operation = 37;
    program.m_instructions[31].operation = 50;
    program.m_programMode = (FireStarterProgramMode)1;
    program.m_dataSize = 19;
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    LoadProgram(state.m_program);

    state.m_result[0].data.d[0] = 1.081282f;
    state.m_result[0].data.d[1] = 0.247822f;
    state.m_result[0].data.d[2] = -0.797268f;
    state.m_result[0].data.d[3] = 0.192619f;
    state.m_result[0].data.d[4] = 1.178474f;
    state.m_result[0].data.d[5] = 0.263834f;
    state.m_result[0].data.d[6] = -2.066970f;
    state.m_result[0].data.d[7] = 0.132835f;
    state.m_result[0].data.d[8] = 0.159255f;
    state.m_result[0].data.d[9] = -0.460696f;
    state.m_result[0].data.d[10] = -0.825621f;
    state.m_result[0].data.d[11] = 0.645920f;
    state.m_result[0].data.d[12] = -0.181054f;
    state.m_result[0].data.d[13] = -0.281315f;
    state.m_result[0].data.d[14] = -0.070091f;
    state.m_result[0].data.d[15] = 0.635622f;
    state.m_result[0].data.d[16] = 0.498717f;
    state.m_result[0].data.d[17] = 0.043171f;
    state.m_result[0].data.d[18] = -0.395453f;
    state.m_result[0].data.d[19] = -0.348483f;
    state.m_result[0].data.d[20] = 0.000000f;
    state.m_result[0].data.d[21] = 0.000000f;
    state.m_result[0].data.d[22] = 0.000000f;
    state.m_result[0].data.d[23] = 0.000000f;
    state.m_result[0].data.d[24] = 0.000000f;
    state.m_result[0].data.d[25] = 0.000000f;
    state.m_result[0].data.d[26] = 0.000000f;
    state.m_result[0].data.d[27] = 0.000000f;
    state.m_result[0].data.d[28] = 0.000000f;
    state.m_result[0].data.d[29] = 0.000000f;
    state.m_result[0].data.d[30] = 0.000000f;
    state.m_result[0].data.d[31] = 0.000000f;
    state.m_result[0].result = 0.003297f;

    state.m_processingTime = 0.000000;
    state.m_maxResult = 0.003297f;
} // LoadState
