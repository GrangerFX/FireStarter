#pragma once
#include "FireStarterState.h"

// Run date: 12/30/23 18:53:05 Pacific Standard Time
// Run duration = 25649.283207 seconds
// Run generation = 33
// Run evolution = 16
// Run max result = 0.00000009
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
// Run states = 64
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_states = 64;
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

// Variation: 0  result = 0.00000007
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.094375f;
    data->d[2] = 0.000000f;
    data->d[3] = 0.160287f;
    data->d[4] = 0.818223f;
    data->d[5] = -2.979838f;
    data->d[6] = -0.721127f;
    data->d[7] = -1.233997f;
    data->d[8] = 1.871739f;
    data->d[9] = 0.821952f;
    data->d[10] = 0.428128f;
    data->d[11] = -1.478970f;
    data->d[12] = -0.627899f;
    data->d[13] = -0.463113f;
    data->d[14] = -0.363909f;
    data->d[15] = 0.060370f;
    data->d[16] = -0.060370f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000003
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.103250f;
    data->d[2] = 0.000000f;
    data->d[3] = -1.559542f;
    data->d[4] = 0.002456f;
    data->d[5] = 33.848442f;
    data->d[6] = -1.270681f;
    data->d[7] = -0.465137f;
    data->d[8] = 1.051668f;
    data->d[9] = 0.641031f;
    data->d[10] = 1.793213f;
    data->d[11] = -0.772030f;
    data->d[12] = -0.682879f;
    data->d[13] = -0.448425f;
    data->d[14] = 1.074949f;
    data->d[15] = -0.509280f;
    data->d[16] = 0.391149f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000009
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.169007f;
    data->d[2] = -0.000000f;
    data->d[3] = -0.074399f;
    data->d[4] = -0.027667f;
    data->d[5] = -4.808107f;
    data->d[6] = -3.644305f;
    data->d[7] = -0.455070f;
    data->d[8] = 1.140692f;
    data->d[9] = 0.877580f;
    data->d[10] = -0.848721f;
    data->d[11] = 0.393352f;
    data->d[12] = -0.116824f;
    data->d[13] = 3.660293f;
    data->d[14] = 2.259691f;
    data->d[15] = 0.676179f;
    data->d[16] = -0.152580f;
    data->d[17] = 0.000000f;
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
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 1, 22);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 0, 6);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 1, 22);
    instructions->SetOperation(7, 1, 11);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 0, 27);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 0, 23);
    instructions->SetOperation(15, 1, 1);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 0, 23);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 1, 22);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 0);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 21);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 33;
    state.m_evolution = 16;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 6;
    state.m_id = 600;
    state.m_test = 14;
    state.m_seed = 1034632947171604276;
    state.m_optimize_pass =9;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
