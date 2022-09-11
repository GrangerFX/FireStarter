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
    settings.m_units = 6;
    settings.m_process = 1;
    settings.m_population = 17408;
    settings.m_iterations = 128;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10000;
    settings.m_seed = 152;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 6;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 16};
    program.m_registers[2] = {2, 1, 2, 19};
    program.m_registers[3] = {3, 3, 4, 4};
    program.m_registers[4] = {4, 2, 5, 29};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 3, 9, 27};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 4, 12, 30};
    program.m_registers[10] = {10, 5, 15, 26};
    program.m_registers[11] = {11, 11, 17, 17};
    program.m_registers[12] = {12, 12, 18, 18};
    program.m_registers[13] = {13, 13, 20, 20};
    program.m_registers[14] = {14, 14, 23, 23};
    program.m_registers[15] = {15, 15, 24, 24};
    program.m_registers[16] = {16, 1, 25, 31};
    program.m_registers[17] = {17, 17, 28, 28};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 1);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 1, 4);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 1, 16);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -6.019010f;
    data->d[1] = 2.878993f;
    data->d[2] = -0.002170f;
    data->d[3] = -5.336280f;
    data->d[4] = -0.452703f;
    data->d[5] = 3.062391f;
    data->d[6] = 2.846945f;
    data->d[7] = -14.810914f;
    data->d[8] = -0.001885f;
    data->d[9] = -0.152047f;
    data->d[10] = 2.220691f;
    data->d[11] = 0.269055f;
    data->d[12] = -0.066296f;
    data->d[13] = -0.482315f;
    data->d[14] = -0.354100f;
    data->d[15] = 0.599238f;
    data->d[16] = -0.599832f;
    data->d[17] = 57.863190f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(0) = 0.000102f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.155320f;
    data->d[1] = -2.975067f;
    data->d[2] = 0.050906f;
    data->d[3] = -3.945075f;
    data->d[4] = -0.307108f;
    data->d[5] = 0.440297f;
    data->d[6] = 3.464178f;
    data->d[7] = -2.183824f;
    data->d[8] = 0.140814f;
    data->d[9] = 0.837593f;
    data->d[10] = -6.858473f;
    data->d[11] = -0.123500f;
    data->d[12] = -0.004737f;
    data->d[13] = -1.016774f;
    data->d[14] = 0.661795f;
    data->d[15] = 0.843510f;
    data->d[16] = -0.949514f;
    data->d[17] = 1.394002f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(1) = 0.000166f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.423599f;
    data->d[1] = -1.194676f;
    data->d[2] = 0.000379f;
    data->d[3] = 0.965403f;
    data->d[4] = -0.450376f;
    data->d[5] = -0.911045f;
    data->d[6] = 1.566192f;
    data->d[7] = -10.446613f;
    data->d[8] = -0.023816f;
    data->d[9] = 0.168891f;
    data->d[10] = -0.255631f;
    data->d[11] = -0.367292f;
    data->d[12] = -0.469304f;
    data->d[13] = 0.009129f;
    data->d[14] = -0.122244f;
    data->d[15] = 0.311296f;
    data->d[16] = 0.212507f;
    data->d[17] = 3.266835f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(2) = 0.000099f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000166f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 82;
    state.m_seed = 252;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
