#pragma once
#include "FireStarterState.h"

// Run date: 05/11/25 08:58:29 Pacific Daylight Time
// Run duration = 1921.677000 seconds
// Run test = 0
// Run generation = 1775
// Run evolution = 0
// Run precision  = 0.00003076
// Run max result = 0.00002277
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
    *(result->MaxResult()) = 0.00001639f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = 2.04764557f;
    data->d[1] = -5.18924046f;
    data->d[2] = -0.50689381f;
    data->d[3] = 0.36384591f;
    data->d[4] = 1.45469844f;
    data->d[5] = -0.00000226f;
    data->d[6] = -0.00984796f;
    data->d[7] = -2.70047140f;
    data->d[8] = 0.42044050f;
    data->d[9] = -0.40385917f;
    data->d[10] = -3.75830793f;
    data->d[11] = -0.79479694f;
    data->d[12] = -1.26334500f;
    data->d[13] = -1.52365506f;
    data->d[14] = -0.09561710f;
    data->d[15] = -4.22975779f;
    data->d[16] = 1.71430218f;
    data->d[17] = -1.94343209f;
    data->d[18] = 0.81406784f;
    data->d[19] = -0.35610107f;
    data->d[20] = -4.79577351f;
    data->d[21] = -0.00000250f;
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
    *(result->MaxResult()) = 0.00002217f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -3.32487893f;
    data->d[1] = 0.23410580f;
    data->d[2] = 0.05975088f;
    data->d[3] = 6.76325893f;
    data->d[4] = -0.14989263f;
    data->d[5] = -0.00002243f;
    data->d[6] = -0.00206183f;
    data->d[7] = -1.59680319f;
    data->d[8] = 7.75958729f;
    data->d[9] = -0.32326904f;
    data->d[10] = 3.02926350f;
    data->d[11] = 5.31117344f;
    data->d[12] = -0.32172024f;
    data->d[13] = 1.23298442f;
    data->d[14] = -0.16347000f;
    data->d[15] = -1.16796517f;
    data->d[16] = 0.21583046f;
    data->d[17] = 0.94945765f;
    data->d[18] = -2.70128274f;
    data->d[19] = -1.05805790f;
    data->d[20] = -7.74995279f;
    data->d[21] = -0.11825915f;
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
    *(result->MaxResult()) = 0.00002277f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -3.23070240f;
    data->d[1] = 0.61276251f;
    data->d[2] = 7.35466528f;
    data->d[3] = -2.08520246f;
    data->d[4] = 0.02448660f;
    data->d[5] = 0.00006981f;
    data->d[6] = -0.01816615f;
    data->d[7] = 1.63652039f;
    data->d[8] = -1.09493327f;
    data->d[9] = -0.38600489f;
    data->d[10] = -0.60503268f;
    data->d[11] = -1.36161005f;
    data->d[12] = -2.19615173f;
    data->d[13] = -1.64339483f;
    data->d[14] = -0.08959547f;
    data->d[15] = 0.49258190f;
    data->d[16] = -0.30506057f;
    data->d[17] = 2.33448386f;
    data->d[18] = -0.77517653f;
    data->d[19] = 1.01764095f;
    data->d[20] = 2.21864820f;
    data->d[21] = 0.52365249f;
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
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)1, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 5);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 6);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 1);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)1, 8);
    code->SetOperation(16, (FireStarterOpcode)0, 12);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 1);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)1, 16);
    code->SetOperation(22, (FireStarterOpcode)0, 17);
    code->SetOperation(23, (FireStarterOpcode)0, 8);
    code->SetOperation(24, (FireStarterOpcode)0, 18);
    code->SetOperation(25, (FireStarterOpcode)0, 3);
    code->SetOperation(26, (FireStarterOpcode)0, 14);
    code->SetOperation(27, (FireStarterOpcode)0, 17);
    code->SetOperation(28, (FireStarterOpcode)0, 19);
    code->SetOperation(29, (FireStarterOpcode)0, 20);
    code->SetOperation(30, (FireStarterOpcode)0, 16);
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
    state.m_generation = 1775;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 17896939714062940861;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00002277f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
