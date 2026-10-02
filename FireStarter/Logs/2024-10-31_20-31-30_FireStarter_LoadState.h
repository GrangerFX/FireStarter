#pragma once
#include "FireStarterState.h"

// Run date: 10/31/24 20:31:30 Pacific Daylight Time
// Run duration = 2643.468341 seconds
// Run generation = 19
// Run evolution = 0
// Run max result = 0.00000035
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000035
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.14324120f;
    data->d[1] = -0.41728666f;
    data->d[2] = 3.81328917f;
    data->d[3] = 1.31093979f;
    data->d[4] = 1.01195753f;
    data->d[5] = 1.43965161f;
    data->d[6] = 0.81583613f;
    data->d[7] = 1.94450295f;
    data->d[8] = 0.01475423f;
    data->d[9] = -0.43497545f;
    data->d[10] = -0.31443059f;
    data->d[11] = -0.05806150f;
    data->d[12] = 0.80254537f;
    data->d[13] = -1.05859828f;
    data->d[14] = -0.71930063f;
    data->d[15] = -0.40176290f;
    data->d[16] = 3.72478938f;
    data->d[17] = 1.42404139f;
    data->d[18] = -0.09329987f;
    data->d[19] = 5.05806494f;
    data->d[20] = -1.80604041f;
    data->d[21] = 0.96698016f;
    data->d[22] = 0.33931339f;
    data->d[23] = 1.79535615f;
    data->d[24] = 1.07148492f;
    data->d[25] = 1.79662383f;
    data->d[26] = 1.61144519f;
    data->d[27] = -1.02693033f;
    data->d[28] = -1.53720367f;
    data->d[29] = 1.89071870f;
    *(result->MinResult()) = 0.00000035f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000035f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 7);
    instructions->SetOperation(2, 1, 17);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 1, 29);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 1, 21);
    instructions->SetOperation(8, 1, 11);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 18);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 12);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 24);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 0, 18);
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
    state.m_generation = 19;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000035f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
