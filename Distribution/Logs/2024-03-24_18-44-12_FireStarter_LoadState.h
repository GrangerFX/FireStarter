#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 18:44:12 Pacific Daylight Time
// Run duration = 1760.915822 seconds
// Run generation = 1880
// Run evolution = 12
// Run max result = 0.00000019
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000008
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.109011f;
    data->d[1] = -2.158810f;
    data->d[2] = 0.739322f;
    data->d[3] = 0.373387f;
    data->d[4] = -0.938574f;
    data->d[5] = 1.238356f;
    data->d[6] = 0.801371f;
    data->d[7] = 2.411188f;
    data->d[8] = -1.665802f;
    data->d[9] = 0.681673f;
    data->d[10] = 0.654901f;
    data->d[11] = -0.666157f;
    data->d[12] = -0.925862f;
    data->d[13] = -0.443821f;
    data->d[14] = -2.802059f;
    data->d[15] = -1.581131f;
    data->d[16] = -0.000038f;
    data->d[17] = 262.134399f;
    data->d[18] = 0.101286f;
    data->d[19] = -0.000000f;
    data->d[20] = -1.297067f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.924455f;
    data->d[1] = -0.288575f;
    data->d[2] = -1.716395f;
    data->d[3] = 0.109300f;
    data->d[4] = -0.872565f;
    data->d[5] = 0.528499f;
    data->d[6] = 1.419763f;
    data->d[7] = 0.638520f;
    data->d[8] = -1.346741f;
    data->d[9] = 0.994581f;
    data->d[10] = -2.444480f;
    data->d[11] = -3.657873f;
    data->d[12] = -5.908521f;
    data->d[13] = 0.020368f;
    data->d[14] = 1.559752f;
    data->d[15] = 2.075475f;
    data->d[16] = -0.000000f;
    data->d[17] = 9.288502f;
    data->d[18] = -19.081379f;
    data->d[19] = 0.059400f;
    data->d[20] = -1.988751f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000019
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.241869f;
    data->d[1] = 0.169896f;
    data->d[2] = -0.552365f;
    data->d[3] = 0.892099f;
    data->d[4] = -1.784288f;
    data->d[5] = 2.071599f;
    data->d[6] = 0.362899f;
    data->d[7] = 0.413032f;
    data->d[8] = -0.947489f;
    data->d[9] = 0.182235f;
    data->d[10] = -1.025025f;
    data->d[11] = -1.472968f;
    data->d[12] = 0.155246f;
    data->d[13] = 2.577037f;
    data->d[14] = 1.506093f;
    data->d[15] = -0.824907f;
    data->d[16] = -0.000408f;
    data->d[17] = 0.077634f;
    data->d[18] = 60.056225f;
    data->d[19] = -0.716696f;
    data->d[20] = -0.730574f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 3);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 12);
    instructions->SetOperation(5, 1, 2);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 1, 21);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 1, 26);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 0, 7);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1880;
    state.m_evolution = 12;
    state.m_index = 1;
    state.m_copy_index = 12;
    state.m_id = 12;
    state.m_test = 10;
    state.m_seed = 11702589371718325494;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000100f;
    state.m_optimizeValid = true;
} // LoadState
