#pragma once
#include "FireStarterState.h"

// Run date: 06/15/24 17:48:27 Pacific Daylight Time
// Run duration = 62.360462 seconds
// Run generation = 22
// Run evolution = 2
// Run max result = 0.00004530
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001323
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.157756f;
    data->d[1] = 0.201949f;
    data->d[2] = -1.420116f;
    data->d[3] = -0.527928f;
    data->d[4] = 0.331323f;
    data->d[5] = 0.209474f;
    data->d[6] = 0.725395f;
    data->d[7] = 2.159663f;
    data->d[8] = 1.075107f;
    data->d[9] = -2.094250f;
    data->d[10] = 1.709787f;
    data->d[11] = 0.014126f;
    data->d[12] = 2.963478f;
    data->d[13] = -0.354905f;
    data->d[14] = -0.973144f;
    data->d[15] = 1.950400f;
    data->d[16] = -0.420665f;
    data->d[17] = 9.092609f;
    data->d[18] = -0.016172f;
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
    *(result->MinResult()) = 0.000013f;
} // LoadVariation0

// Variation: 1  result = 0.00003827
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.079296f;
    data->d[1] = 0.088806f;
    data->d[2] = 0.446217f;
    data->d[3] = -0.556670f;
    data->d[4] = 2.835143f;
    data->d[5] = 0.961262f;
    data->d[6] = -1.992217f;
    data->d[7] = -0.374875f;
    data->d[8] = 2.232682f;
    data->d[9] = 0.165713f;
    data->d[10] = 2.151588f;
    data->d[11] = -0.007753f;
    data->d[12] = -0.806159f;
    data->d[13] = -0.422562f;
    data->d[14] = 3.438473f;
    data->d[15] = 1.486753f;
    data->d[16] = 3.854285f;
    data->d[17] = -1.812962f;
    data->d[18] = -0.105614f;
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
    *(result->MinResult()) = 0.000038f;
} // LoadVariation1

// Variation: 2  result = 0.00004530
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.918787f;
    data->d[1] = -0.223754f;
    data->d[2] = 1.508855f;
    data->d[3] = -0.605511f;
    data->d[4] = 0.343994f;
    data->d[5] = 0.869020f;
    data->d[6] = 3.462607f;
    data->d[7] = -0.344407f;
    data->d[8] = 0.294469f;
    data->d[9] = 1.139198f;
    data->d[10] = 0.073127f;
    data->d[11] = -9.492969f;
    data->d[12] = 1.039832f;
    data->d[13] = 0.172184f;
    data->d[14] = 0.794506f;
    data->d[15] = -0.551214f;
    data->d[16] = 1.521996f;
    data->d[17] = 0.769127f;
    data->d[18] = 1.127799f;
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
    *(result->MinResult()) = 0.000045f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000045f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 1, 11);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 20);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 22;
    state.m_evolution = 2;
    state.m_index = 1;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 8543491777416120220;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000168f;
    state.m_maxResult = 0.000045f;
    state.m_evolveWeight = 0.001343f;
    state.m_optimizeValid = true;
} // LoadState
