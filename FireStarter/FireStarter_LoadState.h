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

    state.m_result0.data.d[0] = -0.050911f;
    state.m_result0.data.d[1] = -0.095168f;
    state.m_result0.data.d[2] = -55.678799f;
    state.m_result0.data.d[3] = -15.918847f;
    state.m_result0.data.d[4] = -0.756818f;
    state.m_result0.data.d[5] = -0.115125f;
    state.m_result0.data.d[6] = 0.021131f;
    state.m_result0.data.d[7] = -0.424197f;
    state.m_result0.data.d[8] = 1.633703f;
    state.m_result0.data.d[9] = -0.234050f;
    state.m_result0.data.d[10] = -2.232526f;
    state.m_result0.data.d[11] = -2.143106f;
    state.m_result0.data.d[12] = -1.498720f;
    state.m_result0.data.d[13] = -0.654248f;
    state.m_result0.data.d[14] = 0.578747f;
    state.m_result0.data.d[15] = -1.296861f;
    state.m_result0.data.d[16] = 3.129124f;
    state.m_result0.data.d[17] = 0.365554f;
    state.m_result0.data.d[18] = 8.608454f;
    state.m_result0.data.d[19] = -0.048320f;
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
    state.m_result0.result = 0.000026f;

    state.m_result1.data.d[0] = -0.057789f;
    state.m_result1.data.d[1] = -0.051612f;
    state.m_result1.data.d[2] = -58.158268f;
    state.m_result1.data.d[3] = -12.618521f;
    state.m_result1.data.d[4] = -0.094677f;
    state.m_result1.data.d[5] = -0.031466f;
    state.m_result1.data.d[6] = 0.108511f;
    state.m_result1.data.d[7] = 0.265973f;
    state.m_result1.data.d[8] = 1.599992f;
    state.m_result1.data.d[9] = -0.224752f;
    state.m_result1.data.d[10] = -2.208896f;
    state.m_result1.data.d[11] = -2.204640f;
    state.m_result1.data.d[12] = -1.389546f;
    state.m_result1.data.d[13] = -0.770473f;
    state.m_result1.data.d[14] = 0.521914f;
    state.m_result1.data.d[15] = -0.335802f;
    state.m_result1.data.d[16] = 3.250836f;
    state.m_result1.data.d[17] = 0.730017f;
    state.m_result1.data.d[18] = 10.149578f;
    state.m_result1.data.d[19] = -0.029820f;
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
    state.m_result1.result = 0.000021f;

    state.m_processingTime = 0.403182;
    state.m_maxResult = 0.000026f;
} // LoadState
