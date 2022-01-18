#include "FireStarter.h"

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_instructions.resize(32);
    program.m_instructions[0].opcode = 0;
    program.m_instructions[1].opcode = 65537;
    program.m_instructions[2].opcode = 131072;
    program.m_instructions[3].opcode = 196609;
    program.m_instructions[4].opcode = 262144;
    program.m_instructions[5].opcode = 327681;
    program.m_instructions[6].opcode = 327680;
    program.m_instructions[7].opcode = 393217;
    program.m_instructions[8].opcode = 458752;
    program.m_instructions[9].opcode = 524289;
    program.m_instructions[10].opcode = 589824;
    program.m_instructions[11].opcode = 655361;
    program.m_instructions[12].opcode = 393216;
    program.m_instructions[13].opcode = 720897;
    program.m_instructions[14].opcode = 786432;
    program.m_instructions[15].opcode = 720897;
    program.m_instructions[16].opcode = 851968;
    program.m_instructions[17].opcode = 327681;
    program.m_instructions[18].opcode = 917504;
    program.m_instructions[19].opcode = 983041;
    program.m_instructions[20].opcode = 1048576;
    program.m_instructions[21].opcode = 327681;
    program.m_instructions[22].opcode = 65536;
    program.m_instructions[23].opcode = 1114113;
    program.m_instructions[24].opcode = 1179648;
    program.m_instructions[25].opcode = 262145;
    program.m_instructions[26].opcode = 65536;
    program.m_instructions[27].opcode = 524289;
    program.m_instructions[28].opcode = 851968;
    program.m_instructions[29].opcode = 458753;
    program.m_instructions[30].opcode = 262144;
    program.m_instructions[31].opcode = 1245185;
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 20;
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    LoadProgram(state.m_program);

    state.m_result0.data.d[0] = 0.265913f;
    state.m_result0.data.d[1] = -0.835930f;
    state.m_result0.data.d[2] = 0.895861f;
    state.m_result0.data.d[3] = 0.082314f;
    state.m_result0.data.d[4] = -0.480859f;
    state.m_result0.data.d[5] = 0.039261f;
    state.m_result0.data.d[6] = -0.865577f;
    state.m_result0.data.d[7] = 1.048932f;
    state.m_result0.data.d[8] = -0.850466f;
    state.m_result0.data.d[9] = 0.503966f;
    state.m_result0.data.d[10] = -0.885390f;
    state.m_result0.data.d[11] = 0.551003f;
    state.m_result0.data.d[12] = -0.149045f;
    state.m_result0.data.d[13] = -1.231680f;
    state.m_result0.data.d[14] = -0.787059f;
    state.m_result0.data.d[15] = -0.172835f;
    state.m_result0.data.d[16] = 0.171238f;
    state.m_result0.data.d[17] = 0.087092f;
    state.m_result0.data.d[18] = 0.443304f;
    state.m_result0.data.d[19] = 0.000826f;
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
    state.m_result0.result = 0.000011f;

    state.m_result1.data.d[0] = 0.214535f;
    state.m_result1.data.d[1] = -0.571012f;
    state.m_result1.data.d[2] = 1.058796f;
    state.m_result1.data.d[3] = -0.049095f;
    state.m_result1.data.d[4] = -0.542474f;
    state.m_result1.data.d[5] = -0.034020f;
    state.m_result1.data.d[6] = -0.989398f;
    state.m_result1.data.d[7] = 0.899998f;
    state.m_result1.data.d[8] = -0.348956f;
    state.m_result1.data.d[9] = 1.278149f;
    state.m_result1.data.d[10] = -0.635030f;
    state.m_result1.data.d[11] = 0.264008f;
    state.m_result1.data.d[12] = 1.206722f;
    state.m_result1.data.d[13] = -0.548950f;
    state.m_result1.data.d[14] = -0.203169f;
    state.m_result1.data.d[15] = -1.972621f;
    state.m_result1.data.d[16] = -0.083258f;
    state.m_result1.data.d[17] = -0.128424f;
    state.m_result1.data.d[18] = 0.379759f;
    state.m_result1.data.d[19] = 0.541981f;
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
    state.m_result1.result = 0.000048f;

    state.m_processingTime = 0.270614;
    state.m_maxResult = 0.000048f;
} // LoadState
