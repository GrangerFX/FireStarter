#pragma once
#include "FireStarterState.h"

// Run date: 09/02/23 15:37:50 Pacific Daylight Time
// Run duration = 11356.690021 seconds
// Run generation = 53
// Run evolution = 4
// Run result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.342744f;
    data->d[1] = -3.078887f;
    data->d[2] = -1.620115f;
    data->d[3] = -1.645365f;
    data->d[4] = 0.374717f;
    data->d[5] = -1.473062f;
    data->d[6] = 1.752784f;
    data->d[7] = 0.542403f;
    data->d[8] = -0.330474f;
    data->d[9] = 0.519861f;
    data->d[10] = -1.072582f;
    data->d[11] = -1.532738f;
    data->d[12] = -0.963374f;
    data->d[13] = -0.174696f;
    data->d[14] = 0.760078f;
    data->d[15] = -0.623002f;
    data->d[16] = -1.892108f;
    data->d[17] = -0.450310f;
    data->d[18] = 0.727807f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.884602f;
    data->d[1] = -1.970341f;
    data->d[2] = 0.779417f;
    data->d[3] = 2.465304f;
    data->d[4] = -0.393026f;
    data->d[5] = 0.210656f;
    data->d[6] = -0.032644f;
    data->d[7] = 1.046298f;
    data->d[8] = 0.371567f;
    data->d[9] = -0.882479f;
    data->d[10] = -1.033362f;
    data->d[11] = 0.820138f;
    data->d[12] = -0.831643f;
    data->d[13] = 0.671850f;
    data->d[14] = -0.581979f;
    data->d[15] = -0.041965f;
    data->d[16] = -0.694819f;
    data->d[17] = 1.615519f;
    data->d[18] = -0.596345f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000048
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.627499f;
    data->d[1] = -0.995612f;
    data->d[2] = 0.551093f;
    data->d[3] = -1.355278f;
    data->d[4] = 2.295083f;
    data->d[5] = 1.118535f;
    data->d[6] = -1.127306f;
    data->d[7] = -0.071499f;
    data->d[8] = 0.505974f;
    data->d[9] = 0.340938f;
    data->d[10] = -1.171706f;
    data->d[11] = -0.974144f;
    data->d[12] = 0.279116f;
    data->d[13] = -2.174352f;
    data->d[14] = -1.080462f;
    data->d[15] = 0.085494f;
    data->d[16] = 0.059901f;
    data->d[17] = -2.151404f;
    data->d[18] = -1.640779f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 1, 14);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 1, 7);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 25);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 13);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 1);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 21);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 21);
    instructions->SetOperation(27, 0, 6);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 3);
    instructions->SetOperation(31, 1, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 53;
    state.m_evolution = 4;
    state.m_index = 42;
    state.m_test = 14;
    state.m_seed = 16949436779274630157;
} // LoadState
