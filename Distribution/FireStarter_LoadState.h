#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_states = 1;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_generations = 5;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 19;
    program.m_maxRegisters = 5;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 12};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 6};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 2, 7, 24};
    program.m_registers[7] = {7, 3, 8, 29};
    program.m_registers[8] = {8, 4, 9, 17};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 1, 13, 31};
    program.m_registers[11] = {11, 11, 18, 18};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 4, 20, 28};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 2, 25, 30};
    program.m_registers[17] = {17, 17, 26, 26};
    program.m_registers[18] = {18, 18, 27, 27};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 10);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.289958f;
    data->d[1] = 0.072279f;
    data->d[2] = 0.587329f;
    data->d[3] = 0.561623f;
    data->d[4] = 0.231906f;
    data->d[5] = -0.137131f;
    data->d[6] = -1.073126f;
    data->d[7] = -0.359694f;
    data->d[8] = -0.900318f;
    data->d[9] = -0.268116f;
    data->d[10] = -0.306006f;
    data->d[11] = -0.262264f;
    data->d[12] = -1.919591f;
    data->d[13] = -1.101834f;
    data->d[14] = -0.142352f;
    data->d[15] = -0.067973f;
    data->d[16] = -0.002392f;
    data->d[17] = -0.570680f;
    data->d[18] = 0.593448f;
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
    *result->MinResult(0) = 0.008863f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.089313f;
    data->d[1] = 1.537250f;
    data->d[2] = 0.916087f;
    data->d[3] = -0.558587f;
    data->d[4] = 0.052042f;
    data->d[5] = 0.234523f;
    data->d[6] = 0.649876f;
    data->d[7] = -0.301921f;
    data->d[8] = -0.751250f;
    data->d[9] = -0.545160f;
    data->d[10] = 0.620722f;
    data->d[11] = -1.101911f;
    data->d[12] = -0.192204f;
    data->d[13] = 1.421791f;
    data->d[14] = 0.626325f;
    data->d[15] = 4.796865f;
    data->d[16] = 0.012368f;
    data->d[17] = -0.392982f;
    data->d[18] = -0.058342f;
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
    *result->MinResult(1) = 0.006931f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.503724f;
    data->d[1] = 0.015915f;
    data->d[2] = 0.765104f;
    data->d[3] = -1.617437f;
    data->d[4] = -0.110971f;
    data->d[5] = 1.448260f;
    data->d[6] = 0.213652f;
    data->d[7] = 0.758192f;
    data->d[8] = 1.093229f;
    data->d[9] = 1.021788f;
    data->d[10] = -0.695019f;
    data->d[11] = -1.569467f;
    data->d[12] = -0.590908f;
    data->d[13] = 0.518948f;
    data->d[14] = 0.375349f;
    data->d[15] = 0.134207f;
    data->d[16] = 0.488572f;
    data->d[17] = 3.011281f;
    data->d[18] = 0.007419f;
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
    *result->MinResult(2) = 0.008884f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.008884f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 255;
    state.m_seed = 3232320110;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
