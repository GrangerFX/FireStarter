#include "FireStarter.h"

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)2;
    program.m_opcodes[1] = (FireStarterOpcode)3;
    program.m_instructions.resize(32);
    program.m_instructions[0].opcode = 779364354;
    program.m_instructions[1].opcode = 236767251;
    program.m_instructions[2].opcode = 805849122;
    program.m_instructions[3].opcode = 309643315;
    program.m_instructions[4].opcode = 571211842;
    program.m_instructions[5].opcode = 876095571;
    program.m_instructions[6].opcode = 72413282;
    program.m_instructions[7].opcode = 1044381715;
    program.m_instructions[8].opcode = 1007206514;
    program.m_instructions[9].opcode = 402673747;
    program.m_instructions[10].opcode = 273942546;
    program.m_instructions[11].opcode = 168845443;
    program.m_instructions[12].opcode = 571480210;
    program.m_instructions[13].opcode = 843862179;
    program.m_instructions[14].opcode = 276095154;
    program.m_instructions[15].opcode = 373866691;
    program.m_instructions[16].opcode = 135004354;
    program.m_instructions[17].opcode = 575723731;
    program.m_instructions[18].opcode = 241713218;
    program.m_instructions[19].opcode = 291043;
    program.m_instructions[20].opcode = 674281522;
    program.m_instructions[21].opcode = 839938291;
    program.m_instructions[22].opcode = 977070338;
    program.m_instructions[23].opcode = 778842387;
    program.m_instructions[24].opcode = 708374802;
    program.m_instructions[25].opcode = 539547667;
    program.m_instructions[26].opcode = 575723682;
    program.m_instructions[27].opcode = 913318179;
    program.m_instructions[28].opcode = 307548450;
    program.m_instructions[29].opcode = 369910067;
    program.m_instructions[30].opcode = 507297858;
    program.m_instructions[31].opcode = 674500931;
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 21;
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    LoadProgram(state.m_program);

    state.m_result0.data.d[0] = -0.646812f;
    state.m_result0.data.d[1] = 0.852414f;
    state.m_result0.data.d[2] = -0.399541f;
    state.m_result0.data.d[3] = -0.467955f;
    state.m_result0.data.d[4] = -0.742798f;
    state.m_result0.data.d[5] = -0.023894f;
    state.m_result0.data.d[6] = 0.598775f;
    state.m_result0.data.d[7] = -0.139734f;
    state.m_result0.data.d[8] = 0.224145f;
    state.m_result0.data.d[9] = 0.262392f;
    state.m_result0.data.d[10] = -0.888789f;
    state.m_result0.data.d[11] = -1.460212f;
    state.m_result0.data.d[12] = 0.926282f;
    state.m_result0.data.d[13] = -0.420153f;
    state.m_result0.data.d[14] = 0.814381f;
    state.m_result0.data.d[15] = 1.617430f;
    state.m_result0.data.d[16] = 0.052022f;
    state.m_result0.data.d[17] = 0.153610f;
    state.m_result0.data.d[18] = 1.437820f;
    state.m_result0.data.d[19] = -1.182027f;
    state.m_result0.data.d[20] = 0.012947f;
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
    state.m_result0.result = 0.000147f;

    state.m_result1.data.d[0] = 0.635886f;
    state.m_result1.data.d[1] = -0.697097f;
    state.m_result1.data.d[2] = -0.553038f;
    state.m_result1.data.d[3] = 0.533378f;
    state.m_result1.data.d[4] = 0.275275f;
    state.m_result1.data.d[5] = 0.300110f;
    state.m_result1.data.d[6] = -1.090370f;
    state.m_result1.data.d[7] = -0.170969f;
    state.m_result1.data.d[8] = 0.499506f;
    state.m_result1.data.d[9] = 0.095868f;
    state.m_result1.data.d[10] = 0.874769f;
    state.m_result1.data.d[11] = 1.428909f;
    state.m_result1.data.d[12] = 0.521133f;
    state.m_result1.data.d[13] = -0.604094f;
    state.m_result1.data.d[14] = -0.371962f;
    state.m_result1.data.d[15] = 1.360465f;
    state.m_result1.data.d[16] = -0.011695f;
    state.m_result1.data.d[17] = -1.316438f;
    state.m_result1.data.d[18] = 0.798875f;
    state.m_result1.data.d[19] = -2.977944f;
    state.m_result1.data.d[20] = 0.528571f;
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
    state.m_result1.result = 0.000196f;

    state.m_processingTime = 1.561256;
    state.m_maxResult = 0.000196f;
} // LoadState
