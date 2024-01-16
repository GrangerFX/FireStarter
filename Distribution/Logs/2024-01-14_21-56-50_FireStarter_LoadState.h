#pragma once
#include "FireStarterState.h"

// Run date: 01/14/24 21:56:50 Pacific Standard Time
// Run duration = 7464.533429 seconds
// Run generation = 61
// Run evolution = 18
// Run max result = 0.00000012
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
// Run tests = 4
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    settings.m_tests = 4;
    settings.m_states = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000010
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.808769f;
    data->d[1] = -0.332823f;
    data->d[2] = -0.910597f;
    data->d[3] = -0.092043f;
    data->d[4] = -3.084736f;
    data->d[5] = -0.625465f;
    data->d[6] = 6.319759f;
    data->d[7] = -0.795779f;
    data->d[8] = 0.705402f;
    data->d[9] = -1.448748f;
    data->d[10] = -0.952639f;
    data->d[11] = 1.543699f;
    data->d[12] = -0.016119f;
    data->d[13] = 1.313612f;
    data->d[14] = 27.072332f;
    data->d[15] = 0.361786f;
    data->d[16] = 0.000000f;
    data->d[17] = -0.676239f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.098317f;
    data->d[1] = -0.992342f;
    data->d[2] = 0.312398f;
    data->d[3] = 0.771386f;
    data->d[4] = -1.114197f;
    data->d[5] = -1.413789f;
    data->d[6] = -0.323894f;
    data->d[7] = 0.191718f;
    data->d[8] = 3.565545f;
    data->d[9] = -149.683411f;
    data->d[10] = 0.000138f;
    data->d[11] = 0.844592f;
    data->d[12] = -0.608847f;
    data->d[13] = -0.141191f;
    data->d[14] = -0.565334f;
    data->d[15] = 1.827174f;
    data->d[16] = -0.107613f;
    data->d[17] = 1.097749f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.266337f;
    data->d[1] = 0.648344f;
    data->d[2] = 0.599305f;
    data->d[3] = 1.130516f;
    data->d[4] = 0.277349f;
    data->d[5] = -0.255323f;
    data->d[6] = -0.271086f;
    data->d[7] = -0.377076f;
    data->d[8] = -1.728595f;
    data->d[9] = -0.188416f;
    data->d[10] = 1.512924f;
    data->d[11] = 0.374522f;
    data->d[12] = -3.046936f;
    data->d[13] = -6.513819f;
    data->d[14] = 0.680009f;
    data->d[15] = -1.588994f;
    data->d[16] = 0.323680f;
    data->d[17] = 1.617645f;
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
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 1, 26);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 0, 11);
    instructions->SetOperation(7, 0, 26);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 1, 20);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 1, 20);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 1, 1);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 1, 11);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 1, 14);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 23);
    instructions->SetOperation(31, 0, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 61;
    state.m_evolution = 18;
    state.m_children0 = 3675;
    state.m_children1 = 54;
    state.m_index = 53;
    state.m_copy_index = 353;
    state.m_id = 5;
    state.m_test = 2;
    state.m_seed = 3518736740613299171;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000004f;
    state.m_optimizeValid = true;
} // LoadState
