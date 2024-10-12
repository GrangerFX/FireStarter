#pragma once
#include "FireStarterState.h"

// Run date: 10/12/24 15:04:29 Pacific Daylight Time
// Run duration = 36.022602 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00242859
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8192
// Run iterations = 64
// Run passes = 100
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
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 8192;
    settings.m_iterations = 64;
    settings.m_passes = 100;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00242859
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.34819996f;
    data->d[1] = 0.88222593f;
    data->d[2] = -3.24934697f;
    data->d[3] = 0.37664536f;
    data->d[4] = -0.75098962f;
    data->d[5] = 0.04288798f;
    data->d[6] = -1.67354167f;
    data->d[7] = -0.37043187f;
    data->d[8] = 0.22036889f;
    data->d[9] = 0.56077760f;
    data->d[10] = 0.25666481f;
    data->d[11] = 2.07100129f;
    data->d[12] = 1.13407660f;
    data->d[13] = 0.26199809f;
    data->d[14] = -0.61951327f;
    data->d[15] = 0.00403067f;
    data->d[16] = -0.81213862f;
    data->d[17] = 0.56798542f;
    data->d[18] = 0.32115319f;
    data->d[19] = -0.84552532f;
    data->d[20] = 0.42680418f;
    data->d[21] = -0.53620648f;
    data->d[22] = 0.37702957f;
    data->d[23] = -0.00393539f;
    data->d[24] = -1.23977089f;
    data->d[25] = -2.42576551f;
    data->d[26] = -3.14530063f;
    data->d[27] = 0.04396528f;
    data->d[28] = 0.90454811f;
    data->d[29] = -0.92105705f;
    *(result->MinResult()) = 0.00242859f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00242859f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 1, 6);
    instructions->SetOperation(3, 1, 18);
    instructions->SetOperation(4, 0, 28);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 1, 23);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 1, 19);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 1, 14);
    instructions->SetOperation(16, 0, 29);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 0, 18);
    instructions->SetOperation(19, 1, 27);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 1, 29);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 1, 1);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 0, 29);
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
    state.m_test = 1;
    state.m_seed = 18113915691549705305;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00277674f;
    state.m_maxResult = 0.00242859f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
