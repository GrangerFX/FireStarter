#pragma once
#include "FireStarterState.h"

// Run date: 07/07/24 15:10:44 Pacific Daylight Time
// Run duration = 20.384485 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00068551
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
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

    settings.m_mode = FIRESTARTER_EVOLVE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
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

// Variation: 0  result = 0.00031847
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.211146f;
    data->d[1] = -1.648608f;
    data->d[2] = -1.504500f;
    data->d[3] = -1.704637f;
    data->d[4] = 1.671766f;
    data->d[5] = 0.242739f;
    data->d[6] = 0.835948f;
    data->d[7] = -0.102448f;
    data->d[8] = 1.006267f;
    data->d[9] = 0.515576f;
    data->d[10] = 0.275795f;
    data->d[11] = 1.412295f;
    data->d[12] = 0.198529f;
    data->d[13] = -1.127881f;
    data->d[14] = -1.906217f;
    data->d[15] = -1.487615f;
    data->d[16] = 0.176234f;
    data->d[17] = 0.730959f;
    data->d[18] = 1.196638f;
    data->d[19] = 0.029181f;
    data->d[20] = -1.011458f;
    data->d[21] = -0.405334f;
    data->d[22] = -0.379871f;
    data->d[23] = -0.183779f;
    data->d[24] = -1.993109f;
    data->d[25] = 0.897745f;
    data->d[26] = -1.464729f;
    data->d[27] = 0.301500f;
    data->d[28] = 1.062662f;
    data->d[29] = 1.348841f;
    *(result->MinResult()) = 0.000318f;
} // LoadVariation0

// Variation: 1  result = 0.00068551
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.920338f;
    data->d[1] = -0.627760f;
    data->d[2] = 0.310252f;
    data->d[3] = 1.129037f;
    data->d[4] = -1.150536f;
    data->d[5] = 1.264158f;
    data->d[6] = -1.439281f;
    data->d[7] = -0.003990f;
    data->d[8] = -1.046571f;
    data->d[9] = 0.411973f;
    data->d[10] = 0.676541f;
    data->d[11] = 0.918928f;
    data->d[12] = -1.170015f;
    data->d[13] = -1.089055f;
    data->d[14] = -0.051041f;
    data->d[15] = -1.068120f;
    data->d[16] = 0.554597f;
    data->d[17] = -0.964944f;
    data->d[18] = 0.407319f;
    data->d[19] = 1.737457f;
    data->d[20] = -1.883371f;
    data->d[21] = 1.405340f;
    data->d[22] = -0.660742f;
    data->d[23] = -1.634851f;
    data->d[24] = 0.071684f;
    data->d[25] = 1.542096f;
    data->d[26] = 1.422525f;
    data->d[27] = -0.220423f;
    data->d[28] = -0.207387f;
    data->d[29] = 0.102998f;
    *(result->MinResult()) = 0.000686f;
} // LoadVariation1

// Variation: 2  result = 0.00059056
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.269403f;
    data->d[1] = 1.539401f;
    data->d[2] = 1.219512f;
    data->d[3] = -1.436373f;
    data->d[4] = -0.062611f;
    data->d[5] = -0.537485f;
    data->d[6] = -1.354040f;
    data->d[7] = -0.607389f;
    data->d[8] = 1.734455f;
    data->d[9] = -0.083710f;
    data->d[10] = -1.095741f;
    data->d[11] = -0.622376f;
    data->d[12] = 0.909617f;
    data->d[13] = -1.838932f;
    data->d[14] = 1.725521f;
    data->d[15] = -1.564656f;
    data->d[16] = 1.311244f;
    data->d[17] = 0.552311f;
    data->d[18] = 0.701853f;
    data->d[19] = 1.042186f;
    data->d[20] = 1.314472f;
    data->d[21] = 0.066399f;
    data->d[22] = 0.119321f;
    data->d[23] = 0.676545f;
    data->d[24] = -1.027821f;
    data->d[25] = -1.837930f;
    data->d[26] = -0.251839f;
    data->d[27] = -1.604743f;
    data->d[28] = -1.071531f;
    data->d[29] = -1.722462f;
    *(result->MinResult()) = 0.000591f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000686f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 0, 0);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 0);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000686f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
