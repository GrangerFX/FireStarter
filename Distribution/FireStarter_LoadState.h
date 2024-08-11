#pragma once
#include "FireStarterState.h"

// Run date: 08/10/24 16:19:40 Pacific Daylight Time
// Run duration = 19.308134 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.24318017
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
// Run population = 16384
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
    settings.m_population = 16384;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.14785540
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.641110f;
    data->d[1] = -1.360399f;
    data->d[2] = -0.661853f;
    data->d[3] = 1.738986f;
    data->d[4] = -0.348033f;
    data->d[5] = 1.773423f;
    data->d[6] = -0.338501f;
    data->d[7] = -0.373869f;
    data->d[8] = 0.855091f;
    data->d[9] = -1.825978f;
    data->d[10] = -0.822882f;
    data->d[11] = -1.492682f;
    data->d[12] = 1.983810f;
    data->d[13] = 0.274063f;
    data->d[14] = -1.213085f;
    data->d[15] = -0.086177f;
    data->d[16] = 1.539054f;
    data->d[17] = -1.483582f;
    data->d[18] = 0.735353f;
    data->d[19] = 1.204066f;
    data->d[20] = -1.368418f;
    data->d[21] = -0.801156f;
    data->d[22] = -0.054450f;
    data->d[23] = -0.972517f;
    data->d[24] = -0.956964f;
    data->d[25] = -0.757890f;
    data->d[26] = -1.037327f;
    data->d[27] = 0.181400f;
    data->d[28] = 0.425125f;
    data->d[29] = 0.253239f;
    *(result->MinResult()) = 0.147855f;
} // LoadVariation0

// Variation: 1  result = 0.14815712
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.735440f;
    data->d[1] = -1.138525f;
    data->d[2] = -0.048754f;
    data->d[3] = 0.563692f;
    data->d[4] = -0.754037f;
    data->d[5] = 0.723852f;
    data->d[6] = 1.917680f;
    data->d[7] = -0.112226f;
    data->d[8] = -1.007463f;
    data->d[9] = -1.171614f;
    data->d[10] = -0.182746f;
    data->d[11] = 0.773907f;
    data->d[12] = -1.297545f;
    data->d[13] = 1.606172f;
    data->d[14] = 0.834791f;
    data->d[15] = -0.324055f;
    data->d[16] = 1.254877f;
    data->d[17] = -0.754737f;
    data->d[18] = -0.712177f;
    data->d[19] = 0.581592f;
    data->d[20] = 1.600564f;
    data->d[21] = 1.547092f;
    data->d[22] = -1.618552f;
    data->d[23] = -1.787415f;
    data->d[24] = 0.403332f;
    data->d[25] = -0.108056f;
    data->d[26] = 0.679493f;
    data->d[27] = -1.756080f;
    data->d[28] = 1.324141f;
    data->d[29] = 0.138309f;
    *(result->MinResult()) = 0.148157f;
} // LoadVariation1

// Variation: 2  result = 0.24318017
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -37.674225f;
    data->d[1] = -0.505415f;
    data->d[2] = -0.459101f;
    data->d[3] = 1.640050f;
    data->d[4] = 1.262812f;
    data->d[5] = -0.466084f;
    data->d[6] = 1.834392f;
    data->d[7] = 0.786966f;
    data->d[8] = -0.612718f;
    data->d[9] = 0.304970f;
    data->d[10] = 1.551679f;
    data->d[11] = -1.457222f;
    data->d[12] = 1.361544f;
    data->d[13] = -0.223149f;
    data->d[14] = 0.664545f;
    data->d[15] = 1.398096f;
    data->d[16] = -0.331683f;
    data->d[17] = -1.012392f;
    data->d[18] = -0.172760f;
    data->d[19] = 0.147157f;
    data->d[20] = -0.445746f;
    data->d[21] = 0.010869f;
    data->d[22] = 0.890467f;
    data->d[23] = -0.982786f;
    data->d[24] = -1.030703f;
    data->d[25] = 0.049376f;
    data->d[26] = 0.255652f;
    data->d[27] = 0.967214f;
    data->d[28] = -0.763957f;
    data->d[29] = 1.654230f;
    *(result->MinResult()) = 0.243180f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.243180f;
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
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.243180f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
