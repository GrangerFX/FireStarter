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
    program.m_dataSize = 18;
    program.m_maxRegisters = 6;

    program.m_registers.resize(18);
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
    program.m_registers[11] = {11, 4, 18, 26};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 5, 20, 28};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 30, 30};

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
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 10);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.286379f;
    data->d[1] = 0.155236f;
    data->d[2] = -0.532305f;
    data->d[3] = -0.565066f;
    data->d[4] = 0.612532f;
    data->d[5] = 0.255331f;
    data->d[6] = -0.957165f;
    data->d[7] = -0.358638f;
    data->d[8] = -0.893587f;
    data->d[9] = -0.282154f;
    data->d[10] = -0.408000f;
    data->d[11] = -0.316329f;
    data->d[12] = 0.059145f;
    data->d[13] = -1.016941f;
    data->d[14] = 0.630227f;
    data->d[15] = -0.583208f;
    data->d[16] = 0.780581f;
    data->d[17] = 0.001939f;
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
    *result->MinResult(0) = 0.018239f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.060483f;
    data->d[1] = 1.550231f;
    data->d[2] = -0.961017f;
    data->d[3] = 0.527877f;
    data->d[4] = -0.193843f;
    data->d[5] = -0.135919f;
    data->d[6] = 0.642909f;
    data->d[7] = -0.299563f;
    data->d[8] = -0.750394f;
    data->d[9] = -0.519367f;
    data->d[10] = 0.612780f;
    data->d[11] = 0.235949f;
    data->d[12] = -0.823642f;
    data->d[13] = 1.100735f;
    data->d[14] = 0.730436f;
    data->d[15] = 3.889284f;
    data->d[16] = 0.062988f;
    data->d[17] = 0.015432f;
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
    *result->MinResult(1) = 0.018157f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.524457f;
    data->d[1] = 0.075237f;
    data->d[2] = 0.952153f;
    data->d[3] = -0.359110f;
    data->d[4] = 0.444541f;
    data->d[5] = 0.212430f;
    data->d[6] = 0.572464f;
    data->d[7] = 0.777659f;
    data->d[8] = 1.098882f;
    data->d[9] = 1.022979f;
    data->d[10] = -0.855843f;
    data->d[11] = -1.217582f;
    data->d[12] = -1.032704f;
    data->d[13] = 0.549080f;
    data->d[14] = 0.382759f;
    data->d[15] = 0.159524f;
    data->d[16] = -0.013564f;
    data->d[17] = 0.480475f;
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
    *result->MinResult(2) = 0.018747f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.018747f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 40;
    state.m_seed = 3232319895;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
