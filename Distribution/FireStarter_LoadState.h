#pragma once
#include "FireStarterState.h"

// Run date: 04/23/23 12:27:36 Pacific Daylight Time
// Run duration = 198.935955 seconds
// Run generation = 230
// Run result = 0.00000019
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

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
    settings.m_registers = 29;
    settings.m_opcodes = 2;

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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -2.473177f;
    data->d[2] = -0.315649f;
    data->d[3] = -0.001318f;
    data->d[4] = -2.641624f;
    data->d[5] = 0.482355f;
    data->d[6] = -2.138460f;
    data->d[7] = -0.848234f;
    data->d[8] = -0.512361f;
    data->d[9] = -0.288230f;
    data->d[10] = 0.302912f;
    data->d[11] = -1.461642f;
    data->d[12] = 1.002314f;
    data->d[13] = 0.332001f;
    data->d[14] = -3.993660f;
    data->d[15] = 0.291194f;
    data->d[16] = 0.051640f;
    data->d[17] = 0.046360f;
    data->d[18] = 0.364541f;
    data->d[19] = 0.413152f;
    data->d[20] = -0.000000f;
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
    data->d[0] = -3.090659f;
    data->d[1] = 0.483951f;
    data->d[2] = -3.127181f;
    data->d[3] = 4.688155f;
    data->d[4] = 0.000123f;
    data->d[5] = 0.380207f;
    data->d[6] = 1.591689f;
    data->d[7] = -0.135177f;
    data->d[8] = -0.208138f;
    data->d[9] = -0.522714f;
    data->d[10] = 0.369215f;
    data->d[11] = 0.621575f;
    data->d[12] = -3.310502f;
    data->d[13] = 0.850073f;
    data->d[14] = 0.244333f;
    data->d[15] = -0.370504f;
    data->d[16] = -0.408058f;
    data->d[17] = 0.964867f;
    data->d[18] = -4.683855f;
    data->d[19] = 1.152583f;
    data->d[20] = -0.118132f;
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

// Variation: 2  result = 0.00000019
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 1.509460f;
    data->d[2] = 1.528064f;
    data->d[3] = -0.636404f;
    data->d[4] = 0.048079f;
    data->d[5] = 0.509635f;
    data->d[6] = 0.233434f;
    data->d[7] = 1.960286f;
    data->d[8] = 0.033825f;
    data->d[9] = 8.970152f;
    data->d[10] = 2.050330f;
    data->d[11] = 0.010562f;
    data->d[12] = -0.768752f;
    data->d[13] = -1.379442f;
    data->d[14] = 0.299125f;
    data->d[15] = -1.013352f;
    data->d[16] = 0.492427f;
    data->d[17] = 9.662909f;
    data->d[18] = 0.004867f;
    data->d[19] = 1.399894f;
    data->d[20] = 0.523599f;
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
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 5);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 0, 16);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 1, 15);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 1, 3);
    instructions->SetOperation(18, 1, 22);
    instructions->SetOperation(19, 0, 5);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 0, 6);
    instructions->SetOperation(24, 0, 14);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 26);
    instructions->SetOperation(31, 1, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 230;
    state.m_index = 3;
    state.m_test = 4;
    state.m_seed = 10847545637941545243;
} // LoadState
