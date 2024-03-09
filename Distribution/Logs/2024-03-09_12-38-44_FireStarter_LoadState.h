#pragma once
#include "FireStarterState.h"

// Run date: 03/09/24 12:38:44 Pacific Standard Time
// Run duration = 5180.679429 seconds
// Run generation = 164
// Run evolution = 11
// Run max result = 0.00000048
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
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
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
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.903477f;
    data->d[2] = 0.802214f;
    data->d[3] = -1.122993f;
    data->d[4] = 0.993822f;
    data->d[5] = -0.871341f;
    data->d[6] = -0.000070f;
    data->d[7] = -5.379471f;
    data->d[8] = -1.207211f;
    data->d[9] = -0.278206f;
    data->d[10] = -1.216364f;
    data->d[11] = -1.628751f;
    data->d[12] = -4.337597f;
    data->d[13] = -2.673449f;
    data->d[14] = 0.101834f;
    data->d[15] = 3.953612f;
    data->d[16] = -0.627882f;
    data->d[17] = 2.758703f;
    data->d[18] = -0.659960f;
    data->d[19] = -0.187271f;
    data->d[20] = -0.000000f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -2.037122f;
    data->d[2] = 0.380468f;
    data->d[3] = 1.962036f;
    data->d[4] = -0.378229f;
    data->d[5] = 2.411049f;
    data->d[6] = 1.711848f;
    data->d[7] = 0.005597f;
    data->d[8] = 0.693438f;
    data->d[9] = -0.496067f;
    data->d[10] = 0.845763f;
    data->d[11] = 0.483000f;
    data->d[12] = -0.257980f;
    data->d[13] = 2.497603f;
    data->d[14] = 0.197289f;
    data->d[15] = 6.627622f;
    data->d[16] = 0.840155f;
    data->d[17] = 8.219789f;
    data->d[18] = 0.108847f;
    data->d[19] = 0.009351f;
    data->d[20] = -0.118132f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.834732f;
    data->d[2] = 0.901324f;
    data->d[3] = 0.008934f;
    data->d[4] = -0.346455f;
    data->d[5] = 0.513509f;
    data->d[6] = 0.002725f;
    data->d[7] = 3.545866f;
    data->d[8] = 0.267850f;
    data->d[9] = 0.342811f;
    data->d[10] = 1.835234f;
    data->d[11] = -0.626869f;
    data->d[12] = 1.389115f;
    data->d[13] = -0.841724f;
    data->d[14] = 1.199409f;
    data->d[15] = 0.842012f;
    data->d[16] = -2.840098f;
    data->d[17] = 1.368136f;
    data->d[18] = 2.332844f;
    data->d[19] = -0.318621f;
    data->d[20] = 0.523599f;
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
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 1, 20);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 0, 27);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 5);
    instructions->SetOperation(11, 1, 12);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 0, 18);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 0, 0);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 5);
    instructions->SetOperation(20, 1, 9);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 1, 22);
    instructions->SetOperation(23, 1, 24);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 3);
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
    state.m_generation = 164;
    state.m_evolution = 11;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 6;
    state.m_copy_index = 2;
    state.m_id = 2;
    state.m_test = 0;
    state.m_seed = 7058617823467582388;
    state.m_optimize_pass =1;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 12.600001f;
    state.m_optimizeValid = true;
} // LoadState
