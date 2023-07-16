#pragma once
#include "FireStarterState.h"

// Run date: 07/16/23 09:41:54 Pacific Daylight Time
// Run duration = 228.620435 seconds
// Run generation = 24
// Run evolution = 0
// Run result = 0.00001835
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
// Run units = 8
// Run processes = 8
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
    settings.m_units = 8;
    settings.m_processes = 8;
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

// Variation: 0  result = 0.00001013
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.960113f;
    data->d[1] = -3.016279f;
    data->d[2] = -0.423494f;
    data->d[3] = 0.388820f;
    data->d[4] = -0.029666f;
    data->d[5] = 13.290019f;
    data->d[6] = 0.614852f;
    data->d[7] = -0.348035f;
    data->d[8] = -0.484124f;
    data->d[9] = -1.462436f;
    data->d[10] = 0.455300f;
    data->d[11] = 1.228778f;
    data->d[12] = 0.645019f;
    data->d[13] = 2.838071f;
    data->d[14] = -0.413919f;
    data->d[15] = -0.000003f;
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
    *(result->MinResult()) = 0.000010f;
} // LoadVariation0

// Variation: 1  result = 0.00000218
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.419169f;
    data->d[1] = -1.295510f;
    data->d[2] = 0.509044f;
    data->d[3] = -0.124473f;
    data->d[4] = 0.766775f;
    data->d[5] = 1.309848f;
    data->d[6] = 1.849733f;
    data->d[7] = -1.636161f;
    data->d[8] = 1.567875f;
    data->d[9] = -0.912187f;
    data->d[10] = 1.116014f;
    data->d[11] = 0.240232f;
    data->d[12] = 0.038020f;
    data->d[13] = -3.737771f;
    data->d[14] = 1.696718f;
    data->d[15] = -0.118132f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00001835
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.529596f;
    data->d[1] = -1.386477f;
    data->d[2] = -0.274834f;
    data->d[3] = -1.023173f;
    data->d[4] = -0.822147f;
    data->d[5] = 3.615229f;
    data->d[6] = -0.977295f;
    data->d[7] = 0.647779f;
    data->d[8] = -0.041554f;
    data->d[9] = -0.824871f;
    data->d[10] = 0.517277f;
    data->d[11] = 0.184994f;
    data->d[12] = -1.713389f;
    data->d[13] = 0.576196f;
    data->d[14] = 3.185360f;
    data->d[15] = 0.523596f;
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
    *(result->MinResult()) = 0.000018f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000018f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 1);
    instructions->SetOperation(1, 1, 21);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 1, 27);
    instructions->SetOperation(13, 1, 16);
    instructions->SetOperation(14, 0, 19);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 19);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 11);
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
    state.m_generation = 24;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_test = 33;
    state.m_seed = 15294124402063118350;
} // LoadState
