#pragma once
#include "FireStarterState.h"

// Run date: 03/26/23 12:29:21 Pacific Daylight Time
// Run duration = 3350.749315 seconds
// Run generation = 0
// Run result = 0.00000331
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run tests = 11000
// Run units = 8
// Run processes = 16
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 10962
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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_tests = 11000;
    settings.m_units = 8;
    settings.m_processes = 16;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 10962;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000331
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.482898f;
    data->d[2] = 0.229505f;
    data->d[3] = -0.957340f;
    data->d[4] = 2.872875f;
    data->d[5] = -5.924096f;
    data->d[6] = 0.760127f;
    data->d[7] = 0.588947f;
    data->d[8] = -3.308667f;
    data->d[9] = -0.005838f;
    data->d[10] = 0.307202f;
    data->d[11] = -6.795762f;
    data->d[12] = 11.504349f;
    data->d[13] = 0.255586f;
    data->d[14] = -0.716633f;
    data->d[15] = 0.121767f;
    data->d[16] = -0.932842f;
    data->d[17] = 0.035272f;
    data->d[18] = 1.544108f;
    data->d[19] = 0.393641f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

// Variation: 1  result = 0.00000119
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.034745f;
    data->d[2] = -5.001862f;
    data->d[3] = -2.776522f;
    data->d[4] = -1.636650f;
    data->d[5] = 5.704756f;
    data->d[6] = 1.170830f;
    data->d[7] = 2.336551f;
    data->d[8] = 3.216943f;
    data->d[9] = 0.002310f;
    data->d[10] = 0.666927f;
    data->d[11] = -0.686633f;
    data->d[12] = -1.164823f;
    data->d[13] = -1.591311f;
    data->d[14] = -0.826480f;
    data->d[15] = 3.937463f;
    data->d[16] = -0.201124f;
    data->d[17] = -1.172229f;
    data->d[18] = -0.700105f;
    data->d[19] = 0.649529f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000209
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617993f;
    data->d[1] = -0.225980f;
    data->d[2] = 1.559718f;
    data->d[3] = 2.839358f;
    data->d[4] = 1.244156f;
    data->d[5] = 0.220345f;
    data->d[6] = 0.347632f;
    data->d[7] = -1.336984f;
    data->d[8] = 0.353408f;
    data->d[9] = 0.109390f;
    data->d[10] = 1.699052f;
    data->d[11] = 0.884540f;
    data->d[12] = 0.998287f;
    data->d[13] = -2.204652f;
    data->d[14] = 1.584683f;
    data->d[15] = -0.163068f;
    data->d[16] = -0.405948f;
    data->d[17] = -1.839694f;
    data->d[18] = 1.983764f;
    data->d[19] = -1.709303f;
    data->d[20] = 0.523598f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000003f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 23);
    instructions->SetOperation(4, 0, 20);
    instructions->SetOperation(5, 0, 6);
    instructions->SetOperation(6, 0, 30);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 0, 17);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 0, 14);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 29);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 1, 13);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 25);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 30);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 21);
    instructions->SetOperation(24, 1, 0);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 0;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 17290402716277835649;
} // LoadState
