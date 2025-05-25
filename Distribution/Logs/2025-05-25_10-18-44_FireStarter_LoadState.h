#pragma once
#include "FireStarterState.h"

// Run date: 05/25/25 10:18:44 Pacific Daylight Time
// Run duration = 3.060205 seconds
// Run test = 0
// Run generation = 2
// Run evolution = 0
// Run precision  = 0.00125907
// Run max result = 0.00158571
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
    *(result->MaxResult()) = 0.00035810f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = 1.10132205f;
    data->d[1] = -1.72939360f;
    data->d[2] = 0.16742785f;
    data->d[3] = -2.43313193f;
    data->d[4] = 1.29872036f;
    data->d[5] = -0.84741867f;
    data->d[6] = 2.48228598f;
    data->d[7] = -0.98924333f;
    data->d[8] = 1.44559538f;
    data->d[9] = 2.35318255f;
    data->d[10] = -4.46986055f;
    data->d[11] = 0.39209658f;
    data->d[12] = -1.22353172f;
    data->d[13] = -0.08889043f;
    data->d[14] = 1.92451859f;
    data->d[15] = -0.93378270f;
    data->d[16] = 1.24447596f;
    data->d[17] = 0.30036527f;
    data->d[18] = 0.37328911f;
    data->d[19] = -1.86377847f;
    data->d[20] = -1.57840621f;
    data->d[21] = 0.46932775f;
    data->d[22] = 1.18121326f;
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
    *(result->MaxResult()) = 0.00019890f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = 0.53749454f;
    data->d[1] = -0.72371149f;
    data->d[2] = -0.80516356f;
    data->d[3] = -0.32699087f;
    data->d[4] = 0.58998442f;
    data->d[5] = -0.20874216f;
    data->d[6] = 0.76059580f;
    data->d[7] = -1.86055899f;
    data->d[8] = -2.37188292f;
    data->d[9] = -0.52303684f;
    data->d[10] = 0.78592050f;
    data->d[11] = 1.65698302f;
    data->d[12] = -1.55372918f;
    data->d[13] = -0.30764192f;
    data->d[14] = -1.96019208f;
    data->d[15] = 3.77036643f;
    data->d[16] = -4.32845545f;
    data->d[17] = 0.30722916f;
    data->d[18] = -0.18311355f;
    data->d[19] = -1.79759729f;
    data->d[20] = 1.48739672f;
    data->d[21] = 0.24414311f;
    data->d[22] = 0.71290743f;
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
    *(result->MaxResult()) = 0.00158571f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 10;
    FireStarterData *data = result->Data();
    data->d[0] = -1.02279758f;
    data->d[1] = -0.74434310f;
    data->d[2] = 0.29460284f;
    data->d[3] = 1.71765506f;
    data->d[4] = 1.24804163f;
    data->d[5] = 0.53811085f;
    data->d[6] = -0.40128335f;
    data->d[7] = 1.47475338f;
    data->d[8] = 0.48868486f;
    data->d[9] = 0.59658283f;
    data->d[10] = 0.77526069f;
    data->d[11] = 2.20970559f;
    data->d[12] = -0.47472122f;
    data->d[13] = -2.22232366f;
    data->d[14] = 0.97908700f;
    data->d[15] = -1.25687003f;
    data->d[16] = 0.27650118f;
    data->d[17] = -2.27441311f;
    data->d[18] = -1.38013804f;
    data->d[19] = -0.70467561f;
    data->d[20] = -0.94535667f;
    data->d[21] = 2.06940484f;
    data->d[22] = 0.63934642f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)1, 9);
    code->SetOperation(10, (FireStarterOpcode)0, 10);
    code->SetOperation(11, (FireStarterOpcode)0, 11);
    code->SetOperation(12, (FireStarterOpcode)1, 12);
    code->SetOperation(13, (FireStarterOpcode)0, 13);
    code->SetOperation(14, (FireStarterOpcode)0, 14);
    code->SetOperation(15, (FireStarterOpcode)0, 2);
    code->SetOperation(16, (FireStarterOpcode)1, 15);
    code->SetOperation(17, (FireStarterOpcode)0, 16);
    code->SetOperation(18, (FireStarterOpcode)0, 6);
    code->SetOperation(19, (FireStarterOpcode)0, 17);
    code->SetOperation(20, (FireStarterOpcode)0, 1);
    code->SetOperation(21, (FireStarterOpcode)0, 18);
    code->SetOperation(22, (FireStarterOpcode)1, 19);
    code->SetOperation(23, (FireStarterOpcode)1, 19);
    code->SetOperation(24, (FireStarterOpcode)0, 14);
    code->SetOperation(25, (FireStarterOpcode)0, 0);
    code->SetOperation(26, (FireStarterOpcode)1, 9);
    code->SetOperation(27, (FireStarterOpcode)0, 17);
    code->SetOperation(28, (FireStarterOpcode)1, 13);
    code->SetOperation(29, (FireStarterOpcode)0, 20);
    code->SetOperation(30, (FireStarterOpcode)0, 21);
    code->SetOperation(31, (FireStarterOpcode)1, 22);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 2;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 3221065382608826918;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00158571f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
