#pragma once
#include "FireStarterState.h"

// Run date: 09/10/23 11:46:36 Pacific Daylight Time
// Run duration = 1677.928283 seconds
// Run generation = 47
// Run evolution = 11
// Run result = 0.00000417
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.632950f;
    data->d[2] = 0.096374f;
    data->d[3] = 7.142021f;
    data->d[4] = -1.517354f;
    data->d[5] = 0.442661f;
    data->d[6] = -4.087566f;
    data->d[7] = 0.326636f;
    data->d[8] = 1.161029f;
    data->d[9] = -0.004248f;
    data->d[10] = 0.053992f;
    data->d[11] = -4.341779f;
    data->d[12] = -0.019878f;
    data->d[13] = -2.069767f;
    data->d[14] = -2.045576f;
    data->d[15] = -1.490745f;
    data->d[16] = 0.450507f;
    data->d[17] = -2.609313f;
    data->d[18] = 4.106668f;
    data->d[19] = -0.051054f;
    data->d[20] = 0.051055f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000268
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.165147f;
    data->d[2] = 0.940623f;
    data->d[3] = -1.937670f;
    data->d[4] = 1.052265f;
    data->d[5] = -1.848159f;
    data->d[6] = -0.883375f;
    data->d[7] = -0.112473f;
    data->d[8] = -0.078378f;
    data->d[9] = 0.000307f;
    data->d[10] = 0.175437f;
    data->d[11] = 0.331485f;
    data->d[12] = -0.622284f;
    data->d[13] = -0.902360f;
    data->d[14] = 1.846717f;
    data->d[15] = 1.410395f;
    data->d[16] = -1.206781f;
    data->d[17] = 3.326523f;
    data->d[18] = 1.407895f;
    data->d[19] = 0.706483f;
    data->d[20] = -0.824615f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00000417
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.143898f;
    data->d[2] = -1.691854f;
    data->d[3] = 2.553302f;
    data->d[4] = 3.008277f;
    data->d[5] = -1.589825f;
    data->d[6] = -0.990250f;
    data->d[7] = -0.249794f;
    data->d[8] = -1.265013f;
    data->d[9] = -0.031211f;
    data->d[10] = -0.033167f;
    data->d[11] = 2.272940f;
    data->d[12] = 0.188603f;
    data->d[13] = 0.910027f;
    data->d[14] = 1.398517f;
    data->d[15] = 1.484090f;
    data->d[16] = -1.258805f;
    data->d[17] = -0.645357f;
    data->d[18] = -2.508496f;
    data->d[19] = -0.395585f;
    data->d[20] = 0.919184f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000004f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 16);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 2);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 11);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 0, 21);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 9);
    instructions->SetOperation(18, 0, 25);
    instructions->SetOperation(19, 0, 1);
    instructions->SetOperation(20, 1, 24);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 22);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 1, 4);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 47;
    state.m_evolution = 11;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 7;
    state.m_copy_id = 9;
    state.m_test = 4;
    state.m_seed = 5094667065281674132;
    state.m_maxResult = 0.000004f;
    state.m_lastResult = 0.000005f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
