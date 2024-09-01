#pragma once
#include "FireStarterState.h"

// Run date: 09/01/24 10:50:06 Pacific Daylight Time
// Run duration = 1141.763959 seconds
// Run generation = 163
// Run evolution = 9
// Run max result = 0.00000060
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

// Variation: 0  result = 0.00000030
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.216369f;
    data->d[2] = -0.168462f;
    data->d[3] = 1.656462f;
    data->d[4] = 0.639403f;
    data->d[5] = 0.665625f;
    data->d[6] = 0.706664f;
    data->d[7] = 0.022197f;
    data->d[8] = -3.047639f;
    data->d[9] = 1.014238f;
    data->d[10] = -1.119291f;
    data->d[11] = 0.560146f;
    data->d[12] = 2.426544f;
    data->d[13] = 1.899705f;
    data->d[14] = 4.062000f;
    data->d[15] = 0.521370f;
    data->d[16] = 0.274504f;
    data->d[17] = 1.606866f;
    data->d[18] = 0.482074f;
    data->d[19] = 0.879815f;
    data->d[20] = -0.686223f;
    data->d[21] = 0.603749f;
    data->d[22] = -1.856494f;
    data->d[23] = 1.113131f;
    data->d[24] = 1.010640f;
    data->d[25] = -1.069952f;
    data->d[26] = -1.932751f;
    data->d[27] = 0.986269f;
    data->d[28] = 1.772741f;
    data->d[29] = 0.053639f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.113240f;
    data->d[2] = 0.234600f;
    data->d[3] = 0.610134f;
    data->d[4] = -0.767097f;
    data->d[5] = 1.360005f;
    data->d[6] = 0.686956f;
    data->d[7] = 1.151198f;
    data->d[8] = -1.594815f;
    data->d[9] = -0.898461f;
    data->d[10] = 2.885136f;
    data->d[11] = -1.783114f;
    data->d[12] = -0.582225f;
    data->d[13] = -0.531008f;
    data->d[14] = 0.978295f;
    data->d[15] = -0.182777f;
    data->d[16] = 0.031822f;
    data->d[17] = 4.023158f;
    data->d[18] = 4.337224f;
    data->d[19] = -0.758069f;
    data->d[20] = -1.290670f;
    data->d[21] = -1.096549f;
    data->d[22] = 0.287335f;
    data->d[23] = -0.849180f;
    data->d[24] = 0.180917f;
    data->d[25] = 1.761295f;
    data->d[26] = -1.204113f;
    data->d[27] = 0.086281f;
    data->d[28] = 0.121933f;
    data->d[29] = 1.589512f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.345837f;
    data->d[2] = 0.625646f;
    data->d[3] = -2.952000f;
    data->d[4] = 5.098838f;
    data->d[5] = 0.005084f;
    data->d[6] = -0.115310f;
    data->d[7] = 1.744506f;
    data->d[8] = -0.627625f;
    data->d[9] = -3.395043f;
    data->d[10] = 9.602515f;
    data->d[11] = -4.154731f;
    data->d[12] = -1.581212f;
    data->d[13] = -3.784586f;
    data->d[14] = 0.149153f;
    data->d[15] = -2.370117f;
    data->d[16] = 0.790537f;
    data->d[17] = 2.795786f;
    data->d[18] = 1.157910f;
    data->d[19] = -3.290480f;
    data->d[20] = -0.204276f;
    data->d[21] = -0.148567f;
    data->d[22] = -1.985771f;
    data->d[23] = 0.448504f;
    data->d[24] = -1.387717f;
    data->d[25] = 1.291595f;
    data->d[26] = -1.558308f;
    data->d[27] = -1.899141f;
    data->d[28] = -1.721263f;
    data->d[29] = 1.230085f;
    *(result->MinResult()) = 0.000000f;
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
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 1, 26);
    instructions->SetOperation(3, 0, 15);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 1, 19);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 0, 20);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 0, 29);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 1, 4);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 1, 20);
    instructions->SetOperation(25, 1, 23);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 7);
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
    state.m_generation = 163;
    state.m_evolution = 9;
    state.m_index = 1;
    state.m_copy_index = 57;
    state.m_id = 57;
    state.m_test = 0;
    state.m_seed = 16757853280071621898;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000222f;
    state.m_optimizeValid = true;
} // LoadState
