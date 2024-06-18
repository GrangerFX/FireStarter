#pragma once
#include "FireStarterState.h"

// Run date: 06/18/24 16:14:45 Pacific Daylight Time
// Run duration = 630.008565 seconds
// Run generation = 44
// Run evolution = 2
// Run max result = 0.00002637
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
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
    settings.m_registers = 30;
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00002637
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.486367f;
    data->d[1] = 0.585312f;
    data->d[2] = -0.687906f;
    data->d[3] = 1.294331f;
    data->d[4] = -1.485232f;
    data->d[5] = -4.520984f;
    data->d[6] = 2.909738f;
    data->d[7] = -0.031480f;
    data->d[8] = -0.327161f;
    data->d[9] = 2.688444f;
    data->d[10] = 1.608256f;
    data->d[11] = -0.088764f;
    data->d[12] = 0.202558f;
    data->d[13] = -1.752562f;
    data->d[14] = -2.199332f;
    data->d[15] = 3.313914f;
    data->d[16] = -2.736002f;
    data->d[17] = -4.901614f;
    data->d[18] = -2.329348f;
    data->d[19] = -3.842938f;
    data->d[20] = -4.646885f;
    data->d[21] = 0.062044f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000026f;
} // LoadVariation0

// Variation: 1  result = 0.00001931
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.599950f;
    data->d[1] = -0.130095f;
    data->d[2] = -1.936643f;
    data->d[3] = 0.981272f;
    data->d[4] = 0.683290f;
    data->d[5] = -1.531337f;
    data->d[6] = -0.503800f;
    data->d[7] = -1.093222f;
    data->d[8] = -1.242435f;
    data->d[9] = 0.299871f;
    data->d[10] = -0.886292f;
    data->d[11] = 1.661844f;
    data->d[12] = 0.186374f;
    data->d[13] = -1.924004f;
    data->d[14] = 1.422890f;
    data->d[15] = -3.065852f;
    data->d[16] = 3.352398f;
    data->d[17] = 4.301554f;
    data->d[18] = 3.691289f;
    data->d[19] = -2.240836f;
    data->d[20] = -1.103390f;
    data->d[21] = 0.063780f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000019f;
} // LoadVariation1

// Variation: 2  result = 0.00002626
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.101084f;
    data->d[1] = -0.635928f;
    data->d[2] = 1.477172f;
    data->d[3] = -1.142366f;
    data->d[4] = 0.277876f;
    data->d[5] = 0.105367f;
    data->d[6] = 1.364837f;
    data->d[7] = 0.781990f;
    data->d[8] = 1.356187f;
    data->d[9] = -0.681853f;
    data->d[10] = -1.271364f;
    data->d[11] = 0.102356f;
    data->d[12] = 0.126493f;
    data->d[13] = -2.136758f;
    data->d[14] = 12.125889f;
    data->d[15] = 1.531921f;
    data->d[16] = -7.327998f;
    data->d[17] = -8.971759f;
    data->d[18] = 0.906508f;
    data->d[19] = -0.084097f;
    data->d[20] = -0.971617f;
    data->d[21] = -4.331440f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000026f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000026f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 1, 20);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 1, 27);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 44;
    state.m_evolution = 2;
    state.m_index = 6;
    state.m_copy_index = 20;
    state.m_id = 20;
    state.m_test = 0;
    state.m_seed = 2214085456003313953;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000028f;
    state.m_maxResult = 0.000026f;
    state.m_evolveWeight = 0.000944f;
    state.m_optimizeValid = true;
} // LoadState
