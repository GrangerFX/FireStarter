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

inline void LoadState(FireStarterState& state)
{
    LoadProgram(state.m_program);

    state.m_result0.data.d[0] = 0.625101f;
    state.m_result0.data.d[1] = -1.963810f;
    state.m_result0.data.d[2] = 0.132740f;
    state.m_result0.data.d[3] = -0.132741f;
    state.m_result0.data.d[4] = 0.068899f;
    state.m_result0.data.d[5] = -0.020627f;
    state.m_result0.data.d[6] = 6.372983f;
    state.m_result0.data.d[7] = -4.410119f;
    state.m_result0.data.d[8] = -6.375785f;
    state.m_result0.data.d[9] = 7.536968f;
    state.m_result0.data.d[10] = 2.627861f;
    state.m_result0.data.d[11] = -17.460800f;
    state.m_result0.data.d[12] = 22.221685f;
    state.m_result0.data.d[13] = 15.905842f;
    state.m_result0.data.d[14] = -8.541908f;
    state.m_result0.data.d[15] = -0.000001f;
    state.m_result0.data.d[16] = -4.158216f;
    state.m_result0.data.d[17] = 1.503352f;
    state.m_result0.data.d[18] = 0.000006f;
    state.m_result0.data.d[19] = 0.000000f;
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
    state.m_result0.result = 0.000000f;

    state.m_result1.data.d[0] = 0.609682f;
    state.m_result1.data.d[1] = -1.884315f;
    state.m_result1.data.d[2] = 0.138154f;
    state.m_result1.data.d[3] = -0.138156f;
    state.m_result1.data.d[4] = 0.056093f;
    state.m_result1.data.d[5] = -0.000328f;
    state.m_result1.data.d[6] = 5.368011f;
    state.m_result1.data.d[7] = -4.413926f;
    state.m_result1.data.d[8] = -6.001370f;
    state.m_result1.data.d[9] = 7.266527f;
    state.m_result1.data.d[10] = 2.255331f;
    state.m_result1.data.d[11] = -17.035461f;
    state.m_result1.data.d[12] = 20.018755f;
    state.m_result1.data.d[13] = 13.055929f;
    state.m_result1.data.d[14] = -10.803656f;
    state.m_result1.data.d[15] = -0.000006f;
    state.m_result1.data.d[16] = -4.150561f;
    state.m_result1.data.d[17] = 2.301107f;
    state.m_result1.data.d[18] = -0.118124f;
    state.m_result1.data.d[19] = 0.000000f;
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
    state.m_result1.result = 0.000000f;

    state.m_processingTime = 0.433896;
    state.m_maxResult = 0.000000f;
} // LoadState
