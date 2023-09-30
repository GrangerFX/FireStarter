#pragma once
#include "FireStarterState.h"

// Run date: 09/30/23 12:44:10 Pacific Daylight Time
// Run duration = 1256.964755 seconds
// Run generation = 72
// Run evolution = 23
// Run result = 0.00001824
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
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
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.102814f;
    data->d[1] = -3.464576f;
    data->d[2] = 2.640875f;
    data->d[3] = 0.086829f;
    data->d[4] = 0.759451f;
    data->d[5] = -0.033552f;
    data->d[6] = 2.448548f;
    data->d[7] = -0.143022f;
    data->d[8] = 0.277338f;
    data->d[9] = -2.106678f;
    data->d[10] = -0.444605f;
    data->d[11] = 0.035788f;
    data->d[12] = -2.285735f;
    data->d[13] = -1.084172f;
    data->d[14] = 1.287240f;
    data->d[15] = -0.036133f;
    data->d[16] = 5.302424f;
    data->d[17] = -3.716150f;
    data->d[18] = -0.000033f;
    data->d[19] = 0.838042f;
    data->d[20] = 0.000000f;
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

// Variation: 1  result = 0.00000244
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.417368f;
    data->d[1] = -1.225906f;
    data->d[2] = -0.799875f;
    data->d[3] = -1.591541f;
    data->d[4] = -0.876671f;
    data->d[5] = -0.703033f;
    data->d[6] = -1.770169f;
    data->d[7] = 1.048524f;
    data->d[8] = 0.136482f;
    data->d[9] = 0.217338f;
    data->d[10] = -0.139302f;
    data->d[11] = -2.788807f;
    data->d[12] = 0.767569f;
    data->d[13] = -0.021323f;
    data->d[14] = -0.115095f;
    data->d[15] = -0.005375f;
    data->d[16] = -11.180064f;
    data->d[17] = 1.146252f;
    data->d[18] = -0.021561f;
    data->d[19] = 1.328902f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00001824
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.622056f;
    data->d[1] = -1.403602f;
    data->d[2] = -0.441252f;
    data->d[3] = 1.018270f;
    data->d[4] = 2.335605f;
    data->d[5] = -0.640757f;
    data->d[6] = -0.479438f;
    data->d[7] = -0.588653f;
    data->d[8] = -1.100876f;
    data->d[9] = -0.725877f;
    data->d[10] = -0.090951f;
    data->d[11] = 1.351730f;
    data->d[12] = -0.925518f;
    data->d[13] = -0.726714f;
    data->d[14] = 0.795636f;
    data->d[15] = -0.042354f;
    data->d[16] = 8.547065f;
    data->d[17] = -1.710234f;
    data->d[18] = 1.989240f;
    data->d[19] = -0.194988f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000018f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000018f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 1, 22);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 1, 25);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 10);
    instructions->SetOperation(31, 0, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 72;
    state.m_evolution = 23;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 12;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 17336211559614820553;
    state.m_maxResult = 0.000018f;
    state.m_optimizePass = true;
} // LoadState
