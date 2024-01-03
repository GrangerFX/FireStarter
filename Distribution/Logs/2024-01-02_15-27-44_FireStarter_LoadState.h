#pragma once
#include "FireStarterState.h"

// Run date: 01/02/24 15:27:44 Pacific Standard Time
// Run duration = 1009.068075 seconds
// Run generation = 16
// Run evolution = 12
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_states = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000010
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.432206f;
    data->d[2] = -0.663753f;
    data->d[3] = 0.132280f;
    data->d[4] = -1.264348f;
    data->d[5] = 0.131211f;
    data->d[6] = -3.813425f;
    data->d[7] = -2.221444f;
    data->d[8] = -17.800255f;
    data->d[9] = 0.001924f;
    data->d[10] = 0.002454f;
    data->d[11] = -0.690908f;
    data->d[12] = 0.349979f;
    data->d[13] = -0.441676f;
    data->d[14] = -5530.337402f;
    data->d[15] = 0.177505f;
    data->d[16] = 1.439304f;
    data->d[17] = -0.000000f;
    data->d[18] = -0.223987f;
    data->d[19] = 2.460814f;
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
    data->d[0] = -3.090658f;
    data->d[1] = 0.163595f;
    data->d[2] = 0.014932f;
    data->d[3] = -0.376070f;
    data->d[4] = -405.321838f;
    data->d[5] = -1.056423f;
    data->d[6] = 1.831572f;
    data->d[7] = 0.006359f;
    data->d[8] = -0.836618f;
    data->d[9] = 2.350482f;
    data->d[10] = -0.310645f;
    data->d[11] = -0.012011f;
    data->d[12] = 2.698963f;
    data->d[13] = 0.919044f;
    data->d[14] = -3.188441f;
    data->d[15] = 2.257377f;
    data->d[16] = -1.635855f;
    data->d[17] = -0.045880f;
    data->d[18] = -0.741511f;
    data->d[19] = -3.472396f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -2.803334f;
    data->d[2] = -0.325065f;
    data->d[3] = 0.187029f;
    data->d[4] = -1.039341f;
    data->d[5] = 1.965614f;
    data->d[6] = -2.309742f;
    data->d[7] = 0.627619f;
    data->d[8] = 0.769993f;
    data->d[9] = 2.251763f;
    data->d[10] = 0.001367f;
    data->d[11] = -0.064336f;
    data->d[12] = -2.136452f;
    data->d[13] = 1.105956f;
    data->d[14] = 1.199700f;
    data->d[15] = 0.099874f;
    data->d[16] = 0.543856f;
    data->d[17] = 0.556590f;
    data->d[18] = -0.668054f;
    data->d[19] = -1.408160f;
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
    instructions->SetOperation(0, 1, 15);
    instructions->SetOperation(1, 0, 8);
    instructions->SetOperation(2, 0, 12);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 0, 15);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 1, 23);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 1, 4);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 0, 19);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 0, 24);
    instructions->SetOperation(15, 0, 2);
    instructions->SetOperation(16, 1, 16);
    instructions->SetOperation(17, 1, 24);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 1, 22);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 1, 26);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 0, 24);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 0, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 16;
    state.m_evolution = 12;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 1;
    state.m_id = 32;
    state.m_test = 11;
    state.m_seed = 16133173375852592763;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
