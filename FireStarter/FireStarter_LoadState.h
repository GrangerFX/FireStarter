#include "FireStarter.h"

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)2;
    program.m_opcodes[1] = (FireStarterOpcode)3;
    program.m_instructions.resize(32);
    program.m_instructions[0].opcode = 105416706;
    program.m_instructions[1].opcode = 476602387;
    program.m_instructions[2].opcode = 947169314;
    program.m_instructions[3].opcode = 577777715;
    program.m_instructions[4].opcode = 172238914;
    program.m_instructions[5].opcode = 742975539;
    program.m_instructions[6].opcode = 70799442;
    program.m_instructions[7].opcode = 746332259;
    program.m_instructions[8].opcode = 442015858;
    program.m_instructions[9].opcode = 577003651;
    program.m_instructions[10].opcode = 139999378;
    program.m_instructions[11].opcode = 974927971;
    program.m_instructions[12].opcode = 69521570;
    program.m_instructions[13].opcode = 643326131;
    program.m_instructions[14].opcode = 947396802;
    program.m_instructions[15].opcode = 639150291;
    program.m_instructions[16].opcode = 171225250;
    program.m_instructions[17].opcode = 406354051;
    program.m_instructions[18].opcode = 274225378;
    program.m_instructions[19].opcode = 301996243;
    program.m_instructions[20].opcode = 873261218;
    program.m_instructions[21].opcode = 1014802675;
    program.m_instructions[22].opcode = 773630210;
    program.m_instructions[23].opcode = 268441875;
    program.m_instructions[24].opcode = 643309666;
    program.m_instructions[25].opcode = 2416835;
    program.m_instructions[26].opcode = 268966098;
    program.m_instructions[27].opcode = 508338467;
    program.m_instructions[28].opcode = 878186802;
    program.m_instructions[29].opcode = 169119971;
    program.m_instructions[30].opcode = 640442562;
    program.m_instructions[31].opcode = 107479059;
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 20;
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    LoadProgram(state.m_program);

    state.m_result0.data.d[0] = 0.166358f;
    state.m_result0.data.d[1] = -0.367194f;
    state.m_result0.data.d[2] = -3.583327f;
    state.m_result0.data.d[3] = 0.441628f;
    state.m_result0.data.d[4] = 2.826514f;
    state.m_result0.data.d[5] = 0.117001f;
    state.m_result0.data.d[6] = -0.547351f;
    state.m_result0.data.d[7] = 0.840405f;
    state.m_result0.data.d[8] = 0.827456f;
    state.m_result0.data.d[9] = -0.191815f;
    state.m_result0.data.d[10] = -0.921262f;
    state.m_result0.data.d[11] = -1.476278f;
    state.m_result0.data.d[12] = -1.848571f;
    state.m_result0.data.d[13] = 0.753720f;
    state.m_result0.data.d[14] = 0.551162f;
    state.m_result0.data.d[15] = -1.100033f;
    state.m_result0.data.d[16] = 0.729146f;
    state.m_result0.data.d[17] = -0.022982f;
    state.m_result0.data.d[18] = -0.736473f;
    state.m_result0.data.d[19] = -0.034231f;
    state.m_result0.data.d[20] = 0.000000f;
    state.m_result0.data.d[21] = 0.000000f;
    state.m_result0.data.d[22] = 0.000000f;
    state.m_result0.data.d[23] = 0.000000f;
    state.m_result0.data.d[24] = 0.000000f;
    state.m_result0.data.d[25] = 0.000000f;
    state.m_result0.data.d[26] = 0.000000f;
    state.m_result0.data.d[27] = 0.000000f;
    state.m_result0.data.d[28] = 0.000000f;
    state.m_result0.data.d[29] = 0.000000f;
    state.m_result0.data.d[30] = 0.000000f;
    state.m_result0.data.d[31] = 0.000000f;
    state.m_result0.result = 0.000133;

    state.m_result1.data.d[0] = 0.895871f;
    state.m_result1.data.d[1] = -0.217696f;
    state.m_result1.data.d[2] = -1.026493f;
    state.m_result1.data.d[3] = 1.890561f;
    state.m_result1.data.d[4] = 0.912404f;
    state.m_result1.data.d[5] = 0.226375f;
    state.m_result1.data.d[6] = -1.495189f;
    state.m_result1.data.d[7] = 0.732986f;
    state.m_result1.data.d[8] = 0.205553f;
    state.m_result1.data.d[9] = 1.723023f;
    state.m_result1.data.d[10] = -0.407971f;
    state.m_result1.data.d[11] = -1.587290f;
    state.m_result1.data.d[12] = 0.429032f;
    state.m_result1.data.d[13] = 0.359117f;
    state.m_result1.data.d[14] = -0.742859f;
    state.m_result1.data.d[15] = 0.739383f;
    state.m_result1.data.d[16] = 0.397729f;
    state.m_result1.data.d[17] = -1.263418f;
    state.m_result1.data.d[18] = -0.458699f;
    state.m_result1.data.d[19] = -0.668602f;
    state.m_result1.data.d[20] = 0.000000f;
    state.m_result1.data.d[21] = 0.000000f;
    state.m_result1.data.d[22] = 0.000000f;
    state.m_result1.data.d[23] = 0.000000f;
    state.m_result1.data.d[24] = 0.000000f;
    state.m_result1.data.d[25] = 0.000000f;
    state.m_result1.data.d[26] = 0.000000f;
    state.m_result1.data.d[27] = 0.000000f;
    state.m_result1.data.d[28] = 0.000000f;
    state.m_result1.data.d[29] = 0.000000f;
    state.m_result1.data.d[30] = 0.000000f;
    state.m_result1.data.d[31] = 0.000000f;
    state.m_result1.result = 0.000397;

    state.m_processingTime = 2.439154;
    state.m_maxResult = 0.000397;
} // LoadState
