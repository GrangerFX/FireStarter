#pragma once
#include "FireStarterState.h"

// Run date: 08/27/23 16:39:42 Pacific Daylight Time
// Run duration = 87.127099 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00018340
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
// Run tests = 0
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00018340
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141473f;
    data->d[1] = 0.000026f;
    data->d[2] = 4.173644f;
    data->d[3] = -1.786679f;
    data->d[4] = -1.179887f;
    data->d[5] = 1.318480f;
    data->d[6] = -0.032946f;
    data->d[7] = -0.106465f;
    data->d[8] = -0.857453f;
    data->d[9] = 0.807682f;
    data->d[10] = 1.449142f;
    data->d[11] = -1.449028f;
    data->d[12] = 0.140335f;
    data->d[13] = -0.704596f;
    data->d[14] = -1.010186f;
    data->d[15] = 1.090516f;
    data->d[16] = -1.101622f;
    data->d[17] = 2.251352f;
    data->d[18] = -1.242129f;
    data->d[19] = -0.000040f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000183f;
} // LoadVariation0

// Variation: 1  result = 0.00008047
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.156340f;
    data->d[1] = 0.022050f;
    data->d[2] = -0.088248f;
    data->d[3] = -1.745992f;
    data->d[4] = 0.927751f;
    data->d[5] = 6.654402f;
    data->d[6] = -0.022760f;
    data->d[7] = 0.172935f;
    data->d[8] = 0.424923f;
    data->d[9] = 0.781723f;
    data->d[10] = 0.828333f;
    data->d[11] = -0.806242f;
    data->d[12] = -1.608789f;
    data->d[13] = 3.014999f;
    data->d[14] = 0.287494f;
    data->d[15] = -0.909502f;
    data->d[16] = -0.626630f;
    data->d[17] = -0.295260f;
    data->d[18] = 0.872461f;
    data->d[19] = -0.111586f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000080f;
} // LoadVariation1

// Variation: 2  result = 0.00014284
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.252190f;
    data->d[1] = 1.137800f;
    data->d[2] = -0.777526f;
    data->d[3] = -0.152767f;
    data->d[4] = -1.990392f;
    data->d[5] = -0.057088f;
    data->d[6] = 0.133273f;
    data->d[7] = 1.089177f;
    data->d[8] = -0.334606f;
    data->d[9] = 0.078525f;
    data->d[10] = -0.836308f;
    data->d[11] = -1.414566f;
    data->d[12] = -2.273034f;
    data->d[13] = -0.802449f;
    data->d[14] = -1.174861f;
    data->d[15] = 0.392904f;
    data->d[16] = 1.120976f;
    data->d[17] = 1.123206f;
    data->d[18] = -0.746219f;
    data->d[19] = -0.073992f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000143f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000183f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 27);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 1, 24);
    instructions->SetOperation(3, 0, 5);
    instructions->SetOperation(4, 1, 14);
    instructions->SetOperation(5, 1, 23);
    instructions->SetOperation(6, 1, 28);
    instructions->SetOperation(7, 0, 8);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 4);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 0, 17);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 26);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 1, 23);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 37;
    state.m_test = 0;
    state.m_seed = 2463465889301806992;
} // LoadState
