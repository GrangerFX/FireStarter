#pragma once
#include "FireStarterState.h"

// Run date: 01/12/24 15:46:44 Pacific Standard Time
// Run duration = 4082.735390 seconds
// Run generation = 18
// Run evolution = 9
// Run max result = 0.00000016
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.497148f;
    data->d[1] = -0.421827f;
    data->d[2] = -1.984032f;
    data->d[3] = -0.098728f;
    data->d[4] = -0.534344f;
    data->d[5] = 12.197289f;
    data->d[6] = -0.474352f;
    data->d[7] = -2.816099f;
    data->d[8] = 0.017796f;
    data->d[9] = 1.787050f;
    data->d[10] = -0.473790f;
    data->d[11] = -0.587289f;
    data->d[12] = -6.124088f;
    data->d[13] = -0.462987f;
    data->d[14] = -2.140773f;
    data->d[15] = -65.368866f;
    data->d[16] = -1.709185f;
    data->d[17] = -0.000000f;
    data->d[18] = 2.704695f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.188241f;
    data->d[1] = 0.516257f;
    data->d[2] = 1.895926f;
    data->d[3] = 0.327199f;
    data->d[4] = -2.568545f;
    data->d[5] = -19.605629f;
    data->d[6] = -18.150892f;
    data->d[7] = 0.005589f;
    data->d[8] = -0.081261f;
    data->d[9] = 0.768964f;
    data->d[10] = -1.643857f;
    data->d[11] = -0.785562f;
    data->d[12] = -2.399835f;
    data->d[13] = 0.129209f;
    data->d[14] = -0.292732f;
    data->d[15] = -6.009793f;
    data->d[16] = -4.674737f;
    data->d[17] = -0.065550f;
    data->d[18] = 1.802153f;
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

// Variation: 2  result = 0.00000016
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.174303f;
    data->d[1] = -2.022421f;
    data->d[2] = 0.922882f;
    data->d[3] = 0.028356f;
    data->d[4] = 4.875652f;
    data->d[5] = 8.436872f;
    data->d[6] = -0.404765f;
    data->d[7] = -0.893392f;
    data->d[8] = -0.175378f;
    data->d[9] = -1.603573f;
    data->d[10] = -1.295580f;
    data->d[11] = 1.483196f;
    data->d[12] = 1.397925f;
    data->d[13] = -1.015548f;
    data->d[14] = -0.425656f;
    data->d[15] = 1.479713f;
    data->d[16] = 0.066828f;
    data->d[17] = 0.394740f;
    data->d[18] = 1.326438f;
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
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 20);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 0, 18);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 17);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 1, 1);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 1);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 0, 7);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 18;
    state.m_evolution = 9;
    state.m_children = 38;
    state.m_index = 38;
    state.m_copy_index = 204;
    state.m_id = 144;
    state.m_test = 3;
    state.m_seed = 4755795223508136262;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000166f;
    state.m_optimizeValid = true;
} // LoadState
