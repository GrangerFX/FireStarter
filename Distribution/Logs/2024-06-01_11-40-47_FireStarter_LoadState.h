#pragma once
#include "FireStarterState.h"

// Run date: 06/01/24 11:40:47 Pacific Daylight Time
// Run duration = 442.720597 seconds
// Run generation = 205
// Run evolution = 6
// Run max result = 0.00000054
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
// Run evolveSeed = 1
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
    settings.m_evolveSeed = 1;
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

// Variation: 0  result = 0.00000035
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.698684f;
    data->d[1] = -1.129330f;
    data->d[2] = 2.478860f;
    data->d[3] = 0.049499f;
    data->d[4] = 3.577759f;
    data->d[5] = 0.329844f;
    data->d[6] = -0.478626f;
    data->d[7] = -0.960544f;
    data->d[8] = 0.042961f;
    data->d[9] = 0.991504f;
    data->d[10] = 0.321805f;
    data->d[11] = -9.400724f;
    data->d[12] = -5.391312f;
    data->d[13] = 9.742983f;
    data->d[14] = 0.024713f;
    data->d[15] = -1.040273f;
    data->d[16] = 0.465651f;
    data->d[17] = -2.522919f;
    data->d[18] = 0.736185f;
    data->d[19] = -0.000000f;
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

// Variation: 1  result = 0.00000016
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.173098f;
    data->d[1] = 3.723304f;
    data->d[2] = -1.991914f;
    data->d[3] = -0.014625f;
    data->d[4] = 12.270954f;
    data->d[5] = 3.149308f;
    data->d[6] = -0.709843f;
    data->d[7] = 0.329051f;
    data->d[8] = -0.488998f;
    data->d[9] = -0.628271f;
    data->d[10] = 0.918875f;
    data->d[11] = 4.648662f;
    data->d[12] = -6.961134f;
    data->d[13] = -12.987105f;
    data->d[14] = -0.002793f;
    data->d[15] = -0.279454f;
    data->d[16] = 0.263398f;
    data->d[17] = -1.564594f;
    data->d[18] = -1.482895f;
    data->d[19] = -0.118132f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000054
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.976768f;
    data->d[1] = 0.661514f;
    data->d[2] = -1.691604f;
    data->d[3] = -0.640548f;
    data->d[4] = -13.066240f;
    data->d[5] = 0.017062f;
    data->d[6] = 6.435185f;
    data->d[7] = -0.158306f;
    data->d[8] = -0.107037f;
    data->d[9] = 0.953237f;
    data->d[10] = 4.223812f;
    data->d[11] = 1.338016f;
    data->d[12] = 0.913306f;
    data->d[13] = -0.078644f;
    data->d[14] = -5.854988f;
    data->d[15] = -19.507023f;
    data->d[16] = 0.000440f;
    data->d[17] = -2.067779f;
    data->d[18] = -0.236936f;
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
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 0, 16);
    instructions->SetOperation(1, 0, 6);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 0, 28);
    instructions->SetOperation(7, 1, 24);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 1, 15);
    instructions->SetOperation(10, 0, 2);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 21);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 1, 24);
    instructions->SetOperation(16, 0, 18);
    instructions->SetOperation(17, 0, 22);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 19);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 0, 25);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 1, 23);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 205;
    state.m_evolution = 6;
    state.m_index = 7;
    state.m_copy_index = 34;
    state.m_id = 34;
    state.m_test = 0;
    state.m_seed = 5297872584314924180;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000356f;
    state.m_optimizeValid = true;
} // LoadState
