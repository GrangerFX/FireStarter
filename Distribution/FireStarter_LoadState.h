#pragma once
#include "FireStarterState.h"

// Run date: 06/07/25 16:39:29 Pacific Daylight Time
// Run duration = 26.055864 seconds
// Run test = 0
// Run generation = 0
// Run evolution = 0
// Run precision  = 0.00477958
// Run max result = 0.00462215
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
    *(result->MaxResult()) = 0.00103773f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 5.35003805f;
    data->d[1] = 0.36418724f;
    data->d[2] = -1.01488304f;
    data->d[3] = 0.30974841f;
    data->d[4] = -1.12821674f;
    data->d[5] = 4.92578316f;
    data->d[6] = -4.39884043f;
    data->d[7] = -0.64252633f;
    data->d[8] = -0.63964462f;
    data->d[9] = 0.03869753f;
    data->d[10] = 0.28638735f;
    data->d[11] = -0.39598686f;
    data->d[12] = 1.97586250f;
    data->d[13] = -0.86679959f;
    data->d[14] = -0.79040867f;
    data->d[15] = -0.52649879f;
    data->d[16] = -2.18088579f;
    data->d[17] = 4.05113363f;
    data->d[18] = -1.97154391f;
    data->d[19] = -7.52859020f;
    data->d[20] = -0.35495463f;
    data->d[21] = -0.13915506f;
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
    *(result->MaxResult()) = 0.00022820f;
    *(result->EvolveAge1()) = 0;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = 1.49662781f;
    data->d[1] = 0.12075111f;
    data->d[2] = -1.99884713f;
    data->d[3] = 2.15193748f;
    data->d[4] = -1.90391350f;
    data->d[5] = 1.90754092f;
    data->d[6] = -3.35565996f;
    data->d[7] = -0.77085018f;
    data->d[8] = -2.62429380f;
    data->d[9] = -0.51318449f;
    data->d[10] = -3.39842319f;
    data->d[11] = -0.33749735f;
    data->d[12] = 0.02595501f;
    data->d[13] = 0.48655090f;
    data->d[14] = 0.89511043f;
    data->d[15] = 0.10699508f;
    data->d[16] = -25.69942474f;
    data->d[17] = 11.15522575f;
    data->d[18] = -0.27144650f;
    data->d[19] = -0.23134661f;
    data->d[20] = -0.59814686f;
    data->d[21] = 0.15949301f;
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
    *(result->MaxResult()) = 0.00462215f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = -1.76788139f;
    data->d[1] = -0.13592993f;
    data->d[2] = 1.86483526f;
    data->d[3] = 2.88110280f;
    data->d[4] = -0.33698797f;
    data->d[5] = 3.61235595f;
    data->d[6] = -2.80496049f;
    data->d[7] = 0.18037590f;
    data->d[8] = 0.09209540f;
    data->d[9] = 0.81926829f;
    data->d[10] = -0.78852421f;
    data->d[11] = -0.92254448f;
    data->d[12] = -1.55176532f;
    data->d[13] = 1.97124529f;
    data->d[14] = -1.65495980f;
    data->d[15] = -0.47119543f;
    data->d[16] = 1.21012866f;
    data->d[17] = 8.21535206f;
    data->d[18] = 0.21642566f;
    data->d[19] = 0.41934830f;
    data->d[20] = 0.70737588f;
    data->d[21] = 0.73905498f;
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
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)1, 8);
    code->SetOperation(9, (FireStarterOpcode)1, 9);
    code->SetOperation(10, (FireStarterOpcode)0, 10);
    code->SetOperation(11, (FireStarterOpcode)0, 11);
    code->SetOperation(12, (FireStarterOpcode)0, 12);
    code->SetOperation(13, (FireStarterOpcode)1, 13);
    code->SetOperation(14, (FireStarterOpcode)0, 14);
    code->SetOperation(15, (FireStarterOpcode)0, 9);
    code->SetOperation(16, (FireStarterOpcode)0, 15);
    code->SetOperation(17, (FireStarterOpcode)1, 15);
    code->SetOperation(18, (FireStarterOpcode)0, 16);
    code->SetOperation(19, (FireStarterOpcode)0, 17);
    code->SetOperation(20, (FireStarterOpcode)0, 18);
    code->SetOperation(21, (FireStarterOpcode)0, 15);
    code->SetOperation(22, (FireStarterOpcode)1, 19);
    code->SetOperation(23, (FireStarterOpcode)0, 2);
    code->SetOperation(24, (FireStarterOpcode)0, 20);
    code->SetOperation(25, (FireStarterOpcode)0, 0);
    code->SetOperation(26, (FireStarterOpcode)1, 9);
    code->SetOperation(27, (FireStarterOpcode)1, 18);
    code->SetOperation(28, (FireStarterOpcode)0, 13);
    code->SetOperation(29, (FireStarterOpcode)0, 8);
    code->SetOperation(30, (FireStarterOpcode)0, 21);
    code->SetOperation(31, (FireStarterOpcode)0, 14);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 64;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00462215f;
    state.m_oldResult = 0.86104786f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
