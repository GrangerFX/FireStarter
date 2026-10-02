#pragma once
#include "FireStarterState.h"

// Run date: 01/11/24 22:24:25 Pacific Standard Time
// Run duration = 43435.713050 seconds
// Run generation = 84
// Run evolution = 17
// Run max result = 0.00000085
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

// Variation: 0  result = 0.00000048
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.335414f;
    data->d[1] = 1.580602f;
    data->d[2] = -1.021747f;
    data->d[3] = 0.583033f;
    data->d[4] = 0.055131f;
    data->d[5] = -1.590740f;
    data->d[6] = 1.711798f;
    data->d[7] = 1.789443f;
    data->d[8] = 309.373322f;
    data->d[9] = -0.732899f;
    data->d[10] = 1.147458f;
    data->d[11] = 17.114920f;
    data->d[12] = -1.063755f;
    data->d[13] = -168.047180f;
    data->d[14] = -0.335633f;
    data->d[15] = -0.005185f;
    data->d[16] = -0.000943f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.311955f;
    data->d[1] = -1.508609f;
    data->d[2] = -0.140542f;
    data->d[3] = 1.485353f;
    data->d[4] = 0.018216f;
    data->d[5] = -1.482740f;
    data->d[6] = 2.945491f;
    data->d[7] = -0.197731f;
    data->d[8] = -1.071602f;
    data->d[9] = -0.771167f;
    data->d[10] = -2.182475f;
    data->d[11] = 1.700766f;
    data->d[12] = 0.017057f;
    data->d[13] = 2.125385f;
    data->d[14] = -0.648831f;
    data->d[15] = -0.538295f;
    data->d[16] = 1.191007f;
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

// Variation: 2  result = 0.00000085
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.348562f;
    data->d[1] = -1.368799f;
    data->d[2] = -0.681165f;
    data->d[3] = 1.039583f;
    data->d[4] = 0.047218f;
    data->d[5] = -1.831057f;
    data->d[6] = 0.411544f;
    data->d[7] = 1.612629f;
    data->d[8] = 6.173669f;
    data->d[9] = -0.805217f;
    data->d[10] = 1.281702f;
    data->d[11] = 1.223077f;
    data->d[12] = -0.334943f;
    data->d[13] = 1.750441f;
    data->d[14] = -0.017377f;
    data->d[15] = -0.345180f;
    data->d[16] = -1.662279f;
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
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 0, 9);
    instructions->SetOperation(3, 1, 22);
    instructions->SetOperation(4, 0, 5);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 1, 28);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 0, 26);
    instructions->SetOperation(11, 1, 26);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 0, 5);
    instructions->SetOperation(17, 0, 22);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 5);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 1, 13);
    instructions->SetOperation(22, 1, 20);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 28);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 0, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 84;
    state.m_evolution = 17;
    state.m_children = 782;
    state.m_index = 28;
    state.m_copy_index = 245;
    state.m_id = 29;
    state.m_test = 9;
    state.m_seed = 2546310336490391319;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000228f;
    state.m_optimizeValid = true;
} // LoadState
