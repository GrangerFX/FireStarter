#pragma once
#include "FireStarterState.h"

// Run date: 03/10/24 10:42:51 Pacific Daylight Time
// Run duration = 1102.954676 seconds
// Run generation = 83
// Run evolution = 14
// Run max result = 0.00000042
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
// Run evolveSeed = 0
// Run optimizeSeed = 1
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
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
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 1;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.279751f;
    data->d[2] = 2.766617f;
    data->d[3] = -1.093586f;
    data->d[4] = 2.422636f;
    data->d[5] = -0.023739f;
    data->d[6] = -0.734765f;
    data->d[7] = 1.026235f;
    data->d[8] = -1.487947f;
    data->d[9] = 0.102294f;
    data->d[10] = -3.268696f;
    data->d[11] = 0.562087f;
    data->d[12] = -2.280726f;
    data->d[13] = 1.147639f;
    data->d[14] = -0.765329f;
    data->d[15] = -0.227058f;
    data->d[16] = -380.689636f;
    data->d[17] = -0.005205f;
    data->d[18] = 3.348951f;
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

// Variation: 1  result = 0.00000042
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 1.329618f;
    data->d[2] = 4.085893f;
    data->d[3] = 0.188951f;
    data->d[4] = -1.933269f;
    data->d[5] = -0.007557f;
    data->d[6] = 2.163540f;
    data->d[7] = -0.295893f;
    data->d[8] = 0.516105f;
    data->d[9] = -0.475389f;
    data->d[10] = 0.336320f;
    data->d[11] = 1.281494f;
    data->d[12] = -6.073792f;
    data->d[13] = -0.461806f;
    data->d[14] = -0.258280f;
    data->d[15] = 0.893824f;
    data->d[16] = -106.686836f;
    data->d[17] = -0.057589f;
    data->d[18] = -2.890362f;
    data->d[19] = -0.118132f;
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
    data->d[0] = -2.617994f;
    data->d[1] = 0.917664f;
    data->d[2] = -1.462840f;
    data->d[3] = -0.864964f;
    data->d[4] = -5.444409f;
    data->d[5] = 0.054047f;
    data->d[6] = -2.678904f;
    data->d[7] = 1.361830f;
    data->d[8] = -0.303116f;
    data->d[9] = -0.444710f;
    data->d[10] = -0.175894f;
    data->d[11] = 0.308264f;
    data->d[12] = 1.767388f;
    data->d[13] = 1.660469f;
    data->d[14] = -1.216836f;
    data->d[15] = -1.309688f;
    data->d[16] = 0.058617f;
    data->d[17] = 0.196785f;
    data->d[18] = 1.037387f;
    data->d[19] = 0.523599f;
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
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 24);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 1, 7);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 1, 3);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 0, 1);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 1, 20);
    instructions->SetOperation(19, 1, 25);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 11);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 1, 5);
    instructions->SetOperation(24, 1, 11);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 1, 28);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 1, 4);
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
    state.m_generation = 83;
    state.m_evolution = 14;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 14;
    state.m_copy_index = 14;
    state.m_id = 14;
    state.m_test = 0;
    state.m_seed = 13462491010316801030;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 83.000000f;
    state.m_optimizeValid = true;
} // LoadState
