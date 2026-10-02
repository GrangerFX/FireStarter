#pragma once
#include "FireStarterState.h"

// Run date: 06/17/24 15:15:27 Pacific Daylight Time
// Run duration = 415.896259 seconds
// Run generation = 352
// Run evolution = 11
// Run max result = 0.00000072
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000010
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.109293f;
    data->d[2] = -1.516313f;
    data->d[3] = -1.061766f;
    data->d[4] = -0.007460f;
    data->d[5] = -2.612478f;
    data->d[6] = 1.030440f;
    data->d[7] = 0.959303f;
    data->d[8] = 0.190765f;
    data->d[9] = 0.731040f;
    data->d[10] = -0.003948f;
    data->d[11] = -1.065886f;
    data->d[12] = 13.321477f;
    data->d[13] = 8.474228f;
    data->d[14] = -2.334205f;
    data->d[15] = -0.014548f;
    data->d[16] = -0.024977f;
    data->d[17] = 2.806776f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.533091f;
    data->d[2] = 0.318541f;
    data->d[3] = -0.944832f;
    data->d[4] = 0.231962f;
    data->d[5] = 1.810453f;
    data->d[6] = -1.970292f;
    data->d[7] = -3.182336f;
    data->d[8] = -0.287995f;
    data->d[9] = -0.006131f;
    data->d[10] = 1.050085f;
    data->d[11] = -6.504737f;
    data->d[12] = -0.253128f;
    data->d[13] = -7.055454f;
    data->d[14] = 2.983642f;
    data->d[15] = -0.150900f;
    data->d[16] = -0.462322f;
    data->d[17] = 1.574284f;
    data->d[18] = -0.118132f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000048
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.130664f;
    data->d[2] = -1.402441f;
    data->d[3] = 2.063460f;
    data->d[4] = -3.659100f;
    data->d[5] = 1.586469f;
    data->d[6] = -3.365626f;
    data->d[7] = 3.224625f;
    data->d[8] = -1.080725f;
    data->d[9] = 1.645689f;
    data->d[10] = 1.556909f;
    data->d[11] = -0.013777f;
    data->d[12] = -0.407431f;
    data->d[13] = 6.135777f;
    data->d[14] = -1.761341f;
    data->d[15] = -0.004811f;
    data->d[16] = 1.410461f;
    data->d[17] = -2.347446f;
    data->d[18] = 0.523598f;
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
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 1, 1);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 1, 15);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 11);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 9);
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
    state.m_generation = 352;
    state.m_evolution = 11;
    state.m_index = 13;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 5093631572585143260;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000373f;
    state.m_optimizeValid = true;
} // LoadState
