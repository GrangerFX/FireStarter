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
    settings.m_attempts = 10000;
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
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 23};
    program.m_registers[3] = {3, 1, 3, 27};
    program.m_registers[4] = {4, 2, 4, 24};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 7, 9, 9};
    program.m_registers[8] = {8, 3, 10, 28};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 4, 13, 26};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 5, 18, 25};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 17, 29, 29};
    program.m_registers[18] = {18, 18, 30, 30};
    program.m_registers[19] = {19, 19, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 4);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 0, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.456871f;
    data->d[1] = -0.530582f;
    data->d[2] = -0.904728f;
    data->d[3] = -0.064919f;
    data->d[4] = -0.866141f;
    data->d[5] = 0.455441f;
    data->d[6] = 3.009143f;
    data->d[7] = -0.662233f;
    data->d[8] = 2.947769f;
    data->d[9] = -0.604007f;
    data->d[10] = -0.330132f;
    data->d[11] = 0.520542f;
    data->d[12] = -0.146190f;
    data->d[13] = 5.517719f;
    data->d[14] = -0.922089f;
    data->d[15] = 3.283738f;
    data->d[16] = -0.403791f;
    data->d[17] = -0.148006f;
    data->d[18] = 0.000010f;
    data->d[19] = 0.966195f;
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
    *result->MinResult(0) = 0.000024f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.393858f;
    data->d[1] = -0.359881f;
    data->d[2] = -0.857395f;
    data->d[3] = -0.191165f;
    data->d[4] = -0.262852f;
    data->d[5] = 0.781803f;
    data->d[6] = 0.269588f;
    data->d[7] = -2.911419f;
    data->d[8] = -0.019335f;
    data->d[9] = -11.552854f;
    data->d[10] = -0.087058f;
    data->d[11] = 0.055669f;
    data->d[12] = -0.227848f;
    data->d[13] = -0.650142f;
    data->d[14] = 0.886717f;
    data->d[15] = 6.098001f;
    data->d[16] = 9.685633f;
    data->d[17] = -0.196822f;
    data->d[18] = 0.274243f;
    data->d[19] = -0.430712f;
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
    *result->MinResult(1) = 0.000005f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.380613f;
    data->d[1] = 0.504425f;
    data->d[2] = -1.500734f;
    data->d[3] = -0.357396f;
    data->d[4] = 0.086056f;
    data->d[5] = -0.952193f;
    data->d[6] = 0.608390f;
    data->d[7] = -6.191467f;
    data->d[8] = -1.405365f;
    data->d[9] = -2.741633f;
    data->d[10] = 0.116185f;
    data->d[11] = -0.427673f;
    data->d[12] = -0.040805f;
    data->d[13] = 0.228156f;
    data->d[14] = -0.388176f;
    data->d[15] = 3.536012f;
    data->d[16] = -8.264148f;
    data->d[17] = -0.202022f;
    data->d[18] = -0.618519f;
    data->d[19] = -0.847140f;
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
    *result->MinResult(2) = 0.000026f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000026f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 7988;
    state.m_bestIndex = 29769;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
