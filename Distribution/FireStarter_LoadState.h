#pragma once
#include "FireStarterState.h"

// Run date: 07/31/23 11:23:08 Pacific Daylight Time
// Run duration = 347.986502 seconds
// Run generation = 20
// Run evolution = 0
// Run result = 0.00001526
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00001395
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.100081f;
    data->d[1] = -0.397612f;
    data->d[2] = -0.835929f;
    data->d[3] = -0.403395f;
    data->d[4] = -4.169954f;
    data->d[5] = 1.804012f;
    data->d[6] = -1.257306f;
    data->d[7] = 1.759207f;
    data->d[8] = -1.214357f;
    data->d[9] = 1.011487f;
    data->d[10] = -0.150870f;
    data->d[11] = -1.853011f;
    data->d[12] = -0.153053f;
    data->d[13] = 0.128613f;
    data->d[14] = 0.623248f;
    data->d[15] = -0.493027f;
    data->d[16] = -0.529238f;
    data->d[17] = -1.119184f;
    data->d[18] = 2.032080f;
    data->d[19] = 1.522040f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation0

// Variation: 1  result = 0.00001526
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.195774f;
    data->d[1] = 0.349914f;
    data->d[2] = 0.537648f;
    data->d[3] = -1.031076f;
    data->d[4] = -2.557332f;
    data->d[5] = -1.899518f;
    data->d[6] = 2.013203f;
    data->d[7] = 1.462661f;
    data->d[8] = -0.699887f;
    data->d[9] = 0.711692f;
    data->d[10] = -0.048210f;
    data->d[11] = 1.169074f;
    data->d[12] = -0.021595f;
    data->d[13] = -0.068093f;
    data->d[14] = -0.592752f;
    data->d[15] = -0.948256f;
    data->d[16] = -3.250140f;
    data->d[17] = 0.098686f;
    data->d[18] = -2.593861f;
    data->d[19] = 1.142381f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000015f;
} // LoadVariation1

// Variation: 2  result = 0.00000966
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.937061f;
    data->d[1] = 1.484187f;
    data->d[2] = 0.617100f;
    data->d[3] = -0.148870f;
    data->d[4] = 1.873367f;
    data->d[5] = 0.040388f;
    data->d[6] = 1.596134f;
    data->d[7] = -0.047618f;
    data->d[8] = 1.142836f;
    data->d[9] = -1.713728f;
    data->d[10] = -0.077437f;
    data->d[11] = -0.594035f;
    data->d[12] = -1.959068f;
    data->d[13] = -0.336742f;
    data->d[14] = -2.041642f;
    data->d[15] = -0.196427f;
    data->d[16] = -0.228942f;
    data->d[17] = 1.051637f;
    data->d[18] = 1.874016f;
    data->d[19] = -0.728017f;
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
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000015f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 1, 22);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 0, 23);
    instructions->SetOperation(13, 1, 13);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 1, 26);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 0, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 20;
    state.m_evolution = 0;
    state.m_index = 14;
    state.m_test = 0;
    state.m_seed = 9571131076262581122;
} // LoadState
