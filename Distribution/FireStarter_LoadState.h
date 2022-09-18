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
    program.m_dataSize = 20;
    program.m_maxRegisters = 6;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 1, 2, 31};
    program.m_registers[3] = {3, 2, 3, 22};
    program.m_registers[4] = {4, 3, 5, 17};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 4, 7, 29};
    program.m_registers[7] = {7, 5, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 0, 11, 23};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 13, 15, 15};
    program.m_registers[14] = {14, 14, 16, 16};
    program.m_registers[15] = {15, 15, 18, 18};
    program.m_registers[16] = {16, 3, 21, 30};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 27, 27};
    program.m_registers[19] = {19, 19, 28, 28};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 16);
    instructions->SetOperation(31, 1, 2);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = 0.446136f;
    data->d[2] = -0.367009f;
    data->d[3] = 0.958625f;
    data->d[4] = 0.291671f;
    data->d[5] = 0.230156f;
    data->d[6] = 1.423887f;
    data->d[7] = 0.050869f;
    data->d[8] = -0.865694f;
    data->d[9] = -0.483740f;
    data->d[10] = 1.018953f;
    data->d[11] = -1.339206f;
    data->d[12] = 0.381242f;
    data->d[13] = 0.435011f;
    data->d[14] = -2.513390f;
    data->d[15] = -0.506944f;
    data->d[16] = -2.055736f;
    data->d[17] = 24.770624f;
    data->d[18] = 1.445210f;
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
    *result->MinResult(0) = 0.000000f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090658f;
    data->d[1] = -0.481872f;
    data->d[2] = 0.892185f;
    data->d[3] = -0.711349f;
    data->d[4] = 0.642815f;
    data->d[5] = 0.035483f;
    data->d[6] = 0.647090f;
    data->d[7] = -0.016723f;
    data->d[8] = 2.071237f;
    data->d[9] = -0.392179f;
    data->d[10] = -0.493647f;
    data->d[11] = -2.288796f;
    data->d[12] = -0.555922f;
    data->d[13] = 0.284177f;
    data->d[14] = 1.021320f;
    data->d[15] = 1.404842f;
    data->d[16] = -0.716297f;
    data->d[17] = 0.006378f;
    data->d[18] = -4.704203f;
    data->d[19] = 0.025112f;
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
    *result->MinResult(1) = 0.000000f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = 0.763008f;
    data->d[2] = -0.110087f;
    data->d[3] = -1.505538f;
    data->d[4] = -0.400843f;
    data->d[5] = 0.132862f;
    data->d[6] = -0.792532f;
    data->d[7] = -0.215651f;
    data->d[8] = -0.309237f;
    data->d[9] = 0.390290f;
    data->d[10] = 0.426867f;
    data->d[11] = 0.544043f;
    data->d[12] = 2.060405f;
    data->d[13] = 2.163795f;
    data->d[14] = 6.577214f;
    data->d[15] = -0.231728f;
    data->d[16] = -1.292709f;
    data->d[17] = -0.000165f;
    data->d[18] = 0.304995f;
    data->d[19] = 1.716745f;
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
    *result->MinResult(2) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000001f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1700;
    state.m_seed = 3232321650;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
