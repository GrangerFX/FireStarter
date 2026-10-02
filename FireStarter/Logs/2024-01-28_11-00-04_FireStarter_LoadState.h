#pragma once
#include "FireStarterState.h"

// Run date: 01/28/24 11:00:04 Pacific Standard Time
// Run duration = 7283.003126 seconds
// Run generation = 143
// Run evolution = 11
// Run max result = 0.00000024
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
// Run tests = 1
// Run streams = 4
// Run units = 4
// Run states = 64
// Run generations = 0
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
    settings.m_tests = 1;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 64;
    settings.m_generations = 0;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.644513f;
    data->d[1] = 2.024796f;
    data->d[2] = 0.009030f;
    data->d[3] = 12693.419922f;
    data->d[4] = -1.326436f;
    data->d[5] = 0.201893f;
    data->d[6] = -1.361838f;
    data->d[7] = 0.215268f;
    data->d[8] = 0.585418f;
    data->d[9] = -0.372079f;
    data->d[10] = 0.159317f;
    data->d[11] = 1.247134f;
    data->d[12] = -0.344471f;
    data->d[13] = -0.899866f;
    data->d[14] = -3.433651f;
    data->d[15] = 4.316457f;
    data->d[16] = 1.246734f;
    data->d[17] = -0.183715f;
    data->d[18] = 0.183715f;
    data->d[19] = 1.400735f;
    data->d[20] = 1.005714f;
    data->d[21] = 2.044684f;
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
    data->d[0] = 0.558011f;
    data->d[1] = -1.724621f;
    data->d[2] = -2.093211f;
    data->d[3] = 0.499207f;
    data->d[4] = -2.653288f;
    data->d[5] = 0.173972f;
    data->d[6] = 0.884293f;
    data->d[7] = -1.132096f;
    data->d[8] = -1.590935f;
    data->d[9] = -1.970440f;
    data->d[10] = -0.547260f;
    data->d[11] = 0.682648f;
    data->d[12] = -1.149229f;
    data->d[13] = -0.057049f;
    data->d[14] = -1.368313f;
    data->d[15] = -0.801255f;
    data->d[16] = 0.181169f;
    data->d[17] = 1.312212f;
    data->d[18] = -1.288070f;
    data->d[19] = 13.406554f;
    data->d[20] = 2.263291f;
    data->d[21] = -0.161264f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.474041f;
    data->d[1] = -1.241037f;
    data->d[2] = 0.216062f;
    data->d[3] = 1.134970f;
    data->d[4] = -0.751819f;
    data->d[5] = 2.232510f;
    data->d[6] = 1.048160f;
    data->d[7] = -2.844697f;
    data->d[8] = -1.224683f;
    data->d[9] = 1.914173f;
    data->d[10] = -0.662621f;
    data->d[11] = 0.067905f;
    data->d[12] = -0.112369f;
    data->d[13] = 0.671594f;
    data->d[14] = 4.356454f;
    data->d[15] = 0.340016f;
    data->d[16] = 0.617117f;
    data->d[17] = 0.244917f;
    data->d[18] = -0.208779f;
    data->d[19] = 0.013938f;
    data->d[20] = 0.168652f;
    data->d[21] = 6163.730469f;
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
    instructions->SetOperation(0, 0, 19);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 1, 12);
    instructions->SetOperation(6, 0, 2);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 0, 24);
    instructions->SetOperation(10, 1, 26);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 0, 18);
    instructions->SetOperation(13, 1, 2);
    instructions->SetOperation(14, 0, 18);
    instructions->SetOperation(15, 1, 16);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 0, 25);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 1, 23);
    instructions->SetOperation(27, 1, 15);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 10);
    instructions->SetOperation(31, 0, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 143;
    state.m_evolution = 11;
    state.m_children0 = 11;
    state.m_children1 = 11;
    state.m_index = 11;
    state.m_copy_index = 31;
    state.m_id = 31;
    state.m_test = 0;
    state.m_seed = 5261198731322083560;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 2.933333f;
    state.m_optimizeValid = true;
} // LoadState
