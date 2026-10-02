#pragma once
#include "FireStarterState.h"

// Run date: 06/14/25 16:06:24 Pacific Daylight Time
// Run duration = 22807.135166 seconds
// Run test = 11
// Run generation = 29
// Run evolution = 5
// Run precision  = 0.00003468
// Run max result = 0.00002445
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_SELECT
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run population = 32768
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_SELECT;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_population = 32768;
    settings.m_generations = 0;
    settings.m_passes = 512;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_candidates = 0;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000322f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = 1.25396419f;
    data->d[1] = -0.82694304f;
    data->d[2] = -0.65510476f;
    data->d[3] = 0.30938590f;
    data->d[4] = 2.52337146f;
    data->d[5] = 0.83336949f;
    data->d[6] = -0.00000238f;
    data->d[7] = -0.47998038f;
    data->d[8] = 1.15265572f;
    data->d[9] = 0.02210052f;
    data->d[10] = -2.15147424f;
    data->d[11] = -0.89055067f;
    data->d[12] = -0.59289593f;
    data->d[13] = -2.27856040f;
    data->d[14] = -0.03399018f;
    data->d[15] = -0.46354255f;
    data->d[16] = 19.94027328f;
    data->d[17] = -4.00355530f;
    data->d[18] = 10.29818439f;
    data->d[19] = -0.43529445f;
    data->d[20] = 1.21016252f;
    data->d[21] = 0.52677786f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation0

// Variation: 1
inline void LoadVariation1(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000834f;
    *(result->EvolveAge1()) = 3;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = 0.90703565f;
    data->d[1] = -3.31303644f;
    data->d[2] = -2.13595605f;
    data->d[3] = -0.10763786f;
    data->d[4] = 0.46878943f;
    data->d[5] = 1.67362368f;
    data->d[6] = -0.00012391f;
    data->d[7] = 1.47630215f;
    data->d[8] = 0.28737316f;
    data->d[9] = 0.01676455f;
    data->d[10] = -0.94095254f;
    data->d[11] = 0.53925908f;
    data->d[12] = 4.02640104f;
    data->d[13] = -0.66109771f;
    data->d[14] = -1.29940987f;
    data->d[15] = -0.20527345f;
    data->d[16] = 7.98265553f;
    data->d[17] = 0.16964200f;
    data->d[18] = -0.94759560f;
    data->d[19] = -0.61472017f;
    data->d[20] = 2.06451273f;
    data->d[21] = 1.15093493f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation1

// Variation: 2
inline void LoadVariation2(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00002445f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = -1.02010965f;
    data->d[1] = 1.82792568f;
    data->d[2] = -0.38698030f;
    data->d[3] = 1.57228696f;
    data->d[4] = -2.05081701f;
    data->d[5] = -1.79410958f;
    data->d[6] = 0.00040668f;
    data->d[7] = -1.49616373f;
    data->d[8] = -0.02525998f;
    data->d[9] = 0.02510266f;
    data->d[10] = 1.86171150f;
    data->d[11] = -1.47990167f;
    data->d[12] = 1.13506007f;
    data->d[13] = -0.01792437f;
    data->d[14] = -2.01531863f;
    data->d[15] = 2.38749647f;
    data->d[16] = 1.67301285f;
    data->d[17] = -2.42964792f;
    data->d[18] = 2.49283743f;
    data->d[19] = 1.69020951f;
    data->d[20] = -0.64527088f;
    data->d[21] = 1.61421311f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 1);
    code->SetOperation(3, (FireStarterOpcode)0, 2);
    code->SetOperation(4, (FireStarterOpcode)1, 2);
    code->SetOperation(5, (FireStarterOpcode)0, 3);
    code->SetOperation(6, (FireStarterOpcode)1, 4);
    code->SetOperation(7, (FireStarterOpcode)0, 5);
    code->SetOperation(8, (FireStarterOpcode)1, 6);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 5);
    code->SetOperation(13, (FireStarterOpcode)0, 10);
    code->SetOperation(14, (FireStarterOpcode)1, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 12);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 14);
    code->SetOperation(19, (FireStarterOpcode)1, 15);
    code->SetOperation(20, (FireStarterOpcode)0, 12);
    code->SetOperation(21, (FireStarterOpcode)0, 11);
    code->SetOperation(22, (FireStarterOpcode)0, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 9);
    code->SetOperation(24, (FireStarterOpcode)0, 17);
    code->SetOperation(25, (FireStarterOpcode)1, 8);
    code->SetOperation(26, (FireStarterOpcode)0, 12);
    code->SetOperation(27, (FireStarterOpcode)1, 17);
    code->SetOperation(28, (FireStarterOpcode)0, 18);
    code->SetOperation(29, (FireStarterOpcode)1, 19);
    code->SetOperation(30, (FireStarterOpcode)0, 20);
    code->SetOperation(31, (FireStarterOpcode)1, 21);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 29;
    state.m_evolution = 5;
    state.m_index = 9;
    state.m_evolveIndex = 82;
    state.m_id = 82;
    state.m_test = 11;
    state.m_seed = 7929357918866824259;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00002445f;
    state.m_oldResult = 0.95362413f;
    state.m_evolveWeight = 0.000796f;
    state.m_optimizeValid = true;
} // LoadState
