#pragma once
#include "FireStarterState.h"

// Run date: 07/08/23 12:43:32 Pacific Daylight Time
// Run duration = 2049.566221 seconds
// Run generation = 153
// Run evolution = 0
// Run result = 0.00000095
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 4
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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 4;
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

// Variation: 0  result = 0.00000089
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.426446f;
    data->d[1] = -1.715147f;
    data->d[2] = -0.364177f;
    data->d[3] = -0.519885f;
    data->d[4] = -0.993568f;
    data->d[5] = 0.119825f;
    data->d[6] = 0.459151f;
    data->d[7] = 1.093458f;
    data->d[8] = -2.086282f;
    data->d[9] = 1.620947f;
    data->d[10] = -1.049014f;
    data->d[11] = -0.209911f;
    data->d[12] = -0.194926f;
    data->d[13] = 1.226227f;
    data->d[14] = -0.222841f;
    data->d[15] = 0.222841f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000095
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.268475f;
    data->d[1] = -2.822185f;
    data->d[2] = 0.495637f;
    data->d[3] = -0.673390f;
    data->d[4] = 0.528279f;
    data->d[5] = -0.000470f;
    data->d[6] = 0.669556f;
    data->d[7] = -1.618778f;
    data->d[8] = 1.966570f;
    data->d[9] = 1.874627f;
    data->d[10] = -0.781782f;
    data->d[11] = 0.792019f;
    data->d[12] = -1.159304f;
    data->d[13] = -8.341060f;
    data->d[14] = 1.658987f;
    data->d[15] = -1.777119f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000095
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.901040f;
    data->d[1] = -0.716953f;
    data->d[2] = 0.664107f;
    data->d[3] = -0.551666f;
    data->d[4] = -1.154240f;
    data->d[5] = -5.012774f;
    data->d[6] = 0.110181f;
    data->d[7] = 0.007821f;
    data->d[8] = -1.191993f;
    data->d[9] = 0.171584f;
    data->d[10] = -1.359035f;
    data->d[11] = 1.385233f;
    data->d[12] = -0.312006f;
    data->d[13] = 1.907839f;
    data->d[14] = 0.795289f;
    data->d[15] = -0.271691f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 7);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 0, 15);
    instructions->SetOperation(8, 1, 18);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 1, 22);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 0, 22);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 22);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 153;
    state.m_evolution = 0;
    state.m_index = 44;
    state.m_test = 42;
    state.m_seed = 1786392092154956755;
} // LoadState
