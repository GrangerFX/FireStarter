#pragma once
#include "FireStarterState.h"

// Run date: 11/12/23 09:18:21 Pacific Standard Time
// Run duration = 68736.230043 seconds
// Run generation = 3
// Run evolution = 3
// Run result = 0.00004586
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_optimizations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00004586
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.044094f;
    data->d[1] = -4.186248f;
    data->d[2] = -0.122036f;
    data->d[3] = 0.226681f;
    data->d[4] = 1.634984f;
    data->d[5] = 1.485332f;
    data->d[6] = -0.422252f;
    data->d[7] = 0.844288f;
    data->d[8] = 0.003223f;
    data->d[9] = 134.809509f;
    data->d[10] = -0.911840f;
    data->d[11] = -0.543993f;
    data->d[12] = 4.096700f;
    data->d[13] = 1.414698f;
    data->d[14] = 1.676168f;
    data->d[15] = 0.126195f;
    data->d[16] = 0.718233f;
    data->d[17] = 0.646700f;
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
    *(result->MinResult()) = 0.000046f;
} // LoadVariation0

// Variation: 1  result = 0.00004339
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.116684f;
    data->d[1] = -1.864750f;
    data->d[2] = -0.107764f;
    data->d[3] = 0.225632f;
    data->d[4] = -0.422162f;
    data->d[5] = -0.833200f;
    data->d[6] = 0.382733f;
    data->d[7] = -0.456525f;
    data->d[8] = -0.066096f;
    data->d[9] = 1.951047f;
    data->d[10] = -1.377258f;
    data->d[11] = -0.859534f;
    data->d[12] = 1.037807f;
    data->d[13] = 2.379518f;
    data->d[14] = -1.266144f;
    data->d[15] = 6.992198f;
    data->d[16] = -2.524080f;
    data->d[17] = 0.429262f;
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
    *(result->MinResult()) = 0.000043f;
} // LoadVariation1

// Variation: 2  result = 0.00003123
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.245649f;
    data->d[1] = -3.781568f;
    data->d[2] = -0.108696f;
    data->d[3] = 1.354988f;
    data->d[4] = 1.179825f;
    data->d[5] = -0.243648f;
    data->d[6] = -0.349703f;
    data->d[7] = -1.298981f;
    data->d[8] = 1.313891f;
    data->d[9] = 0.375242f;
    data->d[10] = -1.326917f;
    data->d[11] = -0.569657f;
    data->d[12] = 0.362609f;
    data->d[13] = -2.160698f;
    data->d[14] = 1.787225f;
    data->d[15] = 6.883728f;
    data->d[16] = -0.025591f;
    data->d[17] = 2.386953f;
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
    *(result->MinResult()) = 0.000031f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000046f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 20);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 1, 12);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 0, 3);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 0, 24);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 1, 23);
    instructions->SetOperation(21, 1, 18);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 3;
    state.m_evolution = 3;
    state.m_index = 44;
    state.m_id = 52;
    state.m_copy_id = 43;
    state.m_test = 14;
    state.m_seed = 10864185775961234927;
    state.m_maxResult = 0.000046f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
