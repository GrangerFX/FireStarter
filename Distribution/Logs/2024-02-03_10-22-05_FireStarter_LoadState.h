#pragma once
#include "FireStarterState.h"

// Run date: 02/03/24 10:22:05 Pacific Standard Time
// Run duration = 16501.223715 seconds
// Run generation = 32
// Run evolution = 8
// Run max result = 0.00005917
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 64
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 64;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000691
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141596f;
    data->d[1] = 1.763292f;
    data->d[2] = -0.183899f;
    data->d[3] = -0.853447f;
    data->d[4] = -1.595806f;
    data->d[5] = -0.006435f;
    data->d[6] = -1.099385f;
    data->d[7] = -0.102692f;
    data->d[8] = 1.576394f;
    data->d[9] = 0.031675f;
    data->d[10] = 1.126005f;
    data->d[11] = 0.118901f;
    data->d[12] = -0.195944f;
    data->d[13] = -3.176684f;
    data->d[14] = -6.734061f;
    data->d[15] = -0.666233f;
    data->d[16] = -1.123140f;
    data->d[17] = -21.377110f;
    data->d[18] = -4.381978f;
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
    *(result->MinResult()) = 0.000007f;
} // LoadVariation0

// Variation: 1  result = 0.00001767
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.983122f;
    data->d[1] = -1.473065f;
    data->d[2] = -0.145806f;
    data->d[3] = 0.821558f;
    data->d[4] = -0.034374f;
    data->d[5] = 0.665355f;
    data->d[6] = 1.048482f;
    data->d[7] = -0.215269f;
    data->d[8] = 0.513563f;
    data->d[9] = 6.062643f;
    data->d[10] = -0.384617f;
    data->d[11] = 1.559503f;
    data->d[12] = 0.829773f;
    data->d[13] = -0.190747f;
    data->d[14] = -6.390676f;
    data->d[15] = -0.007055f;
    data->d[16] = 69.195427f;
    data->d[17] = 1.533514f;
    data->d[18] = -336.827698f;
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
    *(result->MinResult()) = 0.000018f;
} // LoadVariation1

// Variation: 2  result = 0.00005917
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.000004f;
    data->d[1] = 1.075746f;
    data->d[2] = -0.376198f;
    data->d[3] = 1.459521f;
    data->d[4] = 2.726610f;
    data->d[5] = 0.171602f;
    data->d[6] = -0.222895f;
    data->d[7] = 0.297082f;
    data->d[8] = 2.694180f;
    data->d[9] = 0.314844f;
    data->d[10] = -0.557682f;
    data->d[11] = 1.062834f;
    data->d[12] = 2.162075f;
    data->d[13] = 0.610501f;
    data->d[14] = 0.929297f;
    data->d[15] = 0.003849f;
    data->d[16] = 6.298257f;
    data->d[17] = -1.505702f;
    data->d[18] = -0.393871f;
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
    *(result->MinResult()) = 0.000059f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000059f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 8);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 1, 22);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 0, 26);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 0, 14);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 1, 7);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 1, 9);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 0, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 32;
    state.m_evolution = 8;
    state.m_children0 = 8;
    state.m_children1 = 3;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 254;
    state.m_seed = 14974420985603656062;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000146f;
    state.m_maxResult = 0.000059f;
    state.m_evolveWeight = 0.258621f;
    state.m_optimizeValid = true;
} // LoadState
