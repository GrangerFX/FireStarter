#pragma once
#include "FireStarterState.h"

// Run date: 08/18/24 14:23:27 Pacific Daylight Time
// Run duration = 185.281563 seconds
// Run generation = 23
// Run evolution = 2
// Run max result = 0.00013721
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
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

    settings.m_mode = FIRESTARTER_EVOLVE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00012368
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.587208f;
    data->d[1] = 0.959151f;
    data->d[2] = -1.397658f;
    data->d[3] = -0.527249f;
    data->d[4] = 0.061311f;
    data->d[5] = 3.285598f;
    data->d[6] = 0.079792f;
    data->d[7] = -0.528583f;
    data->d[8] = -1.850002f;
    data->d[9] = 0.992064f;
    data->d[10] = 1.573103f;
    data->d[11] = -0.435247f;
    data->d[12] = -0.302260f;
    data->d[13] = -2.054968f;
    data->d[14] = -0.770543f;
    data->d[15] = -3.889101f;
    data->d[16] = -2.501133f;
    data->d[17] = 1.940964f;
    data->d[18] = -0.293516f;
    data->d[19] = 0.980549f;
    data->d[20] = 1.895974f;
    data->d[21] = 0.409362f;
    data->d[22] = 1.083789f;
    data->d[23] = -0.361300f;
    data->d[24] = 0.013490f;
    data->d[25] = -1.091742f;
    data->d[26] = 0.362847f;
    data->d[27] = -0.129600f;
    data->d[28] = -1.239005f;
    data->d[29] = -1.948304f;
    *(result->MinResult()) = 0.000124f;
} // LoadVariation0

// Variation: 1  result = 0.00013721
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.830689f;
    data->d[1] = 1.466241f;
    data->d[2] = 0.736789f;
    data->d[3] = 1.254193f;
    data->d[4] = -0.007369f;
    data->d[5] = -0.904294f;
    data->d[6] = 0.966612f;
    data->d[7] = 1.243192f;
    data->d[8] = 0.272121f;
    data->d[9] = -0.923096f;
    data->d[10] = -0.237722f;
    data->d[11] = 1.384040f;
    data->d[12] = -0.368652f;
    data->d[13] = -1.940892f;
    data->d[14] = -0.358989f;
    data->d[15] = 2.055519f;
    data->d[16] = 1.785768f;
    data->d[17] = -0.893322f;
    data->d[18] = 0.520370f;
    data->d[19] = 0.230443f;
    data->d[20] = -0.608199f;
    data->d[21] = 1.215314f;
    data->d[22] = 0.316579f;
    data->d[23] = -0.621942f;
    data->d[24] = -0.093548f;
    data->d[25] = -1.845713f;
    data->d[26] = 1.017520f;
    data->d[27] = -0.325811f;
    data->d[28] = 1.018253f;
    data->d[29] = 0.484387f;
    *(result->MinResult()) = 0.000137f;
} // LoadVariation1

// Variation: 2  result = 0.00008881
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.444683f;
    data->d[1] = -1.045798f;
    data->d[2] = 1.042027f;
    data->d[3] = -1.485755f;
    data->d[4] = -0.085410f;
    data->d[5] = -0.353994f;
    data->d[6] = 0.191721f;
    data->d[7] = 1.868685f;
    data->d[8] = -1.502195f;
    data->d[9] = -1.429589f;
    data->d[10] = -0.785912f;
    data->d[11] = -0.707527f;
    data->d[12] = -1.714065f;
    data->d[13] = -0.830970f;
    data->d[14] = 0.208852f;
    data->d[15] = 6.286856f;
    data->d[16] = 1.049752f;
    data->d[17] = -0.195408f;
    data->d[18] = 1.645019f;
    data->d[19] = 1.327171f;
    data->d[20] = 1.980988f;
    data->d[21] = 0.792027f;
    data->d[22] = 0.866539f;
    data->d[23] = 0.829305f;
    data->d[24] = -0.362458f;
    data->d[25] = -0.985325f;
    data->d[26] = -0.055143f;
    data->d[27] = 0.158290f;
    data->d[28] = 0.165456f;
    data->d[29] = 1.345012f;
    *(result->MinResult()) = 0.000089f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000137f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 26);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 0);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 1, 9);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 23;
    state.m_evolution = 2;
    state.m_index = 1;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 14985622542633774056;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000373f;
    state.m_maxResult = 0.000137f;
    state.m_evolveWeight = 0.004481f;
    state.m_optimizeValid = true;
} // LoadState
