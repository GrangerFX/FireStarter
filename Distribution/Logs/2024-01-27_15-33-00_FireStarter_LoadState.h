#pragma once
#include "FireStarterState.h"

// Run date: 01/27/24 15:33:00 Pacific Standard Time
// Run duration = 17494.823012 seconds
// Run generation = 13
// Run evolution = 11
// Run max result = 0.00000060
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
// Run streams = 4
// Run units = 4
// Run states = 64
// Run generations = 0
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 64;
    settings.m_generations = 0;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.439588f;
    data->d[2] = 0.411718f;
    data->d[3] = -0.105620f;
    data->d[4] = -0.000156f;
    data->d[5] = -5.819684f;
    data->d[6] = 0.002995f;
    data->d[7] = -1.332532f;
    data->d[8] = -2.289828f;
    data->d[9] = 0.500431f;
    data->d[10] = -3.626615f;
    data->d[11] = -3.400799f;
    data->d[12] = 0.006015f;
    data->d[13] = -1.214022f;
    data->d[14] = 0.721882f;
    data->d[15] = 0.043832f;
    data->d[16] = -1.711866f;
    data->d[17] = 0.058277f;
    data->d[18] = -0.058277f;
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
    data->d[0] = -3.090659f;
    data->d[1] = -1.718907f;
    data->d[2] = -0.051655f;
    data->d[3] = -0.275011f;
    data->d[4] = -0.002889f;
    data->d[5] = 16.663523f;
    data->d[6] = 0.000619f;
    data->d[7] = 0.226434f;
    data->d[8] = 2.031188f;
    data->d[9] = 1.139832f;
    data->d[10] = 1.693902f;
    data->d[11] = 2.470537f;
    data->d[12] = -0.281669f;
    data->d[13] = -0.968358f;
    data->d[14] = -0.212389f;
    data->d[15] = 0.776221f;
    data->d[16] = 1.387030f;
    data->d[17] = -0.712558f;
    data->d[18] = 0.653492f;
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

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.353848f;
    data->d[2] = -1.001133f;
    data->d[3] = -0.097030f;
    data->d[4] = -0.000260f;
    data->d[5] = 3.873084f;
    data->d[6] = -0.005111f;
    data->d[7] = 1.581461f;
    data->d[8] = -3.184273f;
    data->d[9] = 1.415093f;
    data->d[10] = -0.840830f;
    data->d[11] = 2.468045f;
    data->d[12] = 0.527251f;
    data->d[13] = -1.826644f;
    data->d[14] = -0.226686f;
    data->d[15] = -1.112051f;
    data->d[16] = -0.314119f;
    data->d[17] = -0.544791f;
    data->d[18] = 0.806590f;
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
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 27);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 11);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 24);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 1, 28);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 17);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 1, 11);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 0, 10);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 0, 12);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 13);
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
    state.m_generation = 13;
    state.m_evolution = 11;
    state.m_children0 = 734;
    state.m_children1 = 4;
    state.m_index = 41;
    state.m_copy_index = 113;
    state.m_id = 3;
    state.m_test = 4;
    state.m_seed = 12240508612810406160;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000024f;
    state.m_optimizeValid = true;
} // LoadState
