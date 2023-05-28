#pragma once
#include "FireStarterState.h"

// Run date: 05/28/23 15:20:53 Pacific Daylight Time
// Run duration = 82.500686 seconds
// Run generation = 15
// Run evolution = 0
// Run result = 0.00052901
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 16
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 0;
    settings.m_units = 16;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00041661
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.776520f;
    data->d[1] = 0.087493f;
    data->d[2] = -1.498420f;
    data->d[3] = 0.055889f;
    data->d[4] = 2.015223f;
    data->d[5] = -1.554645f;
    data->d[6] = -1.871659f;
    data->d[7] = -1.405212f;
    data->d[8] = -2.805835f;
    data->d[9] = -0.852030f;
    data->d[10] = -2.175107f;
    data->d[11] = 1.840177f;
    data->d[12] = -0.301123f;
    data->d[13] = 1.521230f;
    data->d[14] = -0.065885f;
    data->d[15] = -1.701823f;
    data->d[16] = 1.824845f;
    data->d[17] = 1.393881f;
    data->d[18] = 1.500081f;
    data->d[19] = 1.129807f;
    data->d[20] = -0.000416f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000375f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000417f;
} // LoadVariation0

// Variation: 1  result = 0.00037539
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.821495f;
    data->d[1] = -1.803048f;
    data->d[2] = -0.333254f;
    data->d[3] = -1.284518f;
    data->d[4] = -0.860582f;
    data->d[5] = 0.081602f;
    data->d[6] = -1.016950f;
    data->d[7] = -0.818934f;
    data->d[8] = -0.320169f;
    data->d[9] = 0.096980f;
    data->d[10] = 0.074820f;
    data->d[11] = 0.283864f;
    data->d[12] = 3.130500f;
    data->d[13] = 0.302563f;
    data->d[14] = -1.639405f;
    data->d[15] = 0.670110f;
    data->d[16] = 1.344810f;
    data->d[17] = -1.835932f;
    data->d[18] = -1.921648f;
    data->d[19] = 0.939894f;
    data->d[20] = 0.852062f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000529f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000375f;
} // LoadVariation1

// Variation: 2  result = 0.00052901
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.380622f;
    data->d[1] = -0.256215f;
    data->d[2] = -0.376547f;
    data->d[3] = 0.698000f;
    data->d[4] = -3.927727f;
    data->d[5] = 0.288872f;
    data->d[6] = -1.507974f;
    data->d[7] = -0.671757f;
    data->d[8] = 1.035992f;
    data->d[9] = 0.457123f;
    data->d[10] = 2.159909f;
    data->d[11] = -0.214313f;
    data->d[12] = 0.804169f;
    data->d[13] = -1.266247f;
    data->d[14] = 1.195502f;
    data->d[15] = 1.022120f;
    data->d[16] = 2.025367f;
    data->d[17] = -0.599342f;
    data->d[18] = -2.614714f;
    data->d[19] = -0.487642f;
    data->d[20] = 0.000529f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = -0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000529f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000529f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 20);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 0);
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
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 13554814491353928740;
} // LoadState
