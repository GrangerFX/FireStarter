#pragma once
#include "FireStarterState.h"

// Run date: 01/03/24 08:36:41 Pacific Standard Time
// Run duration = 1129.230103 seconds
// Run generation = 4
// Run evolution = 4
// Run max result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
    settings.m_tests = 16;
    settings.m_states = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.479743f;
    data->d[2] = -1.286245f;
    data->d[3] = -0.141277f;
    data->d[4] = -0.835692f;
    data->d[5] = 0.169435f;
    data->d[6] = 1.839559f;
    data->d[7] = -0.693511f;
    data->d[8] = -1.212430f;
    data->d[9] = -0.668608f;
    data->d[10] = 1.691895f;
    data->d[11] = 0.025427f;
    data->d[12] = 1.783499f;
    data->d[13] = -0.329409f;
    data->d[14] = -0.368526f;
    data->d[15] = -1.005695f;
    data->d[16] = 1.083131f;
    data->d[17] = 0.063618f;
    data->d[18] = -0.174618f;
    data->d[19] = -1.864934f;
    data->d[20] = -0.207008f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.317481f;
    data->d[2] = -0.633976f;
    data->d[3] = -0.731866f;
    data->d[4] = -0.802482f;
    data->d[5] = 0.004367f;
    data->d[6] = 0.108988f;
    data->d[7] = -44046.601562f;
    data->d[8] = -1.200624f;
    data->d[9] = 0.536423f;
    data->d[10] = -0.156137f;
    data->d[11] = -0.499947f;
    data->d[12] = -0.094119f;
    data->d[13] = -0.526018f;
    data->d[14] = 1.750859f;
    data->d[15] = -1.542379f;
    data->d[16] = 0.076590f;
    data->d[17] = 3.371002f;
    data->d[18] = -2.796413f;
    data->d[19] = -0.430918f;
    data->d[20] = 0.129469f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.438309f;
    data->d[2] = -0.660113f;
    data->d[3] = -0.541672f;
    data->d[4] = -1.516874f;
    data->d[5] = -0.553274f;
    data->d[6] = 0.321570f;
    data->d[7] = 0.824887f;
    data->d[8] = 0.500547f;
    data->d[9] = 0.179133f;
    data->d[10] = 1.418283f;
    data->d[11] = -0.118931f;
    data->d[12] = 0.468252f;
    data->d[13] = -0.942196f;
    data->d[14] = -0.792300f;
    data->d[15] = -2.145091f;
    data->d[16] = 0.481313f;
    data->d[17] = 0.512775f;
    data->d[18] = -0.963315f;
    data->d[19] = -2.187140f;
    data->d[20] = -0.461796f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 22);
    instructions->SetOperation(1, 0, 8);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 0, 28);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 1, 13);
    instructions->SetOperation(12, 1, 20);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 1, 6);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 1, 3);
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
    state.m_generation = 4;
    state.m_evolution = 4;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 41;
    state.m_test = 2;
    state.m_seed = 11185022737717274956;
    state.m_optimize_pass =1;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
