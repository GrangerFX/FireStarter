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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 17408;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 1;
    settings.m_precision = 0;
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
    program.m_registers[0] = {0, 0, 0, 31};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 1, 2, 27};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 2, 5, 12};
    program.m_registers[6] = {6, 6, 6, 6};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 3, 9, 29};
    program.m_registers[9] = {9, 4, 10, 26};
    program.m_registers[10] = {10, 10, 14, 14};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 13, 17, 17};
    program.m_registers[14] = {14, 14, 18, 18};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 16, 21, 21};
    program.m_registers[17] = {17, 17, 22, 22};
    program.m_registers[18] = {18, 2, 23, 30};
    program.m_registers[19] = {19, 19, 24, 24};
    program.m_registers[20] = {20, 20, 28, 28};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 1, 19);
    instructions->SetOperation(25, 1, 0);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 1, 2);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 0, 0);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.832441f;
    data->d[1] = -0.797069f;
    data->d[2] = 0.861031f;
    data->d[3] = 0.305196f;
    data->d[4] = 0.940430f;
    data->d[5] = 0.336649f;
    data->d[6] = 0.514700f;
    data->d[7] = -0.185408f;
    data->d[8] = 0.149681f;
    data->d[9] = -0.759257f;
    data->d[10] = 11.267570f;
    data->d[11] = -0.237632f;
    data->d[12] = -0.195307f;
    data->d[13] = 0.065478f;
    data->d[14] = -0.215143f;
    data->d[15] = 0.604495f;
    data->d[16] = 1.078679f;
    data->d[17] = -0.596001f;
    data->d[18] = -0.923284f;
    data->d[19] = 0.554630f;
    data->d[20] = 0.480926f;
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
    *result->MinResult(0) = 0.248056f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.710085f;
    data->d[1] = 1.813011f;
    data->d[2] = 0.237010f;
    data->d[3] = 0.125067f;
    data->d[4] = -3.793574f;
    data->d[5] = -0.366016f;
    data->d[6] = -0.862931f;
    data->d[7] = 0.020420f;
    data->d[8] = -0.255955f;
    data->d[9] = -1.036637f;
    data->d[10] = -0.784078f;
    data->d[11] = -0.078289f;
    data->d[12] = -0.045401f;
    data->d[13] = 0.470794f;
    data->d[14] = -0.451698f;
    data->d[15] = 0.125396f;
    data->d[16] = 0.950583f;
    data->d[17] = 0.011726f;
    data->d[18] = -0.022280f;
    data->d[19] = -5.158509f;
    data->d[20] = 0.240711f;
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
    *result->MinResult(1) = 0.289881f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.404996f;
    data->d[1] = 1.601474f;
    data->d[2] = 0.514955f;
    data->d[3] = 0.312001f;
    data->d[4] = 0.759412f;
    data->d[5] = -0.401134f;
    data->d[6] = 0.042173f;
    data->d[7] = 0.114528f;
    data->d[8] = -0.813948f;
    data->d[9] = 0.269929f;
    data->d[10] = -1.387574f;
    data->d[11] = 0.550495f;
    data->d[12] = 0.056788f;
    data->d[13] = 0.804820f;
    data->d[14] = -1.319990f;
    data->d[15] = -0.305079f;
    data->d[16] = -0.817215f;
    data->d[17] = 0.380124f;
    data->d[18] = 1.096774f;
    data->d[19] = 0.855943f;
    data->d[20] = -0.429564f;
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
    *result->MinResult(2) = 0.297010f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.297010f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1;
    state.m_seed = 3232319852;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
