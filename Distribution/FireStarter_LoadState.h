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
    settings.m_seed = 73;
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
    program.m_maxRegisters = 7;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 17};
    program.m_registers[2] = {2, 1, 2, 30};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 2, 5, 22};
    program.m_registers[6] = {6, 3, 7, 23};
    program.m_registers[7] = {7, 4, 8, 9};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 4, 11, 27};
    program.m_registers[10] = {10, 5, 13, 20};
    program.m_registers[11] = {11, 6, 14, 19};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 13, 24, 24};
    program.m_registers[14] = {14, 14, 25, 25};
    program.m_registers[15] = {15, 15, 26, 26};
    program.m_registers[16] = {16, 16, 28, 28};
    program.m_registers[17] = {17, 17, 29, 29};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 6);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 0, 1);
    instructions->SetOperation(18, 0, 6);
    instructions->SetOperation(19, 1, 11);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 6);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 1, 2);
    instructions->SetOperation(31, 1, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.438466f;
    data->d[1] = -0.989306f;
    data->d[2] = -0.847588f;
    data->d[3] = -0.907370f;
    data->d[4] = 0.888487f;
    data->d[5] = -0.200160f;
    data->d[6] = 0.632010f;
    data->d[7] = -1.067532f;
    data->d[8] = -1.016031f;
    data->d[9] = -0.625482f;
    data->d[10] = 1.451874f;
    data->d[11] = -1.760475f;
    data->d[12] = 1.176558f;
    data->d[13] = 2.476116f;
    data->d[14] = -9.185062f;
    data->d[15] = -1.609803f;
    data->d[16] = 2.532771f;
    data->d[17] = -0.786491f;
    data->d[18] = 1.202291f;
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
    *result->MinResult(0) = 0.000475f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.271041f;
    data->d[1] = 0.790373f;
    data->d[2] = 0.377467f;
    data->d[3] = -0.224845f;
    data->d[4] = 1.088024f;
    data->d[5] = 0.440506f;
    data->d[6] = 4.882611f;
    data->d[7] = 0.864070f;
    data->d[8] = -0.218738f;
    data->d[9] = 0.778628f;
    data->d[10] = -0.636181f;
    data->d[11] = 1.661147f;
    data->d[12] = -0.236086f;
    data->d[13] = -3.397113f;
    data->d[14] = 0.738278f;
    data->d[15] = -1.208647f;
    data->d[16] = 0.334499f;
    data->d[17] = -0.524777f;
    data->d[18] = -0.182696f;
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
    *result->MinResult(1) = 0.000469f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.350386f;
    data->d[1] = -0.636964f;
    data->d[2] = 0.113080f;
    data->d[3] = 0.804914f;
    data->d[4] = 0.412086f;
    data->d[5] = -0.381386f;
    data->d[6] = 1.575196f;
    data->d[7] = -0.324045f;
    data->d[8] = -2.107183f;
    data->d[9] = 1.018376f;
    data->d[10] = -1.250859f;
    data->d[11] = 4.449885f;
    data->d[12] = 1.088390f;
    data->d[13] = 2.357617f;
    data->d[14] = -2.581749f;
    data->d[15] = 1.368700f;
    data->d[16] = 0.096938f;
    data->d[17] = -0.022294f;
    data->d[18] = 0.281315f;
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
    *result->MinResult(2) = 0.001482f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.001482f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 9;
    state.m_seed = 173;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
