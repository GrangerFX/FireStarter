#pragma once
#include "FireStarterState.h"

// Run date: 09/10/23 10:51:11 Pacific Daylight Time
// Run duration = 555.486285 seconds
// Run generation = 21
// Run evolution = 12
// Run result = 0.00000036
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
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000036
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -2.320351f;
    data->d[2] = 0.326731f;
    data->d[3] = 0.556822f;
    data->d[4] = -0.014023f;
    data->d[5] = 1.572094f;
    data->d[6] = 0.512472f;
    data->d[7] = 1.132819f;
    data->d[8] = -1.502329f;
    data->d[9] = -0.097572f;
    data->d[10] = -1.081058f;
    data->d[11] = 0.462145f;
    data->d[12] = 0.946580f;
    data->d[13] = -2.882124f;
    data->d[14] = -1.077507f;
    data->d[15] = -4.212110f;
    data->d[16] = 0.229757f;
    data->d[17] = 2.542439f;
    data->d[18] = -0.104809f;
    data->d[19] = 0.104809f;
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
    data->d[0] = -3.090658f;
    data->d[1] = -1.520630f;
    data->d[2] = -0.921050f;
    data->d[3] = -0.718601f;
    data->d[4] = -0.002001f;
    data->d[5] = -1.226115f;
    data->d[6] = -0.560261f;
    data->d[7] = -0.617114f;
    data->d[8] = 0.803427f;
    data->d[9] = 0.480871f;
    data->d[10] = -0.339885f;
    data->d[11] = -0.306389f;
    data->d[12] = 1.628656f;
    data->d[13] = -0.646284f;
    data->d[14] = -1.828510f;
    data->d[15] = -0.055507f;
    data->d[16] = 1.238191f;
    data->d[17] = -3.431388f;
    data->d[18] = -0.171760f;
    data->d[19] = 0.053628f;
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

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.269249f;
    data->d[2] = -0.850683f;
    data->d[3] = 0.040150f;
    data->d[4] = 3.314621f;
    data->d[5] = -1.711081f;
    data->d[6] = 0.242643f;
    data->d[7] = 0.643859f;
    data->d[8] = 1.782872f;
    data->d[9] = 1.997910f;
    data->d[10] = -2.484102f;
    data->d[11] = -0.324611f;
    data->d[12] = 0.997876f;
    data->d[13] = -0.194366f;
    data->d[14] = -1.069278f;
    data->d[15] = 0.181814f;
    data->d[16] = 0.870983f;
    data->d[17] = -1.663886f;
    data->d[18] = 1.006393f;
    data->d[19] = -0.482794f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 24);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 1, 11);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 21;
    state.m_evolution = 12;
    state.m_age = 0;
    state.m_index = 0;
    state.m_id = 49;
    state.m_copy_id = 7;
    state.m_test = 0;
    state.m_seed = 12405874648136304374;
    state.m_maxResult = 0.000000f;
    state.m_lastResult = 0.000001f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
