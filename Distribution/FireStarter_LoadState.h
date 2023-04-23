#pragma once
#include "FireStarterState.h"

// Run date: 04/23/23 10:49:30 Pacific Daylight Time
// Run duration = 949.189269 seconds
// Run generation = 371
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 123
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
    settings.m_registers = 29;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 123;
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

// Variation: 0  result = 0.00000011
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.119778f;
    data->d[1] = -0.376294f;
    data->d[2] = 1.486887f;
    data->d[3] = -1.204811f;
    data->d[4] = -0.000000f;
    data->d[5] = 4.988185f;
    data->d[6] = 0.373491f;
    data->d[7] = 0.000117f;
    data->d[8] = -6.677413f;
    data->d[9] = 0.900789f;
    data->d[10] = 1.689180f;
    data->d[11] = 0.333830f;
    data->d[12] = -1.868783f;
    data->d[13] = 0.671252f;
    data->d[14] = 0.179874f;
    data->d[15] = 1.138590f;
    data->d[16] = 4.383230f;
    data->d[17] = -1.138499f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.182921f;
    data->d[1] = -0.565347f;
    data->d[2] = -0.038642f;
    data->d[3] = -5.487338f;
    data->d[4] = -0.000000f;
    data->d[5] = -9.510727f;
    data->d[6] = 0.248656f;
    data->d[7] = -5.477499f;
    data->d[8] = -0.013808f;
    data->d[9] = 2.492271f;
    data->d[10] = -1.840778f;
    data->d[11] = -0.121997f;
    data->d[12] = -0.053380f;
    data->d[13] = -2.719033f;
    data->d[14] = 0.125450f;
    data->d[15] = 0.072965f;
    data->d[16] = 13.553096f;
    data->d[17] = -71.081200f;
    data->d[18] = -0.118133f;
    data->d[19] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.772826f;
    data->d[1] = 2.023250f;
    data->d[2] = -1.438665f;
    data->d[3] = -0.393377f;
    data->d[4] = 0.000002f;
    data->d[5] = -5.413666f;
    data->d[6] = 5.478046f;
    data->d[7] = -0.025759f;
    data->d[8] = -0.335235f;
    data->d[9] = 1.526724f;
    data->d[10] = 2.083399f;
    data->d[11] = -2.077839f;
    data->d[12] = 4.363250f;
    data->d[13] = -0.000429f;
    data->d[14] = 0.040987f;
    data->d[15] = -1.076912f;
    data->d[16] = 1.921698f;
    data->d[17] = -2.168200f;
    data->d[18] = 0.523598f;
    data->d[19] = 0.000000f;
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
    data->d[30] = -0.000000f;
    data->d[31] = 0.000000f;
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
    instructions->SetOperation(1, 1, 10);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 1, 1);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 7);
    instructions->SetOperation(7, 1, 15);
    instructions->SetOperation(8, 0, 13);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 1, 11);
    instructions->SetOperation(11, 1, 5);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 1, 21);
    instructions->SetOperation(14, 1, 16);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 1, 27);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 5);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 1, 7);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 21);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 371;
    state.m_index = 2;
    state.m_test = 33;
    state.m_seed = 5497184981094800014;
} // LoadState
