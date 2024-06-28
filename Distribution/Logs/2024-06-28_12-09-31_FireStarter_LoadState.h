#pragma once
#include "FireStarterState.h"

// Run date: 06/28/24 12:09:31 Pacific Daylight Time
// Run duration = 4031.165542 seconds
// Run generation = 163
// Run evolution = 9
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.096263f;
    data->d[2] = 0.349115f;
    data->d[3] = -0.865728f;
    data->d[4] = 2.020588f;
    data->d[5] = -1.678092f;
    data->d[6] = -2.432773f;
    data->d[7] = 0.837754f;
    data->d[8] = 0.299995f;
    data->d[9] = 0.002958f;
    data->d[10] = 2.986649f;
    data->d[11] = 19.414478f;
    data->d[12] = 1.278418f;
    data->d[13] = -0.313554f;
    data->d[14] = 0.018819f;
    data->d[15] = 2.062383f;
    data->d[16] = -0.091542f;
    data->d[17] = 6.827751f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.059765f;
    data->d[2] = -1.456846f;
    data->d[3] = 2.977705f;
    data->d[4] = -1.486472f;
    data->d[5] = 0.531244f;
    data->d[6] = 8.675706f;
    data->d[7] = -1.407977f;
    data->d[8] = 3.024276f;
    data->d[9] = 0.345395f;
    data->d[10] = 2.043551f;
    data->d[11] = -1.125651f;
    data->d[12] = 1.868478f;
    data->d[13] = -0.163505f;
    data->d[14] = -0.631707f;
    data->d[15] = 0.406447f;
    data->d[16] = 1.373810f;
    data->d[17] = -0.028396f;
    data->d[18] = -0.118132f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.070143f;
    data->d[2] = 2.207297f;
    data->d[3] = -1.605385f;
    data->d[4] = -0.579728f;
    data->d[5] = 0.924050f;
    data->d[6] = 4.816938f;
    data->d[7] = -1.589827f;
    data->d[8] = 0.777305f;
    data->d[9] = -0.673104f;
    data->d[10] = -0.716400f;
    data->d[11] = -2.784564f;
    data->d[12] = -1.046385f;
    data->d[13] = -1.131504f;
    data->d[14] = 1.104585f;
    data->d[15] = -0.031164f;
    data->d[16] = 0.730401f;
    data->d[17] = 0.015107f;
    data->d[18] = 0.523599f;
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
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 0, 15);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 1, 28);
    instructions->SetOperation(4, 0, 15);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 0, 26);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 3);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 1, 29);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 0, 19);
    instructions->SetOperation(15, 0, 18);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 6);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 19);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 1, 1);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 1, 11);
    instructions->SetOperation(25, 0, 28);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 26);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 1, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 163;
    state.m_evolution = 9;
    state.m_index = 12;
    state.m_copy_index = 5;
    state.m_id = 5;
    state.m_test = 2;
    state.m_seed = 16362182466508458361;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000168f;
    state.m_optimizeValid = true;
} // LoadState
