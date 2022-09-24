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

    settings.m_mode = FIRESTARTER_TEST;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10;
    settings.m_seed = 3557;
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
    program.m_maxRegisters = 6;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 28};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 1, 4, 13};
    program.m_registers[5] = {5, 2, 5, 17};
    program.m_registers[6] = {6, 6, 6, 6};
    program.m_registers[7] = {7, 3, 8, 16};
    program.m_registers[8] = {8, 4, 9, 30};
    program.m_registers[9] = {9, 5, 11, 29};
    program.m_registers[10] = {10, 1, 14, 31};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 13, 21, 21};
    program.m_registers[14] = {14, 2, 22, 23};
    program.m_registers[15] = {15, 15, 24, 24};
    program.m_registers[16] = {16, 16, 25, 25};
    program.m_registers[17] = {17, 17, 27, 27};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 2);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 2);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 1, 9);
    instructions->SetOperation(30, 0, 8);
    instructions->SetOperation(31, 1, 10);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.121524f;
    data->d[1] = -1.288698f;
    data->d[2] = -1.358739f;
    data->d[3] = -0.718293f;
    data->d[4] = 0.062567f;
    data->d[5] = -1.127950f;
    data->d[6] = -0.047028f;
    data->d[7] = 6.921813f;
    data->d[8] = -0.021764f;
    data->d[9] = 3.846771f;
    data->d[10] = -0.012522f;
    data->d[11] = 0.033499f;
    data->d[12] = -26.256617f;
    data->d[13] = 0.761508f;
    data->d[14] = -0.400165f;
    data->d[15] = 20.965805f;
    data->d[16] = 0.134001f;
    data->d[17] = -0.105488f;
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
    *result->MinResult(0) = 0.000057f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 2.444415f;
    data->d[1] = -0.685214f;
    data->d[2] = -4.433495f;
    data->d[3] = -0.912262f;
    data->d[4] = -0.147052f;
    data->d[5] = 1.923923f;
    data->d[6] = -0.279908f;
    data->d[7] = 0.537087f;
    data->d[8] = 0.009245f;
    data->d[9] = 0.571354f;
    data->d[10] = -0.119430f;
    data->d[11] = 0.116245f;
    data->d[12] = -14.873856f;
    data->d[13] = 3.104561f;
    data->d[14] = -0.010585f;
    data->d[15] = 32.657764f;
    data->d[16] = 10.105432f;
    data->d[17] = 0.214069f;
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
    *result->MinResult(1) = 0.000046f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.027314f;
    data->d[1] = -1.468826f;
    data->d[2] = -0.714371f;
    data->d[3] = -0.783924f;
    data->d[4] = 0.075563f;
    data->d[5] = -0.547790f;
    data->d[6] = -0.020546f;
    data->d[7] = 0.535128f;
    data->d[8] = -3.250698f;
    data->d[9] = 0.933629f;
    data->d[10] = 0.450150f;
    data->d[11] = 0.140628f;
    data->d[12] = -15.427283f;
    data->d[13] = 0.731922f;
    data->d[14] = -1.060508f;
    data->d[15] = -63.903534f;
    data->d[16] = 53.799732f;
    data->d[17] = -0.067508f;
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
    *result->MinResult(2) = 0.000115f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000115f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 3;
    state.m_seed = 3657;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
