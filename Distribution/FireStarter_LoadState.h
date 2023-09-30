#pragma once
#include "FireStarterState.h"

// Run date: 09/30/23 09:22:07 Pacific Daylight Time
// Run duration = 4713.917184 seconds
// Run generation = 29
// Run evolution = 6
// Run result = 0.00000072
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
// Run tests = 8
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
    settings.m_tests = 8;
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

// Variation: 0  result = 0.00000033
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 4.408336f;
    data->d[2] = 1.393078f;
    data->d[3] = 0.002235f;
    data->d[4] = -0.159395f;
    data->d[5] = 0.226810f;
    data->d[6] = 0.814342f;
    data->d[7] = 0.118532f;
    data->d[8] = -0.785178f;
    data->d[9] = -2.100871f;
    data->d[10] = -1.893005f;
    data->d[11] = -0.904600f;
    data->d[12] = 0.126904f;
    data->d[13] = 0.911535f;
    data->d[14] = -0.977859f;
    data->d[15] = -0.680392f;
    data->d[16] = -1.508035f;
    data->d[17] = -0.000000f;
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

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.099505f;
    data->d[2] = 3.270522f;
    data->d[3] = 0.000147f;
    data->d[4] = -2.928606f;
    data->d[5] = 0.853029f;
    data->d[6] = 0.825481f;
    data->d[7] = -0.043651f;
    data->d[8] = -2.064104f;
    data->d[9] = -0.910978f;
    data->d[10] = -3.019380f;
    data->d[11] = -2.110538f;
    data->d[12] = -0.064752f;
    data->d[13] = 0.667073f;
    data->d[14] = -2.881963f;
    data->d[15] = -0.628325f;
    data->d[16] = -0.408325f;
    data->d[17] = -0.118132f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000066
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.184134f;
    data->d[2] = 0.092566f;
    data->d[3] = -1.266617f;
    data->d[4] = -0.347094f;
    data->d[5] = 1.556301f;
    data->d[6] = -1.009267f;
    data->d[7] = 0.348232f;
    data->d[8] = 3.906148f;
    data->d[9] = 1.021712f;
    data->d[10] = 0.825292f;
    data->d[11] = -0.682198f;
    data->d[12] = 1.763891f;
    data->d[13] = -1.330841f;
    data->d[14] = -1.264291f;
    data->d[15] = -1.493250f;
    data->d[16] = 0.817351f;
    data->d[17] = 0.523599f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 8);
    instructions->SetOperation(1, 0, 3);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 0, 23);
    instructions->SetOperation(4, 0, 27);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 3);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 1, 3);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 0, 24);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 14);
    instructions->SetOperation(25, 1, 3);
    instructions->SetOperation(26, 0, 21);
    instructions->SetOperation(27, 1, 11);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 24);
    instructions->SetOperation(31, 1, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 29;
    state.m_evolution = 6;
    state.m_age = 19;
    state.m_index = 53;
    state.m_id = 49;
    state.m_copy_id = 19;
    state.m_test = 7;
    state.m_seed = 3801744325880257618;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
} // LoadState
