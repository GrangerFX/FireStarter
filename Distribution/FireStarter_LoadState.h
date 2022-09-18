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
    settings.m_processes = 0;
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
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 22};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 2, 7, 29};
    program.m_registers[7] = {7, 3, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 0, 14, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 17, 17};
    program.m_registers[15] = {15, 15, 18, 18};
    program.m_registers[16] = {16, 16, 23, 23};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 27, 27};
    program.m_registers[19] = {19, 19, 28, 28};
    program.m_registers[20] = {20, 20, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 0, 20);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141586f;
    data->d[1] = 0.814054f;
    data->d[2] = 0.766036f;
    data->d[3] = 1.242594f;
    data->d[4] = -0.525538f;
    data->d[5] = -0.361179f;
    data->d[6] = -0.767064f;
    data->d[7] = 0.150979f;
    data->d[8] = -0.013152f;
    data->d[9] = 3.383246f;
    data->d[10] = 0.608223f;
    data->d[11] = 0.896484f;
    data->d[12] = -0.468049f;
    data->d[13] = -0.662250f;
    data->d[14] = -0.437098f;
    data->d[15] = 1.104486f;
    data->d[16] = 0.144463f;
    data->d[17] = 0.118424f;
    data->d[18] = -0.000011f;
    data->d[19] = -0.689796f;
    data->d[20] = -0.929539f;
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
    *result->MinResult(0) = 0.000020f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090657f;
    data->d[1] = -0.550156f;
    data->d[2] = -1.739209f;
    data->d[3] = 0.122933f;
    data->d[4] = -0.204688f;
    data->d[5] = 3.486000f;
    data->d[6] = -1.097514f;
    data->d[7] = 1.854873f;
    data->d[8] = 6.281218f;
    data->d[9] = -0.016693f;
    data->d[10] = 1.050669f;
    data->d[11] = -0.487771f;
    data->d[12] = 0.482355f;
    data->d[13] = -2.627373f;
    data->d[14] = -0.299033f;
    data->d[15] = 1.028026f;
    data->d[16] = -0.957067f;
    data->d[17] = 1.027777f;
    data->d[18] = 0.242766f;
    data->d[19] = -0.959954f;
    data->d[20] = 0.506904f;
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
    data->d[0] = -2.618005f;
    data->d[1] = 0.578377f;
    data->d[2] = -0.143404f;
    data->d[3] = -5.756710f;
    data->d[4] = 0.761803f;
    data->d[5] = -0.829349f;
    data->d[6] = 0.479426f;
    data->d[7] = 1.019690f;
    data->d[8] = 0.701312f;
    data->d[9] = -0.297211f;
    data->d[10] = 0.149650f;
    data->d[11] = 0.836918f;
    data->d[12] = 0.456725f;
    data->d[13] = -0.686197f;
    data->d[14] = 0.072516f;
    data->d[15] = 0.800179f;
    data->d[16] = 0.184736f;
    data->d[17] = -0.492906f;
    data->d[18] = -0.585845f;
    data->d[19] = 0.165587f;
    data->d[20] = -5.397538f;
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
    *result->MinResult(2) = 0.000024f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000024f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;
    state.m_seed = 3232320150;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
