#pragma once
#include "FireStarterState.h"

// Run date: 12/18/23 17:32:53 Pacific Standard Time
// Run duration = 5500.952169 seconds
// Run generation = 30
// Run evolution = 9
// Run max result = 0.00000012
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
// Run tests = 16
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.590458f;
    data->d[1] = 1.854980f;
    data->d[2] = 0.129831f;
    data->d[3] = 1.656677f;
    data->d[4] = -0.078668f;
    data->d[5] = -0.058853f;
    data->d[6] = -1.018374f;
    data->d[7] = -3.396797f;
    data->d[8] = 0.524511f;
    data->d[9] = 0.419986f;
    data->d[10] = -0.928104f;
    data->d[11] = -0.025204f;
    data->d[12] = -14.436614f;
    data->d[13] = -1.249019f;
    data->d[14] = 0.205362f;
    data->d[15] = 2.797414f;
    data->d[16] = -0.034602f;
    data->d[17] = 0.034605f;
    data->d[18] = 2.787446f;
    data->d[19] = 3.344393f;
    data->d[20] = -0.000041f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.357354f;
    data->d[1] = -1.104460f;
    data->d[2] = -1.394388f;
    data->d[3] = -0.473708f;
    data->d[4] = -0.172642f;
    data->d[5] = 0.172880f;
    data->d[6] = -1.781222f;
    data->d[7] = -0.473483f;
    data->d[8] = -0.840496f;
    data->d[9] = 0.189539f;
    data->d[10] = 1.773185f;
    data->d[11] = -1.058450f;
    data->d[12] = 0.315430f;
    data->d[13] = -1.397974f;
    data->d[14] = 1.623339f;
    data->d[15] = 0.123975f;
    data->d[16] = -0.198358f;
    data->d[17] = 0.348878f;
    data->d[18] = 2.616082f;
    data->d[19] = -1.671013f;
    data->d[20] = 0.146093f;
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

// Variation: 2  result = 0.00000011
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.594267f;
    data->d[1] = -1.555787f;
    data->d[2] = -0.568478f;
    data->d[3] = 0.704785f;
    data->d[4] = -0.426294f;
    data->d[5] = 1.373856f;
    data->d[6] = -0.062890f;
    data->d[7] = -2.867410f;
    data->d[8] = -0.663289f;
    data->d[9] = -0.227717f;
    data->d[10] = 0.926631f;
    data->d[11] = 2.556515f;
    data->d[12] = 0.329378f;
    data->d[13] = -2.502936f;
    data->d[14] = 1.824843f;
    data->d[15] = -0.123443f;
    data->d[16] = -0.225673f;
    data->d[17] = 0.010310f;
    data->d[18] = -1.419965f;
    data->d[19] = 0.175853f;
    data->d[20] = 0.164014f;
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
    instructions->SetOperation(0, 0, 3);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 0, 18);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 1, 17);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 0, 11);
    instructions->SetOperation(22, 0, 11);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 1, 24);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 1, 7);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 30;
    state.m_evolution = 9;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 52;
    state.m_copy_id = 52;
    state.m_test = 3;
    state.m_seed = 9719331519555651730;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
