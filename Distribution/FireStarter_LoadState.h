#pragma once
#include "FireStarterState.h"

// Run date: 09/10/23 11:19:47 Pacific Daylight Time
// Run duration = 1313.700733 seconds
// Run generation = 49
// Run evolution = 17
// Run result = 0.00000143
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.404622f;
    data->d[1] = -0.767731f;
    data->d[2] = -0.975908f;
    data->d[3] = 0.768623f;
    data->d[4] = -1.053256f;
    data->d[5] = 1.152885f;
    data->d[6] = 0.380869f;
    data->d[7] = -0.739663f;
    data->d[8] = 0.935422f;
    data->d[9] = 0.358013f;
    data->d[10] = -0.822585f;
    data->d[11] = -0.836614f;
    data->d[12] = 0.019235f;
    data->d[13] = -1.652130f;
    data->d[14] = 2.678499f;
    data->d[15] = 0.938897f;
    data->d[16] = 11.809690f;
    data->d[17] = -3.221232f;
    data->d[18] = -1.129750f;
    data->d[19] = -0.133260f;
    data->d[20] = 0.133260f;
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

// Variation: 1  result = 0.00000143
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.628609f;
    data->d[1] = -0.344208f;
    data->d[2] = -1.732565f;
    data->d[3] = -0.113055f;
    data->d[4] = -0.878485f;
    data->d[5] = -0.425159f;
    data->d[6] = -1.107194f;
    data->d[7] = 0.036146f;
    data->d[8] = -1.703506f;
    data->d[9] = -1.256860f;
    data->d[10] = -0.371891f;
    data->d[11] = -3.277063f;
    data->d[12] = -0.011885f;
    data->d[13] = -2.671102f;
    data->d[14] = -1.443167f;
    data->d[15] = 1.215848f;
    data->d[16] = 10.796115f;
    data->d[17] = -3.357133f;
    data->d[18] = 0.540921f;
    data->d[19] = -0.376499f;
    data->d[20] = 0.258366f;
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

// Variation: 2  result = 0.00000119
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.252772f;
    data->d[1] = 0.301649f;
    data->d[2] = 0.989334f;
    data->d[3] = 0.348944f;
    data->d[4] = -1.033486f;
    data->d[5] = 0.106040f;
    data->d[6] = 2.125366f;
    data->d[7] = -2.136166f;
    data->d[8] = 1.271562f;
    data->d[9] = -0.671023f;
    data->d[10] = -2.352161f;
    data->d[11] = -0.408684f;
    data->d[12] = -0.003932f;
    data->d[13] = -0.251883f;
    data->d[14] = 0.330367f;
    data->d[15] = -1.362012f;
    data->d[16] = 0.314858f;
    data->d[17] = 2.802972f;
    data->d[18] = 5.897514f;
    data->d[19] = 0.448645f;
    data->d[20] = 0.074954f;
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
    instructions->SetOperation(0, 0, 26);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 1, 6);
    instructions->SetOperation(3, 0, 28);
    instructions->SetOperation(4, 0, 28);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 12);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 24);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 1, 19);
    instructions->SetOperation(20, 1, 9);
    instructions->SetOperation(21, 1, 24);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 0, 6);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 1, 8);
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
    state.m_generation = 49;
    state.m_evolution = 17;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 5;
    state.m_copy_id = 46;
    state.m_test = 4;
    state.m_seed = 17402019660640296847;
    state.m_maxResult = 0.000001f;
    state.m_lastResult = 0.000003f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
