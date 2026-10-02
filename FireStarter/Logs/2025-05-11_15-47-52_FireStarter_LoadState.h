#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 15:47:52 Pacific Daylight Time
// Run duration = 257.090721 seconds
// Run test = 0
// Run generation = 408
// Run evolution = 0
// Run precision  = 0.00037517
// Run max result = 0.00008404
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
// Run tests = 1
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
    settings.m_tests = 1;
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
    *(result->MaxResult()) = 0.00006032f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -0.24907917f;
    data->d[1] = 0.13446312f;
    data->d[2] = 1.43408835f;
    data->d[3] = -0.78603488f;
    data->d[4] = 0.21417856f;
    data->d[5] = -3.62285280f;
    data->d[6] = 0.03699948f;
    data->d[7] = -1.51777065f;
    data->d[8] = 1.51652408f;
    data->d[9] = -15.58385563f;
    data->d[10] = 0.90711784f;
    data->d[11] = -0.97794783f;
    data->d[12] = 0.96284825f;
    data->d[13] = -19.24810219f;
    data->d[14] = -10.05436611f;
    data->d[15] = -0.45042774f;
    data->d[16] = 9.04168034f;
    data->d[17] = 1.43177128f;
    data->d[18] = 2.11730051f;
    data->d[19] = -2.72618389f;
    data->d[20] = -0.00005025f;
    data->d[21] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00007641f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = -0.30448997f;
    data->d[1] = 1.03669965f;
    data->d[2] = 1.83158445f;
    data->d[3] = -2.22652292f;
    data->d[4] = -1.40439987f;
    data->d[5] = -0.15306322f;
    data->d[6] = -1.47650385f;
    data->d[7] = -1.90011728f;
    data->d[8] = 1.31070399f;
    data->d[9] = -1.05454659f;
    data->d[10] = -1.32806921f;
    data->d[11] = -11.06889534f;
    data->d[12] = -1.36107683f;
    data->d[13] = 1.55472565f;
    data->d[14] = -0.56746793f;
    data->d[15] = 0.43020010f;
    data->d[16] = 1.43709099f;
    data->d[17] = 2.09726429f;
    data->d[18] = -1.60598588f;
    data->d[19] = 1.77155960f;
    data->d[20] = 0.85226220f;
    data->d[21] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00008404f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.35990164f;
    data->d[1] = -1.71247196f;
    data->d[2] = -1.78694046f;
    data->d[3] = 1.93202865f;
    data->d[4] = -0.16894561f;
    data->d[5] = 1.84389651f;
    data->d[6] = -2.15652561f;
    data->d[7] = -1.22924590f;
    data->d[8] = 1.51625943f;
    data->d[9] = -4.11728096f;
    data->d[10] = -8.77001953f;
    data->d[11] = 0.03526260f;
    data->d[12] = -2.29287624f;
    data->d[13] = 1.79318321f;
    data->d[14] = -1.27432609f;
    data->d[15] = -0.89794850f;
    data->d[16] = 0.52840823f;
    data->d[17] = 0.59244651f;
    data->d[18] = 2.37753916f;
    data->d[19] = -1.49892378f;
    data->d[20] = 0.00001403f;
    data->d[21] = 0.00000000f;
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
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)1, 7);
    code->SetOperation(8, (FireStarterOpcode)1, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 9);
    code->SetOperation(10, (FireStarterOpcode)1, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 3);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)1, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)1, 14);
    code->SetOperation(17, (FireStarterOpcode)0, 15);
    code->SetOperation(18, (FireStarterOpcode)0, 6);
    code->SetOperation(19, (FireStarterOpcode)0, 2);
    code->SetOperation(20, (FireStarterOpcode)0, 4);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)1, 17);
    code->SetOperation(23, (FireStarterOpcode)1, 1);
    code->SetOperation(24, (FireStarterOpcode)0, 7);
    code->SetOperation(25, (FireStarterOpcode)1, 4);
    code->SetOperation(26, (FireStarterOpcode)0, 18);
    code->SetOperation(27, (FireStarterOpcode)0, 5);
    code->SetOperation(28, (FireStarterOpcode)0, 0);
    code->SetOperation(29, (FireStarterOpcode)0, 12);
    code->SetOperation(30, (FireStarterOpcode)0, 19);
    code->SetOperation(31, (FireStarterOpcode)1, 20);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 408;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 11461295472366384712;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00008404f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
