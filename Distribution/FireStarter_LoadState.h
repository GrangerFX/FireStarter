#pragma once
#include "FireStarterState.h"

// Run date: 06/24/24 16:44:48 Pacific Daylight Time
// Run duration = 25.495024 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00111445
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
// Run tests = 0
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
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00111035
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.899380f;
    data->d[1] = -0.182510f;
    data->d[2] = -1.011617f;
    data->d[3] = 1.004622f;
    data->d[4] = -1.240802f;
    data->d[5] = -1.414719f;
    data->d[6] = 1.101106f;
    data->d[7] = 0.254571f;
    data->d[8] = -1.554852f;
    data->d[9] = -0.672134f;
    data->d[10] = -1.986674f;
    data->d[11] = 2.344294f;
    data->d[12] = -1.252825f;
    data->d[13] = 0.225445f;
    data->d[14] = 0.669125f;
    data->d[15] = 0.219922f;
    data->d[16] = 12.441198f;
    data->d[17] = 15.182526f;
    data->d[18] = -0.056742f;
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
    *(result->MinResult()) = 0.001110f;
} // LoadVariation0

// Variation: 1  result = 0.00043511
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.109269f;
    data->d[1] = -2.332767f;
    data->d[2] = 0.168046f;
    data->d[3] = 0.073474f;
    data->d[4] = -0.132972f;
    data->d[5] = -1.026492f;
    data->d[6] = -0.097412f;
    data->d[7] = 11.276346f;
    data->d[8] = -5.115143f;
    data->d[9] = -0.264573f;
    data->d[10] = 7.824002f;
    data->d[11] = 1.495346f;
    data->d[12] = -0.498826f;
    data->d[13] = 0.075587f;
    data->d[14] = -1.470860f;
    data->d[15] = 6.734916f;
    data->d[16] = 0.186414f;
    data->d[17] = -0.074671f;
    data->d[18] = -3.529584f;
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
    *(result->MinResult()) = 0.000435f;
} // LoadVariation1

// Variation: 2  result = 0.00111445
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.414394f;
    data->d[1] = -0.117529f;
    data->d[2] = 0.807259f;
    data->d[3] = 0.397714f;
    data->d[4] = 0.110106f;
    data->d[5] = 0.823447f;
    data->d[6] = -3.109273f;
    data->d[7] = 0.983240f;
    data->d[8] = 0.727804f;
    data->d[9] = -3.361930f;
    data->d[10] = 0.973189f;
    data->d[11] = 0.197179f;
    data->d[12] = -1.158831f;
    data->d[13] = -2.928054f;
    data->d[14] = -0.439601f;
    data->d[15] = 6.380268f;
    data->d[16] = 7.739746f;
    data->d[17] = 2.867368f;
    data->d[18] = -0.226831f;
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
    *(result->MinResult()) = 0.001114f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.001114f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 29);
    instructions->SetOperation(1, 0, 24);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 26);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 1, 13);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 29);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 1, 0);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 1, 6);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1;
    state.m_evolution = 0;
    state.m_index = 5;
    state.m_copy_index = 5;
    state.m_id = 5;
    state.m_test = 0;
    state.m_seed = 7136975925801098711;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.001114f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
