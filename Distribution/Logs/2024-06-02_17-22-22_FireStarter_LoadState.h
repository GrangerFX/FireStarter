#pragma once
#include "FireStarterState.h"

// Run date: 06/02/24 17:22:22 Pacific Daylight Time
// Run duration = 1859.763764 seconds
// Run generation = 254
// Run evolution = 8
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
// Run evolveSeed = 2
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
    settings.m_evolveSeed = 2;
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
    data->d[1] = 2.154946f;
    data->d[2] = -1.343130f;
    data->d[3] = -0.035433f;
    data->d[4] = 4.124156f;
    data->d[5] = -0.582354f;
    data->d[6] = -0.800119f;
    data->d[7] = -2.026351f;
    data->d[8] = 0.000066f;
    data->d[9] = -0.018709f;
    data->d[10] = 9.411039f;
    data->d[11] = -1.003269f;
    data->d[12] = 1.241827f;
    data->d[13] = 0.269757f;
    data->d[14] = 0.254550f;
    data->d[15] = -1.873911f;
    data->d[16] = 0.431045f;
    data->d[17] = 1.172964f;
    data->d[18] = -1.172964f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 1.378622f;
    data->d[2] = -0.285217f;
    data->d[3] = 0.786679f;
    data->d[4] = -1.871338f;
    data->d[5] = 1.407067f;
    data->d[6] = 0.553228f;
    data->d[7] = -0.002752f;
    data->d[8] = 1.468549f;
    data->d[9] = 0.129150f;
    data->d[10] = -7.707416f;
    data->d[11] = -0.721879f;
    data->d[12] = 0.246702f;
    data->d[13] = 3.434820f;
    data->d[14] = 0.399069f;
    data->d[15] = -3.820235f;
    data->d[16] = 0.232448f;
    data->d[17] = 0.154646f;
    data->d[18] = -0.272778f;
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
    data->d[1] = 2.209058f;
    data->d[2] = 0.232017f;
    data->d[3] = 1.375231f;
    data->d[4] = -1.651563f;
    data->d[5] = 0.283436f;
    data->d[6] = -1.316836f;
    data->d[7] = 0.416589f;
    data->d[8] = -0.003273f;
    data->d[9] = -0.152285f;
    data->d[10] = -8.365194f;
    data->d[11] = -3.038471f;
    data->d[12] = 0.466407f;
    data->d[13] = 0.166883f;
    data->d[14] = -0.043421f;
    data->d[15] = -2.757711f;
    data->d[16] = 0.056037f;
    data->d[17] = -2.214203f;
    data->d[18] = 2.737802f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 1, 28);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 1, 23);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 18);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 26);
    instructions->SetOperation(22, 0, 3);
    instructions->SetOperation(23, 1, 3);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 0, 12);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 10);
    instructions->SetOperation(28, 0, 15);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 1, 11);
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
    state.m_generation = 254;
    state.m_evolution = 8;
    state.m_index = 8;
    state.m_copy_index = 5;
    state.m_id = 5;
    state.m_test = 1;
    state.m_seed = 16968208715381137222;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000004f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000935f;
    state.m_optimizeValid = true;
} // LoadState
