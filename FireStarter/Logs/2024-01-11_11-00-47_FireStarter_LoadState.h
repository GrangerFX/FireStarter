#pragma once
#include "FireStarterState.h"

// Run date: 01/11/24 11:00:47 Pacific Standard Time
// Run duration = 59692.216825 seconds
// Run generation = 167
// Run evolution = 10
// Run max result = 0.00000036
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.402883f;
    data->d[1] = 0.634385f;
    data->d[2] = -1.900080f;
    data->d[3] = 1.068667f;
    data->d[4] = -0.409111f;
    data->d[5] = -0.000001f;
    data->d[6] = -1.440876f;
    data->d[7] = 0.720008f;
    data->d[8] = 1.725273f;
    data->d[9] = -0.000154f;
    data->d[10] = 0.075799f;
    data->d[11] = 0.347458f;
    data->d[12] = 2.010977f;
    data->d[13] = -2.169387f;
    data->d[14] = -2.728908f;
    data->d[15] = 2.099734f;
    data->d[16] = 24.549768f;
    data->d[17] = 0.076417f;
    data->d[18] = -1.290500f;
    data->d[19] = 0.000001f;
    data->d[20] = 0.000000f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.182938f;
    data->d[1] = -1.421895f;
    data->d[2] = 0.856493f;
    data->d[3] = 1.433628f;
    data->d[4] = 0.630020f;
    data->d[5] = 0.000003f;
    data->d[6] = -1.353264f;
    data->d[7] = -12.146905f;
    data->d[8] = -4.985662f;
    data->d[9] = 0.162203f;
    data->d[10] = -0.000028f;
    data->d[11] = 0.463144f;
    data->d[12] = 0.347382f;
    data->d[13] = 1.253979f;
    data->d[14] = -0.153847f;
    data->d[15] = 614.090881f;
    data->d[16] = 1.814936f;
    data->d[17] = 1.661891f;
    data->d[18] = 4.860010f;
    data->d[19] = -0.118125f;
    data->d[20] = 0.000000f;
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

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.048887f;
    data->d[1] = -1.613391f;
    data->d[2] = -1.132589f;
    data->d[3] = 0.484955f;
    data->d[4] = -0.258050f;
    data->d[5] = -0.000000f;
    data->d[6] = -1.944560f;
    data->d[7] = 1.139465f;
    data->d[8] = 4.100637f;
    data->d[9] = -0.000016f;
    data->d[10] = -0.205579f;
    data->d[11] = 0.159582f;
    data->d[12] = -2.585611f;
    data->d[13] = 1.910580f;
    data->d[14] = -0.563927f;
    data->d[15] = -0.274581f;
    data->d[16] = 60.918533f;
    data->d[17] = -0.463163f;
    data->d[18] = 1.602343f;
    data->d[19] = 0.523599f;
    data->d[20] = 0.000000f;
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
    instructions->SetOperation(0, 0, 26);
    instructions->SetOperation(1, 1, 0);
    instructions->SetOperation(2, 1, 17);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 1, 23);
    instructions->SetOperation(6, 0, 24);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 1, 21);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 1, 25);
    instructions->SetOperation(28, 0, 23);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 25);
    instructions->SetOperation(31, 1, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 167;
    state.m_evolution = 10;
    state.m_children = 74;
    state.m_index = 14;
    state.m_copy_index = 947;
    state.m_id = 661;
    state.m_test = 12;
    state.m_seed = 6783619900155743254;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000027f;
    state.m_optimizeValid = true;
} // LoadState
