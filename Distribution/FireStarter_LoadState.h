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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 69632;
    settings.m_iterations = 512;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 21;
    program.m_maxRegisters = 4;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 12};
    program.m_registers[1] = {1, 1, 1, 31};
    program.m_registers[2] = {2, 2, 2, 3};
    program.m_registers[3] = {3, 3, 4, 4};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 2, 6, 25};
    program.m_registers[6] = {6, 6, 8, 8};
    program.m_registers[7] = {7, 3, 9, 19};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 12, 17, 17};
    program.m_registers[13] = {13, 0, 18, 22};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 0, 23, 28};
    program.m_registers[17] = {17, 17, 26, 26};
    program.m_registers[18] = {18, 18, 27, 27};
    program.m_registers[19] = {19, 19, 29, 29};
    program.m_registers[20] = {20, 20, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 1);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.218506f;
    data->d[1] = -0.130265f;
    data->d[2] = -0.680659f;
    data->d[3] = 0.086448f;
    data->d[4] = -0.666691f;
    data->d[5] = -0.650570f;
    data->d[6] = -1.859960f;
    data->d[7] = -0.239750f;
    data->d[8] = 5.689415f;
    data->d[9] = 0.000025f;
    data->d[10] = -0.138451f;
    data->d[11] = -0.711602f;
    data->d[12] = -0.242331f;
    data->d[13] = 0.861451f;
    data->d[14] = 1.674195f;
    data->d[15] = 1.437958f;
    data->d[16] = -1.473692f;
    data->d[17] = -7.717847f;
    data->d[18] = 2.084595f;
    data->d[19] = 0.517139f;
    data->d[20] = -0.159898f;
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
    *result->MinResult(0) = 0.000066f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.256587f;
    data->d[1] = -0.419648f;
    data->d[2] = -0.465272f;
    data->d[3] = 0.035266f;
    data->d[4] = -0.631209f;
    data->d[5] = -0.650750f;
    data->d[6] = 0.000000f;
    data->d[7] = 16.843643f;
    data->d[8] = 0.000078f;
    data->d[9] = -13.497999f;
    data->d[10] = 0.114187f;
    data->d[11] = -0.926733f;
    data->d[12] = 0.907974f;
    data->d[13] = 0.691673f;
    data->d[14] = 1.335459f;
    data->d[15] = 0.705902f;
    data->d[16] = 0.640850f;
    data->d[17] = 0.517055f;
    data->d[18] = -0.910220f;
    data->d[19] = 0.390195f;
    data->d[20] = -2.028581f;
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
    *result->MinResult(1) = 0.000130f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.550201f;
    data->d[1] = -1.235916f;
    data->d[2] = 4.054277f;
    data->d[3] = -0.017965f;
    data->d[4] = 0.693408f;
    data->d[5] = -1.490567f;
    data->d[6] = 0.124079f;
    data->d[7] = -2.160665f;
    data->d[8] = 1.556802f;
    data->d[9] = -0.832389f;
    data->d[10] = 0.607097f;
    data->d[11] = -0.698839f;
    data->d[12] = 1.690663f;
    data->d[13] = -0.391394f;
    data->d[14] = -0.469123f;
    data->d[15] = -0.660361f;
    data->d[16] = 3.671493f;
    data->d[17] = -5.083662f;
    data->d[18] = -4.406958f;
    data->d[19] = 8.007380f;
    data->d[20] = -0.026480f;
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
    *result->MinResult(2) = 0.000343f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000343f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 3500;
    state.m_seed = 3232323450;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
