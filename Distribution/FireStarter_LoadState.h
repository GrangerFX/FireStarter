#pragma once
#include "FireStarterState.h"

// Run date: 03/03/24 13:55:20 Pacific Standard Time
// Run duration = 1031.458778 seconds
// Run generation = 80
// Run evolution = 10
// Run max result = 0.00000024
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
// Run tests = 0
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
    settings.m_tests = 0;
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
    data->d[1] = 0.806323f;
    data->d[2] = -0.239452f;
    data->d[3] = 0.811617f;
    data->d[4] = 0.152599f;
    data->d[5] = 0.348870f;
    data->d[6] = 0.402017f;
    data->d[7] = -9.376108f;
    data->d[8] = 0.898052f;
    data->d[9] = 0.076521f;
    data->d[10] = 1.303771f;
    data->d[11] = 1.697918f;
    data->d[12] = -1.468459f;
    data->d[13] = 0.352787f;
    data->d[14] = -14.511254f;
    data->d[15] = 0.075333f;
    data->d[16] = 0.017188f;
    data->d[17] = -16936.556641f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 2.168534f;
    data->d[2] = -0.794923f;
    data->d[3] = 18.409267f;
    data->d[4] = 0.849562f;
    data->d[5] = 0.623105f;
    data->d[6] = -0.013513f;
    data->d[7] = 1.670350f;
    data->d[8] = -2.721917f;
    data->d[9] = 0.717495f;
    data->d[10] = -0.019822f;
    data->d[11] = -0.798983f;
    data->d[12] = 0.864841f;
    data->d[13] = -1.707064f;
    data->d[14] = -2115.591553f;
    data->d[15] = 0.273749f;
    data->d[16] = 0.415139f;
    data->d[17] = 0.174770f;
    data->d[18] = -0.118132f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.007998f;
    data->d[2] = 7744.887207f;
    data->d[3] = -2.578966f;
    data->d[4] = 0.249002f;
    data->d[5] = -0.787638f;
    data->d[6] = -1.347478f;
    data->d[7] = 1.033805f;
    data->d[8] = -1.135386f;
    data->d[9] = -0.798953f;
    data->d[10] = 0.239576f;
    data->d[11] = 0.971954f;
    data->d[12] = 0.568995f;
    data->d[13] = -4.236927f;
    data->d[14] = -3.041348f;
    data->d[15] = 0.243047f;
    data->d[16] = -0.127197f;
    data->d[17] = -1.165534f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 1, 13);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 0, 27);
    instructions->SetOperation(9, 1, 28);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 17);
    instructions->SetOperation(12, 0, 25);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 1, 20);
    instructions->SetOperation(16, 1, 22);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 1, 21);
    instructions->SetOperation(19, 1, 22);
    instructions->SetOperation(20, 1, 9);
    instructions->SetOperation(21, 1, 27);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 1);
    instructions->SetOperation(24, 0, 4);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 3);
    instructions->SetOperation(31, 1, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 80;
    state.m_evolution = 10;
    state.m_children0 = 80;
    state.m_children1 = 32;
    state.m_index = 2;
    state.m_copy_index = 2;
    state.m_id = 2;
    state.m_test = 0;
    state.m_seed = 6259545973448565193;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 80.000000f;
    state.m_optimizeValid = true;
} // LoadState
