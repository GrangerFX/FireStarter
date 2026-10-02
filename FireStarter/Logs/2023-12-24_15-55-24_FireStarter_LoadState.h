#pragma once
#include "FireStarterState.h"

// Run date: 12/24/23 15:55:24 Pacific Standard Time
// Run duration = 16262.109827 seconds
// Run generation = 21
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.725268f;
    data->d[1] = -0.602782f;
    data->d[2] = 1.373435f;
    data->d[3] = 0.926897f;
    data->d[4] = 0.774160f;
    data->d[5] = 0.853270f;
    data->d[6] = -1.096538f;
    data->d[7] = 0.000016f;
    data->d[8] = 14.075040f;
    data->d[9] = -0.334475f;
    data->d[10] = 1.445990f;
    data->d[11] = -1.426197f;
    data->d[12] = -1.379022f;
    data->d[13] = -1.320860f;
    data->d[14] = -1.877086f;
    data->d[15] = -2.274204f;
    data->d[16] = 1.159781f;
    data->d[17] = -0.010239f;
    data->d[18] = 0.010239f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.750452f;
    data->d[1] = -0.569686f;
    data->d[2] = 1.321324f;
    data->d[3] = -1.602432f;
    data->d[4] = -0.107713f;
    data->d[5] = -1.628250f;
    data->d[6] = -1.060161f;
    data->d[7] = -0.000023f;
    data->d[8] = 6.376451f;
    data->d[9] = -1.493570f;
    data->d[10] = 1.422358f;
    data->d[11] = -0.433468f;
    data->d[12] = -0.746486f;
    data->d[13] = 3.833803f;
    data->d[14] = 1.660139f;
    data->d[15] = 0.746203f;
    data->d[16] = 1.299027f;
    data->d[17] = -0.153912f;
    data->d[18] = 0.035780f;
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
    data->d[0] = -0.800961f;
    data->d[1] = -1.606933f;
    data->d[2] = -3.369596f;
    data->d[3] = -0.441025f;
    data->d[4] = -0.660664f;
    data->d[5] = -0.064730f;
    data->d[6] = -1.932384f;
    data->d[7] = 0.116667f;
    data->d[8] = -0.572996f;
    data->d[9] = -0.439713f;
    data->d[10] = 0.100710f;
    data->d[11] = -0.531658f;
    data->d[12] = -52.155872f;
    data->d[13] = 0.132775f;
    data->d[14] = 0.484097f;
    data->d[15] = -1.974159f;
    data->d[16] = -1.205727f;
    data->d[17] = 0.140731f;
    data->d[18] = 0.382868f;
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
    instructions->SetOperation(0, 0, 12);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 1, 11);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 0, 23);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 1, 2);
    instructions->SetOperation(13, 1, 23);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 1, 24);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 0, 24);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 1, 26);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 1, 23);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 1, 13);
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
    state.m_evolution = 13;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 162;
    state.m_copy_id = 15;
    state.m_test = 8;
    state.m_seed = 1089464720613934664;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
