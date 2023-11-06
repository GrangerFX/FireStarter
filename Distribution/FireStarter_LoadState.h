#pragma once
#include "FireStarterState.h"

// Run date: 11/05/23 18:43:50 Pacific Standard Time
// Run duration = 1787.477923 seconds
// Run generation = 58
// Run evolution = 12
// Run result = 0.00000042
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
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
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
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000030
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.149181f;
    data->d[1] = 0.468667f;
    data->d[2] = -0.000016f;
    data->d[3] = 0.232694f;
    data->d[4] = -1.236822f;
    data->d[5] = -2.102757f;
    data->d[6] = -0.624525f;
    data->d[7] = 0.256750f;
    data->d[8] = 0.007485f;
    data->d[9] = 1.410844f;
    data->d[10] = 0.068694f;
    data->d[11] = -0.005042f;
    data->d[12] = 5.162162f;
    data->d[13] = 1.263310f;
    data->d[14] = 1.858980f;
    data->d[15] = 3.155967f;
    data->d[16] = 2.207238f;
    data->d[17] = -0.000000f;
    data->d[18] = 1.940824f;
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

// Variation: 1  result = 0.00000042
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.269368f;
    data->d[1] = -0.832525f;
    data->d[2] = -0.002082f;
    data->d[3] = -1.422444f;
    data->d[4] = 1.799013f;
    data->d[5] = -1.595833f;
    data->d[6] = 0.597228f;
    data->d[7] = -0.813852f;
    data->d[8] = -4.235313f;
    data->d[9] = 0.002763f;
    data->d[10] = -0.062810f;
    data->d[11] = 0.915605f;
    data->d[12] = -0.602781f;
    data->d[13] = 0.470976f;
    data->d[14] = 1.074224f;
    data->d[15] = 7.525149f;
    data->d[16] = -11.237259f;
    data->d[17] = -0.033030f;
    data->d[18] = -2.514322f;
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

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.619146f;
    data->d[1] = -1.620920f;
    data->d[2] = 0.000241f;
    data->d[3] = -0.699673f;
    data->d[4] = -1.054887f;
    data->d[5] = 0.409590f;
    data->d[6] = 0.825219f;
    data->d[7] = -0.786338f;
    data->d[8] = 1.924993f;
    data->d[9] = -2.488976f;
    data->d[10] = -0.000566f;
    data->d[11] = 0.016653f;
    data->d[12] = -15.128679f;
    data->d[13] = -0.104482f;
    data->d[14] = -1.420724f;
    data->d[15] = 0.549102f;
    data->d[16] = 1.995626f;
    data->d[17] = -0.703562f;
    data->d[18] = 1.063655f;
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
    instructions->SetOperation(0, 0, 4);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 0, 28);
    instructions->SetOperation(4, 1, 2);
    instructions->SetOperation(5, 0, 22);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 0, 27);
    instructions->SetOperation(9, 1, 28);
    instructions->SetOperation(10, 0, 26);
    instructions->SetOperation(11, 0, 28);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 9);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 1, 16);
    instructions->SetOperation(20, 0, 12);
    instructions->SetOperation(21, 1, 23);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 23);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 58;
    state.m_evolution = 12;
    state.m_index = 0;
    state.m_id = 33;
    state.m_copy_id = 37;
    state.m_test = 1;
    state.m_seed = 9837463939647987637;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
