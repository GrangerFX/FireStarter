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
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 400;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 10484;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 9);
    instructions->SetOperation(4, 1, 29);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 0, 31);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 1, 21);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 31);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 0, 31);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 31);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141592f;
    data->d[1] = 0.343190f;
    data->d[2] = -0.108119f;
    data->d[3] = 1.332396f;
    data->d[4] = -1.412373f;
    data->d[5] = 1.352974f;
    data->d[6] = -2.250207f;
    data->d[7] = -0.047678f;
    data->d[8] = 1.506037f;
    data->d[9] = -1.815159f;
    data->d[10] = 0.286896f;
    data->d[11] = 0.041705f;
    data->d[12] = 1.665210f;
    data->d[13] = 0.381325f;
    data->d[14] = -2.142435f;
    data->d[15] = 0.069538f;
    data->d[16] = 4.358064f;
    data->d[17] = -0.000000f;
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
    data->d[0] = -3.090659f;
    data->d[1] = 0.149640f;
    data->d[2] = -0.454833f;
    data->d[3] = 1.333448f;
    data->d[4] = -1.532599f;
    data->d[5] = 0.731777f;
    data->d[6] = 2.457249f;
    data->d[7] = -0.562146f;
    data->d[8] = -0.344387f;
    data->d[9] = -1.438711f;
    data->d[10] = 1.706471f;
    data->d[11] = 0.028924f;
    data->d[12] = -3.007540f;
    data->d[13] = -2.555573f;
    data->d[14] = -4.582433f;
    data->d[15] = 0.015492f;
    data->d[16] = 0.537215f;
    data->d[17] = -0.118132f;
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
    data->d[1] = -0.444881f;
    data->d[2] = -0.030142f;
    data->d[3] = 1.282504f;
    data->d[4] = 1.625205f;
    data->d[5] = -1.036460f;
    data->d[6] = -0.056638f;
    data->d[7] = -1.111634f;
    data->d[8] = -1.982569f;
    data->d[9] = -1.918084f;
    data->d[10] = -1.140650f;
    data->d[11] = 0.138662f;
    data->d[12] = 0.190893f;
    data->d[13] = -0.373464f;
    data->d[14] = -1.443592f;
    data->d[15] = -0.262693f;
    data->d[16] = -2.597739f;
    data->d[17] = 0.523599f;
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
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 59;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
