#pragma once
#include "FireStarterState.h"

// Run date: 11/12/24 21:12:59 Pacific Standard Time
// Run duration = 1836.150216 seconds
// Run generation = 44
// Run evolution = 0
// Run max result = 0.00000058
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

// Variation: 0  result = 0.00000058
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.67280394f;
    data->d[2] = -1.10275626f;
    data->d[3] = 0.55991435f;
    data->d[4] = -1.11982870f;
    data->d[5] = -0.58431309f;
    data->d[6] = 1.44732201f;
    data->d[7] = 11.01329327f;
    data->d[8] = -0.14540423f;
    data->d[9] = 1.15677118f;
    data->d[10] = 7.99199390f;
    data->d[11] = -14.07172680f;
    data->d[12] = -0.01073441f;
    data->d[13] = 0.32830065f;
    data->d[14] = 1.82072079f;
    data->d[15] = -1.43833554f;
    data->d[16] = 1.59963965f;
    data->d[17] = -0.99513555f;
    data->d[18] = -0.50750697f;
    data->d[19] = -1.97721279f;
    data->d[20] = 1.63071370f;
    data->d[21] = 0.27338076f;
    data->d[22] = 1.72042561f;
    data->d[23] = -0.48794556f;
    data->d[24] = -0.61497223f;
    data->d[25] = 0.26701567f;
    data->d[26] = 1.67093933f;
    data->d[27] = 1.40875149f;
    data->d[28] = -0.87651426f;
    data->d[29] = 1.01167750f;
    *(result->MinResult()) = 0.00000058f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000058f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 1, 1);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 4);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 11);
    instructions->SetOperation(20, 0, 12);
    instructions->SetOperation(21, 1, 6);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 1, 6);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 1, 6);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 1, 11);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 0, 13);
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
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 168;
    state.m_seed = 14948270214540011948;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000058f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
