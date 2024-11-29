#pragma once
#include "FireStarterState.h"

// Run date: 11/29/24 10:45:33 Pacific Standard Time
// Run duration = 18.676242 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000054
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_passes = 384;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000054
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.08799334f;
    data->d[2] = -2.16105080f;
    data->d[3] = -0.81355023f;
    data->d[4] = 1.48453355f;
    data->d[5] = -4.85538578f;
    data->d[6] = 0.95985287f;
    data->d[7] = 2.04598641f;
    data->d[8] = 0.61999351f;
    data->d[9] = 3.55063343f;
    data->d[10] = 1.98718297f;
    data->d[11] = 6.33349228f;
    data->d[12] = 0.42410102f;
    data->d[13] = -7.12145233f;
    data->d[14] = -0.03496702f;
    data->d[15] = 0.08726195f;
    data->d[16] = -2.44473553f;
    data->d[17] = -4.22164679f;
    data->d[18] = -6.37498188f;
    data->d[19] = 0.35142198f;
    data->d[20] = 2.58262753f;
    data->d[21] = 0.11767225f;
    data->d[22] = -0.25151825f;
    data->d[23] = -1.68374431f;
    data->d[24] = 0.91144395f;
    data->d[25] = 2.01103735f;
    data->d[26] = -0.51639831f;
    data->d[27] = -1.59908426f;
    data->d[28] = 1.65074849f;
    data->d[29] = -1.12438667f;
    *(result->MinResult()) = 0.00000054f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000054f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 1, 5);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 5);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 0, 11);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 1, 20);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 0, 21);
    instructions->SetOperation(31, 0, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.LoadCodeFromProgram();
    state.m_generation = 3;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 1;
    state.m_seed = 4498769691753394066;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000054f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
