#pragma once
#include "FireStarterState.h"

// Run date: 11/18/23 10:51:55 Pacific Standard Time
// Run duration = 1833.501632 seconds
// Run generation = 88
// Run evolution = 7
// Run result = 0.00000006
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
// Run tests = 1
// Run seeds = 64
// Run units = 1
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
    settings.m_tests = 1;
    settings.m_seeds = 64;
    settings.m_units = 1;
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

// Variation: 0  result = 0.00000003
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.775588f;
    data->d[1] = -0.370153f;
    data->d[2] = 1.714173f;
    data->d[3] = -2.450113f;
    data->d[4] = 2.185895f;
    data->d[5] = 0.477808f;
    data->d[6] = -0.126246f;
    data->d[7] = -1.267086f;
    data->d[8] = 0.000033f;
    data->d[9] = -39.272545f;
    data->d[10] = -0.037422f;
    data->d[11] = -0.513956f;
    data->d[12] = 0.777050f;
    data->d[13] = 1.024357f;
    data->d[14] = 0.367959f;
    data->d[15] = -1.064692f;
    data->d[16] = -3.627793f;
    data->d[17] = 0.063123f;
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

// Variation: 1  result = 0.00000000
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.426760f;
    data->d[1] = 0.548957f;
    data->d[2] = -2.066504f;
    data->d[3] = 0.127936f;
    data->d[4] = 0.476202f;
    data->d[5] = -0.862060f;
    data->d[6] = -0.520804f;
    data->d[7] = 0.815523f;
    data->d[8] = -11.910358f;
    data->d[9] = -0.000016f;
    data->d[10] = 0.017148f;
    data->d[11] = 0.184842f;
    data->d[12] = 1.478718f;
    data->d[13] = 57.703522f;
    data->d[14] = 0.000000f;
    data->d[15] = 0.667384f;
    data->d[16] = -1.770480f;
    data->d[17] = 0.201336f;
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

// Variation: 2  result = 0.00000006
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.236564f;
    data->d[1] = 0.642109f;
    data->d[2] = -0.168619f;
    data->d[3] = 0.054311f;
    data->d[4] = -1.414830f;
    data->d[5] = 0.158850f;
    data->d[6] = -0.216118f;
    data->d[7] = 0.000342f;
    data->d[8] = 134.880020f;
    data->d[9] = 0.253114f;
    data->d[10] = -0.219661f;
    data->d[11] = -0.836832f;
    data->d[12] = 0.093987f;
    data->d[13] = -0.148644f;
    data->d[14] = -0.164825f;
    data->d[15] = -1.101541f;
    data->d[16] = -0.024741f;
    data->d[17] = 0.369858f;
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
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 0, 15);
    instructions->SetOperation(2, 1, 16);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 1, 23);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 1, 10);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 0, 2);
    instructions->SetOperation(11, 1, 25);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 1, 20);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 0, 4);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 20);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 1, 20);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 0, 23);
    instructions->SetOperation(29, 1, 24);
    instructions->SetOperation(30, 1, 10);
    instructions->SetOperation(31, 1, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 88;
    state.m_evolution = 7;
    state.m_index = 17;
    state.m_id = 17;
    state.m_copy_id = 17;
    state.m_test = 14;
    state.m_seed = 4848725538518245753;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
