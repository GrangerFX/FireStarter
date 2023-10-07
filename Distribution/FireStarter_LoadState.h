#pragma once
#include "FireStarterState.h"

// Run date: 10/07/23 10:23:38 Pacific Daylight Time
// Run duration = 2811.266690 seconds
// Run generation = 22
// Run evolution = 4
// Run result = 0.00000131
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
// Run tests = 8
// Run units = 4
// Run processes = 0
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
    settings.m_tests = 8;
    settings.m_units = 4;
    settings.m_processes = 0;
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.031333f;
    data->d[1] = 0.098435f;
    data->d[2] = -2.146838f;
    data->d[3] = 1.944191f;
    data->d[4] = -1.662569f;
    data->d[5] = 1.128835f;
    data->d[6] = 0.133090f;
    data->d[7] = 1.273211f;
    data->d[8] = -2.318088f;
    data->d[9] = -1.039934f;
    data->d[10] = -1.857931f;
    data->d[11] = -1.106654f;
    data->d[12] = -1.366012f;
    data->d[13] = 0.668298f;
    data->d[14] = 0.028615f;
    data->d[15] = -1.039465f;
    data->d[16] = 2.504448f;
    data->d[17] = -0.605531f;
    data->d[18] = 3.052097f;
    data->d[19] = 1.036736f;
    data->d[20] = 1.916035f;
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

// Variation: 1  result = 0.00000131
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.443589f;
    data->d[1] = -1.370982f;
    data->d[2] = -0.126073f;
    data->d[3] = 4.738830f;
    data->d[4] = 0.870317f;
    data->d[5] = -0.671352f;
    data->d[6] = -0.319290f;
    data->d[7] = -1.436370f;
    data->d[8] = -1.601952f;
    data->d[9] = -0.833345f;
    data->d[10] = -1.019570f;
    data->d[11] = -1.667774f;
    data->d[12] = -1.652111f;
    data->d[13] = 1.240433f;
    data->d[14] = -1.455173f;
    data->d[15] = -2.310309f;
    data->d[16] = 3.230933f;
    data->d[17] = -0.356502f;
    data->d[18] = -1.114143f;
    data->d[19] = 0.089810f;
    data->d[20] = -0.153804f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000072
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.458239f;
    data->d[1] = -1.199666f;
    data->d[2] = 0.300417f;
    data->d[3] = 1.172848f;
    data->d[4] = 1.840402f;
    data->d[5] = 1.106635f;
    data->d[6] = 0.107480f;
    data->d[7] = -1.349701f;
    data->d[8] = 2.577476f;
    data->d[9] = -0.718352f;
    data->d[10] = -1.727678f;
    data->d[11] = -1.302855f;
    data->d[12] = 1.577635f;
    data->d[13] = -1.390549f;
    data->d[14] = 1.602870f;
    data->d[15] = -1.653775f;
    data->d[16] = -0.204077f;
    data->d[17] = -0.485114f;
    data->d[18] = -0.375325f;
    data->d[19] = -2.183084f;
    data->d[20] = 0.921084f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
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
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 15);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 1, 12);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 1, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 22;
    state.m_evolution = 4;
    state.m_age = 1;
    state.m_index = 52;
    state.m_id = 44;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 2443369972867899643;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
} // LoadState
