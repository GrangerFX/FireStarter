#pragma once
#include "FireStarterState.h"

// Run date: 04/06/24 16:32:53 Pacific Daylight Time
// Run duration = 19709.932849 seconds
// Run generation = 764
// Run evolution = 7
// Run max result = 0.00000016
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
    data->d[0] = 0.452691f;
    data->d[1] = -1.422172f;
    data->d[2] = -0.002611f;
    data->d[3] = 0.332006f;
    data->d[4] = 2.504135f;
    data->d[5] = 540.018372f;
    data->d[6] = 0.326342f;
    data->d[7] = 0.816569f;
    data->d[8] = -1.650799f;
    data->d[9] = -0.006149f;
    data->d[10] = 0.176776f;
    data->d[11] = 0.156858f;
    data->d[12] = -1.676056f;
    data->d[13] = 0.965548f;
    data->d[14] = 1.787111f;
    data->d[15] = 0.205310f;
    data->d[16] = 0.350891f;
    data->d[17] = 3.658990f;
    data->d[18] = 0.216231f;
    data->d[19] = -0.000000f;
    data->d[20] = 3.053036f;
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
    data->d[0] = -0.658735f;
    data->d[1] = 2.035926f;
    data->d[2] = -0.139833f;
    data->d[3] = -4.940047f;
    data->d[4] = -0.993183f;
    data->d[5] = -0.071934f;
    data->d[6] = -1.516568f;
    data->d[7] = -4.256844f;
    data->d[8] = 0.127601f;
    data->d[9] = -0.029663f;
    data->d[10] = 1.843552f;
    data->d[11] = 2.555697f;
    data->d[12] = 0.019627f;
    data->d[13] = -0.768008f;
    data->d[14] = -0.222198f;
    data->d[15] = 1.621039f;
    data->d[16] = -0.301088f;
    data->d[17] = -7.608092f;
    data->d[18] = 0.763443f;
    data->d[19] = -0.010448f;
    data->d[20] = 11.306234f;
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

// Variation: 2  result = 0.00000016
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.602203f;
    data->d[1] = 1.576564f;
    data->d[2] = -2.606837f;
    data->d[3] = 0.785892f;
    data->d[4] = 0.370045f;
    data->d[5] = 0.323967f;
    data->d[6] = -0.311896f;
    data->d[7] = -2.937339f;
    data->d[8] = 0.857874f;
    data->d[9] = -0.839562f;
    data->d[10] = 0.019649f;
    data->d[11] = 0.371527f;
    data->d[12] = -0.399092f;
    data->d[13] = 0.895272f;
    data->d[14] = -0.141034f;
    data->d[15] = -0.640932f;
    data->d[16] = -0.832445f;
    data->d[17] = -3.742069f;
    data->d[18] = -0.463249f;
    data->d[19] = 0.512905f;
    data->d[20] = 1.020850f;
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
    instructions->SetOperation(0, 0, 3);
    instructions->SetOperation(1, 1, 0);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 0, 20);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 0, 26);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 0, 24);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 1, 9);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 1, 12);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 12);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 26);
    instructions->SetOperation(30, 1, 17);
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
    state.m_generation = 764;
    state.m_evolution = 7;
    state.m_index = 11;
    state.m_copy_index = 197;
    state.m_id = 197;
    state.m_test = 15;
    state.m_seed = 16292090966622377738;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.002274f;
    state.m_optimizeValid = true;
} // LoadState
