#pragma once
#include "FireStarterState.h"

// Run date: 11/11/23 14:25:03 Pacific Standard Time
// Run duration = 58029.579969 seconds
// Run generation = 266
// Run evolution = 21
// Run result = 0.00000072
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

// Variation: 0  result = 0.00000048
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.810593f;
    data->d[2] = -1.278284f;
    data->d[3] = 0.000000f;
    data->d[4] = -1.169771f;
    data->d[5] = -1.118490f;
    data->d[6] = -0.271050f;
    data->d[7] = -1.894991f;
    data->d[8] = -0.366273f;
    data->d[9] = -0.405096f;
    data->d[10] = -2.531227f;
    data->d[11] = -1.795569f;
    data->d[12] = -1.124876f;
    data->d[13] = 0.007624f;
    data->d[14] = 0.045468f;
    data->d[15] = -0.045467f;
    data->d[16] = 0.000000f;
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

// Variation: 1  result = 0.00000033
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -1.863519f;
    data->d[2] = 0.559083f;
    data->d[3] = -0.000000f;
    data->d[4] = -1.516299f;
    data->d[5] = 0.149831f;
    data->d[6] = 1.516500f;
    data->d[7] = -0.302156f;
    data->d[8] = 0.116199f;
    data->d[9] = 1.828673f;
    data->d[10] = -0.796948f;
    data->d[11] = -1.906999f;
    data->d[12] = 0.850317f;
    data->d[13] = 0.166842f;
    data->d[14] = -0.208074f;
    data->d[15] = 0.089942f;
    data->d[16] = 0.000000f;
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

// Variation: 2  result = 0.00000072
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.595945f;
    data->d[2] = -1.797627f;
    data->d[3] = 0.000000f;
    data->d[4] = -1.561455f;
    data->d[5] = -0.787240f;
    data->d[6] = -0.030704f;
    data->d[7] = -2.376275f;
    data->d[8] = -0.088736f;
    data->d[9] = -1.823961f;
    data->d[10] = -1.127222f;
    data->d[11] = 0.303823f;
    data->d[12] = 1.635972f;
    data->d[13] = -2.289922f;
    data->d[14] = -0.468243f;
    data->d[15] = 0.991842f;
    data->d[16] = 0.000000f;
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
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 25);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 1, 13);
    instructions->SetOperation(4, 1, 7);
    instructions->SetOperation(5, 1, 7);
    instructions->SetOperation(6, 0, 7);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 27);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 20);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 0, 11);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 1, 11);
    instructions->SetOperation(25, 1, 2);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 1, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 266;
    state.m_evolution = 21;
    state.m_index = 8;
    state.m_id = 31;
    state.m_copy_id = 15;
    state.m_test = 8;
    state.m_seed = 10472690163471809774;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
