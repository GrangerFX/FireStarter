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
    settings.m_population = 139264;
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
    program.m_dataSize = 18;
    program.m_maxRegisters = 5;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 20};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 2, 6, 14};
    program.m_registers[6] = {6, 3, 7, 29};
    program.m_registers[7] = {7, 4, 8, 26};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 0, 13, 30};
    program.m_registers[11] = {11, 11, 16, 16};
    program.m_registers[12] = {12, 12, 17, 17};
    program.m_registers[13] = {13, 2, 18, 22};
    program.m_registers[14] = {14, 14, 23, 23};
    program.m_registers[15] = {15, 15, 25, 25};
    program.m_registers[16] = {16, 4, 27, 31};
    program.m_registers[17] = {17, 17, 28, 28};

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
    instructions->SetOperation(10, 1, 5);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 10);
    instructions->SetOperation(31, 1, 16);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = -0.561032f;
    data->d[2] = 0.901846f;
    data->d[3] = 0.650214f;
    data->d[4] = -1.503670f;
    data->d[5] = -0.050056f;
    data->d[6] = 0.700626f;
    data->d[7] = 0.562829f;
    data->d[8] = 0.001237f;
    data->d[9] = -1.040570f;
    data->d[10] = 0.715222f;
    data->d[11] = -0.009463f;
    data->d[12] = -1.256570f;
    data->d[13] = -0.781028f;
    data->d[14] = -0.214627f;
    data->d[15] = 2.036440f;
    data->d[16] = 1.464244f;
    data->d[17] = -1.000000f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090658f;
    data->d[1] = -0.613095f;
    data->d[2] = -1.435214f;
    data->d[3] = -0.588150f;
    data->d[4] = -1.980695f;
    data->d[5] = -0.004082f;
    data->d[6] = 0.276275f;
    data->d[7] = -0.686193f;
    data->d[8] = 1.790004f;
    data->d[9] = 0.794192f;
    data->d[10] = 0.920853f;
    data->d[11] = -1.810048f;
    data->d[12] = 0.131787f;
    data->d[13] = 0.230056f;
    data->d[14] = 0.028880f;
    data->d[15] = 0.036867f;
    data->d[16] = -2.028317f;
    data->d[17] = -0.941759f;
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
    *result->MinResult(1) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = -0.845614f;
    data->d[2] = 1.551942f;
    data->d[3] = -0.924699f;
    data->d[4] = -0.559594f;
    data->d[5] = -0.121783f;
    data->d[6] = -0.700325f;
    data->d[7] = 0.005577f;
    data->d[8] = 0.293017f;
    data->d[9] = 0.065473f;
    data->d[10] = -0.746199f;
    data->d[11] = -0.439310f;
    data->d[12] = 0.025129f;
    data->d[13] = -0.596223f;
    data->d[14] = -0.733332f;
    data->d[15] = 0.044860f;
    data->d[16] = 1.183661f;
    data->d[17] = -0.557645f;
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
    *result->MinResult(2) = 0.000000f;
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
    state.m_generation = 700;
    state.m_seed = 3232320650;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
