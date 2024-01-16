#pragma once
#include "FireStarterState.h"

// Run date: 01/14/24 13:08:47 Pacific Standard Time
// Run duration = 7353.459275 seconds
// Run generation = 59
// Run evolution = 6
// Run max result = 0.00000887
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

// Variation: 0  result = 0.00000244
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.707941f;
    data->d[1] = 2.144295f;
    data->d[2] = 1.714722f;
    data->d[3] = 0.509102f;
    data->d[4] = 3.158025f;
    data->d[5] = -0.326694f;
    data->d[6] = 1.792136f;
    data->d[7] = -0.059636f;
    data->d[8] = -218.093491f;
    data->d[9] = 0.003211f;
    data->d[10] = 0.624282f;
    data->d[11] = -0.453438f;
    data->d[12] = -1.095370f;
    data->d[13] = -1.308138f;
    data->d[14] = 0.223005f;
    data->d[15] = 0.436267f;
    data->d[16] = 1.719109f;
    data->d[17] = -0.441177f;
    data->d[18] = 4.509177f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00000381
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.444658f;
    data->d[1] = 1.498931f;
    data->d[2] = 0.263131f;
    data->d[3] = 0.389371f;
    data->d[4] = 0.910704f;
    data->d[5] = 1.071021f;
    data->d[6] = -0.585738f;
    data->d[7] = -0.204373f;
    data->d[8] = -0.001961f;
    data->d[9] = 778.705139f;
    data->d[10] = -1.597113f;
    data->d[11] = -0.453073f;
    data->d[12] = 0.438413f;
    data->d[13] = 0.448678f;
    data->d[14] = -0.322665f;
    data->d[15] = -2.129195f;
    data->d[16] = 0.162822f;
    data->d[17] = -1.888991f;
    data->d[18] = 0.118356f;
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
    *(result->MinResult()) = 0.000004f;
} // LoadVariation1

// Variation: 2  result = 0.00000887
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.374718f;
    data->d[1] = -2.097874f;
    data->d[2] = 1.182753f;
    data->d[3] = 0.092861f;
    data->d[4] = 2.630550f;
    data->d[5] = 1.131832f;
    data->d[6] = 0.192418f;
    data->d[7] = -1.841825f;
    data->d[8] = 303.930511f;
    data->d[9] = 0.003216f;
    data->d[10] = 0.487299f;
    data->d[11] = 1.850914f;
    data->d[12] = -0.045737f;
    data->d[13] = 0.767424f;
    data->d[14] = 0.981614f;
    data->d[15] = -0.431037f;
    data->d[16] = 1.293458f;
    data->d[17] = 2.337754f;
    data->d[18] = 0.021589f;
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
    *(result->MinResult()) = 0.000009f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000009f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 20);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 1, 28);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 1, 23);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 0, 0);
    instructions->SetOperation(17, 1, 19);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 1, 4);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 0, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 59;
    state.m_evolution = 6;
    state.m_children0 = 129;
    state.m_children1 = 129;
    state.m_index = 8;
    state.m_copy_index = 243;
    state.m_id = 243;
    state.m_test = 2;
    state.m_seed = 9851864320632790894;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000012f;
    state.m_maxResult = 0.000009f;
    state.m_evolveWeight = 0.000047f;
    state.m_optimizeValid = true;
} // LoadState
