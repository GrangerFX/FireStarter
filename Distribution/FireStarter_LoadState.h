#pragma once
#include "FireStarterState.h"

// Run date: 08/12/23 19:19:39 Pacific Daylight Time
// Run duration = 776.183759 seconds
// Run generation = 50
// Run evolution = 2
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
// Run seeds = 64
// Run tests = 0
// Run units = 8
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
    settings.m_units = 8;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.285455f;
    data->d[1] = -1.856138f;
    data->d[2] = 2.194932f;
    data->d[3] = -0.135847f;
    data->d[4] = 1.295103f;
    data->d[5] = 3.549170f;
    data->d[6] = 0.004630f;
    data->d[7] = 0.877619f;
    data->d[8] = 0.399303f;
    data->d[9] = 0.480952f;
    data->d[10] = -2.229050f;
    data->d[11] = 0.271695f;
    data->d[12] = -0.875476f;
    data->d[13] = 2.757984f;
    data->d[14] = 0.022041f;
    data->d[15] = 2.376644f;
    data->d[16] = 8.941546f;
    data->d[17] = 0.309034f;
    data->d[18] = -0.309034f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.531093f;
    data->d[1] = -1.559565f;
    data->d[2] = 1.125503f;
    data->d[3] = -0.623732f;
    data->d[4] = -0.563324f;
    data->d[5] = -1.668898f;
    data->d[6] = -0.002497f;
    data->d[7] = 1.198856f;
    data->d[8] = 0.099277f;
    data->d[9] = -0.521264f;
    data->d[10] = -5.317688f;
    data->d[11] = -2.054056f;
    data->d[12] = -0.231278f;
    data->d[13] = -0.288105f;
    data->d[14] = 4.264616f;
    data->d[15] = 0.863692f;
    data->d[16] = -9.427565f;
    data->d[17] = -0.451694f;
    data->d[18] = 0.333562f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.918729f;
    data->d[1] = -0.699265f;
    data->d[2] = -0.120657f;
    data->d[3] = -6.336154f;
    data->d[4] = -2.110739f;
    data->d[5] = -0.446942f;
    data->d[6] = -6.072576f;
    data->d[7] = -0.004747f;
    data->d[8] = -0.795971f;
    data->d[9] = -0.560769f;
    data->d[10] = -0.837784f;
    data->d[11] = -0.893680f;
    data->d[12] = 0.285450f;
    data->d[13] = 0.118911f;
    data->d[14] = 1.957720f;
    data->d[15] = 0.972698f;
    data->d[16] = -1.063504f;
    data->d[17] = -1.275182f;
    data->d[18] = 1.798781f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 23);
    instructions->SetOperation(27, 1, 26);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 50;
    state.m_evolution = 2;
    state.m_index = 34;
    state.m_test = 0;
    state.m_seed = 2609752765728144678;
} // LoadState
