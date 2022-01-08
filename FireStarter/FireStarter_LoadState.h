#include "FireStarter.h"

void LoadProgram(FireStarterProgram& program)
{
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)2;
    program.m_opcodes[1] = (FireStarterOpcode)3;
    program.m_instructions.resize(32);
    program.m_instructions[0].opcode = 105416706;
    program.m_instructions[1].opcode = 476602387;
    program.m_instructions[2].opcode = 947169314;
    program.m_instructions[3].opcode = 577777715;
    program.m_instructions[4].opcode = 172238866;
    program.m_instructions[5].opcode = 742975539;
    program.m_instructions[6].opcode = 70799426;
    program.m_instructions[7].opcode = 746332243;
    program.m_instructions[8].opcode = 442015842;
    program.m_instructions[9].opcode = 577003635;
    program.m_instructions[10].opcode = 139999314;
    program.m_instructions[11].opcode = 974927955;
    program.m_instructions[12].opcode = 69521538;
    program.m_instructions[13].opcode = 643326099;
    program.m_instructions[14].opcode = 947396770;
    program.m_instructions[15].opcode = 639150259;
    program.m_instructions[16].opcode = 171225282;
    program.m_instructions[17].opcode = 406354083;
    program.m_instructions[18].opcode = 274225330;
    program.m_instructions[19].opcode = 301996227;
    program.m_instructions[20].opcode = 873261266;
    program.m_instructions[21].opcode = 1014802659;
    program.m_instructions[22].opcode = 773630194;
    program.m_instructions[23].opcode = 268441715;
    program.m_instructions[24].opcode = 643309650;
    program.m_instructions[25].opcode = 2416899;
    program.m_instructions[26].opcode = 268965938;
    program.m_instructions[27].opcode = 508338451;
    program.m_instructions[28].opcode = 878186754;
    program.m_instructions[29].opcode = 169119811;
    program.m_instructions[30].opcode = 640442402;
    program.m_instructions[31].opcode = 107479331;
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 19;
} // LoadProgram

void LoadState(FireStarterState& state)
{
    LoadProgram(state.m_program);

    state.m_result0.data.d[0] = 0.288560;
    state.m_result0.data.d[1] = -0.906578;
    state.m_result0.data.d[2] = 0.346084;
    state.m_result0.data.d[3] = -0.346043;
    state.m_result0.data.d[4] = 0.968992;
    state.m_result0.data.d[5] = -0.729204;
    state.m_result0.data.d[6] = 0.329383;
    state.m_result0.data.d[7] = -1.198706;
    state.m_result0.data.d[8] = 0.438703;
    state.m_result0.data.d[9] = -0.190072;
    state.m_result0.data.d[10] = -0.218142;
    state.m_result0.data.d[11] = 0.240372;
    state.m_result0.data.d[12] = 0.891292;
    state.m_result0.data.d[13] = 0.030582;
    state.m_result0.data.d[14] = 0.155239;
    state.m_result0.data.d[15] = 0.027638;
    state.m_result0.data.d[16] = -0.576269;
    state.m_result0.data.d[17] = -0.257056;
    state.m_result0.data.d[18] = -0.000135;
    state.m_result0.data.d[19] = -0.229741;
    state.m_result0.data.d[20] = 1.179767;
    state.m_result0.data.d[21] = 0.066788;
    state.m_result0.data.d[22] = 0.658075;
    state.m_result0.data.d[23] = 0.236062;
    state.m_result0.data.d[24] = 0.000000;
    state.m_result0.data.d[25] = 0.000000;
    state.m_result0.data.d[26] = 0.000000;
    state.m_result0.data.d[27] = 0.000000;
    state.m_result0.data.d[28] = 0.000000;
    state.m_result0.data.d[29] = 0.000000;
    state.m_result0.data.d[30] = 0.000000;
    state.m_result0.data.d[31] = 0.000000;
    state.m_result0.result = 0.000010;

    state.m_result1.data.d[0] = 0.391981;
    state.m_result1.data.d[1] = -1.026229;
    state.m_result1.data.d[2] = 0.761381;
    state.m_result1.data.d[3] = -0.761324;
    state.m_result1.data.d[4] = -0.142412;
    state.m_result1.data.d[5] = 0.884228;
    state.m_result1.data.d[6] = -0.933176;
    state.m_result1.data.d[7] = -0.125559;
    state.m_result1.data.d[8] = -0.127825;
    state.m_result1.data.d[9] = 1.082693;
    state.m_result1.data.d[10] = -0.397337;
    state.m_result1.data.d[11] = -0.759085;
    state.m_result1.data.d[12] = -0.369776;
    state.m_result1.data.d[13] = 0.018575;
    state.m_result1.data.d[14] = -2.185133;
    state.m_result1.data.d[15] = 0.003142;
    state.m_result1.data.d[16] = 0.142739;
    state.m_result1.data.d[17] = 0.322198;
    state.m_result1.data.d[18] = 0.523538;
    state.m_result1.data.d[19] = -0.229741;
    state.m_result1.data.d[20] = 1.179767;
    state.m_result1.data.d[21] = 0.066788;
    state.m_result1.data.d[22] = 0.658075;
    state.m_result1.data.d[23] = 0.236062;
    state.m_result1.data.d[24] = 0.000000;
    state.m_result1.data.d[25] = 0.000000;
    state.m_result1.data.d[26] = 0.000000;
    state.m_result1.data.d[27] = 0.000000;
    state.m_result1.data.d[28] = 0.000000;
    state.m_result1.data.d[29] = 0.000000;
    state.m_result1.data.d[30] = 0.000000;
    state.m_result1.data.d[31] = 0.000000;
    state.m_result1.result = 0.000006;

    state.m_processingTime = 2.826592;
    state.m_maxResult = 0.000010;
} // LoadState

