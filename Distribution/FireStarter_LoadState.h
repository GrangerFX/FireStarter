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

    settings.m_mode = FIRESTARTER_UNIT;
    settings.m_units = 4;
    settings.m_process = 0;
    settings.m_population = 69632;
    settings.m_iterations = 128;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 8337;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 19;
    program.m_maxRegisters = 5;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 22};
    program.m_registers[4] = {4, 2, 5, 17};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 3, 7, 29};
    program.m_registers[7] = {7, 4, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 0, 11, 30};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 14, 23, 23};
    program.m_registers[15] = {15, 15, 25, 25};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 28, 28};
    program.m_registers[18] = {18, 18, 31, 31};

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
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 0, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = -0.956105f;
    data->d[2] = -0.506485f;
    data->d[3] = 0.706031f;
    data->d[4] = 1.027891f;
    data->d[5] = 0.043673f;
    data->d[6] = 0.948277f;
    data->d[7] = 0.000471f;
    data->d[8] = 1.743662f;
    data->d[9] = -3.055566f;
    data->d[10] = -3.770314f;
    data->d[11] = -4.073547f;
    data->d[12] = 0.897029f;
    data->d[13] = 3.783005f;
    data->d[14] = 0.836303f;
    data->d[15] = -0.012741f;
    data->d[16] = -0.000000f;
    data->d[17] = -5.477508f;
    data->d[18] = -0.439363f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090659f;
    data->d[1] = 0.533303f;
    data->d[2] = -0.751037f;
    data->d[3] = 0.364409f;
    data->d[4] = 1.338668f;
    data->d[5] = -0.927776f;
    data->d[6] = -0.417847f;
    data->d[7] = 0.805413f;
    data->d[8] = -5.305733f;
    data->d[9] = -0.005974f;
    data->d[10] = 4.820620f;
    data->d[11] = -0.333943f;
    data->d[12] = -1.009567f;
    data->d[13] = -1.261375f;
    data->d[14] = -1.340026f;
    data->d[15] = -0.040289f;
    data->d[16] = 0.412647f;
    data->d[17] = 0.599103f;
    data->d[18] = -0.477847f;
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
    *result->MinResult(1) = 0.000005f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = -0.753265f;
    data->d[2] = -1.293887f;
    data->d[3] = -0.324398f;
    data->d[4] = -1.191216f;
    data->d[5] = -0.052650f;
    data->d[6] = 1.474001f;
    data->d[7] = -0.207223f;
    data->d[8] = 0.014961f;
    data->d[9] = -1.185847f;
    data->d[10] = 0.403515f;
    data->d[11] = -7.769665f;
    data->d[12] = 0.457822f;
    data->d[13] = 0.313785f;
    data->d[14] = -0.880923f;
    data->d[15] = 0.229794f;
    data->d[16] = -1.103129f;
    data->d[17] = -0.657608f;
    data->d[18] = 0.721780f;
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
    *result->MinResult(2) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000005f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 6;
    state.m_seed = 4173639300;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
