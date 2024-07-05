#pragma once
#include "FireStarterState.h"

// Run date: 07/04/24 15:33:17 Pacific Daylight Time
// Run duration = 1829.957139 seconds
// Run generation = 1002
// Run evolution = 11
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000036
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.132929f;
    data->d[1] = 0.062479f;
    data->d[2] = 1.590276f;
    data->d[3] = -1.730760f;
    data->d[4] = -5.265469f;
    data->d[5] = 0.757812f;
    data->d[6] = -0.168185f;
    data->d[7] = 0.381375f;
    data->d[8] = -1.965673f;
    data->d[9] = -0.352195f;
    data->d[10] = 1.530245f;
    data->d[11] = 1.644887f;
    data->d[12] = -1.528071f;
    data->d[13] = -0.032263f;
    data->d[14] = -1.532512f;
    data->d[15] = -2.539899f;
    data->d[16] = -1.546543f;
    data->d[17] = 0.067437f;
    data->d[18] = -1.820930f;
    data->d[19] = -0.217119f;
    data->d[20] = 0.613569f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.575055f;
    data->d[1] = 0.167318f;
    data->d[2] = -0.365099f;
    data->d[3] = -0.281143f;
    data->d[4] = 2.189194f;
    data->d[5] = 1.192946f;
    data->d[6] = 0.348576f;
    data->d[7] = 0.022958f;
    data->d[8] = -0.450400f;
    data->d[9] = -1.121022f;
    data->d[10] = 1.263799f;
    data->d[11] = 0.839970f;
    data->d[12] = -2.125304f;
    data->d[13] = 0.613264f;
    data->d[14] = 1.292104f;
    data->d[15] = 1.658782f;
    data->d[16] = 1.054995f;
    data->d[17] = 1.054673f;
    data->d[18] = -0.901256f;
    data->d[19] = -0.152661f;
    data->d[20] = 0.812646f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.068013f;
    data->d[1] = 1.222324f;
    data->d[2] = -1.293605f;
    data->d[3] = -0.384025f;
    data->d[4] = -1.669626f;
    data->d[5] = 0.236228f;
    data->d[6] = 0.216634f;
    data->d[7] = -0.042120f;
    data->d[8] = 0.563830f;
    data->d[9] = 0.914367f;
    data->d[10] = -2.040437f;
    data->d[11] = -1.417634f;
    data->d[12] = 2.354718f;
    data->d[13] = -0.379433f;
    data->d[14] = -0.385358f;
    data->d[15] = 6.239979f;
    data->d[16] = -0.920419f;
    data->d[17] = -1.262855f;
    data->d[18] = 0.430967f;
    data->d[19] = -0.420888f;
    data->d[20] = 0.954514f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 11);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 1, 19);
    instructions->SetOperation(7, 0, 19);
    instructions->SetOperation(8, 1, 0);
    instructions->SetOperation(9, 0, 20);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 1, 17);
    instructions->SetOperation(17, 1, 20);
    instructions->SetOperation(18, 0, 27);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 29);
    instructions->SetOperation(25, 1, 23);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 1, 4);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1002;
    state.m_evolution = 11;
    state.m_index = 14;
    state.m_copy_index = 57;
    state.m_id = 57;
    state.m_test = 0;
    state.m_seed = 17802508422308640577;
    state.m_optimize_pass =1;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.001193f;
    state.m_optimizeValid = true;
} // LoadState
