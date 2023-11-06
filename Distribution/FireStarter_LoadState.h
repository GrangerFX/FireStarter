#pragma once
#include "FireStarterState.h"

// Run date: 11/05/23 19:31:27 Pacific Standard Time
// Run duration = 43321.932145 seconds
// Run generation = 79
// Run evolution = 13
// Run result = 0.00000259
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
// Run passes = 5
// Run generations = 100
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
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000066
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.206736f;
    data->d[1] = -1.940170f;
    data->d[2] = 1.260103f;
    data->d[3] = 0.272151f;
    data->d[4] = -1.566504f;
    data->d[5] = -0.298210f;
    data->d[6] = -1.683893f;
    data->d[7] = -1.929831f;
    data->d[8] = 0.518689f;
    data->d[9] = 0.265329f;
    data->d[10] = 0.080451f;
    data->d[11] = 1.271014f;
    data->d[12] = 1.396048f;
    data->d[13] = -0.433573f;
    data->d[14] = -0.215905f;
    data->d[15] = 2.316781f;
    data->d[16] = -0.443215f;
    data->d[17] = 0.213648f;
    data->d[18] = 1.723777f;
    data->d[19] = -1.723778f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000083
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.226039f;
    data->d[1] = 0.421710f;
    data->d[2] = -1.597972f;
    data->d[3] = -0.391259f;
    data->d[4] = 0.722231f;
    data->d[5] = 0.805330f;
    data->d[6] = 1.128977f;
    data->d[7] = 0.924782f;
    data->d[8] = 0.418399f;
    data->d[9] = -0.281169f;
    data->d[10] = 1.084519f;
    data->d[11] = -1.836790f;
    data->d[12] = 1.824210f;
    data->d[13] = -2.036898f;
    data->d[14] = -1.752365f;
    data->d[15] = 1.203992f;
    data->d[16] = -0.210012f;
    data->d[17] = -0.247878f;
    data->d[18] = 0.672145f;
    data->d[19] = -0.790276f;
    data->d[20] = 0.000000f;
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

// Variation: 2  result = 0.00000259
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.359471f;
    data->d[1] = -2.012488f;
    data->d[2] = 1.893876f;
    data->d[3] = -0.142079f;
    data->d[4] = 1.401757f;
    data->d[5] = -2.703217f;
    data->d[6] = -1.183447f;
    data->d[7] = 0.124250f;
    data->d[8] = 0.832303f;
    data->d[9] = -0.175042f;
    data->d[10] = 0.098591f;
    data->d[11] = -1.670467f;
    data->d[12] = -0.463459f;
    data->d[13] = -3.326441f;
    data->d[14] = 2.384753f;
    data->d[15] = 1.746312f;
    data->d[16] = 0.017630f;
    data->d[17] = -0.483813f;
    data->d[18] = -1.198867f;
    data->d[19] = 1.722356f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000003f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 0, 6);
    instructions->SetOperation(2, 1, 25);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 17);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 16);
    instructions->SetOperation(17, 1, 0);
    instructions->SetOperation(18, 1, 24);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 22);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 1, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 79;
    state.m_evolution = 13;
    state.m_index = 55;
    state.m_id = 19;
    state.m_copy_id = 46;
    state.m_test = 13;
    state.m_seed = 16183455847631767332;
    state.m_maxResult = 0.000003f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
