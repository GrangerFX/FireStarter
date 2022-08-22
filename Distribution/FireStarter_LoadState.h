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
    program.m_maxRegisters = 5;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 4};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 1, 2, 20};
    program.m_registers[3] = {3, 2, 3, 26};
    program.m_registers[4] = {4, 0, 5, 12};
    program.m_registers[5] = {5, 3, 6, 7};
    program.m_registers[6] = {6, 6, 8, 8};
    program.m_registers[7] = {7, 3, 9, 31};
    program.m_registers[8] = {8, 4, 10, 27};
    program.m_registers[9] = {9, 9, 14, 14};
    program.m_registers[10] = {10, 10, 15, 15};
    program.m_registers[11] = {11, 11, 16, 16};
    program.m_registers[12] = {12, 0, 17, 29};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 23, 23};
    program.m_registers[17] = {17, 17, 24, 24};
    program.m_registers[18] = {18, 18, 25, 25};
    program.m_registers[19] = {19, 19, 28, 28};
    program.m_registers[20] = {20, 20, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 1, 2);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 2);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 12);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 0, 7);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.113048f;
    data->d[1] = 0.655544f;
    data->d[2] = -1.368609f;
    data->d[3] = -0.292387f;
    data->d[4] = 1.009484f;
    data->d[5] = 1.113225f;
    data->d[6] = 1.073908f;
    data->d[7] = 0.411913f;
    data->d[8] = -0.714430f;
    data->d[9] = 0.217826f;
    data->d[10] = -0.785818f;
    data->d[11] = -0.343245f;
    data->d[12] = 0.551169f;
    data->d[13] = 0.742487f;
    data->d[14] = -0.092890f;
    data->d[15] = -0.439714f;
    data->d[16] = -0.086529f;
    data->d[17] = 1.129334f;
    data->d[18] = 0.526612f;
    data->d[19] = -0.541523f;
    data->d[20] = 0.834165f;
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
    *result->MinResult(0) = 0.000055f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.448424f;
    data->d[1] = -1.473133f;
    data->d[2] = -0.173963f;
    data->d[3] = 0.280057f;
    data->d[4] = 0.977121f;
    data->d[5] = 0.383660f;
    data->d[6] = -0.321364f;
    data->d[7] = 0.623062f;
    data->d[8] = 1.014171f;
    data->d[9] = -0.267501f;
    data->d[10] = 0.265497f;
    data->d[11] = 0.116481f;
    data->d[12] = 1.030224f;
    data->d[13] = 0.282568f;
    data->d[14] = -0.247715f;
    data->d[15] = -2.059584f;
    data->d[16] = 1.297460f;
    data->d[17] = 1.394904f;
    data->d[18] = -1.654091f;
    data->d[19] = -0.522783f;
    data->d[20] = -0.922504f;
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
    *result->MinResult(1) = 0.000049f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.219707f;
    data->d[1] = -2.929225f;
    data->d[2] = -0.076646f;
    data->d[3] = -0.308073f;
    data->d[4] = 6.083025f;
    data->d[5] = -0.897303f;
    data->d[6] = -0.755438f;
    data->d[7] = -0.501739f;
    data->d[8] = 0.524604f;
    data->d[9] = -0.542933f;
    data->d[10] = 1.473370f;
    data->d[11] = 0.206917f;
    data->d[12] = -0.798288f;
    data->d[13] = 0.501085f;
    data->d[14] = 0.059227f;
    data->d[15] = -0.993858f;
    data->d[16] = -0.683764f;
    data->d[17] = -8.387207f;
    data->d[18] = -4.509040f;
    data->d[19] = 0.557757f;
    data->d[20] = -2.491274f;
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
    *result->MinResult(2) = 0.000056f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000056f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 4200;
    state.m_seed = 3232324150;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
