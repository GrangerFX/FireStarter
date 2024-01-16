#pragma once
#include "FireStarterState.h"

// Run date: 01/15/24 09:43:25 Pacific Standard Time
// Run duration = 30628.945397 seconds
// Run generation = 24
// Run evolution = 10
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
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
    data->d[0] = 0.535098f;
    data->d[1] = -1.681059f;
    data->d[2] = -0.378662f;
    data->d[3] = 0.636554f;
    data->d[4] = -0.000000f;
    data->d[5] = 2.835443f;
    data->d[6] = 1.242849f;
    data->d[7] = -0.281299f;
    data->d[8] = 1.354691f;
    data->d[9] = -5.936144f;
    data->d[10] = 1.439054f;
    data->d[11] = 4.396306f;
    data->d[12] = -0.062628f;
    data->d[13] = -2.049525f;
    data->d[14] = -0.002146f;
    data->d[15] = -2.842025f;
    data->d[16] = -0.112218f;
    data->d[17] = -1.107546f;
    data->d[18] = 1.107547f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.265421f;
    data->d[1] = -0.820329f;
    data->d[2] = -0.812113f;
    data->d[3] = 0.666192f;
    data->d[4] = 1.784718f;
    data->d[5] = -0.843438f;
    data->d[6] = 4.089710f;
    data->d[7] = 1.042497f;
    data->d[8] = -5.134274f;
    data->d[9] = 8.261074f;
    data->d[10] = 6.377071f;
    data->d[11] = 4.174423f;
    data->d[12] = -0.009242f;
    data->d[13] = 0.042701f;
    data->d[14] = 0.005107f;
    data->d[15] = 1.206930f;
    data->d[16] = -0.748106f;
    data->d[17] = -0.115593f;
    data->d[18] = -0.002551f;
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

// Variation: 2  result = 0.00000048
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.570789f;
    data->d[1] = 1.494321f;
    data->d[2] = -0.233105f;
    data->d[3] = -0.348334f;
    data->d[4] = -0.136023f;
    data->d[5] = 1.652369f;
    data->d[6] = 0.379838f;
    data->d[7] = -3.297101f;
    data->d[8] = 0.114880f;
    data->d[9] = 9.182818f;
    data->d[10] = -1.775755f;
    data->d[11] = -0.337676f;
    data->d[12] = -0.000928f;
    data->d[13] = 1.280434f;
    data->d[14] = -0.010897f;
    data->d[15] = -5.177938f;
    data->d[16] = 1.120330f;
    data->d[17] = 2.779994f;
    data->d[18] = -2.256395f;
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
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 1, 7);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 1, 28);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 21);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 1, 16);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 1, 4);
    instructions->SetOperation(19, 1, 23);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 1, 0);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 0, 22);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 24;
    state.m_evolution = 10;
    state.m_children0 = 1311;
    state.m_children1 = 40;
    state.m_index = 39;
    state.m_copy_index = 213;
    state.m_id = 32;
    state.m_test = 15;
    state.m_seed = 4473748341092860367;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000026f;
    state.m_optimizeValid = true;
} // LoadState
