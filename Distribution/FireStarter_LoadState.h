#pragma once
#include "FireStarterState.h"

// Run date: 08/28/23 15:35:16 Pacific Daylight Time
// Run duration = 500.883613 seconds
// Run generation = 9
// Run evolution = 10
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 8
// Run processes = 8
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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 8;
    settings.m_processes = 8;
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

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -1.557258f;
    data->d[2] = 0.727210f;
    data->d[3] = -1.258504f;
    data->d[4] = -0.576324f;
    data->d[5] = -1.675694f;
    data->d[6] = -0.008310f;
    data->d[7] = 1.687147f;
    data->d[8] = 0.760390f;
    data->d[9] = 1.184468f;
    data->d[10] = 0.335815f;
    data->d[11] = -0.225021f;
    data->d[12] = 5.411938f;
    data->d[13] = -2.196858f;
    data->d[14] = -2.211872f;
    data->d[15] = 0.986866f;
    data->d[16] = 0.924871f;
    data->d[17] = 0.350327f;
    data->d[18] = 0.393531f;
    data->d[19] = -8.982299f;
    data->d[20] = -0.144479f;
    data->d[21] = 0.144479f;
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
    data->d[1] = 0.327898f;
    data->d[2] = 1.688450f;
    data->d[3] = 0.465119f;
    data->d[4] = -1.783635f;
    data->d[5] = 0.760405f;
    data->d[6] = 0.033857f;
    data->d[7] = 1.558375f;
    data->d[8] = 0.304458f;
    data->d[9] = -1.164954f;
    data->d[10] = -0.529133f;
    data->d[11] = -1.715340f;
    data->d[12] = -1.449026f;
    data->d[13] = 0.797463f;
    data->d[14] = -1.864767f;
    data->d[15] = 1.426611f;
    data->d[16] = -1.034547f;
    data->d[17] = -0.453515f;
    data->d[18] = -1.500865f;
    data->d[19] = -0.959788f;
    data->d[20] = -0.625454f;
    data->d[21] = 0.507323f;
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
    data->d[1] = -0.454246f;
    data->d[2] = -1.180171f;
    data->d[3] = 0.871595f;
    data->d[4] = -0.732641f;
    data->d[5] = 1.998123f;
    data->d[6] = -0.066961f;
    data->d[7] = -0.528417f;
    data->d[8] = -1.956202f;
    data->d[9] = 1.894202f;
    data->d[10] = -0.794100f;
    data->d[11] = -0.211708f;
    data->d[12] = -1.206988f;
    data->d[13] = 2.351062f;
    data->d[14] = 2.357875f;
    data->d[15] = -0.009588f;
    data->d[16] = 1.239237f;
    data->d[17] = 0.650065f;
    data->d[18] = 0.305916f;
    data->d[19] = 1.219248f;
    data->d[20] = 0.741886f;
    data->d[21] = -0.218287f;
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
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 1, 22);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 9;
    state.m_evolution = 10;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 13534558261871376004;
} // LoadState
