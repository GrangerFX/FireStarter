#pragma once
#include "FireStarterState.h"

// Run date: 11/08/23 12:15:45 Pacific Standard Time
// Run duration = 1934.013864 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00000024
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
// Run tests = 1
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.031909f;
    data->d[1] = -1.109684f;
    data->d[2] = -0.537968f;
    data->d[3] = 0.383996f;
    data->d[4] = 0.482387f;
    data->d[5] = 1.502172f;
    data->d[6] = -0.434550f;
    data->d[7] = 3.026618f;
    data->d[8] = 1.479515f;
    data->d[9] = -0.330892f;
    data->d[10] = -1.341796f;
    data->d[11] = -0.217039f;
    data->d[12] = 1.950709f;
    data->d[13] = -0.315379f;
    data->d[14] = -2.264967f;
    data->d[15] = -0.000000f;
    data->d[16] = -1.819572f;
    data->d[17] = -1.971542f;
    data->d[18] = 1.805259f;
    data->d[19] = 0.000031f;
    data->d[20] = -0.007033f;
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
    data->d[0] = -1.495292f;
    data->d[1] = -1.595375f;
    data->d[2] = 0.107328f;
    data->d[3] = 0.148599f;
    data->d[4] = -1.727913f;
    data->d[5] = -1.166077f;
    data->d[6] = -6.454555f;
    data->d[7] = 1.104258f;
    data->d[8] = 1.171950f;
    data->d[9] = -0.081186f;
    data->d[10] = 1.634443f;
    data->d[11] = -1.549345f;
    data->d[12] = 0.321283f;
    data->d[13] = -2.864542f;
    data->d[14] = -0.082218f;
    data->d[15] = -0.000001f;
    data->d[16] = -0.421785f;
    data->d[17] = -1.719936f;
    data->d[18] = -0.663031f;
    data->d[19] = -3.226136f;
    data->d[20] = 0.036615f;
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
    data->d[0] = -1.641800f;
    data->d[1] = -0.976194f;
    data->d[2] = -0.183823f;
    data->d[3] = -0.940570f;
    data->d[4] = -0.955138f;
    data->d[5] = -0.052673f;
    data->d[6] = 1.558909f;
    data->d[7] = -1.066435f;
    data->d[8] = 1.506544f;
    data->d[9] = 0.930522f;
    data->d[10] = 2.293109f;
    data->d[11] = 0.308434f;
    data->d[12] = -0.594137f;
    data->d[13] = 0.627980f;
    data->d[14] = 2.048172f;
    data->d[15] = 4.557570f;
    data->d[16] = 0.000000f;
    data->d[17] = -2.478046f;
    data->d[18] = -0.551011f;
    data->d[19] = 1.208684f;
    data->d[20] = 0.433198f;
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
    instructions->SetOperation(0, 1, 22);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 1, 20);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 10);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 1, 9);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 1, 25);
    instructions->SetOperation(31, 0, 13);
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
    state.m_id = 27;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 651137228424293891;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
