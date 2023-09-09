#pragma once
#include "FireStarterState.h"

// Run date: 09/09/23 12:05:44 Pacific Daylight Time
// Run duration = 2403.220879 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00000525
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 2742
// Run optimizeSeed = 0
// Run seeds = 11000
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
    settings.m_evolveSeed = 2742;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 11000;
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

// Variation: 0  result = 0.00000148
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.140604f;
    data->d[2] = 1.596658f;
    data->d[3] = -1.156581f;
    data->d[4] = 0.360313f;
    data->d[5] = 1.393502f;
    data->d[6] = -1.658918f;
    data->d[7] = -4.008437f;
    data->d[8] = 0.008766f;
    data->d[9] = -0.196896f;
    data->d[10] = -0.967287f;
    data->d[11] = -0.672525f;
    data->d[12] = -1.189981f;
    data->d[13] = 1.305585f;
    data->d[14] = 0.911038f;
    data->d[15] = 2.253409f;
    data->d[16] = -3.628710f;
    data->d[17] = 0.485874f;
    data->d[18] = -0.000000f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000525
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.074079f;
    data->d[2] = 0.828008f;
    data->d[3] = 5.406309f;
    data->d[4] = -3.078655f;
    data->d[5] = 0.563682f;
    data->d[6] = 2.319417f;
    data->d[7] = 0.041731f;
    data->d[8] = -0.907147f;
    data->d[9] = 0.016317f;
    data->d[10] = 1.013872f;
    data->d[11] = -0.899781f;
    data->d[12] = 3.196522f;
    data->d[13] = 0.697899f;
    data->d[14] = 0.057349f;
    data->d[15] = -0.500981f;
    data->d[16] = -0.843360f;
    data->d[17] = 3.339115f;
    data->d[18] = -0.118131f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000215
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617995f;
    data->d[1] = -0.332862f;
    data->d[2] = 0.147441f;
    data->d[3] = 1.275700f;
    data->d[4] = -0.103850f;
    data->d[5] = -1.182418f;
    data->d[6] = 1.115093f;
    data->d[7] = -3.534575f;
    data->d[8] = 0.142479f;
    data->d[9] = 0.437048f;
    data->d[10] = 0.550741f;
    data->d[11] = -0.639115f;
    data->d[12] = 1.949857f;
    data->d[13] = 3.680555f;
    data->d[14] = -0.113119f;
    data->d[15] = -1.996054f;
    data->d[16] = 1.861169f;
    data->d[17] = 1.401635f;
    data->d[18] = 0.523600f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 17);
    instructions->SetOperation(9, 0, 28);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 1, 14);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 0, 25);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 0, 26);
    instructions->SetOperation(28, 1, 1);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 13);
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
    state.m_index = 6;
    state.m_id = 6;
    state.m_copy_id = 6;
    state.m_test = 0;
    state.m_seed = 6208889592266264887;
    state.m_maxResult = 0.000005f;
    state.m_lastResult = 0.000005f;
    state.m_optimizePass = false;
    state.m_lastEvolved = true;
} // LoadState
