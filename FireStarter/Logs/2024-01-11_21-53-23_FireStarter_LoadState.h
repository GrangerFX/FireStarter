#pragma once
#include "FireStarterState.h"

// Run date: 01/11/24 21:53:23 Pacific Standard Time
// Run duration = 1656.652302 seconds
// Run generation = 36
// Run evolution = 13
// Run max result = 0.00000036
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.141135f;
    data->d[1] = -1.854648f;
    data->d[2] = -1.428079f;
    data->d[3] = 0.851856f;
    data->d[4] = -0.022982f;
    data->d[5] = -0.693484f;
    data->d[6] = 0.183651f;
    data->d[7] = -3.200233f;
    data->d[8] = -1.064526f;
    data->d[9] = -2.530577f;
    data->d[10] = -0.003021f;
    data->d[11] = -2.907184f;
    data->d[12] = 0.381647f;
    data->d[13] = -6.323737f;
    data->d[14] = -0.224881f;
    data->d[15] = 0.881879f;
    data->d[16] = 0.494016f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.107444f;
    data->d[1] = -0.851505f;
    data->d[2] = -1.131709f;
    data->d[3] = -0.240253f;
    data->d[4] = 2.327974f;
    data->d[5] = -2.384708f;
    data->d[6] = 0.001864f;
    data->d[7] = -1.225985f;
    data->d[8] = 1.285516f;
    data->d[9] = 0.574053f;
    data->d[10] = -0.998220f;
    data->d[11] = 0.266874f;
    data->d[12] = 1.672464f;
    data->d[13] = -5.250298f;
    data->d[14] = -8224.454102f;
    data->d[15] = -0.002811f;
    data->d[16] = -0.018028f;
    data->d[17] = -0.118132f;
    data->d[18] = 0.000000f;
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

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.154475f;
    data->d[1] = 0.322636f;
    data->d[2] = -2.786155f;
    data->d[3] = -1.243384f;
    data->d[4] = 0.935754f;
    data->d[5] = -0.164092f;
    data->d[6] = 0.025195f;
    data->d[7] = 1.513628f;
    data->d[8] = 0.135809f;
    data->d[9] = 0.398439f;
    data->d[10] = 3.262270f;
    data->d[11] = -0.043853f;
    data->d[12] = -0.701777f;
    data->d[13] = -1.022052f;
    data->d[14] = 0.040942f;
    data->d[15] = -1.085363f;
    data->d[16] = -2.215842f;
    data->d[17] = 0.523599f;
    data->d[18] = 0.000000f;
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
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 13);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 1, 27);
    instructions->SetOperation(6, 1, 16);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 1, 27);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 18);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 15);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 0, 18);
    instructions->SetOperation(19, 1, 25);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 14);
    instructions->SetOperation(31, 1, 6);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 36;
    state.m_evolution = 13;
    state.m_children = 90;
    state.m_index = 51;
    state.m_copy_index = 204;
    state.m_id = 102;
    state.m_test = 10;
    state.m_seed = 9388885436790497274;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000020f;
    state.m_optimizeValid = true;
} // LoadState
