#pragma once
#include "FireStarterState.h"

// Run date: 11/11/23 13:00:22 Pacific Standard Time
// Run duration = 1085.094194 seconds
// Run generation = 15
// Run evolution = 2
// Run result = 0.00000060
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
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
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
    settings.m_units = 1;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_optimizations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.361642f;
    data->d[2] = 0.004414f;
    data->d[3] = 0.079683f;
    data->d[4] = 0.896778f;
    data->d[5] = -1.291612f;
    data->d[6] = 6.416116f;
    data->d[7] = 5.696181f;
    data->d[8] = -1.002076f;
    data->d[9] = -1.504208f;
    data->d[10] = -1.314383f;
    data->d[11] = -0.093056f;
    data->d[12] = 1.168089f;
    data->d[13] = 1.738950f;
    data->d[14] = 2.661478f;
    data->d[15] = 0.026276f;
    data->d[16] = 0.000000f;
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

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.210207f;
    data->d[2] = 0.000001f;
    data->d[3] = -1.330793f;
    data->d[4] = 2.189796f;
    data->d[5] = -1.060457f;
    data->d[6] = 2.981626f;
    data->d[7] = 2.205969f;
    data->d[8] = -0.970645f;
    data->d[9] = -0.098565f;
    data->d[10] = 1.443966f;
    data->d[11] = -0.480592f;
    data->d[12] = -2.271210f;
    data->d[13] = 1.193837f;
    data->d[14] = -1.763505f;
    data->d[15] = 0.958095f;
    data->d[16] = -0.118132f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.354501f;
    data->d[2] = 0.654033f;
    data->d[3] = -5.679444f;
    data->d[4] = -0.000000f;
    data->d[5] = -0.626249f;
    data->d[6] = -0.231981f;
    data->d[7] = 1.596846f;
    data->d[8] = -0.948262f;
    data->d[9] = 0.931568f;
    data->d[10] = -0.253379f;
    data->d[11] = 1.262123f;
    data->d[12] = 2.336622f;
    data->d[13] = -1.373400f;
    data->d[14] = -0.968033f;
    data->d[15] = -1.100531f;
    data->d[16] = 0.523599f;
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
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 23);
    instructions->SetOperation(1, 0, 19);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 0, 15);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 19);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 1, 13);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 1, 27);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 0, 22);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 0, 27);
    instructions->SetOperation(16, 1, 24);
    instructions->SetOperation(17, 1, 19);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 1, 4);
    instructions->SetOperation(20, 0, 4);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 1, 22);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 15;
    state.m_evolution = 2;
    state.m_index = 52;
    state.m_id = 52;
    state.m_copy_id = 52;
    state.m_test = 3;
    state.m_seed = 5098736062630577721;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
