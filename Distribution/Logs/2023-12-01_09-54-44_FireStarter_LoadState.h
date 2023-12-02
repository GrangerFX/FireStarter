#pragma once
#include "FireStarterState.h"

// Run date: 12/01/23 09:54:44 Pacific Standard Time
// Run duration = 9367.269212 seconds
// Run generation = 35
// Run evolution = 11
// Run max result = 0.00000012
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
// Run seeds = 64
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
    settings.m_seeds = 64;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.769689f;
    data->d[1] = 0.752512f;
    data->d[2] = -0.280261f;
    data->d[3] = -1.539349f;
    data->d[4] = -0.997900f;
    data->d[5] = -0.696830f;
    data->d[6] = -1.022857f;
    data->d[7] = 1.732904f;
    data->d[8] = 1.142328f;
    data->d[9] = -0.021911f;
    data->d[10] = -1.115770f;
    data->d[11] = 0.722188f;
    data->d[12] = -1.776993f;
    data->d[13] = 0.674119f;
    data->d[14] = 1.917268f;
    data->d[15] = -8.540112f;
    data->d[16] = -0.000182f;
    data->d[17] = -4.633549f;
    data->d[18] = 1.564620f;
    data->d[19] = 4.773561f;
    data->d[20] = -0.000001f;
    data->d[21] = 0.029008f;
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
    data->d[0] = -0.808754f;
    data->d[1] = 1.406607f;
    data->d[2] = 2.848963f;
    data->d[3] = 0.666968f;
    data->d[4] = -0.082706f;
    data->d[5] = -2.300998f;
    data->d[6] = 1.299532f;
    data->d[7] = 2.094268f;
    data->d[8] = -0.909519f;
    data->d[9] = 0.076273f;
    data->d[10] = 1.574208f;
    data->d[11] = 1.735755f;
    data->d[12] = -0.431139f;
    data->d[13] = -1.665579f;
    data->d[14] = -0.908371f;
    data->d[15] = -0.610746f;
    data->d[16] = 0.000058f;
    data->d[17] = 21.903181f;
    data->d[18] = -1.695734f;
    data->d[19] = 1.986305f;
    data->d[20] = -0.123919f;
    data->d[21] = 0.953299f;
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
    data->d[0] = 1.606634f;
    data->d[1] = -0.249791f;
    data->d[2] = 0.449871f;
    data->d[3] = 0.600790f;
    data->d[4] = -1.069957f;
    data->d[5] = 0.790059f;
    data->d[6] = 2.527543f;
    data->d[7] = -2.666996f;
    data->d[8] = -2.710231f;
    data->d[9] = -0.040164f;
    data->d[10] = -0.670592f;
    data->d[11] = -0.940996f;
    data->d[12] = -1.604323f;
    data->d[13] = 1.555055f;
    data->d[14] = 1.288210f;
    data->d[15] = -3.690877f;
    data->d[16] = 14.380406f;
    data->d[17] = 0.000113f;
    data->d[18] = -0.112914f;
    data->d[19] = -0.541943f;
    data->d[20] = 0.363899f;
    data->d[21] = 1.438858f;
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
    instructions->SetOperation(0, 0, 17);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 1, 6);
    instructions->SetOperation(3, 1, 13);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 1, 27);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 1, 20);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 25);
    instructions->SetOperation(21, 1, 27);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 1, 2);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 0, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 35;
    state.m_evolution = 11;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 60;
    state.m_copy_id = 5;
    state.m_test = 4;
    state.m_seed = 17057395651971951788;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
