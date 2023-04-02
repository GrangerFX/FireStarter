#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 14:47:12 Pacific Daylight Time
// Run duration = 2813.541566 seconds
// Run generation = 142
// Run result = 0.00050163
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00034738
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.305189f;
    data->d[1] = -0.016045f;
    data->d[2] = -0.939158f;
    data->d[3] = -0.402211f;
    data->d[4] = -8.431135f;
    data->d[5] = 2.682398f;
    data->d[6] = -1.829148f;
    data->d[7] = -1.392163f;
    data->d[8] = -0.943218f;
    data->d[9] = 1.481214f;
    data->d[10] = 0.451998f;
    data->d[11] = -24.909237f;
    data->d[12] = -0.551354f;
    data->d[13] = -0.570015f;
    data->d[14] = 0.929131f;
    data->d[15] = -1.743017f;
    data->d[16] = 1.982320f;
    data->d[17] = 1.459529f;
    data->d[18] = -1.082203f;
    data->d[19] = -0.697678f;
    data->d[20] = 0.099696f;
    data->d[21] = 0.528269f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000391f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000347f;
} // LoadVariation0

// Variation: 1  result = 0.00039083
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.292193f;
    data->d[1] = -0.130800f;
    data->d[2] = 0.494340f;
    data->d[3] = -0.080328f;
    data->d[4] = -20.629705f;
    data->d[5] = -1.472689f;
    data->d[6] = -0.519006f;
    data->d[7] = -4.396733f;
    data->d[8] = -0.496749f;
    data->d[9] = 1.850471f;
    data->d[10] = 2.343877f;
    data->d[11] = 0.422622f;
    data->d[12] = -1.684758f;
    data->d[13] = 0.681871f;
    data->d[14] = -1.203865f;
    data->d[15] = 1.210779f;
    data->d[16] = -0.923684f;
    data->d[17] = -1.359023f;
    data->d[18] = 1.117797f;
    data->d[19] = 0.142904f;
    data->d[20] = 1.017604f;
    data->d[21] = -0.987526f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000502f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000391f;
} // LoadVariation1

// Variation: 2  result = 0.00050163
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.152457f;
    data->d[1] = -0.173297f;
    data->d[2] = 0.142943f;
    data->d[3] = 83.977295f;
    data->d[4] = -1.334569f;
    data->d[5] = 0.348359f;
    data->d[6] = -0.082740f;
    data->d[7] = 1.272895f;
    data->d[8] = -0.935722f;
    data->d[9] = 1.342746f;
    data->d[10] = -1.339143f;
    data->d[11] = 2.178821f;
    data->d[12] = 3.143618f;
    data->d[13] = -0.297860f;
    data->d[14] = 1.179176f;
    data->d[15] = -20.102116f;
    data->d[16] = 0.184884f;
    data->d[17] = -0.944991f;
    data->d[18] = -0.302496f;
    data->d[19] = -1.303258f;
    data->d[20] = -0.058796f;
    data->d[21] = -2.447719f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = -0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000502f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000502f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 20);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 19);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 1, 30);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 142;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 10972790290307571424;
} // LoadState
