#pragma once
#include "FireStarterState.h"

// Run date: 09/22/24 11:33:45 Pacific Daylight Time
// Run duration = 226.662798 seconds
// Run generation = 44
// Run evolution = 4
// Run max result = 0.00000020
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

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

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 4;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000020
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.16108276f;
    data->d[1] = 1.51816916f;
    data->d[2] = 1.77049816f;
    data->d[3] = -0.64237076f;
    data->d[4] = -0.47833383f;
    data->d[5] = -9.74530220f;
    data->d[6] = -7.70701694f;
    data->d[7] = -1.54237330f;
    data->d[8] = -0.06099075f;
    data->d[9] = 0.15270862f;
    data->d[10] = 1.48766112f;
    data->d[11] = -2.78659773f;
    data->d[12] = 19.70928001f;
    data->d[13] = 0.01117447f;
    data->d[14] = 0.37882772f;
    data->d[15] = -0.97674948f;
    data->d[16] = -0.84334588f;
    data->d[17] = -1.68654501f;
    data->d[18] = -0.47834995f;
    data->d[19] = 0.17768981f;
    data->d[20] = 1.73863161f;
    data->d[21] = -0.65183353f;
    data->d[22] = -1.70390093f;
    data->d[23] = 1.95776343f;
    data->d[24] = -1.77614367f;
    data->d[25] = 0.74800777f;
    data->d[26] = -1.70915329f;
    data->d[27] = 1.45190179f;
    data->d[28] = -0.55664510f;
    data->d[29] = 0.26062351f;
    *(result->MinResult()) = 0.00000020f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000020f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 2);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 0, 23);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 20);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 0, 12);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 1, 22);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 1);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 1, 12);
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
    state.m_generation = 44;
    state.m_evolution = 4;
    state.m_index = 7;
    state.m_copy_index = 33;
    state.m_id = 33;
    state.m_test = 0;
    state.m_seed = 10757577233419434167;
    state.m_optimize_pass = 2;
    state.m_oldResult = 0.00000119f;
    state.m_maxResult = 0.00000020f;
    state.m_evolveWeight = 0.000051f;
    state.m_optimizeValid = true;
} // LoadState
