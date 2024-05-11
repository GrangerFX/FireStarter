#pragma once
#include "FireStarterState.h"

// Run date: 05/11/24 09:28:48 Pacific Daylight Time
// Run duration = 90.880330 seconds
// Run generation = 35
// Run evolution = 3
// Run max result = 0.00009322
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
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000232
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.043841f;
    data->d[1] = -1.614637f;
    data->d[2] = 0.086776f;
    data->d[3] = -0.448207f;
    data->d[4] = 1.901561f;
    data->d[5] = 1.358608f;
    data->d[6] = -1.075139f;
    data->d[7] = -1.060732f;
    data->d[8] = -0.036892f;
    data->d[9] = -0.228248f;
    data->d[10] = -1.965493f;
    data->d[11] = -2.320093f;
    data->d[12] = -1.627211f;
    data->d[13] = -0.816199f;
    data->d[14] = 1.297078f;
    data->d[15] = -0.276460f;
    data->d[16] = -3.003876f;
    data->d[17] = -2.751090f;
    data->d[18] = -0.177638f;
    data->d[19] = 0.074626f;
    data->d[20] = 2.125445f;
    data->d[21] = 0.768316f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00009322
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.384158f;
    data->d[1] = 1.642884f;
    data->d[2] = -0.641388f;
    data->d[3] = -0.018281f;
    data->d[4] = -1.190163f;
    data->d[5] = 1.967867f;
    data->d[6] = -0.100227f;
    data->d[7] = 1.325891f;
    data->d[8] = -0.151585f;
    data->d[9] = 0.609347f;
    data->d[10] = 0.414575f;
    data->d[11] = -2.606007f;
    data->d[12] = 0.090605f;
    data->d[13] = -0.081866f;
    data->d[14] = 1.479030f;
    data->d[15] = 0.492067f;
    data->d[16] = 2.470845f;
    data->d[17] = -1.051945f;
    data->d[18] = -0.248713f;
    data->d[19] = -0.439591f;
    data->d[20] = -0.082392f;
    data->d[21] = 1.726702f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000093f;
} // LoadVariation1

// Variation: 2  result = 0.00007153
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.318282f;
    data->d[1] = 0.061924f;
    data->d[2] = -0.036300f;
    data->d[3] = -0.261621f;
    data->d[4] = -1.899899f;
    data->d[5] = -1.955443f;
    data->d[6] = -1.503355f;
    data->d[7] = -1.950109f;
    data->d[8] = -2.005424f;
    data->d[9] = -1.147754f;
    data->d[10] = 1.614859f;
    data->d[11] = -0.000516f;
    data->d[12] = -7.032817f;
    data->d[13] = -1.217589f;
    data->d[14] = 0.202403f;
    data->d[15] = -0.886419f;
    data->d[16] = -3.280221f;
    data->d[17] = -0.273104f;
    data->d[18] = 1.737301f;
    data->d[19] = 0.123814f;
    data->d[20] = -0.561570f;
    data->d[21] = -1.199511f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000072f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000093f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 15);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 29);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 1, 0);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 35;
    state.m_evolution = 3;
    state.m_index = 3;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 7183731258538809032;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000119f;
    state.m_maxResult = 0.000093f;
    state.m_evolveWeight = 0.003087f;
    state.m_optimizeValid = true;
} // LoadState
