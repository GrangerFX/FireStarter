#pragma once
#include "FireStarterState.h"

// Run date: 03/26/23 19:42:31 Pacific Daylight Time
// Run duration = 2934.126811 seconds
// Run generation = 178
// Run result = 0.00028086
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 32;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00014150
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.454807f;
    data->d[1] = 0.869229f;
    data->d[2] = -1.219589f;
    data->d[3] = -0.318287f;
    data->d[4] = -0.955269f;
    data->d[5] = 0.203391f;
    data->d[6] = -1.336934f;
    data->d[7] = -0.000042f;
    data->d[8] = 0.962186f;
    data->d[9] = 0.167900f;
    data->d[10] = -2.603976f;
    data->d[11] = 1.479069f;
    data->d[12] = -0.551927f;
    data->d[13] = -0.683114f;
    data->d[14] = 1.591784f;
    data->d[15] = 1.666142f;
    data->d[16] = 0.656327f;
    data->d[17] = -1.271046f;
    data->d[18] = -1.498061f;
    data->d[19] = -1.104600f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000142f;
} // LoadVariation0

// Variation: 1  result = 0.00028086
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.230850f;
    data->d[1] = 1.460967f;
    data->d[2] = -0.005776f;
    data->d[3] = -2.007200f;
    data->d[4] = -0.005292f;
    data->d[5] = -3.828601f;
    data->d[6] = -1.363921f;
    data->d[7] = 0.958286f;
    data->d[8] = 2.589494f;
    data->d[9] = -0.147081f;
    data->d[10] = 1.658237f;
    data->d[11] = 1.234035f;
    data->d[12] = -1.545624f;
    data->d[13] = -1.213676f;
    data->d[14] = 0.931841f;
    data->d[15] = -0.070935f;
    data->d[16] = 0.068350f;
    data->d[17] = 0.242417f;
    data->d[18] = 0.727129f;
    data->d[19] = 4.738393f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000281f;
} // LoadVariation1

// Variation: 2  result = 0.00018275
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.631598f;
    data->d[1] = 0.501577f;
    data->d[2] = -1.288508f;
    data->d[3] = 0.468286f;
    data->d[4] = 2.303050f;
    data->d[5] = 0.171868f;
    data->d[6] = 0.283781f;
    data->d[7] = 2.799329f;
    data->d[8] = -0.040739f;
    data->d[9] = 0.755299f;
    data->d[10] = -0.757176f;
    data->d[11] = 0.933553f;
    data->d[12] = -1.515868f;
    data->d[13] = -1.106505f;
    data->d[14] = 1.285500f;
    data->d[15] = -0.150150f;
    data->d[16] = 0.264000f;
    data->d[17] = 0.498402f;
    data->d[18] = 0.730471f;
    data->d[19] = -2.090029f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000183f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000281f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 29);
    instructions->SetOperation(1, 0, 21);
    instructions->SetOperation(2, 0, 18);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 0, 11);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 0, 39);
    instructions->SetOperation(12, 0, 36);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 1, 20);
    instructions->SetOperation(15, 1, 9);
    instructions->SetOperation(16, 0, 28);
    instructions->SetOperation(17, 1, 44);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 0, 41);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 65);
    instructions->SetOperation(31, 1, 3);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 178;
    state.m_index = 0;
    state.m_test = 98;
    state.m_seed = 18111016289710010919;
} // LoadState
