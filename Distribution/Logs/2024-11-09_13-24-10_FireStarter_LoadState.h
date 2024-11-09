#pragma once
#include "FireStarterState.h"

// Run date: 11/09/24 13:24:10 Pacific Standard Time
// Run duration = 36.539568 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000033
// Run variations = 1
// Run samples = 15
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
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
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
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000033
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.89807689f;
    data->d[1] = -1.24351561f;
    data->d[2] = -0.11626118f;
    data->d[3] = -0.27359229f;
    data->d[4] = 4.13819361f;
    data->d[5] = -0.61520678f;
    data->d[6] = 1.48093414f;
    data->d[7] = 1.93480015f;
    data->d[8] = 0.03718653f;
    data->d[9] = -1.10559464f;
    data->d[10] = 2.30185699f;
    data->d[11] = 1.02541459f;
    data->d[12] = 0.47126141f;
    data->d[13] = 20.87892342f;
    data->d[14] = 5.91859055f;
    data->d[15] = -0.02505745f;
    data->d[16] = -3.12520003f;
    data->d[17] = 5.01698494f;
    data->d[18] = 1.07267845f;
    data->d[19] = -0.00000001f;
    data->d[20] = 1.51259005f;
    data->d[21] = 0.10510740f;
    data->d[22] = 1.99667096f;
    data->d[23] = 1.15016961f;
    data->d[24] = -0.35401425f;
    data->d[25] = 0.93553847f;
    data->d[26] = 0.28388312f;
    data->d[27] = -0.48721004f;
    data->d[28] = -0.60647786f;
    data->d[29] = 0.95023227f;
    *(result->MinResult()) = 0.00000033f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000033f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 1, 10);
    instructions->SetOperation(2, 0, 8);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 3);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 0, 25);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 0, 22);
    instructions->SetOperation(11, 0, 17);
    instructions->SetOperation(12, 1, 29);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 17);
    instructions->SetOperation(15, 0, 26);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 6);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 1, 20);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 2);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 1, 16);
    instructions->SetOperation(31, 0, 13);
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
    state.m_generation = 9;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 12884261530435307672;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000033f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
