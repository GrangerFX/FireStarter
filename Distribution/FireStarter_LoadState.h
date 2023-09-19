#pragma once
#include "FireStarterState.h"

// Run date: 09/19/23 09:52:55 Pacific Daylight Time
// Run duration = 771.519238 seconds
// Run generation = 35
// Run evolution = 10
// Run result = 0.00000012
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
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.133618f;
    data->d[1] = 3.482601f;
    data->d[2] = -0.664345f;
    data->d[3] = -0.797555f;
    data->d[4] = -0.153661f;
    data->d[5] = -1.159851f;
    data->d[6] = 0.616630f;
    data->d[7] = -1.297853f;
    data->d[8] = -2.894594f;
    data->d[9] = 20.638597f;
    data->d[10] = -13.776121f;
    data->d[11] = -0.002255f;
    data->d[12] = -0.122143f;
    data->d[13] = 0.070159f;
    data->d[14] = -1.180335f;
    data->d[15] = 1.355214f;
    data->d[16] = -1.380143f;
    data->d[17] = -5.256152f;
    data->d[18] = -1.472213f;
    data->d[19] = 0.638663f;
    data->d[20] = -0.418516f;
    data->d[21] = -0.313845f;
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
    data->d[0] = -0.115714f;
    data->d[1] = -2.698404f;
    data->d[2] = 0.335683f;
    data->d[3] = -1.300720f;
    data->d[4] = -0.643896f;
    data->d[5] = 10.196652f;
    data->d[6] = -0.118907f;
    data->d[7] = -5.403043f;
    data->d[8] = -0.454215f;
    data->d[9] = -1.340171f;
    data->d[10] = 0.913100f;
    data->d[11] = 0.754827f;
    data->d[12] = -0.068773f;
    data->d[13] = -5.514991f;
    data->d[14] = 2.200800f;
    data->d[15] = -0.220054f;
    data->d[16] = 0.078737f;
    data->d[17] = -0.167809f;
    data->d[18] = 0.497378f;
    data->d[19] = 1.091265f;
    data->d[20] = -2.039696f;
    data->d[21] = 1.321880f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.474272f;
    data->d[1] = -1.191424f;
    data->d[2] = -1.407899f;
    data->d[3] = -0.071423f;
    data->d[4] = 0.667971f;
    data->d[5] = 1.449562f;
    data->d[6] = -0.587577f;
    data->d[7] = 0.567645f;
    data->d[8] = 2.429588f;
    data->d[9] = -21.454973f;
    data->d[10] = -7.413470f;
    data->d[11] = -0.000824f;
    data->d[12] = 0.659594f;
    data->d[13] = -0.176024f;
    data->d[14] = -1.628947f;
    data->d[15] = -1.173060f;
    data->d[16] = 0.062700f;
    data->d[17] = -2.383533f;
    data->d[18] = 0.248058f;
    data->d[19] = -1.060612f;
    data->d[20] = -0.574399f;
    data->d[21] = 0.512805f;
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
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 1, 7);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 8);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 25);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 24);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 1, 2);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 1, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 35;
    state.m_evolution = 10;
    state.m_age = 0;
    state.m_index = 0;
    state.m_id = 47;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 8655513354790359641;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
} // LoadState
