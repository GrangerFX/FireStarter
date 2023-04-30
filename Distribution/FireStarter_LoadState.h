#pragma once
#include "FireStarterState.h"

// Run date: 04/30/23 09:59:06 Pacific Daylight Time
// Run duration = 12.990225 seconds
// Run generation = 5
// Run result = 0.00083351
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

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
    settings.m_registers = 29;
    settings.m_opcodes = 2;

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

// Variation: 0  result = 0.00082423
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.438782f;
    data->d[1] = 3.266243f;
    data->d[2] = 0.036924f;
    data->d[3] = -1.332692f;
    data->d[4] = 0.643850f;
    data->d[5] = -1.814551f;
    data->d[6] = 0.660515f;
    data->d[7] = -2.570888f;
    data->d[8] = 2.258356f;
    data->d[9] = 0.766812f;
    data->d[10] = -0.112881f;
    data->d[11] = -1.261017f;
    data->d[12] = -0.617344f;
    data->d[13] = -0.505418f;
    data->d[14] = 5.402365f;
    data->d[15] = 0.645128f;
    data->d[16] = 0.591126f;
    data->d[17] = -1.146300f;
    data->d[18] = 6.067133f;
    data->d[19] = -0.255630f;
    data->d[20] = 0.479005f;
    data->d[21] = 0.451036f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000834f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000824f;
} // LoadVariation0

// Variation: 1  result = 0.00083351
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.556026f;
    data->d[1] = -0.338339f;
    data->d[2] = -0.184841f;
    data->d[3] = -1.177539f;
    data->d[4] = 0.559596f;
    data->d[5] = -1.085010f;
    data->d[6] = -0.956677f;
    data->d[7] = 4.376534f;
    data->d[8] = -1.844842f;
    data->d[9] = 1.169906f;
    data->d[10] = 0.496422f;
    data->d[11] = -1.249985f;
    data->d[12] = -0.058095f;
    data->d[13] = -1.350587f;
    data->d[14] = 1.727751f;
    data->d[15] = -0.603601f;
    data->d[16] = 0.185269f;
    data->d[17] = -3.731347f;
    data->d[18] = -1.097385f;
    data->d[19] = 1.886681f;
    data->d[20] = -1.780103f;
    data->d[21] = -0.584663f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000815f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000834f;
} // LoadVariation1

// Variation: 2  result = 0.00081539
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.715196f;
    data->d[1] = 2.497126f;
    data->d[2] = 0.001265f;
    data->d[3] = -1.528393f;
    data->d[4] = -0.569446f;
    data->d[5] = 1.844732f;
    data->d[6] = 0.187670f;
    data->d[7] = -4.077004f;
    data->d[8] = -0.326340f;
    data->d[9] = -0.543742f;
    data->d[10] = -1.827774f;
    data->d[11] = 0.866482f;
    data->d[12] = 1.386899f;
    data->d[13] = 1.587630f;
    data->d[14] = 0.909300f;
    data->d[15] = -0.745390f;
    data->d[16] = 1.779700f;
    data->d[17] = 0.826495f;
    data->d[18] = 1.699325f;
    data->d[19] = 0.228485f;
    data->d[20] = -0.110276f;
    data->d[21] = -1.475918f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = -42201683186052843888412332559599403008.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000815f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000834f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 0, 11);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 1, 25);
    instructions->SetOperation(31, 0, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 5;
    state.m_index = 2;
    state.m_test = 2;
    state.m_seed = 2900293747741634421;
} // LoadState
