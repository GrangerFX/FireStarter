#pragma once
#include "FireStarterState.h"

// Run date: 10/28/24 16:56:38 Pacific Daylight Time
// Run duration = 82.800110 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000039
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
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
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
    settings.m_evolveSeed = 123;
    settings.m_optimizeSeed = 123;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000039
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.36897081f;
    data->d[1] = 0.83457673f;
    data->d[2] = -0.96740460f;
    data->d[3] = 1.14134943f;
    data->d[4] = 0.73884284f;
    data->d[5] = -0.84121013f;
    data->d[6] = -0.05058495f;
    data->d[7] = 1.87067330f;
    data->d[8] = 0.01145888f;
    data->d[9] = 0.16074932f;
    data->d[10] = 2.72739697f;
    data->d[11] = -2.23106337f;
    data->d[12] = -0.86025435f;
    data->d[13] = 0.90478897f;
    data->d[14] = -3.27542782f;
    data->d[15] = -2.27540040f;
    data->d[16] = 0.94627100f;
    data->d[17] = -0.02432866f;
    data->d[18] = 1.84764826f;
    data->d[19] = 0.46686444f;
    data->d[20] = -0.59911990f;
    data->d[21] = -1.23614168f;
    data->d[22] = -0.89062977f;
    data->d[23] = -1.17045355f;
    data->d[24] = 0.44454148f;
    data->d[25] = 1.77003360f;
    data->d[26] = 1.29458594f;
    data->d[27] = -1.08044577f;
    data->d[28] = -0.33412492f;
    data->d[29] = 1.82892454f;
    *(result->MinResult()) = 0.00000039f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000039f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 3);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 28);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 6);
    instructions->SetOperation(5, 0, 26);
    instructions->SetOperation(6, 1, 10);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 29);
    instructions->SetOperation(9, 0, 24);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 1, 21);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 1, 25);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 0, 26);
    instructions->SetOperation(28, 1, 29);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 28);
    instructions->SetOperation(31, 1, 28);
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
    state.m_generation = 5;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 734326773710676551;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000039f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
