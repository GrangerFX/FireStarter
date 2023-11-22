#pragma once
#include "FireStarterState.h"

// Run date: 11/21/23 15:00:29 Pacific Standard Time
// Run duration = 63376.768996 seconds
// Run generation = 303
// Run evolution = 13
// Run result = 0.00000119
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

// Variation: 0  result = 0.00000119
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.348221f;
    data->d[1] = -2.420511f;
    data->d[2] = -0.676850f;
    data->d[3] = -0.055264f;
    data->d[4] = -0.361004f;
    data->d[5] = 0.114697f;
    data->d[6] = 0.579456f;
    data->d[7] = 1.745562f;
    data->d[8] = 0.348211f;
    data->d[9] = 0.935243f;
    data->d[10] = -1.047157f;
    data->d[11] = -1.431664f;
    data->d[12] = 0.848407f;
    data->d[13] = -1.414234f;
    data->d[14] = 0.724447f;
    data->d[15] = 0.508086f;
    data->d[16] = 0.399834f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.490978f;
    data->d[1] = -2.830404f;
    data->d[2] = 0.664578f;
    data->d[3] = -0.095952f;
    data->d[4] = -0.501556f;
    data->d[5] = 0.152616f;
    data->d[6] = 0.146351f;
    data->d[7] = 0.989753f;
    data->d[8] = 0.712534f;
    data->d[9] = 0.654546f;
    data->d[10] = -1.027634f;
    data->d[11] = -1.351965f;
    data->d[12] = -0.519633f;
    data->d[13] = 1.950494f;
    data->d[14] = -1.068906f;
    data->d[15] = -0.126249f;
    data->d[16] = 0.712172f;
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

// Variation: 2  result = 0.00000113
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.330727f;
    data->d[1] = -1.545441f;
    data->d[2] = -1.099044f;
    data->d[3] = -0.121399f;
    data->d[4] = -0.305438f;
    data->d[5] = 0.241967f;
    data->d[6] = 0.650823f;
    data->d[7] = 2.104033f;
    data->d[8] = -0.324496f;
    data->d[9] = 0.868100f;
    data->d[10] = -0.678510f;
    data->d[11] = -1.328841f;
    data->d[12] = 3.548232f;
    data->d[13] = -0.327553f;
    data->d[14] = 2.369108f;
    data->d[15] = 0.457622f;
    data->d[16] = 3.124119f;
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
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 1, 13);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 20);
    instructions->SetOperation(7, 1, 13);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 25);
    instructions->SetOperation(10, 0, 14);
    instructions->SetOperation(11, 1, 17);
    instructions->SetOperation(12, 0, 24);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 0, 24);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 24);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 1, 22);
    instructions->SetOperation(26, 0, 6);
    instructions->SetOperation(27, 1, 1);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 0, 9);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 1, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 303;
    state.m_evolution = 13;
    state.m_index = 61;
    state.m_id = 9;
    state.m_copy_id = 9;
    state.m_test = 14;
    state.m_seed = 5494972420767334302;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
