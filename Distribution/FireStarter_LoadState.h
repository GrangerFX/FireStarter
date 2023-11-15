#pragma once
#include "FireStarterState.h"

// Run date: 11/14/23 07:54:01 Pacific Standard Time
// Run duration = 39324.288870 seconds
// Run generation = 75
// Run evolution = 14
// Run result = 0.00000048
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
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
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_optimizations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.592416f;
    data->d[1] = -1.549177f;
    data->d[2] = 0.152748f;
    data->d[3] = -12.126963f;
    data->d[4] = -0.824161f;
    data->d[5] = -3.334545f;
    data->d[6] = 0.015119f;
    data->d[7] = 1.902447f;
    data->d[8] = -0.664795f;
    data->d[9] = 0.034552f;
    data->d[10] = -1.076872f;
    data->d[11] = 1.224608f;
    data->d[12] = -0.899474f;
    data->d[13] = -0.582680f;
    data->d[14] = -0.311728f;
    data->d[15] = 0.225936f;
    data->d[16] = 0.956642f;
    data->d[17] = 1.821131f;
    data->d[18] = -1.821131f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.151851f;
    data->d[1] = -1.938807f;
    data->d[2] = -1.820494f;
    data->d[3] = 0.813089f;
    data->d[4] = -0.882337f;
    data->d[5] = -1.616803f;
    data->d[6] = -0.184355f;
    data->d[7] = 0.116045f;
    data->d[8] = -1.915054f;
    data->d[9] = 0.929403f;
    data->d[10] = -0.060827f;
    data->d[11] = 0.481248f;
    data->d[12] = -1.325878f;
    data->d[13] = 0.245011f;
    data->d[14] = 3.914987f;
    data->d[15] = 1.490279f;
    data->d[16] = 2.703739f;
    data->d[17] = 1.944928f;
    data->d[18] = -2.063060f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000031
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.199337f;
    data->d[1] = 0.581344f;
    data->d[2] = 0.125184f;
    data->d[3] = 1.297483f;
    data->d[4] = 0.030150f;
    data->d[5] = -142.898361f;
    data->d[6] = -0.553831f;
    data->d[7] = 0.159035f;
    data->d[8] = -1.895688f;
    data->d[9] = 0.809643f;
    data->d[10] = -1.924903f;
    data->d[11] = 2.040085f;
    data->d[12] = 0.294658f;
    data->d[13] = -0.170802f;
    data->d[14] = -0.072191f;
    data->d[15] = 1.154349f;
    data->d[16] = -2.345849f;
    data->d[17] = -0.542684f;
    data->d[18] = 1.066282f;
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
    instructions->SetOperation(0, 1, 9);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 1, 0);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 1, 14);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 1, 28);
    instructions->SetOperation(18, 0, 2);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 5);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 1, 21);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 1, 4);
    instructions->SetOperation(30, 1, 3);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 75;
    state.m_evolution = 14;
    state.m_index = 8;
    state.m_id = 3;
    state.m_copy_id = 61;
    state.m_test = 15;
    state.m_seed = 4378217784335083106;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
