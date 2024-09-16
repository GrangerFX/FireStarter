#pragma once
#include "FireStarterState.h"

// Run date: 09/15/24 12:52:56 Pacific Daylight Time
// Run duration = 7171.144647 seconds
// Run generation = 225
// Run evolution = 0
// Run max result = 0.00001442
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

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

    settings.m_mode = FIRESTARTER_OPTIMIZE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001442
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.852895f;
    data->d[1] = -1.240992f;
    data->d[2] = -0.765834f;
    data->d[3] = 1.610524f;
    data->d[4] = 1.124990f;
    data->d[5] = 0.434932f;
    data->d[6] = -1.493550f;
    data->d[7] = 3.124370f;
    data->d[8] = -0.076111f;
    data->d[9] = -1.454415f;
    data->d[10] = -1.556722f;
    data->d[11] = -4.714209f;
    data->d[12] = 1.365557f;
    data->d[13] = -6.665489f;
    data->d[14] = 0.507835f;
    data->d[15] = -0.013529f;
    data->d[16] = 0.646615f;
    data->d[17] = -3.680477f;
    data->d[18] = 5.553678f;
    data->d[19] = 0.911888f;
    data->d[20] = -0.330515f;
    data->d[21] = -0.192825f;
    data->d[22] = -8.391491f;
    data->d[23] = -7.652752f;
    data->d[24] = -0.507993f;
    data->d[25] = 1.467180f;
    data->d[26] = 0.530877f;
    data->d[27] = -0.641155f;
    data->d[28] = 1.494339f;
    data->d[29] = 2.605983f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000014f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 21);
    instructions->SetOperation(2, 1, 24);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 1, 25);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 1, 4);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 27);
    instructions->SetOperation(13, 1, 0);
    instructions->SetOperation(14, 0, 1);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 1, 5);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 1, 18);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 1, 26);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 0, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 225;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 13;
    state.m_seed = 14119975105631549573;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000015f;
    state.m_maxResult = 0.000014f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
