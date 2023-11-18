#pragma once
#include "FireStarterState.h"

// Run date: 11/17/23 10:09:26 Pacific Standard Time
// Run duration = 64378.184686 seconds
// Run generation = 260
// Run evolution = 18
// Run result = 0.00000215
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
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

// Variation: 0  result = 0.00000089
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.507766f;
    data->d[1] = 0.690505f;
    data->d[2] = -0.095309f;
    data->d[3] = 0.950898f;
    data->d[4] = 0.950898f;
    data->d[5] = -0.213306f;
    data->d[6] = -1.111716f;
    data->d[7] = 0.107048f;
    data->d[8] = 0.154924f;
    data->d[9] = -0.172265f;
    data->d[10] = 2.044015f;
    data->d[11] = -0.149100f;
    data->d[12] = -0.610587f;
    data->d[13] = -0.663664f;
    data->d[14] = -1.395974f;
    data->d[15] = -1.271860f;
    data->d[16] = -1.030660f;
    data->d[17] = -0.027424f;
    data->d[18] = 2.035096f;
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

// Variation: 1  result = 0.00000131
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.955255f;
    data->d[1] = 0.500927f;
    data->d[2] = 1.348722f;
    data->d[3] = 0.208877f;
    data->d[4] = 0.242309f;
    data->d[5] = -0.609253f;
    data->d[6] = -2.124270f;
    data->d[7] = -0.108480f;
    data->d[8] = 1.262912f;
    data->d[9] = -0.538997f;
    data->d[10] = 3.029300f;
    data->d[11] = -0.035487f;
    data->d[12] = -1.020793f;
    data->d[13] = -1.160178f;
    data->d[14] = -1.672023f;
    data->d[15] = -0.622947f;
    data->d[16] = 0.672321f;
    data->d[17] = 0.074432f;
    data->d[18] = 0.511271f;
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

// Variation: 2  result = 0.00000215
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.854407f;
    data->d[1] = 0.658871f;
    data->d[2] = -1.658872f;
    data->d[3] = 0.665287f;
    data->d[4] = -1.470327f;
    data->d[5] = -0.132049f;
    data->d[6] = 0.560056f;
    data->d[7] = 1.161698f;
    data->d[8] = -0.930287f;
    data->d[9] = -0.134466f;
    data->d[10] = -1.510923f;
    data->d[11] = -0.196974f;
    data->d[12] = -0.205180f;
    data->d[13] = 2.003518f;
    data->d[14] = 0.497973f;
    data->d[15] = -0.111155f;
    data->d[16] = -0.168628f;
    data->d[17] = 0.090270f;
    data->d[18] = -4.554754f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 0, 24);
    instructions->SetOperation(6, 1, 10);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 28);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 0, 27);
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
    state.m_generation = 260;
    state.m_evolution = 18;
    state.m_index = 19;
    state.m_id = 41;
    state.m_copy_id = 47;
    state.m_test = 14;
    state.m_seed = 16812396447923439739;
    state.m_maxResult = 0.000002f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
