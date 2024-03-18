#pragma once
#include "FireStarterState.h"

// Run date: 03/18/24 00:45:42 Pacific Daylight Time
// Run duration = 23109.922029 seconds
// Run generation = 1916
// Run evolution = 24
// Run max result = 0.00000036
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
// Run optimizeSeed = 42273026
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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
    settings.m_optimizeSeed = 42273026;
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.584307f;
    data->d[1] = -1.835655f;
    data->d[2] = -1.835657f;
    data->d[3] = -0.227833f;
    data->d[4] = -3.979645f;
    data->d[5] = -0.042750f;
    data->d[6] = 1.501363f;
    data->d[7] = -0.111585f;
    data->d[8] = -0.626943f;
    data->d[9] = -0.123069f;
    data->d[10] = 0.673861f;
    data->d[11] = -0.660459f;
    data->d[12] = 3.043631f;
    data->d[13] = -1.006282f;
    data->d[14] = 8.063107f;
    data->d[15] = -0.007538f;
    data->d[16] = 3.362267f;
    data->d[17] = 0.319058f;
    data->d[18] = -0.143938f;
    data->d[19] = 0.000001f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.376659f;
    data->d[1] = 1.164127f;
    data->d[2] = 1.164120f;
    data->d[3] = -1.047698f;
    data->d[4] = 0.040989f;
    data->d[5] = 1.516029f;
    data->d[6] = 1.632109f;
    data->d[7] = -0.539385f;
    data->d[8] = 0.156995f;
    data->d[9] = -0.640017f;
    data->d[10] = -0.881403f;
    data->d[11] = -0.289687f;
    data->d[12] = 0.623855f;
    data->d[13] = 0.387987f;
    data->d[14] = -3.698758f;
    data->d[15] = -0.065269f;
    data->d[16] = 3.545145f;
    data->d[17] = 1.339174f;
    data->d[18] = 1.646089f;
    data->d[19] = -0.118138f;
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

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.577978f;
    data->d[1] = -1.513141f;
    data->d[2] = -1.513142f;
    data->d[3] = 0.110707f;
    data->d[4] = -3.311220f;
    data->d[5] = 0.129930f;
    data->d[6] = 1.655001f;
    data->d[7] = -0.658920f;
    data->d[8] = 0.212286f;
    data->d[9] = 0.394288f;
    data->d[10] = 1.238715f;
    data->d[11] = 0.911574f;
    data->d[12] = 1.130223f;
    data->d[13] = -0.321023f;
    data->d[14] = 0.008317f;
    data->d[15] = -14.503510f;
    data->d[16] = -3.495412f;
    data->d[17] = 1.804437f;
    data->d[18] = 2.049794f;
    data->d[19] = 0.523599f;
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
    instructions->SetOperation(0, 0, 4);
    instructions->SetOperation(1, 1, 28);
    instructions->SetOperation(2, 1, 5);
    instructions->SetOperation(3, 0, 16);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 6);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 0, 21);
    instructions->SetOperation(20, 1, 12);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 1, 2);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 24);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1916;
    state.m_evolution = 24;
    state.m_index = 9;
    state.m_copy_index = 8;
    state.m_id = 8;
    state.m_test = 15;
    state.m_seed = 1960460719579619512;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000389f;
    state.m_optimizeValid = true;
} // LoadState
