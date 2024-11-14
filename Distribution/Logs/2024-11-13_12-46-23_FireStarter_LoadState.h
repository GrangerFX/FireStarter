#pragma once
#include "FireStarterState.h"

// Run date: 11/13/24 12:46:23 Pacific Standard Time
// Run duration = 2431.641039 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00000016
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
// Run passes = 512
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
    settings.m_passes = 512;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000016
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.17576361f;
    data->d[1] = 0.52607054f;
    data->d[2] = -0.97199750f;
    data->d[3] = 0.87440300f;
    data->d[4] = -1.23774564f;
    data->d[5] = -2.84076500f;
    data->d[6] = -1.13480091f;
    data->d[7] = -0.07547826f;
    data->d[8] = 0.03320888f;
    data->d[9] = 1.07921028f;
    data->d[10] = 1.32802081f;
    data->d[11] = -0.48911223f;
    data->d[12] = 0.46828505f;
    data->d[13] = 1.21904838f;
    data->d[14] = 0.52435803f;
    data->d[15] = 0.96396893f;
    data->d[16] = -1.61188161f;
    data->d[17] = 1.11536002f;
    data->d[18] = 0.02822750f;
    data->d[19] = 1.21374762f;
    data->d[20] = 4.58257723f;
    data->d[21] = 0.69778305f;
    data->d[22] = 0.86561376f;
    data->d[23] = -0.71598935f;
    data->d[24] = -1.75477505f;
    data->d[25] = 1.54219329f;
    data->d[26] = 0.23621416f;
    data->d[27] = -0.79125398f;
    data->d[28] = 0.10399245f;
    data->d[29] = -1.41330922f;
    *(result->MinResult()) = 0.00000016f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000016f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 0, 1);
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
    state.m_generation = 4;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 13804613683004602611;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000016f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
