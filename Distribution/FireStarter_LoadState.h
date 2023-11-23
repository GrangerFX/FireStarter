#pragma once
#include "FireStarterState.h"

// Run date: 11/22/23 14:19:24 Pacific Standard Time
// Run duration = 48830.453758 seconds
// Run generation = 46
// Run evolution = 10
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.036535f;
    data->d[1] = -0.114777f;
    data->d[2] = 0.214145f;
    data->d[3] = 142120.921875f;
    data->d[4] = 0.000878f;
    data->d[5] = 0.005990f;
    data->d[6] = -0.616225f;
    data->d[7] = -1.122049f;
    data->d[8] = 0.004419f;
    data->d[9] = -0.018102f;
    data->d[10] = -0.033188f;
    data->d[11] = 0.130220f;
    data->d[12] = 3.595427f;
    data->d[13] = -0.030242f;
    data->d[14] = -0.057289f;
    data->d[15] = 0.163048f;
    data->d[16] = -3.597072f;
    data->d[17] = 0.144220f;
    data->d[18] = 0.461346f;
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
    data->d[0] = 0.088032f;
    data->d[1] = -0.272076f;
    data->d[2] = 17465.880859f;
    data->d[3] = -0.067393f;
    data->d[4] = 0.001741f;
    data->d[5] = 0.019326f;
    data->d[6] = 1.154370f;
    data->d[7] = 0.203569f;
    data->d[8] = -0.005916f;
    data->d[9] = -0.392191f;
    data->d[10] = 0.334819f;
    data->d[11] = -1.451930f;
    data->d[12] = 2.325248f;
    data->d[13] = -0.029190f;
    data->d[14] = -1.769904f;
    data->d[15] = -0.161806f;
    data->d[16] = 3.769854f;
    data->d[17] = -0.408091f;
    data->d[18] = 0.146619f;
    data->d[19] = -0.118137f;
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
    data->d[0] = -0.054746f;
    data->d[1] = 0.143325f;
    data->d[2] = 0.168356f;
    data->d[3] = -12048.396484f;
    data->d[4] = -0.000335f;
    data->d[5] = 0.091681f;
    data->d[6] = 4.981043f;
    data->d[7] = -1.468966f;
    data->d[8] = 0.001994f;
    data->d[9] = -0.046278f;
    data->d[10] = 0.164658f;
    data->d[11] = 0.169273f;
    data->d[12] = 3.899660f;
    data->d[13] = 0.003659f;
    data->d[14] = 0.277454f;
    data->d[15] = 0.097112f;
    data->d[16] = 3.801608f;
    data->d[17] = 0.067089f;
    data->d[18] = -0.608296f;
    data->d[19] = 0.523598f;
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
    instructions->SetOperation(0, 0, 28);
    instructions->SetOperation(1, 1, 0);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 1, 5);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 1, 23);
    instructions->SetOperation(8, 1, 14);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 1, 17);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 0, 1);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 0, 26);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 46;
    state.m_evolution = 10;
    state.m_index = 38;
    state.m_id = 23;
    state.m_copy_id = 35;
    state.m_test = 15;
    state.m_seed = 5999098143000709822;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
