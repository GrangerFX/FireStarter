#pragma once
#include "FireStarterState.h"

// Run date: 07/29/23 21:19:41 Pacific Daylight Time
// Run duration = 383.624549 seconds
// Run generation = 25
// Run evolution = 0
// Run result = 0.00002074
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 1
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
    settings.m_seed = 1;
    settings.m_optimizeSeed = 1;
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

// Variation: 0  result = 0.00000942
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.577139f;
    data->d[1] = 1.053415f;
    data->d[2] = 0.302696f;
    data->d[3] = -1.156265f;
    data->d[4] = -2.293380f;
    data->d[5] = -0.966834f;
    data->d[6] = 0.065968f;
    data->d[7] = 2.125318f;
    data->d[8] = 1.216653f;
    data->d[9] = 1.947018f;
    data->d[10] = 0.271607f;
    data->d[11] = 1.352190f;
    data->d[12] = -0.365371f;
    data->d[13] = 0.121562f;
    data->d[14] = -0.382290f;
    data->d[15] = 0.578127f;
    data->d[16] = 1.767182f;
    data->d[17] = -1.563986f;
    data->d[18] = 1.563924f;
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
    *(result->MinResult()) = 0.000009f;
} // LoadVariation0

// Variation: 1  result = 0.00000525
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.954803f;
    data->d[1] = -1.116438f;
    data->d[2] = -0.367311f;
    data->d[3] = 2.420266f;
    data->d[4] = -0.366200f;
    data->d[5] = -0.284843f;
    data->d[6] = 0.048693f;
    data->d[7] = 1.512899f;
    data->d[8] = 0.361625f;
    data->d[9] = 0.936704f;
    data->d[10] = 0.087784f;
    data->d[11] = 0.968391f;
    data->d[12] = -0.944767f;
    data->d[13] = 0.002203f;
    data->d[14] = 1.194285f;
    data->d[15] = -1.210126f;
    data->d[16] = -1.661559f;
    data->d[17] = -1.738906f;
    data->d[18] = 1.620761f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00002074
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.491353f;
    data->d[1] = 0.340230f;
    data->d[2] = 0.662221f;
    data->d[3] = -1.759362f;
    data->d[4] = 0.245096f;
    data->d[5] = 0.118720f;
    data->d[6] = -1.444990f;
    data->d[7] = 1.259825f;
    data->d[8] = -0.239293f;
    data->d[9] = -0.262566f;
    data->d[10] = 1.014803f;
    data->d[11] = -0.944356f;
    data->d[12] = 0.699980f;
    data->d[13] = -0.015195f;
    data->d[14] = -1.165932f;
    data->d[15] = 0.879684f;
    data->d[16] = -4.470280f;
    data->d[17] = -0.240095f;
    data->d[18] = 0.763702f;
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
    *(result->MinResult()) = 0.000021f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000021f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 0, 23);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 1, 7);
    instructions->SetOperation(4, 0, 19);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 1, 25);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 0, 22);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 1, 22);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 1, 7);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 1, 1);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 1, 11);
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
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_test = 16;
    state.m_seed = 14202353018262738839;
} // LoadState
