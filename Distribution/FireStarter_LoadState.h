#pragma once
#include "FireStarterState.h"

// Run date: 10/08/23 10:54:25 Pacific Daylight Time
// Run duration = 12585.922301 seconds
// Run generation = 47
// Run evolution = 8
// Run result = 0.00000234
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000234
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.391226f;
    data->d[1] = -0.061997f;
    data->d[2] = -0.541932f;
    data->d[3] = 0.859588f;
    data->d[4] = 0.232919f;
    data->d[5] = 0.000343f;
    data->d[6] = 0.030358f;
    data->d[7] = 0.000000f;
    data->d[8] = -10.751085f;
    data->d[9] = 0.022424f;
    data->d[10] = -1.388810f;
    data->d[11] = 0.266236f;
    data->d[12] = -0.801040f;
    data->d[13] = -2.214555f;
    data->d[14] = -0.527653f;
    data->d[15] = -1.561073f;
    data->d[16] = -3.270534f;
    data->d[17] = 1.857979f;
    data->d[18] = 1.149752f;
    data->d[19] = 2.127273f;
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

// Variation: 1  result = 0.00000191
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.151361f;
    data->d[1] = -0.191904f;
    data->d[2] = -1.365759f;
    data->d[3] = -1.227188f;
    data->d[4] = -0.838010f;
    data->d[5] = -1.202411f;
    data->d[6] = -0.963055f;
    data->d[7] = -0.118156f;
    data->d[8] = -2.093029f;
    data->d[9] = -0.275329f;
    data->d[10] = -0.000249f;
    data->d[11] = -0.030022f;
    data->d[12] = -0.732003f;
    data->d[13] = -1.322340f;
    data->d[14] = 0.903268f;
    data->d[15] = -1.104272f;
    data->d[16] = 1.837607f;
    data->d[17] = 2.363899f;
    data->d[18] = -0.687037f;
    data->d[19] = 0.751115f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000157
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.466002f;
    data->d[1] = -0.706419f;
    data->d[2] = -1.723656f;
    data->d[3] = 0.185507f;
    data->d[4] = 0.159876f;
    data->d[5] = -1.323795f;
    data->d[6] = -2.474052f;
    data->d[7] = 0.523607f;
    data->d[8] = -9.857685f;
    data->d[9] = 5.131041f;
    data->d[10] = 0.000302f;
    data->d[11] = 0.236396f;
    data->d[12] = -3.544414f;
    data->d[13] = -0.609003f;
    data->d[14] = 0.943638f;
    data->d[15] = 1.244309f;
    data->d[16] = -0.585127f;
    data->d[17] = -0.215765f;
    data->d[18] = -1.063338f;
    data->d[19] = 2.232242f;
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
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 1);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 1, 19);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 21);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 1, 7);
    instructions->SetOperation(13, 0, 24);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 27);
    instructions->SetOperation(16, 1, 16);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 1, 19);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 1, 22);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 1, 15);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 47;
    state.m_evolution = 8;
    state.m_age = 6;
    state.m_index = 52;
    state.m_id = 40;
    state.m_copy_id = 55;
    state.m_test = 18;
    state.m_seed = 10801613397896629034;
    state.m_maxResult = 0.000002f;
    state.m_optimizePass = false;
} // LoadState
