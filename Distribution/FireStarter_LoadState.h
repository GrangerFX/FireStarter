#pragma once
#include "FireStarterState.h"

// Run date: 07/07/24 17:08:27 Pacific Daylight Time
// Run duration = 3.375996 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.24178070
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

// Variation: 0  result = 0.19452927
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.102747f;
    data->d[1] = -0.093929f;
    data->d[2] = 1.236203f;
    data->d[3] = -0.384861f;
    data->d[4] = 1.782423f;
    data->d[5] = -0.379306f;
    data->d[6] = -1.088641f;
    data->d[7] = -0.787806f;
    data->d[8] = -1.571840f;
    data->d[9] = 1.639267f;
    data->d[10] = -1.843393f;
    data->d[11] = 1.363181f;
    data->d[12] = 0.976947f;
    data->d[13] = 0.161256f;
    data->d[14] = -0.574698f;
    data->d[15] = 0.618116f;
    data->d[16] = 0.988588f;
    data->d[17] = -1.552721f;
    data->d[18] = 1.722989f;
    data->d[19] = 1.006034f;
    data->d[20] = -0.564143f;
    data->d[21] = 0.536464f;
    data->d[22] = 0.161262f;
    data->d[23] = 1.026260f;
    data->d[24] = 1.329287f;
    data->d[25] = -1.254499f;
    data->d[26] = -0.259315f;
    data->d[27] = 0.061539f;
    data->d[28] = -1.507015f;
    data->d[29] = -1.151422f;
    *(result->MinResult()) = 0.194529f;
} // LoadVariation0

// Variation: 1  result = 0.17402852
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.142885f;
    data->d[1] = 0.121605f;
    data->d[2] = -0.736805f;
    data->d[3] = -0.402302f;
    data->d[4] = 0.977600f;
    data->d[5] = -0.050075f;
    data->d[6] = -0.926587f;
    data->d[7] = 1.620855f;
    data->d[8] = 1.220956f;
    data->d[9] = -0.921138f;
    data->d[10] = 0.363036f;
    data->d[11] = 1.907075f;
    data->d[12] = -1.194769f;
    data->d[13] = 1.652465f;
    data->d[14] = -0.845397f;
    data->d[15] = 1.417747f;
    data->d[16] = 0.441199f;
    data->d[17] = 0.013967f;
    data->d[18] = -1.397136f;
    data->d[19] = -0.882978f;
    data->d[20] = 1.101715f;
    data->d[21] = 0.897336f;
    data->d[22] = -0.253255f;
    data->d[23] = 1.652063f;
    data->d[24] = -1.882921f;
    data->d[25] = 1.705385f;
    data->d[26] = -0.046175f;
    data->d[27] = 0.646224f;
    data->d[28] = -0.215120f;
    data->d[29] = -1.956422f;
    *(result->MinResult()) = 0.174029f;
} // LoadVariation1

// Variation: 2  result = 0.24178070
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.560075f;
    data->d[1] = 0.245819f;
    data->d[2] = 0.109986f;
    data->d[3] = -1.079880f;
    data->d[4] = 1.249560f;
    data->d[5] = 0.093337f;
    data->d[6] = -0.394885f;
    data->d[7] = 0.410618f;
    data->d[8] = 0.002979f;
    data->d[9] = 0.178801f;
    data->d[10] = 0.974348f;
    data->d[11] = -0.232903f;
    data->d[12] = 1.556085f;
    data->d[13] = -0.326257f;
    data->d[14] = -1.464386f;
    data->d[15] = -0.756336f;
    data->d[16] = 0.923379f;
    data->d[17] = -1.125504f;
    data->d[18] = 1.278494f;
    data->d[19] = 1.360131f;
    data->d[20] = -1.018479f;
    data->d[21] = 1.922268f;
    data->d[22] = 0.825463f;
    data->d[23] = -0.932750f;
    data->d[24] = -1.455825f;
    data->d[25] = 0.990814f;
    data->d[26] = 1.816541f;
    data->d[27] = 0.969874f;
    data->d[28] = 0.822130f;
    data->d[29] = -1.562302f;
    *(result->MinResult()) = 0.241781f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.241781f;
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
    state.m_maxResult = 0.241781f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
