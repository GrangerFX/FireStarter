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
    program.m_instructions[7].opcode = 1044381731;
    program.m_instructions[8].opcode = 1007206514;
    program.m_instructions[9].opcode = 402673699;
    program.m_instructions[10].opcode = 273942546;
    program.m_instructions[11].opcode = 168845443;
    program.m_instructions[12].opcode = 571480210;
    program.m_instructions[13].opcode = 843862179;
    program.m_instructions[14].opcode = 276095154;
    program.m_instructions[15].opcode = 373866691;
    program.m_instructions[16].opcode = 135004322;
    program.m_instructions[17].opcode = 575723731;
    program.m_instructions[18].opcode = 241713378;
    program.m_instructions[19].opcode = 291043;
    program.m_instructions[20].opcode = 674281570;
    program.m_instructions[21].opcode = 839938211;
    program.m_instructions[22].opcode = 977070322;
    program.m_instructions[23].opcode = 778842371;
    program.m_instructions[24].opcode = 708374802;
    program.m_instructions[25].opcode = 539547875;
    program.m_instructions[26].opcode = 575723794;
    program.m_instructions[27].opcode = 913318179;
    program.m_instructions[28].opcode = 307548450;
    program.m_instructions[29].opcode = 369910067;
    program.m_instructions[30].opcode = 507297906;
    program.m_instructions[31].opcode = 674500931;
    program.m_programMode = (FireStarterProgramMode)0;
    program.m_dataSize = 21;
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    LoadProgram(state.m_program);

    state.m_result0.data.d[0] = 0.927614f;
    state.m_result0.data.d[1] = -2.914185f;
    state.m_result0.data.d[2] = -0.693461f;
    state.m_result0.data.d[3] = 8.802917f;
    state.m_result0.data.d[4] = 9.007649f;
    state.m_result0.data.d[5] = 9.691804f;
    state.m_result0.data.d[6] = -0.000000f;
    state.m_result0.data.d[7] = 0.558333f;
    state.m_result0.data.d[8] = 1.178792f;
    state.m_result0.data.d[9] = 0.144322f;
    state.m_result0.data.d[10] = 0.776964f;
    state.m_result0.data.d[11] = -0.100895f;
    state.m_result0.data.d[12] = -2.381036f;
    state.m_result0.data.d[13] = 0.698032f;
    state.m_result0.data.d[14] = -0.433798f;
    state.m_result0.data.d[15] = 0.414991f;
    state.m_result0.data.d[16] = 0.479293f;
    state.m_result0.data.d[17] = 2.059347f;
    state.m_result0.data.d[18] = -1.421481f;
    state.m_result0.data.d[19] = -0.603385f;
    state.m_result0.data.d[20] = 0.000001f;
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

    state.m_result1.data.d[0] = 0.936929f;
    state.m_result1.data.d[1] = -2.895726f;
    state.m_result1.data.d[2] = -0.657737f;
    state.m_result1.data.d[3] = 9.114219f;
    state.m_result1.data.d[4] = 6.068958f;
    state.m_result1.data.d[5] = 11.428276f;
    state.m_result1.data.d[6] = -0.000000f;
    state.m_result1.data.d[7] = 0.551456f;
    state.m_result1.data.d[8] = 1.434550f;
    state.m_result1.data.d[9] = 0.150615f;
    state.m_result1.data.d[10] = 0.715327f;
    state.m_result1.data.d[11] = -0.087205f;
    state.m_result1.data.d[12] = -2.547664f;
    state.m_result1.data.d[13] = 0.753104f;
    state.m_result1.data.d[14] = -0.436309f;
    state.m_result1.data.d[15] = 0.417648f;
    state.m_result1.data.d[16] = 0.455785f;
    state.m_result1.data.d[17] = 2.072029f;
    state.m_result1.data.d[18] = -1.436588f;
    state.m_result1.data.d[19] = 0.015708f;
    state.m_result1.data.d[20] = -0.118131f;
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

    state.m_processingTime = 0.409909;
    state.m_maxResult = 0.000000f;
} // LoadState
