#pragma once
#include "FireStarterState.h"

// Run date: 06/16/24 11:55:48 Pacific Daylight Time
// Run duration = 180.326378 seconds
// Run generation = 17
// Run evolution = 1
// Run max result = 0.00002778
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
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
    settings.m_registers = 30;
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001490
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.793296f;
    data->d[1] = 0.762338f;
    data->d[2] = -1.224019f;
    data->d[3] = -1.217269f;
    data->d[4] = 4.489964f;
    data->d[5] = 0.617158f;
    data->d[6] = -1.609369f;
    data->d[7] = -0.036387f;
    data->d[8] = 1.063583f;
    data->d[9] = 0.066489f;
    data->d[10] = 0.484607f;
    data->d[11] = 0.029390f;
    data->d[12] = -0.501728f;
    data->d[13] = -3.053124f;
    data->d[14] = 3.859580f;
    data->d[15] = -1.987293f;
    data->d[16] = -3.219936f;
    data->d[17] = -1.486149f;
    data->d[18] = -0.756292f;
    data->d[19] = -0.248091f;
    data->d[20] = -0.017465f;
    data->d[21] = 0.296429f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000015f;
} // LoadVariation0

// Variation: 1  result = 0.00002110
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.516872f;
    data->d[1] = 0.131865f;
    data->d[2] = -0.916848f;
    data->d[3] = -0.604693f;
    data->d[4] = 1.416798f;
    data->d[5] = 0.915058f;
    data->d[6] = -0.258814f;
    data->d[7] = 0.157932f;
    data->d[8] = -0.187356f;
    data->d[9] = 1.095142f;
    data->d[10] = 1.404705f;
    data->d[11] = -1.884834f;
    data->d[12] = -0.340374f;
    data->d[13] = 2.772556f;
    data->d[14] = -1.584996f;
    data->d[15] = 8.701811f;
    data->d[16] = 4.267847f;
    data->d[17] = -4.832916f;
    data->d[18] = 0.069379f;
    data->d[19] = -14.156667f;
    data->d[20] = 4.350000f;
    data->d[21] = -0.027221f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000021f;
} // LoadVariation1

// Variation: 2  result = 0.00002778
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.935615f;
    data->d[1] = -0.758911f;
    data->d[2] = 0.423178f;
    data->d[3] = -0.600421f;
    data->d[4] = -1.209747f;
    data->d[5] = 0.640576f;
    data->d[6] = -0.607687f;
    data->d[7] = -0.914568f;
    data->d[8] = -2.130399f;
    data->d[9] = -1.596995f;
    data->d[10] = -2.115644f;
    data->d[11] = -0.124695f;
    data->d[12] = -1.219825f;
    data->d[13] = 0.025395f;
    data->d[14] = 7.154336f;
    data->d[15] = -0.285011f;
    data->d[16] = -0.813973f;
    data->d[17] = 1.854700f;
    data->d[18] = 3.603959f;
    data->d[19] = -1.899285f;
    data->d[20] = -1.845231f;
    data->d[21] = -0.298242f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000028f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000028f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 1, 27);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 17;
    state.m_evolution = 1;
    state.m_index = 5;
    state.m_copy_index = 20;
    state.m_id = 20;
    state.m_test = 0;
    state.m_seed = 16800172073627579407;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000122f;
    state.m_maxResult = 0.000028f;
    state.m_evolveWeight = 0.000608f;
    state.m_optimizeValid = true;
} // LoadState
