#pragma once
#include "FireStarterState.h"

// Run date: 09/09/23 11:16:43 Pacific Daylight Time
// Run duration = 60.016989 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00001013
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 50
// Run optimizeSeed = 0
// Run seeds = 1000
// Run tests = 1
// Run units = 8
// Run processes = 16
// Run population = 278528
// Run iterations = 256
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_evolveSeed = 50;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1000;
    settings.m_tests = 1;
    settings.m_units = 8;
    settings.m_processes = 16;
    settings.m_population = 278528;
    settings.m_iterations = 256;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000352
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.173334f;
    data->d[1] = 0.484138f;
    data->d[2] = -1.784598f;
    data->d[3] = -1.407183f;
    data->d[4] = -0.291207f;
    data->d[5] = -0.549598f;
    data->d[6] = -1.398203f;
    data->d[7] = -1.586489f;
    data->d[8] = -1.156973f;
    data->d[9] = -1.500898f;
    data->d[10] = -1.088211f;
    data->d[11] = -0.057568f;
    data->d[12] = 0.646869f;
    data->d[13] = -0.747155f;
    data->d[14] = -2.629700f;
    data->d[15] = -0.846504f;
    data->d[16] = -1.873533f;
    data->d[17] = -0.249879f;
    data->d[18] = 0.979761f;
    data->d[19] = -1.695521f;
    data->d[20] = 0.150321f;
    data->d[21] = 0.039730f;
    data->d[22] = 1.286232f;
    data->d[23] = -0.244451f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000292
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.341576f;
    data->d[1] = -1.492381f;
    data->d[2] = 1.575496f;
    data->d[3] = -0.463011f;
    data->d[4] = 2.316846f;
    data->d[5] = -0.468065f;
    data->d[6] = 2.041062f;
    data->d[7] = 0.297324f;
    data->d[8] = -26.099743f;
    data->d[9] = -0.077066f;
    data->d[10] = -2.345218f;
    data->d[11] = 13.942554f;
    data->d[12] = -10.168387f;
    data->d[13] = -0.008171f;
    data->d[14] = 29.027534f;
    data->d[15] = 0.359546f;
    data->d[16] = -0.346544f;
    data->d[17] = -0.236758f;
    data->d[18] = -17.286205f;
    data->d[19] = -0.025501f;
    data->d[20] = 46.785717f;
    data->d[21] = 155.772125f;
    data->d[22] = -0.679868f;
    data->d[23] = 137.594376f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00001013
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.124759f;
    data->d[1] = 0.794806f;
    data->d[2] = -2.340395f;
    data->d[3] = 0.818995f;
    data->d[4] = -1.675999f;
    data->d[5] = 1.952990f;
    data->d[6] = -0.509622f;
    data->d[7] = -0.248131f;
    data->d[8] = 0.517119f;
    data->d[9] = 0.769422f;
    data->d[10] = -0.146993f;
    data->d[11] = -0.947289f;
    data->d[12] = 2.058141f;
    data->d[13] = -1.364073f;
    data->d[14] = 1.506167f;
    data->d[15] = -0.264663f;
    data->d[16] = 2.553993f;
    data->d[17] = -0.856127f;
    data->d[18] = -0.620672f;
    data->d[19] = -0.222245f;
    data->d[20] = -3.887755f;
    data->d[21] = 3.613233f;
    data->d[22] = 0.922691f;
    data->d[23] = 0.776901f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000010f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000010f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 2);
    instructions->SetOperation(1, 0, 19);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 28);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 11);
    instructions->SetOperation(9, 0, 14);
    instructions->SetOperation(10, 0, 13);
    instructions->SetOperation(11, 1, 5);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 1);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 27);
    instructions->SetOperation(21, 0, 28);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 14);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 6);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 22);
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
    state.m_age = 0;
    state.m_index = 4;
    state.m_id = 4;
    state.m_copy_id = 4;
    state.m_test = 0;
    state.m_seed = 10649984887594894722;
    state.m_maxResult = 0.000010f;
    state.m_lastResult = 0.000010f;
    state.m_optimizePass = false;
    state.m_lastEvolved = true;
} // LoadState
