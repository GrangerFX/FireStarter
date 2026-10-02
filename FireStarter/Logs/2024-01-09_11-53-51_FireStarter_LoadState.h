#pragma once
#include "FireStarterState.h"

// Run date: 01/09/24 11:53:51 Pacific Standard Time
// Run duration = 3920.082534 seconds
// Run generation = 18
// Run evolution = 13
// Run max result = 0.00000030
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
// Run tests = 4
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
    settings.m_tests = 4;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.168480f;
    data->d[1] = -0.529294f;
    data->d[2] = 0.988307f;
    data->d[3] = 2.008395f;
    data->d[4] = -0.869999f;
    data->d[5] = -3.954945f;
    data->d[6] = 4.547536f;
    data->d[7] = -1.302277f;
    data->d[8] = -1.000069f;
    data->d[9] = -0.058200f;
    data->d[10] = -1.189105f;
    data->d[11] = -2.940023f;
    data->d[12] = 0.862689f;
    data->d[13] = 1.589661f;
    data->d[14] = -0.560509f;
    data->d[15] = 0.035323f;
    data->d[16] = 0.895004f;
    data->d[17] = -0.703530f;
    data->d[18] = -1.111048f;
    data->d[19] = 0.000000f;
    data->d[20] = 2.189037f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.534829f;
    data->d[1] = 1.652975f;
    data->d[2] = -1.291276f;
    data->d[3] = 0.810601f;
    data->d[4] = -1.814370f;
    data->d[5] = -2.714739f;
    data->d[6] = 0.450709f;
    data->d[7] = -0.296619f;
    data->d[8] = -1.230911f;
    data->d[9] = 8.666169f;
    data->d[10] = 2.312057f;
    data->d[11] = -0.000008f;
    data->d[12] = -0.110672f;
    data->d[13] = -1.731505f;
    data->d[14] = 0.277542f;
    data->d[15] = 2.687164f;
    data->d[16] = -1.300205f;
    data->d[17] = -1.479252f;
    data->d[18] = 0.663231f;
    data->d[19] = -0.137403f;
    data->d[20] = 0.859748f;
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

// Variation: 2  result = 0.00000030
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.406766f;
    data->d[1] = -1.064910f;
    data->d[2] = -0.820027f;
    data->d[3] = 1.776795f;
    data->d[4] = -2.783825f;
    data->d[5] = -0.894243f;
    data->d[6] = -1.769093f;
    data->d[7] = -2.231480f;
    data->d[8] = -1.002891f;
    data->d[9] = 0.234815f;
    data->d[10] = -1.823058f;
    data->d[11] = -0.420403f;
    data->d[12] = -2.032025f;
    data->d[13] = -0.112388f;
    data->d[14] = 0.158550f;
    data->d[15] = 2.529769f;
    data->d[16] = -3.334171f;
    data->d[17] = 2.798013f;
    data->d[18] = 0.256552f;
    data->d[19] = 0.941650f;
    data->d[20] = 0.556044f;
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
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 1, 1);
    instructions->SetOperation(9, 0, 23);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 0);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 1, 2);
    instructions->SetOperation(29, 0, 26);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 0, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 18;
    state.m_evolution = 13;
    state.m_children = 193;
    state.m_index = 18;
    state.m_copy_index = 172;
    state.m_id = 52;
    state.m_test = 3;
    state.m_seed = 13671281371525481507;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveResult = 0.000110f;
    state.m_optimizeValid = true;
} // LoadState
