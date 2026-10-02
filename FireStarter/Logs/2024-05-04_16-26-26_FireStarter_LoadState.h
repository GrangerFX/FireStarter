#pragma once
#include "FireStarterState.h"

// Run date: 05/04/24 16:26:26 Pacific Daylight Time
// Run duration = 153.231536 seconds
// Run generation = 29
// Run evolution = 1
// Run max result = 0.00505906
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
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00505906
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.044166f;
    data->d[1] = 0.267929f;
    data->d[2] = 1.070131f;
    data->d[3] = -0.091061f;
    data->d[4] = -0.973833f;
    data->d[5] = 0.337377f;
    data->d[6] = -0.384639f;
    data->d[7] = -0.451667f;
    data->d[8] = -0.136158f;
    data->d[9] = -0.162241f;
    data->d[10] = 0.490839f;
    data->d[11] = 1.689376f;
    data->d[12] = -1.628460f;
    data->d[13] = 1.060279f;
    data->d[14] = -0.204588f;
    data->d[15] = -0.161682f;
    data->d[16] = 0.622446f;
    data->d[17] = 1.037355f;
    data->d[18] = 1.749189f;
    data->d[19] = 0.974789f;
    data->d[20] = -0.568993f;
    data->d[21] = 1.364027f;
    data->d[22] = -0.565409f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.005059f;
} // LoadVariation0

// Variation: 1  result = 0.00485492
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.125965f;
    data->d[1] = 0.713994f;
    data->d[2] = 0.092331f;
    data->d[3] = -1.342040f;
    data->d[4] = -0.475658f;
    data->d[5] = 1.155768f;
    data->d[6] = 1.544769f;
    data->d[7] = -1.655189f;
    data->d[8] = 1.678694f;
    data->d[9] = 0.532400f;
    data->d[10] = 0.920879f;
    data->d[11] = -0.730550f;
    data->d[12] = 0.467197f;
    data->d[13] = 0.629291f;
    data->d[14] = -2.033642f;
    data->d[15] = 1.599366f;
    data->d[16] = -1.039336f;
    data->d[17] = -1.642550f;
    data->d[18] = 0.895713f;
    data->d[19] = -2.129337f;
    data->d[20] = -1.897980f;
    data->d[21] = 0.996184f;
    data->d[22] = -0.078701f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.004855f;
} // LoadVariation1

// Variation: 2  result = 0.00493437
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.291560f;
    data->d[1] = -1.893304f;
    data->d[2] = -0.374808f;
    data->d[3] = -1.772712f;
    data->d[4] = -0.043332f;
    data->d[5] = -1.017056f;
    data->d[6] = 0.608447f;
    data->d[7] = -0.468506f;
    data->d[8] = -0.410366f;
    data->d[9] = 0.387019f;
    data->d[10] = -0.458973f;
    data->d[11] = -0.713479f;
    data->d[12] = -1.539071f;
    data->d[13] = 0.515640f;
    data->d[14] = 0.519566f;
    data->d[15] = 1.326608f;
    data->d[16] = -1.527055f;
    data->d[17] = 0.051542f;
    data->d[18] = 1.266414f;
    data->d[19] = 2.233817f;
    data->d[20] = 0.315103f;
    data->d[21] = -1.275173f;
    data->d[22] = 0.864913f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.004934f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.005059f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 1, 27);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 29;
    state.m_evolution = 1;
    state.m_index = 13;
    state.m_copy_index = 20;
    state.m_id = 20;
    state.m_test = 0;
    state.m_seed = 4621471727735868172;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.007608f;
    state.m_maxResult = 0.005059f;
    state.m_evolveWeight = 0.205418f;
    state.m_optimizeValid = true;
} // LoadState
