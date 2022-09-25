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
    settings.m_seed = 6070;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 22;
    program.m_maxRegisters = 8;

    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 4};
    program.m_registers[2] = {2, 1, 2, 27};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 0, 6, 31};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 2, 8, 29};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 3, 10, 30};
    program.m_registers[10] = {10, 10, 11, 11};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 13, 13};
    program.m_registers[13] = {13, 13, 14, 14};
    program.m_registers[14] = {14, 14, 15, 15};
    program.m_registers[15] = {15, 4, 16, 24};
    program.m_registers[16] = {16, 5, 17, 23};
    program.m_registers[17] = {17, 6, 18, 26};
    program.m_registers[18] = {18, 18, 19, 19};
    program.m_registers[19] = {19, 7, 20, 28};
    program.m_registers[20] = {20, 20, 21, 21};
    program.m_registers[21] = {21, 21, 22, 22};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 1, 13);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 1, 16);
    instructions->SetOperation(18, 1, 17);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 1, 20);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 1, 7);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 1, 5);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.960675f;
    data->d[1] = 3.018064f;
    data->d[2] = -0.089564f;
    data->d[3] = -0.882978f;
    data->d[4] = -1.524313f;
    data->d[5] = 0.626929f;
    data->d[6] = 0.987581f;
    data->d[7] = 1.048824f;
    data->d[8] = -1.035813f;
    data->d[9] = -0.953488f;
    data->d[10] = -0.090831f;
    data->d[11] = 1.305235f;
    data->d[12] = -0.604037f;
    data->d[13] = 0.428396f;
    data->d[14] = 3.755666f;
    data->d[15] = 0.003721f;
    data->d[16] = 2.839665f;
    data->d[17] = 1.817100f;
    data->d[18] = 0.198088f;
    data->d[19] = -0.363196f;
    data->d[20] = -6.899263f;
    data->d[21] = 0.161499f;
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
    *result->MinResult(0) = 0.000035f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.551171f;
    data->d[1] = 1.703477f;
    data->d[2] = 0.483963f;
    data->d[3] = -2.461365f;
    data->d[4] = -0.595192f;
    data->d[5] = -3.923051f;
    data->d[6] = -0.483431f;
    data->d[7] = -1.108952f;
    data->d[8] = -0.667154f;
    data->d[9] = 0.901766f;
    data->d[10] = -0.484164f;
    data->d[11] = 3.710780f;
    data->d[12] = 0.732166f;
    data->d[13] = 3.149238f;
    data->d[14] = -0.105462f;
    data->d[15] = -1.389721f;
    data->d[16] = 0.571184f;
    data->d[17] = 0.337829f;
    data->d[18] = 2.762990f;
    data->d[19] = 0.073540f;
    data->d[20] = 1.299808f;
    data->d[21] = 0.434593f;
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
    *result->MinResult(1) = 0.000022f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.469314f;
    data->d[1] = -1.228678f;
    data->d[2] = -0.808670f;
    data->d[3] = 0.520925f;
    data->d[4] = -1.088177f;
    data->d[5] = -0.700119f;
    data->d[6] = -0.028422f;
    data->d[7] = -0.838954f;
    data->d[8] = 0.415528f;
    data->d[9] = 1.191851f;
    data->d[10] = -9.129238f;
    data->d[11] = 0.304493f;
    data->d[12] = 1.195752f;
    data->d[13] = 0.642227f;
    data->d[14] = -0.179491f;
    data->d[15] = -0.365325f;
    data->d[16] = 2.865025f;
    data->d[17] = 1.770669f;
    data->d[18] = -2.251700f;
    data->d[19] = 0.420551f;
    data->d[20] = -3.513995f;
    data->d[21] = 0.741145f;
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
    *result->MinResult(2) = 0.000057f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000057f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 6;
    state.m_seed = 6170;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
