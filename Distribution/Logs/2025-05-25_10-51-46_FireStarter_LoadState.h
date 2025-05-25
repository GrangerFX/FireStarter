#pragma once
#include "FireStarterState.h"

// Run date: 05/25/25 10:51:46 Pacific Daylight Time
// Run duration = 6.364628 seconds
// Run test = 0
// Run generation = 5
// Run evolution = 0
// Run precision  = 0.00006464
// Run max result = 0.00011197
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 384
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 65536;
    settings.m_generations = 0;
    settings.m_passes = 384;
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
    *(result->MaxResult()) = 0.00001917f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -3.15812659f;
    data->d[1] = -2.11627030f;
    data->d[2] = 0.46337324f;
    data->d[3] = 1.18299961f;
    data->d[4] = -0.62055963f;
    data->d[5] = -0.04987367f;
    data->d[6] = 2.60788345f;
    data->d[7] = 0.02168882f;
    data->d[8] = -4.49752569f;
    data->d[9] = -2.27120399f;
    data->d[10] = 0.01055187f;
    data->d[11] = 9.43815899f;
    data->d[12] = 1.16597450f;
    data->d[13] = 0.56985337f;
    data->d[14] = 0.31581059f;
    data->d[15] = -1.09178710f;
    data->d[16] = 2.66096044f;
    data->d[17] = 6.74116898f;
    data->d[18] = 17.87935638f;
    data->d[19] = 0.16820818f;
    data->d[20] = -0.02291041f;
    data->d[21] = -0.70425373f;
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
    *(result->MaxResult()) = 0.00002021f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -3.20601249f;
    data->d[1] = -0.51121253f;
    data->d[2] = -0.53711843f;
    data->d[3] = 0.65820539f;
    data->d[4] = 0.28619599f;
    data->d[5] = -0.30568638f;
    data->d[6] = 2.87740803f;
    data->d[7] = -0.37358645f;
    data->d[8] = -1.96773934f;
    data->d[9] = 1.32336724f;
    data->d[10] = 1.19592261f;
    data->d[11] = 0.33526632f;
    data->d[12] = 0.88925594f;
    data->d[13] = -5.07341862f;
    data->d[14] = -0.19575201f;
    data->d[15] = 0.14362966f;
    data->d[16] = 6.61791897f;
    data->d[17] = 7.26668549f;
    data->d[18] = 0.32921994f;
    data->d[19] = 0.58301526f;
    data->d[20] = -0.33436871f;
    data->d[21] = 0.32544005f;
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
    *(result->MaxResult()) = 0.00011197f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -2.66881919f;
    data->d[1] = -0.46095839f;
    data->d[2] = -0.23465005f;
    data->d[3] = -2.15591240f;
    data->d[4] = -0.42155734f;
    data->d[5] = -1.18142200f;
    data->d[6] = -2.69596028f;
    data->d[7] = 0.01023918f;
    data->d[8] = 3.21460605f;
    data->d[9] = -1.19133568f;
    data->d[10] = 2.37290978f;
    data->d[11] = 1.58598173f;
    data->d[12] = -0.68197960f;
    data->d[13] = -0.25492367f;
    data->d[14] = 0.17495340f;
    data->d[15] = 1.24926734f;
    data->d[16] = 1.73148072f;
    data->d[17] = 0.44074923f;
    data->d[18] = -2.30886292f;
    data->d[19] = 0.05988461f;
    data->d[20] = 1.60822070f;
    data->d[21] = 0.30296716f;
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
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 1);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 12);
    code->SetOperation(14, (FireStarterOpcode)1, 13);
    code->SetOperation(15, (FireStarterOpcode)0, 14);
    code->SetOperation(16, (FireStarterOpcode)1, 14);
    code->SetOperation(17, (FireStarterOpcode)0, 15);
    code->SetOperation(18, (FireStarterOpcode)0, 16);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)1, 7);
    code->SetOperation(21, (FireStarterOpcode)0, 9);
    code->SetOperation(22, (FireStarterOpcode)0, 12);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 18);
    code->SetOperation(25, (FireStarterOpcode)0, 4);
    code->SetOperation(26, (FireStarterOpcode)1, 2);
    code->SetOperation(27, (FireStarterOpcode)0, 8);
    code->SetOperation(28, (FireStarterOpcode)1, 19);
    code->SetOperation(29, (FireStarterOpcode)0, 7);
    code->SetOperation(30, (FireStarterOpcode)1, 20);
    code->SetOperation(31, (FireStarterOpcode)0, 21);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 5;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 8052663456522067295;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00011197f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
