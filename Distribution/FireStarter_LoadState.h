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

    settings.m_mode = FIRESTARTER_UNIT;
    settings.m_states = 1;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 17;
    program.m_maxRegisters = 6;

    program.m_registers.resize(17);
    program.m_registers[0] = {0, 0, 0, 20};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 27};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 2, 5, 28};
    program.m_registers[6] = {6, 3, 6, 14};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 4, 8, 12};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 4, 13, 25};
    program.m_registers[11] = {11, 3, 16, 31};
    program.m_registers[12] = {12, 5, 18, 23};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 0, 21, 22};
    program.m_registers[15] = {15, 5, 24, 29};
    program.m_registers[16] = {16, 16, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 1, 0);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 0, 11);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.521414f;
    data->d[1] = 0.822717f;
    data->d[2] = -0.610487f;
    data->d[3] = -0.497758f;
    data->d[4] = -1.021316f;
    data->d[5] = -0.216151f;
    data->d[6] = 0.736033f;
    data->d[7] = -0.517942f;
    data->d[8] = 0.084159f;
    data->d[9] = 0.311134f;
    data->d[10] = 0.389059f;
    data->d[11] = -0.330243f;
    data->d[12] = 0.112789f;
    data->d[13] = -1.562637f;
    data->d[14] = -1.334475f;
    data->d[15] = 1.879831f;
    data->d[16] = 1.700199f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(0) = 0.000058f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.217201f;
    data->d[1] = 0.902504f;
    data->d[2] = -0.923389f;
    data->d[3] = 0.235047f;
    data->d[4] = 0.714207f;
    data->d[5] = 0.170486f;
    data->d[6] = 2.974225f;
    data->d[7] = -0.279383f;
    data->d[8] = -0.090914f;
    data->d[9] = 1.584210f;
    data->d[10] = -0.161259f;
    data->d[11] = -1.358849f;
    data->d[12] = 0.659303f;
    data->d[13] = 0.339586f;
    data->d[14] = -0.945106f;
    data->d[15] = 0.619424f;
    data->d[16] = -0.376598f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(1) = 0.000129f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.225655f;
    data->d[1] = 1.296760f;
    data->d[2] = -0.187354f;
    data->d[3] = -0.757065f;
    data->d[4] = 0.186122f;
    data->d[5] = -1.553813f;
    data->d[6] = -0.836843f;
    data->d[7] = 0.060721f;
    data->d[8] = -0.207973f;
    data->d[9] = -0.099594f;
    data->d[10] = -0.891340f;
    data->d[11] = 0.132997f;
    data->d[12] = -0.767291f;
    data->d[13] = -0.635778f;
    data->d[14] = -0.027737f;
    data->d[15] = -0.038342f;
    data->d[16] = 0.476462f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(2) = 0.000118f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000129f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 33;
    state.m_seed = 3232323413;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
