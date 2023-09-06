#pragma once
#include "FireStarterState.h"

// Run date: 09/05/23 17:11:19 Pacific Daylight Time
// Run duration = 37754.780318 seconds
// Run generation = 112
// Run evolution = 20
// Run result = 0.00000095
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000042
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.794576f;
    data->d[1] = -0.182891f;
    data->d[2] = 2.084921f;
    data->d[3] = -0.951849f;
    data->d[4] = 3.109622f;
    data->d[5] = -2.959904f;
    data->d[6] = -0.920613f;
    data->d[7] = 0.017917f;
    data->d[8] = 0.045595f;
    data->d[9] = 0.688956f;
    data->d[10] = -0.000304f;
    data->d[11] = -0.962212f;
    data->d[12] = 1.451522f;
    data->d[13] = -0.761871f;
    data->d[14] = -0.432968f;
    data->d[15] = -1.994422f;
    data->d[16] = 0.510713f;
    data->d[17] = -0.857641f;
    data->d[18] = -0.439147f;
    data->d[19] = 0.000000f;
    data->d[20] = -1.313793f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.487421f;
    data->d[1] = -0.564529f;
    data->d[2] = 0.558446f;
    data->d[3] = -1.449280f;
    data->d[4] = -2.032094f;
    data->d[5] = 2.945050f;
    data->d[6] = -0.593572f;
    data->d[7] = 0.002359f;
    data->d[8] = -1.045159f;
    data->d[9] = 0.629298f;
    data->d[10] = -0.779962f;
    data->d[11] = 0.872648f;
    data->d[12] = 1.296695f;
    data->d[13] = -0.441915f;
    data->d[14] = -0.230661f;
    data->d[15] = 1.602452f;
    data->d[16] = 0.954478f;
    data->d[17] = -0.927872f;
    data->d[18] = -0.016056f;
    data->d[19] = -0.039499f;
    data->d[20] = 2.990768f;
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

// Variation: 2  result = 0.00000095
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.847138f;
    data->d[1] = 0.262382f;
    data->d[2] = 1.900235f;
    data->d[3] = -1.105767f;
    data->d[4] = -1.578738f;
    data->d[5] = 1.745706f;
    data->d[6] = -1.687863f;
    data->d[7] = 0.008920f;
    data->d[8] = -0.549374f;
    data->d[9] = 0.101469f;
    data->d[10] = 0.001145f;
    data->d[11] = -6.429871f;
    data->d[12] = -1.235643f;
    data->d[13] = -1.669060f;
    data->d[14] = 1.139477f;
    data->d[15] = -1.335899f;
    data->d[16] = 0.599453f;
    data->d[17] = -0.873403f;
    data->d[18] = -0.337335f;
    data->d[19] = 0.438947f;
    data->d[20] = 1.192851f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 0, 21);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 1, 23);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 13);
    instructions->SetOperation(6, 0, 9);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 16);
    instructions->SetOperation(15, 1, 18);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 1, 6);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 1, 2);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 0, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 112;
    state.m_evolution = 20;
    state.m_age = 0;
    state.m_index = 59;
    state.m_id = 7;
    state.m_copy_id = 45;
    state.m_test = 15;
    state.m_seed = 13628501557991472680;
    state.m_maxResult = 0.000001f;
    state.m_lastResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_lastEvolved = true;
} // LoadState
