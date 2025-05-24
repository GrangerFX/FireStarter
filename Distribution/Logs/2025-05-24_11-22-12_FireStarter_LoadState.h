#pragma once
#include "FireStarterState.h"

// Run date: 05/24/25 11:22:12 Pacific Daylight Time
// Run duration = 10.480239 seconds
// Run test = 0
// Run generation = 7
// Run evolution = 0
// Run precision  = 0.00005270
// Run max result = 0.00004231
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
    *(result->MaxResult()) = 0.00000970f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = -3.65191269f;
    data->d[1] = 0.52526700f;
    data->d[2] = -0.04808178f;
    data->d[3] = -1.97601962f;
    data->d[4] = -0.88666320f;
    data->d[5] = -5.37688828f;
    data->d[6] = 0.35804462f;
    data->d[7] = -0.10421192f;
    data->d[8] = 1.08088827f;
    data->d[9] = 0.77713192f;
    data->d[10] = 0.46311465f;
    data->d[11] = 2.96970868f;
    data->d[12] = 1.77913904f;
    data->d[13] = -2.29921627f;
    data->d[14] = -1.78032100f;
    data->d[15] = -7.79487610f;
    data->d[16] = 2.52984595f;
    data->d[17] = 2.55978394f;
    data->d[18] = 0.01223981f;
    data->d[19] = 1.04705405f;
    data->d[20] = -0.14762691f;
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
    *(result->MaxResult()) = 0.00000979f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -2.75432563f;
    data->d[1] = -0.19943421f;
    data->d[2] = 0.68579233f;
    data->d[3] = -0.84013814f;
    data->d[4] = -2.04030609f;
    data->d[5] = -0.86482614f;
    data->d[6] = -0.20324047f;
    data->d[7] = 0.06356282f;
    data->d[8] = 0.08911194f;
    data->d[9] = 0.39607042f;
    data->d[10] = 2.14351940f;
    data->d[11] = 2.58388734f;
    data->d[12] = 2.03359461f;
    data->d[13] = -1.59474432f;
    data->d[14] = 0.69352990f;
    data->d[15] = 1.61896348f;
    data->d[16] = 9.63462257f;
    data->d[17] = 1.17230403f;
    data->d[18] = -1.27585208f;
    data->d[19] = 0.00263742f;
    data->d[20] = 0.72210664f;
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
    *(result->MaxResult()) = 0.00004231f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 7;
    FireStarterData *data = result->Data();
    data->d[0] = -2.52035117f;
    data->d[1] = -1.75040412f;
    data->d[2] = 0.40911940f;
    data->d[3] = 0.08806325f;
    data->d[4] = -2.07833862f;
    data->d[5] = 1.85911822f;
    data->d[6] = -0.83708841f;
    data->d[7] = 0.16319095f;
    data->d[8] = -0.11195657f;
    data->d[9] = 1.31892121f;
    data->d[10] = 1.08436298f;
    data->d[11] = -1.48735178f;
    data->d[12] = 1.49125338f;
    data->d[13] = -1.48676932f;
    data->d[14] = 0.83063465f;
    data->d[15] = 0.06502162f;
    data->d[16] = -0.31565297f;
    data->d[17] = 2.97495651f;
    data->d[18] = -1.16895390f;
    data->d[19] = -1.97781289f;
    data->d[20] = 1.56035006f;
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
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)1, 6);
    code->SetOperation(7, (FireStarterOpcode)1, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 8);
    code->SetOperation(9, (FireStarterOpcode)0, 4);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 9);
    code->SetOperation(13, (FireStarterOpcode)0, 9);
    code->SetOperation(14, (FireStarterOpcode)1, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 5);
    code->SetOperation(16, (FireStarterOpcode)0, 12);
    code->SetOperation(17, (FireStarterOpcode)0, 6);
    code->SetOperation(18, (FireStarterOpcode)1, 13);
    code->SetOperation(19, (FireStarterOpcode)0, 12);
    code->SetOperation(20, (FireStarterOpcode)1, 14);
    code->SetOperation(21, (FireStarterOpcode)0, 9);
    code->SetOperation(22, (FireStarterOpcode)1, 2);
    code->SetOperation(23, (FireStarterOpcode)0, 11);
    code->SetOperation(24, (FireStarterOpcode)0, 15);
    code->SetOperation(25, (FireStarterOpcode)1, 16);
    code->SetOperation(26, (FireStarterOpcode)0, 17);
    code->SetOperation(27, (FireStarterOpcode)0, 3);
    code->SetOperation(28, (FireStarterOpcode)0, 18);
    code->SetOperation(29, (FireStarterOpcode)0, 19);
    code->SetOperation(30, (FireStarterOpcode)1, 15);
    code->SetOperation(31, (FireStarterOpcode)0, 20);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 7;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 11273728839130894213;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00004231f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
