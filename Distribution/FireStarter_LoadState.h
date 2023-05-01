#pragma once
#include "FireStarterState.h"

// Run date: 04/30/23 18:31:51 Pacific Daylight Time
// Run duration = 2876.564060 seconds
// Run generation = 260
// Run result = 0.00000006
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 28
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 28;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.180662f;
    data->d[1] = -0.960931f;
    data->d[2] = 0.185320f;
    data->d[3] = 0.549333f;
    data->d[4] = 2.468644f;
    data->d[5] = 0.009158f;
    data->d[6] = 1.181152f;
    data->d[7] = -1.625501f;
    data->d[8] = 0.853101f;
    data->d[9] = 0.050950f;
    data->d[10] = -1.486746f;
    data->d[11] = -0.013292f;
    data->d[12] = 2.450555f;
    data->d[13] = 2.054659f;
    data->d[14] = 0.825946f;
    data->d[15] = -1.999125f;
    data->d[16] = -0.676249f;
    data->d[17] = 0.862321f;
    data->d[18] = -0.186071f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.512880f;
    data->d[1] = -1.577779f;
    data->d[2] = -0.043924f;
    data->d[3] = -1.567205f;
    data->d[4] = 0.001932f;
    data->d[5] = 3.993760f;
    data->d[6] = -1.168056f;
    data->d[7] = 3.647167f;
    data->d[8] = 2.093736f;
    data->d[9] = -0.963278f;
    data->d[10] = 3.257112f;
    data->d[11] = 1.376670f;
    data->d[12] = -1.438156f;
    data->d[13] = -0.010439f;
    data->d[14] = 0.202722f;
    data->d[15] = 0.620537f;
    data->d[16] = -0.029304f;
    data->d[17] = -0.068517f;
    data->d[18] = 0.038755f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000004
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.708609f;
    data->d[1] = -1.909384f;
    data->d[2] = 0.116716f;
    data->d[3] = 1.388519f;
    data->d[4] = -0.929296f;
    data->d[5] = 1.913270f;
    data->d[6] = 0.740216f;
    data->d[7] = -0.021219f;
    data->d[8] = -0.713023f;
    data->d[9] = -1.698727f;
    data->d[10] = -0.906401f;
    data->d[11] = -0.078218f;
    data->d[12] = 0.183587f;
    data->d[13] = -0.298420f;
    data->d[14] = 1.351792f;
    data->d[15] = 0.248527f;
    data->d[16] = 0.084102f;
    data->d[17] = 0.006708f;
    data->d[18] = 0.170990f;
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
    data->d[29] = 0.000000f;
    data->d[30] = -0.000000f;
    data->d[31] = -0.000000f;
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
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 1, 11);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 9);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 11);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 1, 24);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 1, 22);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 1, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 260;
    state.m_index = 2;
    state.m_test = 90;
    state.m_seed = 17845857108448323141;
} // LoadState
