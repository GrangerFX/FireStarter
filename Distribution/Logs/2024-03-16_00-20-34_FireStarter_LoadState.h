#pragma once
#include "FireStarterState.h"

// Run date: 03/16/24 00:20:34 Pacific Daylight Time
// Run duration = 21296.311907 seconds
// Run generation = 892
// Run evolution = 18
// Run max result = 0.00000137
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
// Run evolveSeed = 3
// Run optimizeSeed = 3
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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
    settings.m_evolveSeed = 3;
    settings.m_optimizeSeed = 3;
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
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

// Variation: 0  result = 0.00000137
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.374143f;
    data->d[2] = -0.348155f;
    data->d[3] = -1.263719f;
    data->d[4] = -1.315909f;
    data->d[5] = -0.000000f;
    data->d[6] = -1.713558f;
    data->d[7] = -0.601723f;
    data->d[8] = -0.398978f;
    data->d[9] = 1.921731f;
    data->d[10] = 0.302445f;
    data->d[11] = -0.054564f;
    data->d[12] = 4.450644f;
    data->d[13] = -6.231050f;
    data->d[14] = 2.230686f;
    data->d[15] = -1.003585f;
    data->d[16] = -3.517297f;
    data->d[17] = 1.222464f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090649f;
    data->d[1] = -0.045853f;
    data->d[2] = -1.567314f;
    data->d[3] = -3.482575f;
    data->d[4] = -2.157862f;
    data->d[5] = 0.000004f;
    data->d[6] = 0.360254f;
    data->d[7] = 1.705431f;
    data->d[8] = -0.033076f;
    data->d[9] = 0.405907f;
    data->d[10] = 6.810447f;
    data->d[11] = 0.049103f;
    data->d[12] = -11.659192f;
    data->d[13] = 26.338238f;
    data->d[14] = 5.829142f;
    data->d[15] = -0.340940f;
    data->d[16] = -1.613092f;
    data->d[17] = 3.316779f;
    data->d[18] = -0.118149f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000092
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.447758f;
    data->d[2] = 0.373655f;
    data->d[3] = 1.143293f;
    data->d[4] = -1.585042f;
    data->d[5] = -0.000000f;
    data->d[6] = -0.584561f;
    data->d[7] = 1.684948f;
    data->d[8] = -0.685827f;
    data->d[9] = 1.466062f;
    data->d[10] = 2.065358f;
    data->d[11] = 3.366204f;
    data->d[12] = 116.174835f;
    data->d[13] = 5.963859f;
    data->d[14] = 1.821812f;
    data->d[15] = 0.000008f;
    data->d[16] = -4.227642f;
    data->d[17] = -0.571336f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 1, 16);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 1, 27);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 0, 3);
    instructions->SetOperation(10, 0, 16);
    instructions->SetOperation(11, 0, 15);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 0, 28);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 3);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 1, 25);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 892;
    state.m_evolution = 18;
    state.m_index = 4;
    state.m_copy_index = 6;
    state.m_id = 6;
    state.m_test = 13;
    state.m_seed = 16876716210117266266;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000740f;
    state.m_optimizeValid = true;
} // LoadState
