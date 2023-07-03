#pragma once
#include "FireStarterState.h"

// Run date: 07/02/23 17:56:33 Pacific Daylight Time
// Run duration = 875.937742 seconds
// Run generation = 65
// Run evolution = 0
// Run result = 0.00000173
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

// Variation: 0  result = 0.00000173
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.217277f;
    data->d[1] = 1.571931f;
    data->d[2] = -0.889335f;
    data->d[3] = 0.888888f;
    data->d[4] = 0.563011f;
    data->d[5] = -4.098280f;
    data->d[6] = 0.000670f;
    data->d[7] = 0.356751f;
    data->d[8] = -1.699988f;
    data->d[9] = 0.307742f;
    data->d[10] = 0.857066f;
    data->d[11] = -1.477321f;
    data->d[12] = -0.433392f;
    data->d[13] = -2.877139f;
    data->d[14] = -1.518346f;
    data->d[15] = -0.462784f;
    data->d[16] = -1.542264f;
    data->d[17] = 2.196594f;
    data->d[18] = -0.000001f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000143
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.132023f;
    data->d[1] = -0.667127f;
    data->d[2] = 0.259089f;
    data->d[3] = -0.887724f;
    data->d[4] = -0.593397f;
    data->d[5] = -0.082544f;
    data->d[6] = -0.005004f;
    data->d[7] = -1.048433f;
    data->d[8] = -0.538804f;
    data->d[9] = -0.671864f;
    data->d[10] = -0.418726f;
    data->d[11] = -1.857188f;
    data->d[12] = 1.451226f;
    data->d[13] = -3.297076f;
    data->d[14] = -0.011444f;
    data->d[15] = -2.601755f;
    data->d[16] = 0.125762f;
    data->d[17] = -1.890953f;
    data->d[18] = -0.118132f;
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

// Variation: 2  result = 0.00000133
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.795752f;
    data->d[1] = -1.073714f;
    data->d[2] = -1.009560f;
    data->d[3] = -0.692946f;
    data->d[4] = -0.005212f;
    data->d[5] = -2.068107f;
    data->d[6] = 0.000527f;
    data->d[7] = -0.319142f;
    data->d[8] = -0.599240f;
    data->d[9] = -2.378113f;
    data->d[10] = -0.044612f;
    data->d[11] = -3.106643f;
    data->d[12] = -0.647408f;
    data->d[13] = -1.089933f;
    data->d[14] = -2.323251f;
    data->d[15] = 0.696105f;
    data->d[16] = 1.634493f;
    data->d[17] = -0.634067f;
    data->d[18] = 0.523599f;
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
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 1, 24);
    instructions->SetOperation(3, 0, 20);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 10);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 28);
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
    state.m_generation = 65;
    state.m_evolution = 0;
    state.m_index = 3;
    state.m_test = 46;
    state.m_seed = 1468999013293739145;
} // LoadState
