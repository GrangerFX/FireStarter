#pragma once
#include "FireStarterState.h"

// Run date: 07/13/25 15:13:47 Pacific Daylight Time
// Run duration = 665.585848 seconds
// Run test = 2
// Run generation = 93
// Run evolution = 7
// Run precision  = 0.00001805
// Run max result = 0.00003081
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
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
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
    settings.m_passes = 512;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_candidates = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00002401f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = 0.27519867f;
    data->d[1] = -1.06059086f;
    data->d[2] = -0.54834402f;
    data->d[3] = 2.42824817f;
    data->d[4] = 1.01709914f;
    data->d[5] = 0.00772701f;
    data->d[6] = 0.80429149f;
    data->d[7] = 3.23677015f;
    data->d[8] = 1.82467973f;
    data->d[9] = -2.97762561f;
    data->d[10] = 0.42519897f;
    data->d[11] = -0.02394421f;
    data->d[12] = -0.44979417f;
    data->d[13] = -2.48498678f;
    data->d[14] = -2.07583261f;
    data->d[15] = -1.50089288f;
    data->d[16] = 0.95611018f;
    data->d[17] = 4.48609686f;
    data->d[18] = -5.77074671f;
    data->d[19] = 0.07411025f;
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
    *(result->MaxResult()) = 0.00001346f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -0.58766425f;
    data->d[1] = 0.82011116f;
    data->d[2] = 3.96631145f;
    data->d[3] = 0.02530630f;
    data->d[4] = 0.57583767f;
    data->d[5] = 1.43887782f;
    data->d[6] = -0.14796440f;
    data->d[7] = 8.63074970f;
    data->d[8] = 0.69028229f;
    data->d[9] = -0.00769930f;
    data->d[10] = -1.01708198f;
    data->d[11] = 0.08051053f;
    data->d[12] = -1.90824151f;
    data->d[13] = 4.71003294f;
    data->d[14] = 1.45770001f;
    data->d[15] = 0.43423617f;
    data->d[16] = -0.77853489f;
    data->d[17] = 0.39829254f;
    data->d[18] = 2.99514127f;
    data->d[19] = -0.12054256f;
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
    *(result->MaxResult()) = 0.00003081f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = 0.66699040f;
    data->d[1] = -1.74982357f;
    data->d[2] = -1.63812852f;
    data->d[3] = 0.16791435f;
    data->d[4] = -12.53752899f;
    data->d[5] = 0.00138650f;
    data->d[6] = -4.21162558f;
    data->d[7] = 1.00874376f;
    data->d[8] = 0.41500795f;
    data->d[9] = -1.44798493f;
    data->d[10] = -0.26847428f;
    data->d[11] = 0.06758175f;
    data->d[12] = 0.03618215f;
    data->d[13] = 2.27551317f;
    data->d[14] = 1.47245908f;
    data->d[15] = -1.04573238f;
    data->d[16] = 0.89516747f;
    data->d[17] = 1.25690305f;
    data->d[18] = 3.82449603f;
    data->d[19] = 0.30413672f;
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
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 0);
    code->SetOperation(7, (FireStarterOpcode)0, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 1);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)1, 11);
    code->SetOperation(14, (FireStarterOpcode)1, 12);
    code->SetOperation(15, (FireStarterOpcode)1, 0);
    code->SetOperation(16, (FireStarterOpcode)1, 1);
    code->SetOperation(17, (FireStarterOpcode)0, 11);
    code->SetOperation(18, (FireStarterOpcode)1, 13);
    code->SetOperation(19, (FireStarterOpcode)0, 1);
    code->SetOperation(20, (FireStarterOpcode)0, 11);
    code->SetOperation(21, (FireStarterOpcode)0, 14);
    code->SetOperation(22, (FireStarterOpcode)1, 15);
    code->SetOperation(23, (FireStarterOpcode)0, 16);
    code->SetOperation(24, (FireStarterOpcode)1, 1);
    code->SetOperation(25, (FireStarterOpcode)0, 17);
    code->SetOperation(26, (FireStarterOpcode)1, 8);
    code->SetOperation(27, (FireStarterOpcode)0, 13);
    code->SetOperation(28, (FireStarterOpcode)1, 15);
    code->SetOperation(29, (FireStarterOpcode)1, 18);
    code->SetOperation(30, (FireStarterOpcode)1, 10);
    code->SetOperation(31, (FireStarterOpcode)0, 19);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 93;
    state.m_evolution = 7;
    state.m_index = 12;
    state.m_evolveIndex = 62;
    state.m_id = 62;
    state.m_test = 2;
    state.m_seed = 3911277900269341597;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00003081f;
    state.m_oldResult = 0.00004052f;
    state.m_evolveWeight = 0.001256f;
    state.m_optimizeValid = true;
} // LoadState
