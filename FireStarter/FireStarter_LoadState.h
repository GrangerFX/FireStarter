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
    program.m_instructions[6].opcode = 196608;
    program.m_instructions[7].opcode = 65537;
    program.m_instructions[8].opcode = 393216;
    program.m_instructions[9].opcode = 262145;
    program.m_instructions[10].opcode = 458752;
    program.m_instructions[11].opcode = 524289;
    program.m_instructions[12].opcode = 589824;
    program.m_instructions[13].opcode = 655361;
    program.m_instructions[14].opcode = 720896;
    program.m_instructions[15].opcode = 655361;
    program.m_instructions[16].opcode = 786432;
    program.m_instructions[17].opcode = 851969;
    program.m_instructions[18].opcode = 458752;
    program.m_instructions[19].opcode = 917505;
    program.m_instructions[20].opcode = 851968;
    program.m_instructions[21].opcode = 983041;
    program.m_instructions[22].opcode = 1048576;
    program.m_instructions[23].opcode = 1114113;
    program.m_instructions[24].opcode = 196608;
    program.m_instructions[25].opcode = 1179649;
    program.m_instructions[26].opcode = 983040;
    program.m_instructions[27].opcode = 983041;
    program.m_instructions[28].opcode = 393216;
    program.m_instructions[29].opcode = 1245185;
    program.m_instructions[30].opcode = 655360;
    program.m_instructions[31].opcode = 524289;
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 20;
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    LoadProgram(state.m_program);

    state.m_result[0].data.d[0] = -0.510002f;
    state.m_result[0].data.d[1] = -0.027538f;
    state.m_result[0].data.d[2] = 0.803942f;
    state.m_result[0].data.d[3] = -0.123809f;
    state.m_result[0].data.d[4] = 0.631589f;
    state.m_result[0].data.d[5] = 0.412195f;
    state.m_result[0].data.d[6] = -0.956262f;
    state.m_result[0].data.d[7] = 0.257135f;
    state.m_result[0].data.d[8] = 0.427778f;
    state.m_result[0].data.d[9] = 0.215928f;
    state.m_result[0].data.d[10] = 0.758746f;
    state.m_result[0].data.d[11] = -0.332229f;
    state.m_result[0].data.d[12] = -1.251999f;
    state.m_result[0].data.d[13] = -0.394949f;
    state.m_result[0].data.d[14] = -0.543644f;
    state.m_result[0].data.d[15] = 0.739627f;
    state.m_result[0].data.d[16] = -0.536932f;
    state.m_result[0].data.d[17] = -0.545372f;
    state.m_result[0].data.d[18] = 0.976526f;
    state.m_result[0].data.d[19] = -0.940386f;
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
    state.m_result[0].result = 0.000244f;

    state.m_processingTime = 0.000000;
    state.m_maxResult = 0.000244f;
} // LoadState
