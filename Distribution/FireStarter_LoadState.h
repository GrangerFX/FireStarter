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
    settings.m_units = 2;
    settings.m_processes = 6;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10;
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
    program.m_dataSize = 20;
    program.m_maxRegisters = 6;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 8};
    program.m_registers[1] = {1, 1, 1, 16};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 14};
    program.m_registers[4] = {4, 3, 4, 29};
    program.m_registers[5] = {5, 4, 6, 15};
    program.m_registers[6] = {6, 5, 7, 31};
    program.m_registers[7] = {7, 7, 10, 10};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 0, 13, 28};
    program.m_registers[11] = {11, 1, 17, 18};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 13, 21, 21};
    program.m_registers[14] = {14, 1, 22, 30};
    program.m_registers[15] = {15, 15, 23, 23};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 26, 26};
    program.m_registers[19] = {19, 19, 27, 27};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 3);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 1, 6);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.287718f;
    data->d[1] = 0.883825f;
    data->d[2] = -0.839176f;
    data->d[3] = 0.073173f;
    data->d[4] = 0.497817f;
    data->d[5] = -3.622707f;
    data->d[6] = 0.025266f;
    data->d[7] = 3.594641f;
    data->d[8] = -4.313818f;
    data->d[9] = 0.118889f;
    data->d[10] = -0.506506f;
    data->d[11] = -1.575070f;
    data->d[12] = -2.696997f;
    data->d[13] = -1.494263f;
    data->d[14] = 0.335081f;
    data->d[15] = 0.003309f;
    data->d[16] = 1.487313f;
    data->d[17] = 5.322565f;
    data->d[18] = 0.736897f;
    data->d[19] = 0.264719f;
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
    *result->MinResult(0) = 0.000437f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.304528f;
    data->d[1] = -0.126657f;
    data->d[2] = -0.305364f;
    data->d[3] = -0.244243f;
    data->d[4] = 0.053356f;
    data->d[5] = -3.279644f;
    data->d[6] = -0.304305f;
    data->d[7] = -0.024921f;
    data->d[8] = -5.409708f;
    data->d[9] = 0.020903f;
    data->d[10] = -0.865534f;
    data->d[11] = 0.564003f;
    data->d[12] = -1.242896f;
    data->d[13] = 0.688484f;
    data->d[14] = 0.339740f;
    data->d[15] = -0.600117f;
    data->d[16] = -0.385703f;
    data->d[17] = 4.286318f;
    data->d[18] = 1.536575f;
    data->d[19] = 0.000629f;
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
    *result->MinResult(1) = 0.000044f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.227926f;
    data->d[1] = -0.956576f;
    data->d[2] = 0.813604f;
    data->d[3] = -0.680567f;
    data->d[4] = -0.173226f;
    data->d[5] = -0.630011f;
    data->d[6] = -0.378372f;
    data->d[7] = -2.716726f;
    data->d[8] = -0.933405f;
    data->d[9] = -0.016814f;
    data->d[10] = -0.707348f;
    data->d[11] = -2.514310f;
    data->d[12] = -0.527729f;
    data->d[13] = 1.160341f;
    data->d[14] = -1.176263f;
    data->d[15] = -0.004341f;
    data->d[16] = -0.359280f;
    data->d[17] = 12.289613f;
    data->d[18] = -3.422405f;
    data->d[19] = -0.387326f;
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
    *result->MinResult(2) = 0.000169f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000437f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1;
    state.m_bestIndex = 11859;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
