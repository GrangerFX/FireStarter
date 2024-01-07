#pragma once
#include "FireStarterState.h"

// Run date: 01/06/24 13:35:02 Pacific Standard Time
// Run duration = 9593.111248 seconds
// Run generation = 45
// Run evolution = 11
// Run max result = 0.00000009
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.401846f;
    data->d[1] = 0.051796f;
    data->d[2] = 0.140293f;
    data->d[3] = -16.813131f;
    data->d[4] = 0.000000f;
    data->d[5] = 5.536321f;
    data->d[6] = 15.644499f;
    data->d[7] = -0.745122f;
    data->d[8] = 1.249236f;
    data->d[9] = -0.414423f;
    data->d[10] = 1.756011f;
    data->d[11] = -0.012044f;
    data->d[12] = -1.203292f;
    data->d[13] = 0.802934f;
    data->d[14] = 1.858862f;
    data->d[15] = 0.015427f;
    data->d[16] = 1.782175f;
    data->d[17] = -1.205048f;
    data->d[18] = -0.255488f;
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

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 8.987184f;
    data->d[1] = 0.390360f;
    data->d[2] = 0.079502f;
    data->d[3] = 34.855465f;
    data->d[4] = 0.049459f;
    data->d[5] = -1.067797f;
    data->d[6] = -0.001743f;
    data->d[7] = -12.452877f;
    data->d[8] = -0.400976f;
    data->d[9] = 4.180011f;
    data->d[10] = -2.755234f;
    data->d[11] = -0.015009f;
    data->d[12] = 0.523687f;
    data->d[13] = 0.628331f;
    data->d[14] = -4.191698f;
    data->d[15] = -0.001305f;
    data->d[16] = 0.807043f;
    data->d[17] = -0.028077f;
    data->d[18] = -3.857259f;
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
    data->d[0] = -1.571630f;
    data->d[1] = -0.000861f;
    data->d[2] = 1.405647f;
    data->d[3] = -30.755087f;
    data->d[4] = 0.088307f;
    data->d[5] = -1.192783f;
    data->d[6] = -0.000090f;
    data->d[7] = -1.045050f;
    data->d[8] = -0.741680f;
    data->d[9] = -0.321759f;
    data->d[10] = 1.434560f;
    data->d[11] = -0.162441f;
    data->d[12] = -1.877659f;
    data->d[13] = 0.866541f;
    data->d[14] = -1.201890f;
    data->d[15] = 0.004588f;
    data->d[16] = 0.916274f;
    data->d[17] = 0.376687f;
    data->d[18] = 0.247485f;
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
    instructions->SetOperation(0, 1, 27);
    instructions->SetOperation(1, 0, 23);
    instructions->SetOperation(2, 0, 12);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 0, 5);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 1, 16);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 17);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 17);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 1, 28);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 1, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 45;
    state.m_evolution = 11;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 550;
    state.m_test = 0;
    state.m_seed = 8991095556180082495;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
