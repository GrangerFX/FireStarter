#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 17:27:24 Pacific Daylight Time
// Run duration = 1621.914796 seconds
// Run generation = 164
// Run evolution = 10
// Run max result = 0.00000018
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
// Run streams = 1
// Run units = 8
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
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.845170f;
    data->d[1] = -0.563858f;
    data->d[2] = -0.428525f;
    data->d[3] = 1.723382f;
    data->d[4] = 0.075914f;
    data->d[5] = 2.166671f;
    data->d[6] = -0.078513f;
    data->d[7] = -0.001259f;
    data->d[8] = 0.001316f;
    data->d[9] = -0.079101f;
    data->d[10] = 1.303000f;
    data->d[11] = -0.575446f;
    data->d[12] = -2.829714f;
    data->d[13] = -0.126594f;
    data->d[14] = -1.528615f;
    data->d[15] = 0.552369f;
    data->d[16] = 364311.312500f;
    data->d[17] = -0.000000f;
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

// Variation: 1  result = 0.00000018
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 3.267862f;
    data->d[1] = 0.468249f;
    data->d[2] = -5.088179f;
    data->d[3] = 2.110809f;
    data->d[4] = -0.651527f;
    data->d[5] = -1.181123f;
    data->d[6] = -1.276456f;
    data->d[7] = -0.002145f;
    data->d[8] = 0.003634f;
    data->d[9] = -0.283979f;
    data->d[10] = 0.667042f;
    data->d[11] = -0.252364f;
    data->d[12] = -1.093881f;
    data->d[13] = -0.259744f;
    data->d[14] = -0.177548f;
    data->d[15] = -0.562772f;
    data->d[16] = -87.633484f;
    data->d[17] = -0.118132f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.369262f;
    data->d[1] = -1.978614f;
    data->d[2] = 2.685361f;
    data->d[3] = 3.225267f;
    data->d[4] = -0.182931f;
    data->d[5] = -0.365701f;
    data->d[6] = -3.100188f;
    data->d[7] = 0.000076f;
    data->d[8] = -0.002265f;
    data->d[9] = -0.020958f;
    data->d[10] = 3.855517f;
    data->d[11] = -0.348997f;
    data->d[12] = 3.584529f;
    data->d[13] = 0.016653f;
    data->d[14] = -0.980622f;
    data->d[15] = 0.157935f;
    data->d[16] = -90437.101562f;
    data->d[17] = 0.523599f;
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
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 21);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 1, 25);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 1, 28);
    instructions->SetOperation(11, 1, 18);
    instructions->SetOperation(12, 1, 2);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 1, 1);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 15);
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
    state.m_evolution = 10;
    state.m_index = 10;
    state.m_copy_index = 135;
    state.m_id = 135;
    state.m_test = 6;
    state.m_seed = 18149925900633204089;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000040f;
    state.m_optimizeValid = true;
} // LoadState
