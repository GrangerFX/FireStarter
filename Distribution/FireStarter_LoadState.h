#pragma once
#include "FireStarterState.h"

// Run date: 04/01/23 15:41:42 Pacific Daylight Time
// Run duration = 2488.992522 seconds
// Run generation = 144
// Run result = 0.00021517
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
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
    settings.m_opcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 1;
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

// Variation: 0  result = 0.00019258
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.565974f;
    data->d[1] = 0.472996f;
    data->d[2] = 0.440769f;
    data->d[3] = 0.943739f;
    data->d[4] = -0.410533f;
    data->d[5] = -0.406515f;
    data->d[6] = -1.742647f;
    data->d[7] = -0.380192f;
    data->d[8] = 1.566710f;
    data->d[9] = -1.916497f;
    data->d[10] = 2.018642f;
    data->d[11] = -1.133282f;
    data->d[12] = -1.116226f;
    data->d[13] = 0.358196f;
    data->d[14] = -0.743994f;
    data->d[15] = 1.779783f;
    data->d[16] = 0.443888f;
    data->d[17] = -1.550766f;
    data->d[18] = 0.281353f;
    data->d[19] = 1.004685f;
    data->d[20] = 0.288359f;
    data->d[21] = 0.771627f;
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
    *(result->MinResult()) = 0.000193f;
} // LoadVariation0

// Variation: 1  result = 0.00021517
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.256624f;
    data->d[1] = -0.242020f;
    data->d[2] = -3.844505f;
    data->d[3] = -4.332836f;
    data->d[4] = 0.668182f;
    data->d[5] = 1.383002f;
    data->d[6] = 0.121450f;
    data->d[7] = -1.983326f;
    data->d[8] = -0.965123f;
    data->d[9] = -1.194610f;
    data->d[10] = 3.512051f;
    data->d[11] = -1.347014f;
    data->d[12] = -1.004344f;
    data->d[13] = -0.373008f;
    data->d[14] = 1.254765f;
    data->d[15] = 2.239537f;
    data->d[16] = 0.966129f;
    data->d[17] = -0.795870f;
    data->d[18] = -1.546531f;
    data->d[19] = 1.688409f;
    data->d[20] = -2.521686f;
    data->d[21] = -0.098079f;
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
    *(result->MinResult()) = 0.000215f;
} // LoadVariation1

// Variation: 2  result = 0.00017918
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.713893f;
    data->d[1] = 0.552693f;
    data->d[2] = -1.076228f;
    data->d[3] = -2.500173f;
    data->d[4] = 1.456923f;
    data->d[5] = -0.434377f;
    data->d[6] = 0.274069f;
    data->d[7] = -0.912829f;
    data->d[8] = -0.665634f;
    data->d[9] = 0.416250f;
    data->d[10] = -0.657260f;
    data->d[11] = -1.568388f;
    data->d[12] = 0.364153f;
    data->d[13] = 1.442223f;
    data->d[14] = 1.730217f;
    data->d[15] = 0.569903f;
    data->d[16] = -0.135461f;
    data->d[17] = -1.287432f;
    data->d[18] = -2.201245f;
    data->d[19] = 0.074898f;
    data->d[20] = -1.278666f;
    data->d[21] = -0.831823f;
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
    *(result->MinResult()) = 0.000179f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000215f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 2);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 0, 31);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 1, 2);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 0, 24);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 28);
    instructions->SetOperation(26, 1, 21);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 11);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 0, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 144;
    state.m_index = 0;
    state.m_test = 98;
    state.m_seed = 15674213077172421805;
} // LoadState
