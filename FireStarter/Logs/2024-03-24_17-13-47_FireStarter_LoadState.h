#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 17:13:47 Pacific Daylight Time
// Run duration = 811.203998 seconds
// Run generation = 371
// Run evolution = 13
// Run max result = 0.00000012
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
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -1.128880f;
    data->d[2] = -0.175635f;
    data->d[3] = 0.587937f;
    data->d[4] = -0.792643f;
    data->d[5] = 1.555342f;
    data->d[6] = 0.680733f;
    data->d[7] = -2.905485f;
    data->d[8] = -0.665482f;
    data->d[9] = -0.927293f;
    data->d[10] = 0.004660f;
    data->d[11] = -3.917929f;
    data->d[12] = 0.067045f;
    data->d[13] = 0.994521f;
    data->d[14] = 0.093511f;
    data->d[15] = 4.436779f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
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

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -1.343491f;
    data->d[2] = -0.053223f;
    data->d[3] = -3.935411f;
    data->d[4] = -0.999090f;
    data->d[5] = -0.809706f;
    data->d[6] = 0.289235f;
    data->d[7] = -0.090877f;
    data->d[8] = 2.747667f;
    data->d[9] = 3.974072f;
    data->d[10] = -0.004384f;
    data->d[11] = -4.903129f;
    data->d[12] = 0.154702f;
    data->d[13] = -7.448990f;
    data->d[14] = -6.726927f;
    data->d[15] = -0.443193f;
    data->d[16] = -0.118132f;
    data->d[17] = 0.000000f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.188370f;
    data->d[2] = 0.788109f;
    data->d[3] = -1.619702f;
    data->d[4] = -0.680377f;
    data->d[5] = -2.277185f;
    data->d[6] = 0.638693f;
    data->d[7] = -1.031395f;
    data->d[8] = -0.773976f;
    data->d[9] = -0.447630f;
    data->d[10] = -0.013287f;
    data->d[11] = -5.164296f;
    data->d[12] = -0.467282f;
    data->d[13] = 2.109471f;
    data->d[14] = 0.040507f;
    data->d[15] = -1.340004f;
    data->d[16] = 0.523599f;
    data->d[17] = 0.000000f;
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
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 7);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 0, 15);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 1, 21);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 0, 21);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 0, 19);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 6);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 371;
    state.m_evolution = 13;
    state.m_index = 5;
    state.m_copy_index = 36;
    state.m_id = 36;
    state.m_test = 5;
    state.m_seed = 12684652130233608678;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000116f;
    state.m_optimizeValid = true;
} // LoadState
