#pragma once
#include "FireStarterState.h"

// Run date: 12/14/23 13:15:23 Pacific Standard Time
// Run duration = 47155.185226 seconds
// Run generation = 41
// Run evolution = 27
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
// Run seeds = 64
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
    settings.m_seeds = 64;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.060088f;
    data->d[1] = -1.395168f;
    data->d[2] = 18.058941f;
    data->d[3] = -0.071624f;
    data->d[4] = -0.000005f;
    data->d[5] = -0.006215f;
    data->d[6] = 18.403873f;
    data->d[7] = 0.899421f;
    data->d[8] = -0.786162f;
    data->d[9] = 0.528516f;
    data->d[10] = -2.185552f;
    data->d[11] = -0.119000f;
    data->d[12] = -0.391498f;
    data->d[13] = 2.038701f;
    data->d[14] = 0.242737f;
    data->d[15] = -2.039769f;
    data->d[16] = -16.536779f;
    data->d[17] = -0.021182f;
    data->d[18] = 0.174520f;
    data->d[19] = -0.174520f;
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

// Variation: 1  result = 0.00000009
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.950073f;
    data->d[1] = 0.449338f;
    data->d[2] = -2.638824f;
    data->d[3] = -0.135646f;
    data->d[4] = -0.000003f;
    data->d[5] = 2.216279f;
    data->d[6] = -0.944129f;
    data->d[7] = 1.527700f;
    data->d[8] = -1.191522f;
    data->d[9] = -0.496259f;
    data->d[10] = 1.378295f;
    data->d[11] = 0.145940f;
    data->d[12] = 0.988870f;
    data->d[13] = -0.683499f;
    data->d[14] = 0.002590f;
    data->d[15] = -0.752288f;
    data->d[16] = 2.499747f;
    data->d[17] = -0.200648f;
    data->d[18] = -0.208004f;
    data->d[19] = 0.089871f;
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

// Variation: 2  result = 0.00000008
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.181089f;
    data->d[1] = 1.091645f;
    data->d[2] = 1.035075f;
    data->d[3] = -1.307709f;
    data->d[4] = 0.000000f;
    data->d[5] = -0.898785f;
    data->d[6] = 1.761628f;
    data->d[7] = 2.059586f;
    data->d[8] = 1.065278f;
    data->d[9] = -0.676523f;
    data->d[10] = 0.862538f;
    data->d[11] = -0.402646f;
    data->d[12] = 0.089840f;
    data->d[13] = 5.270803f;
    data->d[14] = -3.237553f;
    data->d[15] = -0.981564f;
    data->d[16] = 0.868598f;
    data->d[17] = 0.326439f;
    data->d[18] = 0.034159f;
    data->d[19] = 0.489440f;
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
    instructions->SetOperation(0, 0, 14);
    instructions->SetOperation(1, 0, 20);
    instructions->SetOperation(2, 1, 20);
    instructions->SetOperation(3, 1, 23);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 1, 23);
    instructions->SetOperation(6, 1, 16);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 13);
    instructions->SetOperation(9, 0, 26);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 0, 25);
    instructions->SetOperation(13, 0, 24);
    instructions->SetOperation(14, 1, 26);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 1, 0);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 21);
    instructions->SetOperation(21, 0, 19);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 26);
    instructions->SetOperation(24, 1, 21);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 1, 12);
    instructions->SetOperation(27, 0, 10);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 1);
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
    state.m_generation = 41;
    state.m_evolution = 27;
    state.m_index = 0;
    state.m_copy_index = 8;
    state.m_id = 25;
    state.m_copy_id = 60;
    state.m_test = 15;
    state.m_seed = 5221458340901995876;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
