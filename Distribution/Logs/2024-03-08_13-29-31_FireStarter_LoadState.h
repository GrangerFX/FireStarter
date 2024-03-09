#pragma once
#include "FireStarterState.h"

// Run date: 03/08/24 13:29:31 Pacific Standard Time
// Run duration = 70670.162851 seconds
// Run generation = 287
// Run evolution = 24
// Run max result = 0.00000019
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
// Run tests = 100
// Run streams = 4
// Run units = 4
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
    settings.m_tests = 100;
    settings.m_streams = 4;
    settings.m_units = 4;
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

// Variation: 0  result = 0.00000008
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.115536f;
    data->d[2] = -0.350985f;
    data->d[3] = -0.050515f;
    data->d[4] = 434.478546f;
    data->d[5] = -0.392475f;
    data->d[6] = -1.051022f;
    data->d[7] = 1.161964f;
    data->d[8] = 1.634235f;
    data->d[9] = 0.005087f;
    data->d[10] = 11.750300f;
    data->d[11] = 0.114533f;
    data->d[12] = -0.762456f;
    data->d[13] = -0.960074f;
    data->d[14] = 2.849053f;
    data->d[15] = 0.418386f;
    data->d[16] = 0.563104f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.021619f;
    data->d[2] = -0.751660f;
    data->d[3] = 22.163853f;
    data->d[4] = 13.683899f;
    data->d[5] = 1.088239f;
    data->d[6] = -1.120456f;
    data->d[7] = 0.580315f;
    data->d[8] = -4.986387f;
    data->d[9] = 0.002317f;
    data->d[10] = 1.113697f;
    data->d[11] = 0.000086f;
    data->d[12] = 0.303976f;
    data->d[13] = 0.102007f;
    data->d[14] = 2.406051f;
    data->d[15] = 1.906466f;
    data->d[16] = 1.308357f;
    data->d[17] = -0.118132f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000019
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.030978f;
    data->d[2] = -0.319973f;
    data->d[3] = 4.442758f;
    data->d[4] = -3.748371f;
    data->d[5] = -0.089671f;
    data->d[6] = -1.303111f;
    data->d[7] = 2.574667f;
    data->d[8] = -0.038211f;
    data->d[9] = 0.707590f;
    data->d[10] = 0.451328f;
    data->d[11] = 1.349679f;
    data->d[12] = -0.043885f;
    data->d[13] = -6.857635f;
    data->d[14] = 0.167622f;
    data->d[15] = -594.574280f;
    data->d[16] = -0.004628f;
    data->d[17] = 0.523599f;
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
    instructions->SetOperation(0, 1, 27);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 1, 5);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 0, 9);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 1, 25);
    instructions->SetOperation(13, 0, 26);
    instructions->SetOperation(14, 1, 20);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 0, 0);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 2);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 27);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 1);
    instructions->SetOperation(24, 1, 20);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 0, 20);
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
    state.m_generation = 287;
    state.m_evolution = 24;
    state.m_children0 = 287;
    state.m_children1 = 35;
    state.m_index = 9;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 14;
    state.m_seed = 16619937507315822196;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 287.000000f;
    state.m_optimizeValid = true;
} // LoadState
