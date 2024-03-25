#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 16:56:06 Pacific Daylight Time
// Run duration = 1054.577377 seconds
// Run generation = 352
// Run evolution = 15
// Run max result = 0.00000018
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
// Run optimizeSeed = 0
// Run tests = 16
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
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.639369f;
    data->d[1] = -2.008638f;
    data->d[2] = 1.074750f;
    data->d[3] = -0.564092f;
    data->d[4] = -0.476043f;
    data->d[5] = -1.025576f;
    data->d[6] = -1.752646f;
    data->d[7] = -1.078927f;
    data->d[8] = -0.488333f;
    data->d[9] = -3.438561f;
    data->d[10] = 1.184118f;
    data->d[11] = 5.938097f;
    data->d[12] = 0.000832f;
    data->d[13] = -4.815828f;
    data->d[14] = 0.845629f;
    data->d[15] = -2.473718f;
    data->d[16] = 0.199549f;
    data->d[17] = 0.954374f;
    data->d[18] = -0.149017f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.448717f;
    data->d[1] = -1.386832f;
    data->d[2] = -0.846288f;
    data->d[3] = -0.958629f;
    data->d[4] = 0.012359f;
    data->d[5] = -0.412884f;
    data->d[6] = -0.678411f;
    data->d[7] = -3.120398f;
    data->d[8] = -1.011997f;
    data->d[9] = 1.663647f;
    data->d[10] = -0.345095f;
    data->d[11] = -0.198477f;
    data->d[12] = 0.081473f;
    data->d[13] = -1632.282104f;
    data->d[14] = 0.232914f;
    data->d[15] = -1.666696f;
    data->d[16] = -2.533321f;
    data->d[17] = -0.465657f;
    data->d[18] = 0.062376f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.528234f;
    data->d[1] = -1.382913f;
    data->d[2] = -2.101641f;
    data->d[3] = -2.380151f;
    data->d[4] = 0.002419f;
    data->d[5] = 1.119004f;
    data->d[6] = -1.467834f;
    data->d[7] = -1.758542f;
    data->d[8] = -2.886683f;
    data->d[9] = 0.411355f;
    data->d[10] = 1.847207f;
    data->d[11] = 5.288125f;
    data->d[12] = -0.000000f;
    data->d[13] = 11.063920f;
    data->d[14] = 0.395813f;
    data->d[15] = 1.064491f;
    data->d[16] = 0.233928f;
    data->d[17] = -0.701256f;
    data->d[18] = -0.829721f;
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
    instructions->SetOperation(0, 0, 19);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 1, 5);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 0, 13);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 1, 11);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 16);
    instructions->SetOperation(11, 1, 14);
    instructions->SetOperation(12, 1, 17);
    instructions->SetOperation(13, 1, 23);
    instructions->SetOperation(14, 1, 20);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 27);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 1, 16);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 1, 28);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 1, 26);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 1, 10);
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
    state.m_generation = 352;
    state.m_evolution = 15;
    state.m_index = 9;
    state.m_copy_index = 63;
    state.m_id = 63;
    state.m_test = 4;
    state.m_seed = 13952381821443850445;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000051f;
    state.m_optimizeValid = true;
} // LoadState
