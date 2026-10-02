#pragma once
#include "FireStarterState.h"

// Run date: 01/13/24 23:26:02 Pacific Standard Time
// Run duration = 10151.513526 seconds
// Run generation = 53
// Run evolution = 17
// Run max result = 0.00000131
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 4
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 4;
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
    data->d[0] = -0.243225f;
    data->d[1] = 1.509441f;
    data->d[2] = -0.745018f;
    data->d[3] = 0.495498f;
    data->d[4] = -0.364102f;
    data->d[5] = 0.363587f;
    data->d[6] = -0.921291f;
    data->d[7] = 0.288473f;
    data->d[8] = -0.559466f;
    data->d[9] = 1.065874f;
    data->d[10] = 0.131420f;
    data->d[11] = -1.125878f;
    data->d[12] = 0.435252f;
    data->d[13] = 0.173573f;
    data->d[14] = 0.092358f;
    data->d[15] = -4918.792969f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.673240f;
    data->d[1] = 0.843862f;
    data->d[2] = 1.527376f;
    data->d[3] = 0.966225f;
    data->d[4] = -0.506437f;
    data->d[5] = -0.383147f;
    data->d[6] = -0.252367f;
    data->d[7] = 0.418202f;
    data->d[8] = -0.021402f;
    data->d[9] = 0.003863f;
    data->d[10] = -0.153382f;
    data->d[11] = -0.894508f;
    data->d[12] = -0.380550f;
    data->d[13] = 0.475748f;
    data->d[14] = 0.270857f;
    data->d[15] = 0.227385f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
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

// Variation: 2  result = 0.00000131
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.365813f;
    data->d[1] = 1.843935f;
    data->d[2] = -0.767834f;
    data->d[3] = -0.408627f;
    data->d[4] = -0.032377f;
    data->d[5] = 1.052451f;
    data->d[6] = 0.067520f;
    data->d[7] = 0.994429f;
    data->d[8] = -0.985568f;
    data->d[9] = 2.016602f;
    data->d[10] = -1.157251f;
    data->d[11] = 1.306387f;
    data->d[12] = 1.407447f;
    data->d[13] = -0.240787f;
    data->d[14] = 0.575349f;
    data->d[15] = 0.788409f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 1, 17);
    instructions->SetOperation(3, 1, 17);
    instructions->SetOperation(4, 0, 27);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 21);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 1, 8);
    instructions->SetOperation(29, 0, 26);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 53;
    state.m_evolution = 17;
    state.m_children = 204;
    state.m_index = 24;
    state.m_copy_index = 315;
    state.m_id = 52;
    state.m_test = 3;
    state.m_seed = 15315465123726158874;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000004f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000078f;
    state.m_optimizeValid = true;
} // LoadState
