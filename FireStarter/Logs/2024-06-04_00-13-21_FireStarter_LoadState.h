#pragma once
#include "FireStarterState.h"

// Run date: 06/04/24 00:13:21 Pacific Daylight Time
// Run duration = 21483.549460 seconds
// Run generation = 324
// Run evolution = 9
// Run max result = 0.00000027
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
// Run evolveSeed = 4
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 4;
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

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000027
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.282201f;
    data->d[1] = 1.399186f;
    data->d[2] = 0.882334f;
    data->d[3] = -2.295513f;
    data->d[4] = 0.511768f;
    data->d[5] = 0.000002f;
    data->d[6] = -1.145206f;
    data->d[7] = 0.193994f;
    data->d[8] = 0.875256f;
    data->d[9] = -0.646352f;
    data->d[10] = 0.181941f;
    data->d[11] = 0.035690f;
    data->d[12] = 0.744796f;
    data->d[13] = 0.922640f;
    data->d[14] = -0.415852f;
    data->d[15] = 0.484964f;
    data->d[16] = 3.021195f;
    data->d[17] = 6.680786f;
    data->d[18] = 5.952219f;
    data->d[19] = -0.000215f;
    data->d[20] = -0.510673f;
    data->d[21] = -0.997249f;
    data->d[22] = 0.000001f;
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
    data->d[0] = 1.292826f;
    data->d[1] = 0.289501f;
    data->d[2] = -1.218179f;
    data->d[3] = 1.545896f;
    data->d[4] = -1.630914f;
    data->d[5] = -0.000007f;
    data->d[6] = 0.215573f;
    data->d[7] = 0.317970f;
    data->d[8] = -1.013743f;
    data->d[9] = 0.856691f;
    data->d[10] = -3.703532f;
    data->d[11] = -0.660941f;
    data->d[12] = 0.056956f;
    data->d[13] = 9.546797f;
    data->d[14] = -0.732737f;
    data->d[15] = 0.916702f;
    data->d[16] = 1.008917f;
    data->d[17] = -1.638099f;
    data->d[18] = 0.000074f;
    data->d[19] = 6.293053f;
    data->d[20] = -0.228870f;
    data->d[21] = -0.866776f;
    data->d[22] = -0.118136f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.381208f;
    data->d[1] = -1.051078f;
    data->d[2] = -1.589178f;
    data->d[3] = -2.065864f;
    data->d[4] = -1.390779f;
    data->d[5] = 0.000002f;
    data->d[6] = -0.296447f;
    data->d[7] = -0.162924f;
    data->d[8] = -1.298896f;
    data->d[9] = 0.770124f;
    data->d[10] = -0.129254f;
    data->d[11] = 0.625552f;
    data->d[12] = 2.638738f;
    data->d[13] = 3.395146f;
    data->d[14] = 5.211558f;
    data->d[15] = -0.007693f;
    data->d[16] = -5.042662f;
    data->d[17] = 0.864408f;
    data->d[18] = -0.001613f;
    data->d[19] = -1.175391f;
    data->d[20] = -0.314593f;
    data->d[21] = -0.806561f;
    data->d[22] = 0.523598f;
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
    instructions->SetOperation(0, 1, 29);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 1, 26);
    instructions->SetOperation(6, 0, 20);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 0, 17);
    instructions->SetOperation(9, 1, 25);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 1, 1);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 22);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 1, 16);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 22);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 0, 25);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 324;
    state.m_evolution = 9;
    state.m_index = 14;
    state.m_copy_index = 91;
    state.m_id = 91;
    state.m_test = 11;
    state.m_seed = 8860682316444742445;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000512f;
    state.m_optimizeValid = true;
} // LoadState
