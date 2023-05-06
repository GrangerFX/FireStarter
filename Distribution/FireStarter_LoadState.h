#pragma once
#include "FireStarterState.h"

// Run date: 05/06/23 11:37:24 Pacific Daylight Time
// Run duration = 1348.228213 seconds
// Run generation = 323
// Run result = 0.00000075
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.282482f;
    data->d[1] = -2.859110f;
    data->d[2] = -1.190617f;
    data->d[3] = 0.809671f;
    data->d[4] = 8.851347f;
    data->d[5] = -0.527680f;
    data->d[6] = -0.005574f;
    data->d[7] = 0.615775f;
    data->d[8] = -0.735321f;
    data->d[9] = -2.156000f;
    data->d[10] = 3.598957f;
    data->d[11] = 1.932494f;
    data->d[12] = -0.292134f;
    data->d[13] = -0.035500f;
    data->d[14] = -5.509282f;
    data->d[15] = 0.785644f;
    data->d[16] = 4.512448f;
    data->d[17] = -0.090271f;
    data->d[18] = 3.113509f;
    data->d[19] = -2.502591f;
    data->d[20] = -0.139315f;
    data->d[21] = 0.139314f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000001f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000075
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.422408f;
    data->d[1] = -1.668250f;
    data->d[2] = -5.748427f;
    data->d[3] = 15.624645f;
    data->d[4] = -2.016914f;
    data->d[5] = 0.056981f;
    data->d[6] = -0.017819f;
    data->d[7] = -0.767672f;
    data->d[8] = 0.247647f;
    data->d[9] = 1.883348f;
    data->d[10] = 1.276875f;
    data->d[11] = 0.739011f;
    data->d[12] = 1.462012f;
    data->d[13] = 0.095612f;
    data->d[14] = 1.074752f;
    data->d[15] = -2.414860f;
    data->d[16] = -0.281715f;
    data->d[17] = 1.957345f;
    data->d[18] = -11.474043f;
    data->d[19] = -0.166813f;
    data->d[20] = -0.157340f;
    data->d[21] = 0.039208f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.789951f;
    data->d[1] = -0.828042f;
    data->d[2] = 0.240567f;
    data->d[3] = -0.157040f;
    data->d[4] = -0.548604f;
    data->d[5] = -0.063984f;
    data->d[6] = 0.286702f;
    data->d[7] = 0.346119f;
    data->d[8] = 1.519018f;
    data->d[9] = -1.379378f;
    data->d[10] = -2.230653f;
    data->d[11] = -2.083274f;
    data->d[12] = -0.542161f;
    data->d[13] = -0.406877f;
    data->d[14] = -0.952649f;
    data->d[15] = -0.386268f;
    data->d[16] = 2.472516f;
    data->d[17] = 2.425117f;
    data->d[18] = -1.405199f;
    data->d[19] = 2.225473f;
    data->d[20] = 0.321390f;
    data->d[21] = 0.202209f;
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
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 1, 22);
    instructions->SetOperation(2, 0, 18);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 1, 0);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 1, 16);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 0, 18);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 0, 28);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 1, 5);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 0, 23);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 323;
    state.m_index = 1;
    state.m_test = 45;
    state.m_seed = 3335350333713783179;
} // LoadState
