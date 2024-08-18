#pragma once
#include "FireStarterState.h"

// Run date: 08/18/24 11:07:25 Pacific Daylight Time
// Run duration = 15.493676 seconds
// Run generation = 11
// Run evolution = 0
// Run max result = 0.00014704
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8704
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
    settings.m_variations = 1;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 8704;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00014704
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.337526f;
    data->d[1] = 0.479098f;
    data->d[2] = 1.114007f;
    data->d[3] = -4.703118f;
    data->d[4] = 1.207175f;
    data->d[5] = -0.252016f;
    data->d[6] = -1.275947f;
    data->d[7] = -1.634680f;
    data->d[8] = -0.231389f;
    data->d[9] = 4.881262f;
    data->d[10] = -2.608585f;
    data->d[11] = -1.236829f;
    data->d[12] = -1.277323f;
    data->d[13] = 3.593800f;
    data->d[14] = 0.710199f;
    data->d[15] = -0.566469f;
    data->d[16] = -1.473747f;
    data->d[17] = -1.613971f;
    data->d[18] = 0.747619f;
    data->d[19] = 0.232778f;
    data->d[20] = 1.225847f;
    data->d[21] = 0.829412f;
    data->d[22] = 0.751718f;
    data->d[23] = -2.125409f;
    data->d[24] = 0.578183f;
    data->d[25] = -0.755359f;
    data->d[26] = 0.036160f;
    data->d[27] = -2.564014f;
    data->d[28] = -0.874966f;
    data->d[29] = 0.219335f;
    *(result->MinResult()) = 0.000147f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000147f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 0, 0);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 0);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 11;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000147f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
