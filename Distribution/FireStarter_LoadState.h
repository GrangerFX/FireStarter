#pragma once
#include "FireStarterState.h"

// Run date: 03/26/23 22:56:56 Pacific Daylight Time
// Run duration = 2636.384039 seconds
// Run generation = 290
// Run result = 0.00000715
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000715
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.521787f;
    data->d[1] = 1.221979f;
    data->d[2] = -0.315042f;
    data->d[3] = 1.840497f;
    data->d[4] = -1.944936f;
    data->d[5] = 0.789106f;
    data->d[6] = -1.638961f;
    data->d[7] = -1.628907f;
    data->d[8] = 1.713987f;
    data->d[9] = 1.010511f;
    data->d[10] = 0.009684f;
    data->d[11] = 0.248837f;
    data->d[12] = 0.770913f;
    data->d[13] = -0.155635f;
    data->d[14] = 2.810049f;
    data->d[15] = -1.768766f;
    data->d[16] = -1.577344f;
    data->d[17] = -0.871277f;
    data->d[18] = -0.336950f;
    data->d[19] = 0.630030f;
    data->d[20] = -1.196529f;
    data->d[21] = -0.133900f;
    data->d[22] = -0.899819f;
    data->d[23] = -0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000007f;
} // LoadVariation0

// Variation: 1  result = 0.00000620
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.079015f;
    data->d[1] = -1.516297f;
    data->d[2] = -1.582069f;
    data->d[3] = -0.585828f;
    data->d[4] = 1.642399f;
    data->d[5] = 0.091972f;
    data->d[6] = 1.472237f;
    data->d[7] = -1.902193f;
    data->d[8] = -0.073992f;
    data->d[9] = 3.359790f;
    data->d[10] = -1.360610f;
    data->d[11] = -1.428620f;
    data->d[12] = -0.847929f;
    data->d[13] = 1.130983f;
    data->d[14] = -1.571584f;
    data->d[15] = -0.003611f;
    data->d[16] = 1.316284f;
    data->d[17] = 1.926878f;
    data->d[18] = -1.939010f;
    data->d[19] = -1.785378f;
    data->d[20] = 1.283044f;
    data->d[21] = -0.487098f;
    data->d[22] = 0.316043f;
    data->d[23] = -0.118132f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation1

// Variation: 2  result = 0.00000483
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.936339f;
    data->d[1] = -0.409743f;
    data->d[2] = -1.389678f;
    data->d[3] = 1.395813f;
    data->d[4] = 1.231312f;
    data->d[5] = -2.061690f;
    data->d[6] = -0.085328f;
    data->d[7] = 1.364562f;
    data->d[8] = -0.431914f;
    data->d[9] = -0.283266f;
    data->d[10] = 0.182359f;
    data->d[11] = -0.697008f;
    data->d[12] = 1.123648f;
    data->d[13] = -0.702085f;
    data->d[14] = -3.635702f;
    data->d[15] = -0.441513f;
    data->d[16] = -0.729097f;
    data->d[17] = -1.167010f;
    data->d[18] = 0.909278f;
    data->d[19] = 2.255507f;
    data->d[20] = -1.869396f;
    data->d[21] = -1.792435f;
    data->d[22] = -1.620342f;
    data->d[23] = 0.523598f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000005f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000007f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 21);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 1, 5);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 1, 16);
    instructions->SetOperation(10, 1, 12);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 1, 22);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 6);
    instructions->SetOperation(28, 1, 27);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 0, 18);
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
    state.m_generation = 290;
    state.m_index = 0;
    state.m_test = 95;
    state.m_seed = 3180023232327736934;
} // LoadState
