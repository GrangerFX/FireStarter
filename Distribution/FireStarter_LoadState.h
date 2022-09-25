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
    settings.m_seed = 833715995;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 20;
    program.m_maxRegisters = 6;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 0, 3, 24};
    program.m_registers[4] = {4, 1, 4, 8};
    program.m_registers[5] = {5, 2, 6, 29};
    program.m_registers[6] = {6, 6, 9, 9};
    program.m_registers[7] = {7, 1, 10, 25};
    program.m_registers[8] = {8, 3, 11, 27};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 4, 13, 14};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 13, 17, 17};
    program.m_registers[14] = {14, 4, 18, 28};
    program.m_registers[15] = {15, 15, 19, 19};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 5, 23, 26};
    program.m_registers[18] = {18, 18, 30, 30};
    program.m_registers[19] = {19, 19, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 3);
    instructions->SetOperation(25, 1, 7);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 1, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.312390f;
    data->d[1] = -0.342192f;
    data->d[2] = -0.582653f;
    data->d[3] = 1.095614f;
    data->d[4] = -0.000017f;
    data->d[5] = -0.234393f;
    data->d[6] = 0.326870f;
    data->d[7] = -2.721582f;
    data->d[8] = -0.106453f;
    data->d[9] = -0.289107f;
    data->d[10] = -0.507062f;
    data->d[11] = -0.282496f;
    data->d[12] = 2.564770f;
    data->d[13] = -0.144103f;
    data->d[14] = -2.075285f;
    data->d[15] = -1.316364f;
    data->d[16] = 0.256675f;
    data->d[17] = -3.072208f;
    data->d[18] = -0.708027f;
    data->d[19] = 0.707994f;
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
    *result->MinResult(0) = 0.000007f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.566391f;
    data->d[1] = -0.579373f;
    data->d[2] = 1.934574f;
    data->d[3] = -0.879552f;
    data->d[4] = -0.000031f;
    data->d[5] = -0.226019f;
    data->d[6] = 1.054450f;
    data->d[7] = -0.533794f;
    data->d[8] = 0.877126f;
    data->d[9] = 0.254345f;
    data->d[10] = -1.313579f;
    data->d[11] = 1.369853f;
    data->d[12] = -2.414239f;
    data->d[13] = 0.957705f;
    data->d[14] = 0.808794f;
    data->d[15] = -0.221380f;
    data->d[16] = -0.254072f;
    data->d[17] = -0.663909f;
    data->d[18] = 6.735891f;
    data->d[19] = -6.854117f;
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
    *result->MinResult(1) = 0.000003f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.052800f;
    data->d[1] = -0.991547f;
    data->d[2] = 1.377187f;
    data->d[3] = -1.950800f;
    data->d[4] = -0.000025f;
    data->d[5] = -0.195316f;
    data->d[6] = 1.111830f;
    data->d[7] = -0.358050f;
    data->d[8] = 0.515989f;
    data->d[9] = -0.805452f;
    data->d[10] = 1.775992f;
    data->d[11] = 0.678101f;
    data->d[12] = 0.194026f;
    data->d[13] = 0.466656f;
    data->d[14] = 0.419043f;
    data->d[15] = 0.168071f;
    data->d[16] = -0.875708f;
    data->d[17] = 1.025677f;
    data->d[18] = -1.538715f;
    data->d[19] = 2.062325f;
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
    *result->MinResult(2) = 0.000053f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000053f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 6;
    state.m_seed = 5536;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
