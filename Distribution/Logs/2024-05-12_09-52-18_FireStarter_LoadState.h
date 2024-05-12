#pragma once
#include "FireStarterState.h"

// Run date: 05/12/24 09:52:18 Pacific Daylight Time
// Run duration = 393.305647 seconds
// Run generation = 245
// Run evolution = 6
// Run max result = 0.00000072
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.410795f;
    data->d[1] = -1.290552f;
    data->d[2] = -2.692415f;
    data->d[3] = -0.719308f;
    data->d[4] = -0.620041f;
    data->d[5] = -1.331214f;
    data->d[6] = -0.789675f;
    data->d[7] = 0.001766f;
    data->d[8] = -0.048598f;
    data->d[9] = 1.320711f;
    data->d[10] = -0.239234f;
    data->d[11] = -1.561461f;
    data->d[12] = 0.105903f;
    data->d[13] = -1.102039f;
    data->d[14] = 2.542830f;
    data->d[15] = 3.246513f;
    data->d[16] = -1.525488f;
    data->d[17] = -0.900828f;
    data->d[18] = -1.177824f;
    data->d[19] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.448140f;
    data->d[1] = 1.385049f;
    data->d[2] = 0.054815f;
    data->d[3] = -2.230282f;
    data->d[4] = -0.882073f;
    data->d[5] = 4.233927f;
    data->d[6] = 1.985874f;
    data->d[7] = 1.534165f;
    data->d[8] = -7.123650f;
    data->d[9] = 0.002127f;
    data->d[10] = -0.472153f;
    data->d[11] = 2.144703f;
    data->d[12] = -1.126078f;
    data->d[13] = -1.714453f;
    data->d[14] = 5.250371f;
    data->d[15] = 1.595687f;
    data->d[16] = -1.918512f;
    data->d[17] = -0.068948f;
    data->d[18] = -2.697675f;
    data->d[19] = -0.118132f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000026
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.677566f;
    data->d[1] = -1.773864f;
    data->d[2] = -1.024396f;
    data->d[3] = -0.595959f;
    data->d[4] = -0.890919f;
    data->d[5] = 2.295609f;
    data->d[6] = -0.032883f;
    data->d[7] = 0.000930f;
    data->d[8] = -0.532634f;
    data->d[9] = -0.346157f;
    data->d[10] = -1.741459f;
    data->d[11] = 0.958193f;
    data->d[12] = 0.451056f;
    data->d[13] = 0.120505f;
    data->d[14] = 0.140727f;
    data->d[15] = 3.226840f;
    data->d[16] = -0.107678f;
    data->d[17] = -3.379694f;
    data->d[18] = -0.979893f;
    data->d[19] = 0.523599f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 8);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 1, 21);
    instructions->SetOperation(6, 1, 17);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 0, 21);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 1, 14);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 1, 23);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 0, 29);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 245;
    state.m_evolution = 6;
    state.m_index = 6;
    state.m_copy_index = 29;
    state.m_id = 29;
    state.m_test = 0;
    state.m_seed = 10725974463823628284;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000307f;
    state.m_optimizeValid = true;
} // LoadState
