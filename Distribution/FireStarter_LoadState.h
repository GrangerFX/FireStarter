#pragma once
#include "FireStarterState.h"

// Run date: 08/10/24 16:03:30 Pacific Daylight Time
// Run duration = 54.070295 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.19172351
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
// Run population = 16384
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
    settings.m_population = 16384;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.14005488
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.408371f;
    data->d[1] = -1.583161f;
    data->d[2] = -0.849724f;
    data->d[3] = -1.655476f;
    data->d[4] = -1.479649f;
    data->d[5] = -0.720825f;
    data->d[6] = 1.308779f;
    data->d[7] = -1.742601f;
    data->d[8] = 0.287353f;
    data->d[9] = 0.558908f;
    data->d[10] = 0.335517f;
    data->d[11] = 0.944109f;
    data->d[12] = 0.412285f;
    data->d[13] = -1.884887f;
    data->d[14] = 0.666490f;
    data->d[15] = 0.329655f;
    data->d[16] = -1.667156f;
    data->d[17] = -1.128727f;
    data->d[18] = -0.317408f;
    data->d[19] = -1.666985f;
    data->d[20] = -1.759388f;
    data->d[21] = -1.180569f;
    data->d[22] = 1.668268f;
    data->d[23] = -1.498701f;
    data->d[24] = 1.195824f;
    data->d[25] = 1.623768f;
    data->d[26] = -1.083349f;
    data->d[27] = 0.310635f;
    data->d[28] = 1.939278f;
    data->d[29] = 1.947474f;
    *(result->MinResult()) = 0.140055f;
} // LoadVariation0

// Variation: 1  result = 0.11554945
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.081073f;
    data->d[1] = -1.604334f;
    data->d[2] = 1.368515f;
    data->d[3] = -1.737967f;
    data->d[4] = -1.797324f;
    data->d[5] = -1.218634f;
    data->d[6] = 1.405374f;
    data->d[7] = 0.224530f;
    data->d[8] = -0.109936f;
    data->d[9] = 0.989089f;
    data->d[10] = 1.858551f;
    data->d[11] = -1.986905f;
    data->d[12] = -1.052256f;
    data->d[13] = -0.616384f;
    data->d[14] = 0.177241f;
    data->d[15] = -0.522348f;
    data->d[16] = 1.335404f;
    data->d[17] = -1.987761f;
    data->d[18] = 0.730943f;
    data->d[19] = -1.376899f;
    data->d[20] = -1.739513f;
    data->d[21] = 0.701392f;
    data->d[22] = 0.198869f;
    data->d[23] = -0.029264f;
    data->d[24] = -1.110551f;
    data->d[25] = 0.619590f;
    data->d[26] = -0.174891f;
    data->d[27] = 1.894374f;
    data->d[28] = -0.309583f;
    data->d[29] = 1.916309f;
    *(result->MinResult()) = 0.115549f;
} // LoadVariation1

// Variation: 2  result = 0.19172351
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.281202f;
    data->d[1] = -0.928906f;
    data->d[2] = 0.409082f;
    data->d[3] = 1.330510f;
    data->d[4] = -1.286436f;
    data->d[5] = -1.410386f;
    data->d[6] = -0.325134f;
    data->d[7] = -0.304394f;
    data->d[8] = 0.632117f;
    data->d[9] = -1.914329f;
    data->d[10] = 0.680273f;
    data->d[11] = 1.004260f;
    data->d[12] = -0.501337f;
    data->d[13] = -0.236212f;
    data->d[14] = -1.108804f;
    data->d[15] = 1.922347f;
    data->d[16] = 0.548341f;
    data->d[17] = 1.431269f;
    data->d[18] = 1.162236f;
    data->d[19] = -1.509270f;
    data->d[20] = 0.871983f;
    data->d[21] = -1.742779f;
    data->d[22] = 1.095777f;
    data->d[23] = -0.146716f;
    data->d[24] = -0.762990f;
    data->d[25] = 0.673668f;
    data->d[26] = -0.458757f;
    data->d[27] = -0.478497f;
    data->d[28] = -1.418197f;
    data->d[29] = -1.093951f;
    *(result->MinResult()) = 0.191724f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.191724f;
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
    state.m_maxResult = 0.191724f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
