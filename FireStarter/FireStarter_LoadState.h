#include "FireStarter.h"

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)2;
    program.m_opcodes[1] = (FireStarterOpcode)3;
    program.m_instructions.resize(32);
    program.m_instructions[0].opcode = 170182658;
    program.m_instructions[1].opcode = 840192019;
    program.m_instructions[2].opcode = 810080290;
    program.m_instructions[3].opcode = 1014034483;
    program.m_instructions[4].opcode = 977850434;
    program.m_instructions[5].opcode = 235964499;
    program.m_instructions[6].opcode = 777826386;
    program.m_instructions[7].opcode = 813193315;
    program.m_instructions[8].opcode = 107001922;
    program.m_instructions[9].opcode = 437827619;
    program.m_instructions[10].opcode = 677695602;
    program.m_instructions[11].opcode = 102021171;
    program.m_instructions[12].opcode = 843870274;
    program.m_instructions[13].opcode = 574660739;
    program.m_instructions[14].opcode = 705953938;
    program.m_instructions[15].opcode = 134527139;
    program.m_instructions[16].opcode = 305422514;
    program.m_instructions[17].opcode = 913348803;
    program.m_instructions[18].opcode = 805847250;
    program.m_instructions[19].opcode = 235411587;
    program.m_instructions[20].opcode = 101751010;
    program.m_instructions[21].opcode = 7659763;
    program.m_instructions[22].opcode = 843323650;
    program.m_instructions[23].opcode = 577040467;
    program.m_instructions[24].opcode = 306196578;
    program.m_instructions[25].opcode = 170973315;
    program.m_instructions[26].opcode = 343422994;
    program.m_instructions[27].opcode = 943769875;
    program.m_instructions[28].opcode = 509407442;
    program.m_instructions[29].opcode = 742967587;
    program.m_instructions[30].opcode = 874023058;
    program.m_instructions[31].opcode = 140798067;
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 19;
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    LoadProgram(state.m_program);

    state.m_result0.data.d[0] = 0.569920f;
    state.m_result0.data.d[1] = -1.790603f;
    state.m_result0.data.d[2] = -0.801878f;
    state.m_result0.data.d[3] = 0.002406f;
    state.m_result0.data.d[4] = -1.085438f;
    state.m_result0.data.d[5] = 0.003137f;
    state.m_result0.data.d[6] = -1.307473f;
    state.m_result0.data.d[7] = 0.886324f;
    state.m_result0.data.d[8] = 1.558194f;
    state.m_result0.data.d[9] = 29.188852f;
    state.m_result0.data.d[10] = -21.529325f;
    state.m_result0.data.d[11] = 0.003427f;
    state.m_result0.data.d[12] = -0.584813f;
    state.m_result0.data.d[13] = -0.004082f;
    state.m_result0.data.d[14] = -2.100516f;
    state.m_result0.data.d[15] = -23.070280f;
    state.m_result0.data.d[16] = -0.052285f;
    state.m_result0.data.d[17] = -0.012178f;
    state.m_result0.data.d[18] = -0.000007f;
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
    state.m_result0.result = 0.000272f;

    state.m_result1.data.d[0] = 0.584041f;
    state.m_result1.data.d[1] = -1.832860f;
    state.m_result1.data.d[2] = -0.865238f;
    state.m_result1.data.d[3] = -0.001807f;
    state.m_result1.data.d[4] = -1.055369f;
    state.m_result1.data.d[5] = -0.006508f;
    state.m_result1.data.d[6] = -1.486934f;
    state.m_result1.data.d[7] = 0.886853f;
    state.m_result1.data.d[8] = 1.550317f;
    state.m_result1.data.d[9] = 28.155954f;
    state.m_result1.data.d[10] = -20.107454f;
    state.m_result1.data.d[11] = 0.007152f;
    state.m_result1.data.d[12] = -0.362341f;
    state.m_result1.data.d[13] = -0.010055f;
    state.m_result1.data.d[14] = -2.856197f;
    state.m_result1.data.d[15] = -25.374146f;
    state.m_result1.data.d[16] = 0.029329f;
    state.m_result1.data.d[17] = -0.008694f;
    state.m_result1.data.d[18] = 0.000167f;
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
    state.m_result1.result = 0.001740f;

    state.m_processingTime = 0.483239;
    state.m_maxResult = 0.001740f;
} // LoadState
