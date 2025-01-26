#pragma once
#include "FireStarterState.h"

// Run date: 01/26/25 10:49:29 Pacific Standard Time
// Run duration = 1.981869 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00005688
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

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
    settings.m_opcodes = 4;

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

// Variation: 0  result = 0.00005688
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.63793063f;
    data->d[1] = -0.04109532f;
    data->d[2] = -1.02171421f;
    data->d[3] = -0.04232062f;
    data->d[4] = -3.23993444f;
    data->d[5] = -0.77399993f;
    data->d[6] = -1.40668368f;
    data->d[7] = -0.14569788f;
    data->d[8] = 1.80543303f;
    data->d[9] = -0.06177007f;
    data->d[10] = -0.51309961f;
    data->d[11] = -0.13787155f;
    data->d[12] = 0.68246466f;
    data->d[13] = 16.83252525f;
    data->d[14] = 14.13730145f;
    data->d[15] = 1.07225621f;
    data->d[16] = -0.83632565f;
    data->d[17] = -20.09799194f;
    data->d[18] = 15.01434040f;
    data->d[19] = -0.20620745f;
    data->d[20] = 0.23145045f;
    data->d[21] = 1.47406578f;
    data->d[22] = 1.60295105f;
    data->d[23] = -2.14104700f;
    data->d[24] = -1.95720482f;
    data->d[25] = 0.43197536f;
    data->d[26] = 0.56835389f;
    data->d[27] = 1.08873141f;
    data->d[28] = 1.08857429f;
    data->d[29] = -0.45818898f;
    *(result->MinResult()) = 0.00005688f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00005688f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 1, 16);
    instructions->SetOperation(20, 1, 12);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 1, 12);
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
    state.LoadCodeFromProgram();
    state.m_generation = 2;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 3221065382608826918;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00005688f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
