#pragma once
#include "FireStarterState.h"

// Run date: 04/01/23 20:56:35 Pacific Daylight Time
// Run duration = 2263.573307 seconds
// Run generation = 70
// Run result = 0.00050771
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

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
    settings.m_opcodes = 4;

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

// Variation: 0  result = 0.00050771
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.886850f;
    data->d[1] = 0.624033f;
    data->d[2] = -3.267953f;
    data->d[3] = -0.213633f;
    data->d[4] = -2.345092f;
    data->d[5] = 0.167074f;
    data->d[6] = -0.433456f;
    data->d[7] = 0.718693f;
    data->d[8] = 0.154191f;
    data->d[9] = -1.322533f;
    data->d[10] = 1.036002f;
    data->d[11] = 0.908394f;
    data->d[12] = 0.929183f;
    data->d[13] = 1.209488f;
    data->d[14] = 6.677953f;
    data->d[15] = 0.214209f;
    data->d[16] = -0.046028f;
    data->d[17] = -1.755483f;
    data->d[18] = -0.999949f;
    data->d[19] = -1.829441f;
    data->d[20] = 1.385616f;
    data->d[21] = 0.028690f;
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
    *(result->MinResult()) = 0.000508f;
} // LoadVariation0

// Variation: 1  result = 0.00008589
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.716370f;
    data->d[1] = 0.681684f;
    data->d[2] = 1.290845f;
    data->d[3] = 0.153112f;
    data->d[4] = -1.010659f;
    data->d[5] = 0.085127f;
    data->d[6] = 0.069943f;
    data->d[7] = -0.754375f;
    data->d[8] = -0.892674f;
    data->d[9] = -1.517387f;
    data->d[10] = 0.258161f;
    data->d[11] = 1.772491f;
    data->d[12] = -0.352634f;
    data->d[13] = 0.068805f;
    data->d[14] = -2.180428f;
    data->d[15] = -0.324531f;
    data->d[16] = 0.922360f;
    data->d[17] = -0.480751f;
    data->d[18] = 0.144216f;
    data->d[19] = -2.459652f;
    data->d[20] = 0.701345f;
    data->d[21] = -0.625324f;
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
    *(result->MinResult()) = 0.000086f;
} // LoadVariation1

// Variation: 2  result = 0.00046530
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.244320f;
    data->d[1] = -1.380856f;
    data->d[2] = -0.404986f;
    data->d[3] = -3.328204f;
    data->d[4] = 0.746900f;
    data->d[5] = 2.083648f;
    data->d[6] = -0.159042f;
    data->d[7] = 38.405457f;
    data->d[8] = -0.050789f;
    data->d[9] = -2.160225f;
    data->d[10] = -1.115633f;
    data->d[11] = -2.028566f;
    data->d[12] = 0.065081f;
    data->d[13] = -0.870857f;
    data->d[14] = -0.644416f;
    data->d[15] = -0.559668f;
    data->d[16] = 1.996873f;
    data->d[17] = -1.210918f;
    data->d[18] = -12.076318f;
    data->d[19] = 0.450545f;
    data->d[20] = -0.277831f;
    data->d[21] = 0.130064f;
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
    *(result->MinResult()) = 0.000465f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000508f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 0, 26);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 31);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 0, 18);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 30);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 23);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 30);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 19);
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
    state.m_generation = 70;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 15689522935366650682;
} // LoadState
