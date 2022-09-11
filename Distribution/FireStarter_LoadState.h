#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_units = 8;
    settings.m_process = 1;
    settings.m_population = 17408;
    settings.m_iterations = 128;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10000;
    settings.m_seed = 72;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 8;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 25};
    program.m_registers[2] = {2, 2, 2, 27};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 3, 5, 21};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 9, 10, 10};
    program.m_registers[10] = {10, 4, 12, 30};
    program.m_registers[11] = {11, 5, 13, 28};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 13, 15, 15};
    program.m_registers[14] = {14, 6, 18, 26};
    program.m_registers[15] = {15, 7, 20, 31};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 17, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 0, 1);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 1, 2);
    instructions->SetOperation(28, 0, 11);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 10);
    instructions->SetOperation(31, 1, 15);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.858140f;
    data->d[1] = 0.282542f;
    data->d[2] = 0.953288f;
    data->d[3] = -0.152151f;
    data->d[4] = -0.265587f;
    data->d[5] = -0.186296f;
    data->d[6] = 4.933249f;
    data->d[7] = -0.000222f;
    data->d[8] = 1.280962f;
    data->d[9] = -0.903769f;
    data->d[10] = -0.868779f;
    data->d[11] = -0.766780f;
    data->d[12] = 0.251286f;
    data->d[13] = 0.144966f;
    data->d[14] = -0.505856f;
    data->d[15] = 0.453814f;
    data->d[16] = -0.309744f;
    data->d[17] = -0.294448f;
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
    *result->MinResult(0) = 0.000346f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.134478f;
    data->d[1] = -0.170572f;
    data->d[2] = 0.977115f;
    data->d[3] = 0.466361f;
    data->d[4] = 0.258106f;
    data->d[5] = 0.321911f;
    data->d[6] = -0.581013f;
    data->d[7] = 0.120322f;
    data->d[8] = 3.284553f;
    data->d[9] = 2.667191f;
    data->d[10] = -0.662803f;
    data->d[11] = -0.128422f;
    data->d[12] = -3.067627f;
    data->d[13] = -0.152347f;
    data->d[14] = -0.706602f;
    data->d[15] = -0.166725f;
    data->d[16] = 1.043470f;
    data->d[17] = -0.647999f;
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
    *result->MinResult(1) = 0.000563f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.737137f;
    data->d[1] = -0.343048f;
    data->d[2] = 0.612531f;
    data->d[3] = 0.866158f;
    data->d[4] = -1.040252f;
    data->d[5] = 0.150366f;
    data->d[6] = -0.484209f;
    data->d[7] = -0.101718f;
    data->d[8] = -2.422635f;
    data->d[9] = -0.068392f;
    data->d[10] = 0.753688f;
    data->d[11] = 0.116762f;
    data->d[12] = 0.959191f;
    data->d[13] = 0.046446f;
    data->d[14] = -2.111362f;
    data->d[15] = -1.354701f;
    data->d[16] = 0.404455f;
    data->d[17] = 1.067187f;
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
    *result->MinResult(2) = 0.000619f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000619f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 4;
    state.m_seed = 172;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
