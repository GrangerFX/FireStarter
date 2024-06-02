#pragma once
#include "FireStarterState.h"

// Run date: 06/02/24 05:30:51 Pacific Daylight Time
// Run duration = 8353.808377 seconds
// Run generation = 17
// Run evolution = 1
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
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

// Run scale = 0.200000f
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

    settings.m_mode = FIRESTARTER_EVOLVE;
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

    settings.m_scale = 0.200000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000017
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.337443f;
    data->d[2] = 0.622188f;
    data->d[3] = 0.252392f;
    data->d[4] = -0.433304f;
    data->d[5] = 1.531387f;
    data->d[6] = 1.843122f;
    data->d[7] = 0.002035f;
    data->d[8] = -0.653449f;
    data->d[9] = 7.143238f;
    data->d[10] = -2.763368f;
    data->d[11] = 2.504917f;
    data->d[12] = -0.444869f;
    data->d[13] = -1.462774f;
    data->d[14] = -4.324629f;
    data->d[15] = 0.304504f;
    data->d[16] = 0.992151f;
    data->d[17] = 0.677183f;
    data->d[18] = -1.744446f;
    data->d[19] = -1.652907f;
    data->d[20] = 0.000000f;
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
    data->d[0] = -3.090658f;
    data->d[1] = 0.427233f;
    data->d[2] = 0.057470f;
    data->d[3] = -1.295271f;
    data->d[4] = 1.353827f;
    data->d[5] = -0.765873f;
    data->d[6] = -1.556569f;
    data->d[7] = 0.006719f;
    data->d[8] = 1.288911f;
    data->d[9] = -1.588303f;
    data->d[10] = 9.297068f;
    data->d[11] = -7.890987f;
    data->d[12] = -0.185199f;
    data->d[13] = -0.480590f;
    data->d[14] = 3.659435f;
    data->d[15] = 0.199460f;
    data->d[16] = 2.012419f;
    data->d[17] = 0.938819f;
    data->d[18] = -1.454106f;
    data->d[19] = -1.382838f;
    data->d[20] = -0.118132f;
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

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.932269f;
    data->d[2] = 0.449479f;
    data->d[3] = 1.434260f;
    data->d[4] = 0.291240f;
    data->d[5] = -2.031982f;
    data->d[6] = -1.300339f;
    data->d[7] = -0.003577f;
    data->d[8] = -0.553844f;
    data->d[9] = 0.504794f;
    data->d[10] = 3.853601f;
    data->d[11] = -1.168905f;
    data->d[12] = -0.014829f;
    data->d[13] = 0.342618f;
    data->d[14] = 7.854655f;
    data->d[15] = -0.033689f;
    data->d[16] = 1.567641f;
    data->d[17] = 0.792134f;
    data->d[18] = 0.576770f;
    data->d[19] = 0.277312f;
    data->d[20] = 0.523599f;
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
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 6);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 1, 24);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 0, 18);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 24);
    instructions->SetOperation(22, 0, 9);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 28);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 17;
    state.m_evolution = 1;
    state.m_index = 2;
    state.m_copy_index = 161;
    state.m_id = 161;
    state.m_test = 4;
    state.m_seed = 10044423730336204924;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000029f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000059f;
    state.m_optimizeValid = true;
} // LoadState
