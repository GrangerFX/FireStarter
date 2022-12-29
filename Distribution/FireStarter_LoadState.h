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
    settings.m_units = 8;
    settings.m_processes = 16;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 1000;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 11000;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 4);
    instructions->SetOperation(2, 1, 15);
    instructions->SetOperation(3, 1, 20);
    instructions->SetOperation(4, 1, 0);
    instructions->SetOperation(5, 1, 8);
    instructions->SetOperation(6, 1, 30);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 0, 20);
    instructions->SetOperation(10, 1, 30);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 0, 30);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.999610f;
    data->d[1] = 0.271826f;
    data->d[2] = -0.222395f;
    data->d[3] = 1.376755f;
    data->d[4] = -0.794926f;
    data->d[5] = 0.710742f;
    data->d[6] = -0.772844f;
    data->d[7] = -0.489390f;
    data->d[8] = 1.132122f;
    data->d[9] = -0.542012f;
    data->d[10] = 1.054756f;
    data->d[11] = 1.512236f;
    data->d[12] = -0.239186f;
    data->d[13] = -3.483133f;
    data->d[14] = -0.016839f;
    data->d[15] = -0.731724f;
    data->d[16] = -1.141858f;
    data->d[17] = -0.015120f;
    data->d[18] = -0.874726f;
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
    *result->MinResult(0) = 0.000029f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.357208f;
    data->d[1] = 0.302395f;
    data->d[2] = -1.057614f;
    data->d[3] = -1.221434f;
    data->d[4] = 0.721208f;
    data->d[5] = -0.328365f;
    data->d[6] = -1.445716f;
    data->d[7] = 0.445304f;
    data->d[8] = 2.209419f;
    data->d[9] = -0.365483f;
    data->d[10] = 0.293300f;
    data->d[11] = 1.454934f;
    data->d[12] = -0.126362f;
    data->d[13] = -4.781540f;
    data->d[14] = -0.742803f;
    data->d[15] = 0.570789f;
    data->d[16] = 0.579905f;
    data->d[17] = -0.587573f;
    data->d[18] = -0.517903f;
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
    *result->MinResult(1) = 0.000028f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.080848f;
    data->d[1] = 0.569446f;
    data->d[2] = 3.724564f;
    data->d[3] = -3.381402f;
    data->d[4] = 0.649092f;
    data->d[5] = -0.026618f;
    data->d[6] = -0.378695f;
    data->d[7] = -0.279457f;
    data->d[8] = 0.690648f;
    data->d[9] = -0.022527f;
    data->d[10] = -2.174829f;
    data->d[11] = -0.132762f;
    data->d[12] = -0.040751f;
    data->d[13] = -2.705594f;
    data->d[14] = -2.195339f;
    data->d[15] = -1.758466f;
    data->d[16] = -0.228289f;
    data->d[17] = -0.374747f;
    data->d[18] = 1.319264f;
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
    *result->MinResult(2) = 0.000046f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000046f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 11;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
