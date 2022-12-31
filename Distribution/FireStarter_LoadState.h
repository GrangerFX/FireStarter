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
    settings.m_generations = 100;
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
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 1, 21);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 31);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 0, 31);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 1, 0);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141601f;
    data->d[1] = 1.980422f;
    data->d[2] = -0.076629f;
    data->d[3] = 15.444860f;
    data->d[4] = 0.217282f;
    data->d[5] = 0.850587f;
    data->d[6] = -1.161022f;
    data->d[7] = -0.616368f;
    data->d[8] = -0.049151f;
    data->d[9] = 0.264524f;
    data->d[10] = -0.022223f;
    data->d[11] = 8.743617f;
    data->d[12] = -1.745100f;
    data->d[13] = 3.784352f;
    data->d[14] = 0.355048f;
    data->d[15] = 2.579934f;
    data->d[16] = -2.592105f;
    data->d[17] = 1.655781f;
    data->d[18] = 0.000004f;
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
    *result->MinResult(0) = 0.000012f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090668f;
    data->d[1] = 0.852313f;
    data->d[2] = -0.067105f;
    data->d[3] = 3.141776f;
    data->d[4] = 0.789445f;
    data->d[5] = 0.500394f;
    data->d[6] = 0.262346f;
    data->d[7] = -1.922902f;
    data->d[8] = 1.668509f;
    data->d[9] = 0.888448f;
    data->d[10] = -0.008783f;
    data->d[11] = 4.019641f;
    data->d[12] = 0.501070f;
    data->d[13] = -2.346881f;
    data->d[14] = 2.187231f;
    data->d[15] = -0.434221f;
    data->d[16] = -2.753953f;
    data->d[17] = 1.230348f;
    data->d[18] = -0.118129f;
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
    *result->MinResult(1) = 0.000014f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617999f;
    data->d[1] = -0.238260f;
    data->d[2] = 1.387065f;
    data->d[3] = -3.213776f;
    data->d[4] = -0.444468f;
    data->d[5] = 1.176255f;
    data->d[6] = 0.318283f;
    data->d[7] = -1.579542f;
    data->d[8] = -0.659671f;
    data->d[9] = 0.798941f;
    data->d[10] = -0.737945f;
    data->d[11] = -5.737380f;
    data->d[12] = -0.508926f;
    data->d[13] = -1.188234f;
    data->d[14] = -1.820003f;
    data->d[15] = 0.009596f;
    data->d[16] = 0.770923f;
    data->d[17] = 0.994256f;
    data->d[18] = 0.523598f;
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
    *result->MinResult(2) = 0.000017f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000017f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 43;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
