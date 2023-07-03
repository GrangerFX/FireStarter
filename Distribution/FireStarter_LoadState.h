#pragma once
#include "FireStarterState.h"

// Run date: 07/02/23 17:35:08 Pacific Daylight Time
// Run duration = 658.424038 seconds
// Run generation = 48
// Run evolution = 0
// Run result = 0.00000453
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000226
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.372989f;
    data->d[1] = -0.456999f;
    data->d[2] = -0.535502f;
    data->d[3] = -1.006381f;
    data->d[4] = 0.466668f;
    data->d[5] = 1.181317f;
    data->d[6] = -2.840312f;
    data->d[7] = 1.475556f;
    data->d[8] = 0.151996f;
    data->d[9] = -0.027939f;
    data->d[10] = -0.789952f;
    data->d[11] = -3.271205f;
    data->d[12] = -0.512211f;
    data->d[13] = -0.432519f;
    data->d[14] = -0.673922f;
    data->d[15] = -1.463567f;
    data->d[16] = 0.535105f;
    data->d[17] = -2.147046f;
    data->d[18] = -1.201318f;
    data->d[19] = -1.416079f;
    data->d[20] = -0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00000453
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.142214f;
    data->d[1] = -1.684739f;
    data->d[2] = -0.740501f;
    data->d[3] = 0.105305f;
    data->d[4] = -0.061208f;
    data->d[5] = 1.362678f;
    data->d[6] = -2.933762f;
    data->d[7] = -3.422766f;
    data->d[8] = -2.109801f;
    data->d[9] = -4.848463f;
    data->d[10] = -1.309093f;
    data->d[11] = 1.086769f;
    data->d[12] = 0.561341f;
    data->d[13] = 1.263561f;
    data->d[14] = 2.769460f;
    data->d[15] = 0.203008f;
    data->d[16] = 3.284467f;
    data->d[17] = -2.105331f;
    data->d[18] = 3.159108f;
    data->d[19] = -1.797959f;
    data->d[20] = -0.118133f;
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

// Variation: 2  result = 0.00000334
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.654224f;
    data->d[1] = -0.366297f;
    data->d[2] = 0.627378f;
    data->d[3] = 0.325599f;
    data->d[4] = 1.899150f;
    data->d[5] = -0.834519f;
    data->d[6] = -0.933119f;
    data->d[7] = -1.849029f;
    data->d[8] = 0.187906f;
    data->d[9] = 0.136177f;
    data->d[10] = 3.690208f;
    data->d[11] = 0.332773f;
    data->d[12] = -0.806640f;
    data->d[13] = 0.603940f;
    data->d[14] = -1.710623f;
    data->d[15] = 1.944919f;
    data->d[16] = -0.688811f;
    data->d[17] = 1.137102f;
    data->d[18] = -0.379596f;
    data->d[19] = 2.951800f;
    data->d[20] = 0.523599f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 7);
    instructions->SetOperation(1, 0, 23);
    instructions->SetOperation(2, 1, 24);
    instructions->SetOperation(3, 0, 20);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 0, 8);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 4);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 1, 17);
    instructions->SetOperation(18, 0, 17);
    instructions->SetOperation(19, 1, 27);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 8);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 1, 0);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 48;
    state.m_evolution = 0;
    state.m_index = 2;
    state.m_test = 58;
    state.m_seed = 14427004126909299294;
} // LoadState
