#pragma once
#include "FireStarterState.h"

// Run date: 03/27/23 10:38:59 Pacific Daylight Time
// Run duration = 2556.855382 seconds
// Run generation = 80
// Run result = 0.00019056
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 3

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
    settings.m_registers = 32;
    settings.m_opcodes = 3;

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

// Variation: 0  result = 0.00019056
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.242799f;
    data->d[1] = 1.031418f;
    data->d[2] = 0.114132f;
    data->d[3] = -0.435291f;
    data->d[4] = 0.425779f;
    data->d[5] = 1.026663f;
    data->d[6] = 1.397556f;
    data->d[7] = 0.443685f;
    data->d[8] = 0.423855f;
    data->d[9] = 2.418235f;
    data->d[10] = 1.701593f;
    data->d[11] = -3.179830f;
    data->d[12] = 0.893337f;
    data->d[13] = -1.374218f;
    data->d[14] = -1.854203f;
    data->d[15] = -1.059696f;
    data->d[16] = -0.271196f;
    data->d[17] = -1.945039f;
    data->d[18] = 0.981749f;
    data->d[19] = 0.105776f;
    data->d[20] = 0.362148f;
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
    *(result->MinResult()) = 0.000191f;
} // LoadVariation0

// Variation: 1  result = 0.00018120
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.734414f;
    data->d[1] = 0.462135f;
    data->d[2] = -1.279850f;
    data->d[3] = 0.117443f;
    data->d[4] = -1.145997f;
    data->d[5] = 1.266491f;
    data->d[6] = -0.254352f;
    data->d[7] = -1.558888f;
    data->d[8] = -1.917752f;
    data->d[9] = -0.539225f;
    data->d[10] = -1.644429f;
    data->d[11] = 1.090535f;
    data->d[12] = 3.518711f;
    data->d[13] = -0.002333f;
    data->d[14] = 1.460744f;
    data->d[15] = -0.646978f;
    data->d[16] = -0.441567f;
    data->d[17] = -0.165341f;
    data->d[18] = 1.441733f;
    data->d[19] = -0.645145f;
    data->d[20] = -1.503823f;
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
    *(result->MinResult()) = 0.000181f;
} // LoadVariation1

// Variation: 2  result = 0.00013793
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.500473f;
    data->d[1] = 0.267585f;
    data->d[2] = 1.924009f;
    data->d[3] = -0.660947f;
    data->d[4] = -0.037814f;
    data->d[5] = 0.949272f;
    data->d[6] = 0.381938f;
    data->d[7] = -0.370611f;
    data->d[8] = 0.174316f;
    data->d[9] = 1.626670f;
    data->d[10] = -0.550687f;
    data->d[11] = 1.843927f;
    data->d[12] = 1.537938f;
    data->d[13] = 1.293905f;
    data->d[14] = 0.561807f;
    data->d[15] = -0.375741f;
    data->d[16] = -0.021363f;
    data->d[17] = 1.118555f;
    data->d[18] = -1.465500f;
    data->d[19] = -0.595774f;
    data->d[20] = -0.542147f;
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
    *(result->MinResult()) = 0.000138f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000191f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 21);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 1, 20);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 16);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 1, 30);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 30);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 30);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 80;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 2173331205949967678;
} // LoadState
