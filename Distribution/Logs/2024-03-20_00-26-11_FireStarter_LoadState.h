#pragma once
#include "FireStarterState.h"

// Run date: 03/20/24 00:26:11 Pacific Daylight Time
// Run duration = 20041.339847 seconds
// Run generation = 46
// Run evolution = 10
// Run max result = 0.00001860
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
// Run evolveSeed = 3
// Run optimizeSeed = 0
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
    settings.m_evolveSeed = 3;
    settings.m_optimizeSeed = 0;
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

// Variation: 0  result = 0.00000060
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.543198f;
    data->d[1] = -0.055249f;
    data->d[2] = 3.803720f;
    data->d[3] = 0.170395f;
    data->d[4] = -0.103561f;
    data->d[5] = 0.823321f;
    data->d[6] = 0.862087f;
    data->d[7] = -1.471537f;
    data->d[8] = 0.459900f;
    data->d[9] = -1.043408f;
    data->d[10] = 1.129764f;
    data->d[11] = -2.055802f;
    data->d[12] = -0.096926f;
    data->d[13] = -1.767171f;
    data->d[14] = 1.924274f;
    data->d[15] = -0.001018f;
    data->d[16] = 36.085274f;
    data->d[17] = 0.402733f;
    data->d[18] = -1.107188f;
    data->d[19] = -0.029562f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000489
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.653611f;
    data->d[1] = -1.326827f;
    data->d[2] = -0.038985f;
    data->d[3] = -1.057485f;
    data->d[4] = 1.346519f;
    data->d[5] = 0.326630f;
    data->d[6] = 3.988815f;
    data->d[7] = 1.684706f;
    data->d[8] = 2.159809f;
    data->d[9] = -0.506972f;
    data->d[10] = -1.910866f;
    data->d[11] = 0.208555f;
    data->d[12] = 0.269727f;
    data->d[13] = 2.561198f;
    data->d[14] = -1.564774f;
    data->d[15] = 0.014389f;
    data->d[16] = -15.967501f;
    data->d[17] = 1.509842f;
    data->d[18] = 0.005248f;
    data->d[19] = -0.168220f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00001860
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.355919f;
    data->d[1] = 0.392337f;
    data->d[2] = 0.628508f;
    data->d[3] = -1.446652f;
    data->d[4] = 1.078610f;
    data->d[5] = 0.636289f;
    data->d[6] = -0.669218f;
    data->d[7] = -2.147341f;
    data->d[8] = -0.599215f;
    data->d[9] = -3.310783f;
    data->d[10] = 0.396908f;
    data->d[11] = 0.541151f;
    data->d[12] = -0.055684f;
    data->d[13] = -1.118613f;
    data->d[14] = 0.936234f;
    data->d[15] = 0.000017f;
    data->d[16] = -8.133771f;
    data->d[17] = -0.934672f;
    data->d[18] = 0.275671f;
    data->d[19] = 0.434365f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000019f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000019f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 1, 16);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 14);
    instructions->SetOperation(11, 0, 25);
    instructions->SetOperation(12, 1, 27);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 7);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 1, 23);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 1, 19);
    instructions->SetOperation(26, 1, 21);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 0, 25);
    instructions->SetOperation(31, 1, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 46;
    state.m_evolution = 10;
    state.m_index = 15;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 15;
    state.m_seed = 8635369390339651678;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000037f;
    state.m_maxResult = 0.000019f;
    state.m_evolveWeight = 0.000557f;
    state.m_optimizeValid = true;
} // LoadState
