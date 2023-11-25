#pragma once
#include "FireStarterState.h"

// Run date: 11/24/23 10:21:14 Pacific Standard Time
// Run duration = 34294.951083 seconds
// Run generation = 83
// Run evolution = 12
// Run result = 0.00000054
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

// Variation: 0  result = 0.00000054
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.076439f;
    data->d[1] = 0.240140f;
    data->d[2] = 0.238387f;
    data->d[3] = 1.316233f;
    data->d[4] = 0.075349f;
    data->d[5] = -0.056060f;
    data->d[6] = 0.004882f;
    data->d[7] = 0.280394f;
    data->d[8] = 0.744134f;
    data->d[9] = -91883.289062f;
    data->d[10] = 0.178192f;
    data->d[11] = -0.027796f;
    data->d[12] = -0.152548f;
    data->d[13] = 0.586380f;
    data->d[14] = 0.450578f;
    data->d[15] = 1.984880f;
    data->d[16] = 0.723965f;
    data->d[17] = 0.055456f;
    data->d[18] = -0.000001f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.132456f;
    data->d[1] = 0.409377f;
    data->d[2] = 0.786648f;
    data->d[3] = -0.249245f;
    data->d[4] = -0.080266f;
    data->d[5] = 0.340394f;
    data->d[6] = 0.080564f;
    data->d[7] = 98090.312500f;
    data->d[8] = 0.071389f;
    data->d[9] = -0.105532f;
    data->d[10] = -0.239712f;
    data->d[11] = -0.018129f;
    data->d[12] = -0.131693f;
    data->d[13] = 0.181353f;
    data->d[14] = 2.199620f;
    data->d[15] = 2.963301f;
    data->d[16] = 0.185319f;
    data->d[17] = 1.678213f;
    data->d[18] = -0.118128f;
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

// Variation: 2  result = 0.00000034
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.069377f;
    data->d[1] = 0.181628f;
    data->d[2] = -0.165766f;
    data->d[3] = -0.439157f;
    data->d[4] = 0.013222f;
    data->d[5] = -4.963414f;
    data->d[6] = 0.281287f;
    data->d[7] = 0.045228f;
    data->d[8] = 0.321039f;
    data->d[9] = -96216.671875f;
    data->d[10] = -0.219693f;
    data->d[11] = -0.094567f;
    data->d[12] = 0.083365f;
    data->d[13] = 0.301305f;
    data->d[14] = 0.094780f;
    data->d[15] = 1.780669f;
    data->d[16] = 0.102825f;
    data->d[17] = 3.836545f;
    data->d[18] = 0.523597f;
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
    instructions->SetOperation(0, 0, 4);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 1, 19);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 13);
    instructions->SetOperation(7, 1, 16);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 18);
    instructions->SetOperation(10, 0, 2);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 0, 2);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 1, 21);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 0, 27);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 8);
    instructions->SetOperation(23, 0, 22);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 11);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 1, 9);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 83;
    state.m_evolution = 12;
    state.m_index = 26;
    state.m_id = 5;
    state.m_copy_id = 30;
    state.m_test = 14;
    state.m_seed = 7024383437862706078;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
