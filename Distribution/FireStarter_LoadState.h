#pragma once
#include "FireStarterState.h"

// Run date: 08/13/23 07:53:17 Pacific Daylight Time
// Run duration = 425.831866 seconds
// Run generation = 25
// Run evolution = 6
// Run result = 0.00000069
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
// Run tests = 0
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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
    settings.m_tests = 0;
    settings.m_units = 8;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.675202f;
    data->d[1] = -2.121209f;
    data->d[2] = 1.894415f;
    data->d[3] = 0.297970f;
    data->d[4] = -1.079608f;
    data->d[5] = 1.030800f;
    data->d[6] = -0.357524f;
    data->d[7] = -0.902899f;
    data->d[8] = 2.448975f;
    data->d[9] = 1.919231f;
    data->d[10] = 0.000193f;
    data->d[11] = -0.117955f;
    data->d[12] = 0.196264f;
    data->d[13] = -0.316338f;
    data->d[14] = -1.703096f;
    data->d[15] = 0.902932f;
    data->d[16] = 0.618027f;
    data->d[17] = 1.465343f;
    data->d[18] = -0.721012f;
    data->d[19] = -1.577768f;
    data->d[20] = -3.164548f;
    data->d[21] = 0.612320f;
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
    data->d[0] = -0.344138f;
    data->d[1] = 1.063613f;
    data->d[2] = 1.018195f;
    data->d[3] = -0.859961f;
    data->d[4] = -2.019320f;
    data->d[5] = -0.734693f;
    data->d[6] = -0.010022f;
    data->d[7] = -1.076232f;
    data->d[8] = 7.731733f;
    data->d[9] = 6.740834f;
    data->d[10] = 0.019656f;
    data->d[11] = 0.560418f;
    data->d[12] = -2.822313f;
    data->d[13] = 2.049270f;
    data->d[14] = -0.424953f;
    data->d[15] = -3.138337f;
    data->d[16] = 1.614872f;
    data->d[17] = -0.976850f;
    data->d[18] = -0.127465f;
    data->d[19] = 0.806597f;
    data->d[20] = 1.619605f;
    data->d[21] = -0.363474f;
    data->d[22] = -0.118132f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000069
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.436002f;
    data->d[1] = -1.141450f;
    data->d[2] = 1.213736f;
    data->d[3] = -1.178753f;
    data->d[4] = 1.799857f;
    data->d[5] = 2.040487f;
    data->d[6] = -1.260452f;
    data->d[7] = 0.672964f;
    data->d[8] = -0.297692f;
    data->d[9] = -0.487734f;
    data->d[10] = -0.012006f;
    data->d[11] = -2.612609f;
    data->d[12] = 0.948246f;
    data->d[13] = 0.709458f;
    data->d[14] = 0.598971f;
    data->d[15] = 0.086868f;
    data->d[16] = 1.107947f;
    data->d[17] = -0.153160f;
    data->d[18] = -1.763578f;
    data->d[19] = -0.913025f;
    data->d[20] = -2.318388f;
    data->d[21] = -0.511562f;
    data->d[22] = 0.523599f;
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
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 8);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 0, 8);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 11);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 1, 16);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 1, 13);
    instructions->SetOperation(15, 0, 28);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 25;
    state.m_evolution = 6;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 16418713581780867117;
} // LoadState
