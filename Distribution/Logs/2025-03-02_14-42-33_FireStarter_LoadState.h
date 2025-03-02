#pragma once
#include "FireStarterState.h"

// Run date: 03/02/25 14:42:33 Pacific Standard Time
// Run duration = 759.208437 seconds
// Run generation = 963
// Run evolution = 0
// Run max result = 0.00123345
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
// Run generations = 0
// Run population = 65536
// Run passes = 384
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
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_passes = 384;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00047389f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = 0.00042871f;
    data->d[1] = 0.05448677f;
    data->d[2] = -1.50485098f;
    data->d[3] = 0.98641616f;
    data->d[4] = 1.70826912f;
    data->d[5] = 0.61182773f;
    data->d[6] = -2.01472926f;
    data->d[7] = -2.17137504f;
    data->d[8] = 1.08164823f;
    data->d[9] = 0.72677094f;
    data->d[10] = -1.73564053f;
    data->d[11] = -2.33907533f;
    data->d[12] = 1.13910496f;
    data->d[13] = 0.21016845f;
    data->d[14] = -2.28800058f;
    data->d[15] = -14.50654793f;
    data->d[16] = -0.12399216f;
    data->d[17] = 4.35947371f;
    data->d[18] = -0.05903391f;
    data->d[19] = -2.75666881f;
    data->d[20] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00051237f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = -2.98305798f;
    data->d[1] = 0.53565121f;
    data->d[2] = -0.21919499f;
    data->d[3] = 1.14474428f;
    data->d[4] = -1.72838771f;
    data->d[5] = 0.14390658f;
    data->d[6] = -1.99169850f;
    data->d[7] = -3.88898468f;
    data->d[8] = 0.08040667f;
    data->d[9] = -0.20181350f;
    data->d[10] = -0.79299808f;
    data->d[11] = -0.77197927f;
    data->d[12] = -1.57824492f;
    data->d[13] = 3.82761359f;
    data->d[14] = -9.02959251f;
    data->d[15] = -4.93977785f;
    data->d[16] = -0.12145996f;
    data->d[17] = 2.20719767f;
    data->d[18] = -0.14880402f;
    data->d[19] = -3.40496612f;
    data->d[20] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00123345f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 9;
    FireStarterData *data = result->Data();
    data->d[0] = -0.00084837f;
    data->d[1] = 0.54555607f;
    data->d[2] = -0.21115659f;
    data->d[3] = 1.07575822f;
    data->d[4] = -0.57406753f;
    data->d[5] = -0.63399988f;
    data->d[6] = -1.78258884f;
    data->d[7] = 1.67502820f;
    data->d[8] = 0.40617564f;
    data->d[9] = -0.25617951f;
    data->d[10] = 2.07189608f;
    data->d[11] = -0.57327127f;
    data->d[12] = 0.98832637f;
    data->d[13] = 0.87127692f;
    data->d[14] = -2.98743653f;
    data->d[15] = -7.02210283f;
    data->d[16] = 9.33947182f;
    data->d[17] = 14.89553738f;
    data->d[18] = -0.00135830f;
    data->d[19] = 1.71899331f;
    data->d[20] = 0.00000000f;
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
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 9);
    code->SetOperation(10, (FireStarterOpcode)0, 4);
    code->SetOperation(11, (FireStarterOpcode)1, 4);
    code->SetOperation(12, (FireStarterOpcode)0, 1);
    code->SetOperation(13, (FireStarterOpcode)1, 10);
    code->SetOperation(14, (FireStarterOpcode)1, 11);
    code->SetOperation(15, (FireStarterOpcode)1, 12);
    code->SetOperation(16, (FireStarterOpcode)0, 1);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 10);
    code->SetOperation(19, (FireStarterOpcode)0, 12);
    code->SetOperation(20, (FireStarterOpcode)0, 9);
    code->SetOperation(21, (FireStarterOpcode)0, 8);
    code->SetOperation(22, (FireStarterOpcode)1, 14);
    code->SetOperation(23, (FireStarterOpcode)0, 15);
    code->SetOperation(24, (FireStarterOpcode)0, 16);
    code->SetOperation(25, (FireStarterOpcode)1, 17);
    code->SetOperation(26, (FireStarterOpcode)0, 18);
    code->SetOperation(27, (FireStarterOpcode)1, 0);
    code->SetOperation(28, (FireStarterOpcode)0, 2);
    code->SetOperation(29, (FireStarterOpcode)0, 11);
    code->SetOperation(30, (FireStarterOpcode)1, 19);
    code->SetOperation(31, (FireStarterOpcode)0, 9);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 963;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 1416479534547825273;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
