#pragma once
#include "FireStarterState.h"

// Run date: 05/10/25 16:13:53 Pacific Daylight Time
// Run duration = 83.744152 seconds
// Run test = 0
// Run generation = 101
// Run evolution = 0
// Run precision  = 0.00007439
// Run max result = 0.00012863
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
    *(result->MaxResult()) = 0.00003302f;
    *(result->EvolveAge1()) = 0;
    *(result->EvolveAge2()) = 1;
    FireStarterData *data = result->Data();
    data->d[0] = -3.02340770f;
    data->d[1] = -4.91486073f;
    data->d[2] = -0.22385047f;
    data->d[3] = 0.13549918f;
    data->d[4] = -0.41107139f;
    data->d[5] = 0.02803819f;
    data->d[6] = -3.82474709f;
    data->d[7] = -0.93661809f;
    data->d[8] = -1.42570639f;
    data->d[9] = 0.58723807f;
    data->d[10] = -0.83750832f;
    data->d[11] = 0.37043262f;
    data->d[12] = 3.33654785f;
    data->d[13] = -0.72076702f;
    data->d[14] = 0.42643082f;
    data->d[15] = 1.03783417f;
    data->d[16] = -2.22848320f;
    data->d[17] = -0.45209175f;
    data->d[18] = 0.92374575f;
    data->d[19] = 0.94752014f;
    data->d[20] = 0.55082327f;
    data->d[21] = -0.33285314f;
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
    *(result->MaxResult()) = 0.00002474f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = -2.53522491f;
    data->d[1] = 0.09604967f;
    data->d[2] = 0.36901587f;
    data->d[3] = 1.07634902f;
    data->d[4] = -2.58818984f;
    data->d[5] = 0.50465894f;
    data->d[6] = 0.78245890f;
    data->d[7] = -1.02182877f;
    data->d[8] = 1.31450009f;
    data->d[9] = -0.95937592f;
    data->d[10] = -0.64346021f;
    data->d[11] = 5.23765135f;
    data->d[12] = -1.75570226f;
    data->d[13] = 2.56375766f;
    data->d[14] = 0.42685774f;
    data->d[15] = -0.30434600f;
    data->d[16] = 0.13850658f;
    data->d[17] = -21.86305428f;
    data->d[18] = 7.46357012f;
    data->d[19] = 0.69467711f;
    data->d[20] = 2.68917990f;
    data->d[21] = -0.18109205f;
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
    *(result->MaxResult()) = 0.00012863f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 6;
    FireStarterData *data = result->Data();
    data->d[0] = -0.49127394f;
    data->d[1] = -0.31167966f;
    data->d[2] = -0.40099370f;
    data->d[3] = 2.63191175f;
    data->d[4] = 0.24184427f;
    data->d[5] = -0.35507926f;
    data->d[6] = 1.68089557f;
    data->d[7] = -0.95046830f;
    data->d[8] = 0.08562772f;
    data->d[9] = -2.70945621f;
    data->d[10] = 2.57303381f;
    data->d[11] = 2.26076341f;
    data->d[12] = 0.00935967f;
    data->d[13] = -1.41839719f;
    data->d[14] = -0.35585213f;
    data->d[15] = 0.74623072f;
    data->d[16] = 0.95900118f;
    data->d[17] = -0.11678270f;
    data->d[18] = -0.76379269f;
    data->d[19] = 1.09680295f;
    data->d[20] = 1.07062078f;
    data->d[21] = 0.65994418f;
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
    code->SetOperation(5, (FireStarterOpcode)1, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)1, 8);
    code->SetOperation(9, (FireStarterOpcode)1, 9);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 3);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)1, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 8);
    code->SetOperation(16, (FireStarterOpcode)1, 3);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)0, 14);
    code->SetOperation(19, (FireStarterOpcode)0, 15);
    code->SetOperation(20, (FireStarterOpcode)1, 16);
    code->SetOperation(21, (FireStarterOpcode)0, 9);
    code->SetOperation(22, (FireStarterOpcode)1, 13);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)0, 6);
    code->SetOperation(25, (FireStarterOpcode)1, 18);
    code->SetOperation(26, (FireStarterOpcode)1, 19);
    code->SetOperation(27, (FireStarterOpcode)1, 20);
    code->SetOperation(28, (FireStarterOpcode)0, 15);
    code->SetOperation(29, (FireStarterOpcode)0, 9);
    code->SetOperation(30, (FireStarterOpcode)0, 7);
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
    state.m_generation = 101;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 15089849232069346431;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00012863f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
