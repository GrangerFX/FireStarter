#pragma once
#include "FireStarterState.h"

// Run date: 06/22/24 11:25:29 Pacific Daylight Time
// Run duration = 713.241597 seconds
// Run generation = 255
// Run evolution = 13
// Run max result = 0.00000072
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
// Run tests = 0
// Run streams = 1
// Run units = 1
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
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.862581f;
    data->d[1] = -1.279013f;
    data->d[2] = -1.024741f;
    data->d[3] = 0.856967f;
    data->d[4] = -1.551143f;
    data->d[5] = 1.551139f;
    data->d[6] = -1.836553f;
    data->d[7] = -0.113266f;
    data->d[8] = 0.019373f;
    data->d[9] = -1.310978f;
    data->d[10] = 1.660459f;
    data->d[11] = 3.815650f;
    data->d[12] = -0.017809f;
    data->d[13] = -3.722695f;
    data->d[14] = 4.318605f;
    data->d[15] = 4.214808f;
    data->d[16] = -8.727213f;
    data->d[17] = -0.107121f;
    data->d[18] = 1.581237f;
    data->d[19] = 2.009734f;
    data->d[20] = 0.991831f;
    data->d[21] = -0.991832f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.001318f;
    data->d[1] = -0.089352f;
    data->d[2] = 0.807683f;
    data->d[3] = 1.799165f;
    data->d[4] = -1.438946f;
    data->d[5] = 1.439005f;
    data->d[6] = -6.647018f;
    data->d[7] = 0.050801f;
    data->d[8] = -0.000498f;
    data->d[9] = 0.960240f;
    data->d[10] = -1.488276f;
    data->d[11] = -1.874256f;
    data->d[12] = -0.357133f;
    data->d[13] = 0.159866f;
    data->d[14] = -8.253420f;
    data->d[15] = 3.457315f;
    data->d[16] = 9.280691f;
    data->d[17] = 3.296943f;
    data->d[18] = -1.251352f;
    data->d[19] = -5.566369f;
    data->d[20] = 0.470414f;
    data->d[21] = -0.588559f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000072
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.492332f;
    data->d[1] = -1.125666f;
    data->d[2] = 1.445396f;
    data->d[3] = -0.143929f;
    data->d[4] = -0.085523f;
    data->d[5] = 0.085521f;
    data->d[6] = -0.234788f;
    data->d[7] = -1.355588f;
    data->d[8] = 0.046644f;
    data->d[9] = 0.218676f;
    data->d[10] = -0.040581f;
    data->d[11] = 2.494854f;
    data->d[12] = 0.417251f;
    data->d[13] = -0.238656f;
    data->d[14] = -2.916658f;
    data->d[15] = -3.525966f;
    data->d[16] = -2.568831f;
    data->d[17] = 1.110081f;
    data->d[18] = 3.112533f;
    data->d[19] = -2.239771f;
    data->d[20] = -0.647431f;
    data->d[21] = 1.171026f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 1, 14);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 11);
    instructions->SetOperation(7, 1, 22);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 1, 7);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 17);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 1, 27);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 23);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 1, 21);
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
    state.m_generation = 255;
    state.m_evolution = 13;
    state.m_index = 4;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 17066096809196586171;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000296f;
    state.m_optimizeValid = true;
} // LoadState
