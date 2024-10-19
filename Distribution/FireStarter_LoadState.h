#pragma once
#include "FireStarterState.h"

// Run date: 10/19/24 14:41:23 Pacific Daylight Time
// Run duration = 84.877531 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.03886348
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8192
// Run iterations = 64
// Run passes = 1
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
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 8192;
    settings.m_iterations = 64;
    settings.m_passes = 1;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.03886348
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.31093252f;
    data->d[1] = -1.50291610f;
    data->d[2] = -1.30679059f;
    data->d[3] = -1.56307900f;
    data->d[4] = 1.13568223f;
    data->d[5] = -0.52466178f;
    data->d[6] = -1.14993191f;
    data->d[7] = 0.45908272f;
    data->d[8] = 1.43043339f;
    data->d[9] = 0.36232984f;
    data->d[10] = 4.10478258f;
    data->d[11] = -1.81422567f;
    data->d[12] = -0.05416925f;
    data->d[13] = 0.05258221f;
    data->d[14] = -1.03744638f;
    data->d[15] = 0.90488470f;
    data->d[16] = -0.75880837f;
    data->d[17] = 3.13182092f;
    data->d[18] = -1.31730449f;
    data->d[19] = 0.73888385f;
    data->d[20] = 1.20741272f;
    data->d[21] = -1.10828066f;
    data->d[22] = -0.26647028f;
    data->d[23] = -1.87562191f;
    data->d[24] = 1.28721130f;
    data->d[25] = 1.95402992f;
    data->d[26] = -0.10270642f;
    data->d[27] = 2.56381512f;
    data->d[28] = -1.75341415f;
    data->d[29] = 0.60766619f;
    *(result->MinResult()) = 0.03886348f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.03886348f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 7);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 1, 16);
    instructions->SetOperation(3, 1, 7);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 17);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 1, 2);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 1, 14);
    instructions->SetOperation(12, 0, 22);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 25);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 1, 5);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 1, 26);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 1, 4);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 0, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.LoadCodeFromProgram();
    state.m_generation = 1;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.13343042f;
    state.m_maxResult = 0.03886348f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
