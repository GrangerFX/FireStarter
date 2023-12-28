#pragma once
#include "FireStarterState.h"

// Run date: 12/27/23 23:10:16 Pacific Standard Time
// Run duration = 24123.525159 seconds
// Run generation = 26
// Run evolution = 9
// Run max result = 0.00000006
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
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

// Variation: 0  result = 0.00000003
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141594f;
    data->d[1] = 0.000001f;
    data->d[2] = 1.833499f;
    data->d[3] = -4.184212f;
    data->d[4] = -0.273675f;
    data->d[5] = 1.704310f;
    data->d[6] = 0.024191f;
    data->d[7] = -1.686879f;
    data->d[8] = -0.348914f;
    data->d[9] = 1.000188f;
    data->d[10] = 0.377719f;
    data->d[11] = 0.146603f;
    data->d[12] = 25.288204f;
    data->d[13] = -3.655027f;
    data->d[14] = 0.008001f;
    data->d[15] = -1.150631f;
    data->d[16] = -1.153262f;
    data->d[17] = -1.393777f;
    data->d[18] = -0.056445f;
    data->d[19] = 0.056445f;
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

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090653f;
    data->d[1] = -0.000008f;
    data->d[2] = 0.014887f;
    data->d[3] = -3.083215f;
    data->d[4] = -0.709730f;
    data->d[5] = 2.965958f;
    data->d[6] = 0.028525f;
    data->d[7] = 1.952678f;
    data->d[8] = 0.023058f;
    data->d[9] = 0.496280f;
    data->d[10] = 0.637298f;
    data->d[11] = 0.393729f;
    data->d[12] = 9.098109f;
    data->d[13] = -2.007787f;
    data->d[14] = 0.004025f;
    data->d[15] = -1.161200f;
    data->d[16] = 2.119665f;
    data->d[17] = 0.511764f;
    data->d[18] = -0.053267f;
    data->d[19] = -0.064868f;
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

// Variation: 2  result = 0.00000003
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617995f;
    data->d[1] = 0.000002f;
    data->d[2] = -5.440310f;
    data->d[3] = -1.044530f;
    data->d[4] = -0.047921f;
    data->d[5] = 0.185116f;
    data->d[6] = -0.525893f;
    data->d[7] = -12.885700f;
    data->d[8] = 0.000000f;
    data->d[9] = -0.402789f;
    data->d[10] = 1.880752f;
    data->d[11] = 0.415109f;
    data->d[12] = 0.958239f;
    data->d[13] = -5.167863f;
    data->d[14] = 1.209819f;
    data->d[15] = 0.418634f;
    data->d[16] = 0.372546f;
    data->d[17] = 0.203116f;
    data->d[18] = 0.481766f;
    data->d[19] = 0.041833f;
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
    instructions->SetOperation(0, 1, 12);
    instructions->SetOperation(1, 1, 17);
    instructions->SetOperation(2, 0, 12);
    instructions->SetOperation(3, 1, 20);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 27);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 1, 18);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 4);
    instructions->SetOperation(24, 1, 7);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 9);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 1, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 26;
    state.m_evolution = 9;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 2;
    state.m_id = 158;
    state.m_copy_id = 59;
    state.m_test = 11;
    state.m_seed = 12784382730471728594;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
