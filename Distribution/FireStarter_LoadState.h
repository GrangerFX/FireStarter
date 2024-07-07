#pragma once
#include "FireStarterState.h"

// Run date: 07/07/24 14:43:55 Pacific Daylight Time
// Run duration = 16.451527 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00590945
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
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

    settings.m_mode = FIRESTARTER_EVOLVE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
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

// Variation: 0  result = 0.00047696
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.751299f;
    data->d[1] = 0.392088f;
    data->d[2] = -1.119865f;
    data->d[3] = -1.415588f;
    data->d[4] = 1.206558f;
    data->d[5] = 1.406577f;
    data->d[6] = 0.194628f;
    data->d[7] = 1.686949f;
    data->d[8] = 0.053813f;
    data->d[9] = -1.514560f;
    data->d[10] = 0.200447f;
    data->d[11] = -0.547208f;
    data->d[12] = -1.575806f;
    data->d[13] = -0.782626f;
    data->d[14] = -1.025286f;
    data->d[15] = 0.174049f;
    data->d[16] = 1.549561f;
    data->d[17] = 0.754187f;
    data->d[18] = 0.395467f;
    data->d[19] = 0.230874f;
    data->d[20] = -1.748804f;
    data->d[21] = 0.486544f;
    data->d[22] = -0.678238f;
    data->d[23] = -1.390294f;
    data->d[24] = -0.633824f;
    data->d[25] = 1.627997f;
    data->d[26] = -1.787240f;
    data->d[27] = -1.443422f;
    data->d[28] = -0.449304f;
    data->d[29] = -0.386482f;
    *(result->MinResult()) = 0.000477f;
} // LoadVariation0

// Variation: 1  result = 0.00156951
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.263697f;
    data->d[1] = 0.779758f;
    data->d[2] = 0.429622f;
    data->d[3] = -1.982975f;
    data->d[4] = -0.146030f;
    data->d[5] = 0.255715f;
    data->d[6] = 0.005175f;
    data->d[7] = -0.624518f;
    data->d[8] = 0.638269f;
    data->d[9] = 0.328222f;
    data->d[10] = -1.931507f;
    data->d[11] = 1.015492f;
    data->d[12] = -1.296841f;
    data->d[13] = -1.720746f;
    data->d[14] = -0.828042f;
    data->d[15] = 0.951709f;
    data->d[16] = -0.014069f;
    data->d[17] = 0.358262f;
    data->d[18] = 0.550321f;
    data->d[19] = 0.634898f;
    data->d[20] = -1.865885f;
    data->d[21] = 1.926578f;
    data->d[22] = 0.741785f;
    data->d[23] = -0.882788f;
    data->d[24] = -0.830041f;
    data->d[25] = -1.434281f;
    data->d[26] = 1.004565f;
    data->d[27] = 0.543859f;
    data->d[28] = -1.407439f;
    data->d[29] = -0.398529f;
    *(result->MinResult()) = 0.001570f;
} // LoadVariation1

// Variation: 2  result = 0.00590945
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.879469f;
    data->d[1] = -0.907394f;
    data->d[2] = 1.239916f;
    data->d[3] = 1.103013f;
    data->d[4] = -0.931857f;
    data->d[5] = -0.744797f;
    data->d[6] = 0.588586f;
    data->d[7] = 0.736395f;
    data->d[8] = -1.580989f;
    data->d[9] = 0.612583f;
    data->d[10] = 1.407750f;
    data->d[11] = -1.372962f;
    data->d[12] = -0.899546f;
    data->d[13] = 0.666478f;
    data->d[14] = 0.909962f;
    data->d[15] = 0.393364f;
    data->d[16] = -1.702320f;
    data->d[17] = 1.319244f;
    data->d[18] = -0.841720f;
    data->d[19] = 0.244337f;
    data->d[20] = 1.284875f;
    data->d[21] = 0.968977f;
    data->d[22] = 1.488330f;
    data->d[23] = -1.351028f;
    data->d[24] = 1.832232f;
    data->d[25] = 1.226925f;
    data->d[26] = 1.970096f;
    data->d[27] = 0.279739f;
    data->d[28] = -1.232596f;
    data->d[29] = 1.510971f;
    *(result->MinResult()) = 0.005909f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.005909f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 0, 0);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 0);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.005909f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
