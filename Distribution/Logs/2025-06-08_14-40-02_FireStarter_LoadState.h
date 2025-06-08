#pragma once
#include "FireStarterState.h"

// Run date: 06/08/25 14:40:02 Pacific Daylight Time
// Run duration = 832.598552 seconds
// Run test = 2
// Run generation = 40
// Run evolution = 3
// Run precision  = 0.00004357
// Run max result = 0.00004321
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
    *(result->MaxResult()) = 0.00002748f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = 0.34373692f;
    data->d[1] = 0.85984677f;
    data->d[2] = 0.31896672f;
    data->d[3] = -0.94915825f;
    data->d[4] = 0.28217912f;
    data->d[5] = -1.53341651f;
    data->d[6] = -0.46780521f;
    data->d[7] = 0.77580410f;
    data->d[8] = 0.89456058f;
    data->d[9] = 1.28501809f;
    data->d[10] = -0.73262995f;
    data->d[11] = 0.84158701f;
    data->d[12] = -0.01896039f;
    data->d[13] = 8.64504337f;
    data->d[14] = -2.47849345f;
    data->d[15] = -2.33354855f;
    data->d[16] = 0.06870677f;
    data->d[17] = 11.30584908f;
    data->d[18] = -3.84584761f;
    data->d[19] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00004321f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = 1.10758674f;
    data->d[1] = -3.10280275f;
    data->d[2] = 0.64822179f;
    data->d[3] = -1.04743493f;
    data->d[4] = 0.38332200f;
    data->d[5] = 0.02914237f;
    data->d[6] = 0.17264256f;
    data->d[7] = -2.12746334f;
    data->d[8] = 4.08405304f;
    data->d[9] = 2.84889793f;
    data->d[10] = -0.90902370f;
    data->d[11] = 1.41804516f;
    data->d[12] = -3.54506779f;
    data->d[13] = -0.01953879f;
    data->d[14] = 0.36326778f;
    data->d[15] = -0.44188708f;
    data->d[16] = -0.67963207f;
    data->d[17] = 3.17680812f;
    data->d[18] = 4.12239408f;
    data->d[19] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00001658f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -0.37877053f;
    data->d[1] = 1.60824418f;
    data->d[2] = 1.51141906f;
    data->d[3] = -1.30829382f;
    data->d[4] = -0.35741961f;
    data->d[5] = 0.48080140f;
    data->d[6] = 0.54999608f;
    data->d[7] = -0.91597366f;
    data->d[8] = -0.97267604f;
    data->d[9] = 0.41433957f;
    data->d[10] = -0.22680336f;
    data->d[11] = -0.47744516f;
    data->d[12] = -0.47543901f;
    data->d[13] = -0.00829753f;
    data->d[14] = 0.48607391f;
    data->d[15] = 1.52667785f;
    data->d[16] = -0.01071300f;
    data->d[17] = 19.02625275f;
    data->d[18] = 1.64390445f;
    data->d[19] = 0.00000000f;
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
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)1, 9);
    code->SetOperation(10, (FireStarterOpcode)0, 10);
    code->SetOperation(11, (FireStarterOpcode)0, 1);
    code->SetOperation(12, (FireStarterOpcode)1, 11);
    code->SetOperation(13, (FireStarterOpcode)0, 8);
    code->SetOperation(14, (FireStarterOpcode)0, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 13);
    code->SetOperation(16, (FireStarterOpcode)1, 11);
    code->SetOperation(17, (FireStarterOpcode)1, 0);
    code->SetOperation(18, (FireStarterOpcode)1, 9);
    code->SetOperation(19, (FireStarterOpcode)0, 6);
    code->SetOperation(20, (FireStarterOpcode)0, 2);
    code->SetOperation(21, (FireStarterOpcode)0, 14);
    code->SetOperation(22, (FireStarterOpcode)1, 9);
    code->SetOperation(23, (FireStarterOpcode)0, 15);
    code->SetOperation(24, (FireStarterOpcode)0, 16);
    code->SetOperation(25, (FireStarterOpcode)0, 17);
    code->SetOperation(26, (FireStarterOpcode)1, 18);
    code->SetOperation(27, (FireStarterOpcode)0, 9);
    code->SetOperation(28, (FireStarterOpcode)1, 10);
    code->SetOperation(29, (FireStarterOpcode)0, 5);
    code->SetOperation(30, (FireStarterOpcode)1, 7);
    code->SetOperation(31, (FireStarterOpcode)0, 6);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 40;
    state.m_evolution = 3;
    state.m_index = 11;
    state.m_evolveIndex = 66;
    state.m_id = 66;
    state.m_test = 2;
    state.m_seed = 16738068074006787273;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00004321f;
    state.m_oldResult = 0.00013007f;
    state.m_evolveWeight = 0.005073f;
    state.m_optimizeValid = true;
} // LoadState
