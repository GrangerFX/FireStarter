#pragma once
#include "FireStarterState.h"

// Run date: 06/18/24 15:32:05 Pacific Daylight Time
// Run duration = 188.934316 seconds
// Run generation = 81
// Run evolution = 5
// Run max result = 0.00001808
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001808
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141594f;
    data->d[1] = -0.180704f;
    data->d[2] = -0.000000f;
    data->d[3] = -3.759333f;
    data->d[4] = -0.775692f;
    data->d[5] = 0.379029f;
    data->d[6] = 1.596752f;
    data->d[7] = -3.739875f;
    data->d[8] = 0.828506f;
    data->d[9] = -0.000000f;
    data->d[10] = -0.212733f;
    data->d[11] = -2.146071f;
    data->d[12] = 2.146070f;
    data->d[13] = -0.564079f;
    data->d[14] = 3.299012f;
    data->d[15] = 1.743495f;
    data->d[16] = -0.113209f;
    data->d[17] = 2.851067f;
    data->d[18] = 0.007416f;
    data->d[19] = 2.770761f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000018f;
} // LoadVariation0

// Variation: 1  result = 0.00000519
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090708f;
    data->d[1] = 0.115443f;
    data->d[2] = 0.000011f;
    data->d[3] = 2.985421f;
    data->d[4] = -2.335619f;
    data->d[5] = 1.318279f;
    data->d[6] = -4.037511f;
    data->d[7] = -0.490853f;
    data->d[8] = 0.105259f;
    data->d[9] = 0.000018f;
    data->d[10] = -2.818242f;
    data->d[11] = -0.801359f;
    data->d[12] = 0.683172f;
    data->d[13] = -0.582450f;
    data->d[14] = -1.223978f;
    data->d[15] = -6.504360f;
    data->d[16] = 1.194194f;
    data->d[17] = -1.992888f;
    data->d[18] = -0.053222f;
    data->d[19] = -2.441861f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00001663
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.618561f;
    data->d[1] = -0.182692f;
    data->d[2] = -0.000189f;
    data->d[3] = -0.838557f;
    data->d[4] = 0.581101f;
    data->d[5] = -0.516491f;
    data->d[6] = -0.047074f;
    data->d[7] = 2.627969f;
    data->d[8] = -0.788927f;
    data->d[9] = -0.000011f;
    data->d[10] = 9.075820f;
    data->d[11] = -0.673036f;
    data->d[12] = 1.196054f;
    data->d[13] = 0.121747f;
    data->d[14] = -0.534154f;
    data->d[15] = -1.779960f;
    data->d[16] = -0.103604f;
    data->d[17] = -4.731739f;
    data->d[18] = -1.259408f;
    data->d[19] = 5.426555f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000017f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000018f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 1, 11);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 1, 1);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 11);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 1, 29);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 26);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 81;
    state.m_evolution = 5;
    state.m_index = 15;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 2679590492079959742;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000034f;
    state.m_maxResult = 0.000018f;
    state.m_evolveWeight = 0.002696f;
    state.m_optimizeValid = true;
} // LoadState
