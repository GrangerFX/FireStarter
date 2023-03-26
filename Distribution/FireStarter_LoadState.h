#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_units = 8;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 21);
    instructions->SetOperation(2, 1, 11);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 1, 26);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 0, 11);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 1, 49);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 1, 25);
    instructions->SetOperation(11, 1, 19);
    instructions->SetOperation(12, 0, 41);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 1, 20);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 1, 28);
    instructions->SetOperation(17, 1, 47);
    instructions->SetOperation(18, 0, 40);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 0, 42);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 1, 23);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 1, 61);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 44);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.804383f;
    data->d[1] = -0.553600f;
    data->d[2] = -2.060465f;
    data->d[3] = -1.349060f;
    data->d[4] = -0.778472f;
    data->d[5] = -0.453900f;
    data->d[6] = 4.440900f;
    data->d[7] = -0.003746f;
    data->d[8] = -0.299932f;
    data->d[9] = 0.220647f;
    data->d[10] = -2.572462f;
    data->d[11] = -1.163975f;
    data->d[12] = -27.120977f;
    data->d[13] = -3.115120f;
    data->d[14] = -0.000617f;
    data->d[15] = 1.096564f;
    data->d[16] = 1.101274f;
    data->d[17] = -1.132924f;
    data->d[18] = -0.512909f;
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
    *(result->MinResult()) = 0.000052f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.728874f;
    data->d[1] = -0.381191f;
    data->d[2] = -1.724440f;
    data->d[3] = -1.229096f;
    data->d[4] = -0.715783f;
    data->d[5] = 0.056743f;
    data->d[6] = 0.813991f;
    data->d[7] = 0.001528f;
    data->d[8] = -0.818593f;
    data->d[9] = 0.895050f;
    data->d[10] = 2.807842f;
    data->d[11] = 0.827055f;
    data->d[12] = 3.106262f;
    data->d[13] = 0.354830f;
    data->d[14] = 0.001175f;
    data->d[15] = 0.867732f;
    data->d[16] = 0.001809f;
    data->d[17] = -1.986919f;
    data->d[18] = -0.010019f;
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
    *(result->MinResult()) = 0.000119f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.471452f;
    data->d[1] = -0.803588f;
    data->d[2] = 0.152095f;
    data->d[3] = -0.424440f;
    data->d[4] = 0.440647f;
    data->d[5] = -0.421964f;
    data->d[6] = 2.129454f;
    data->d[7] = -0.436040f;
    data->d[8] = -0.104782f;
    data->d[9] = -0.268726f;
    data->d[10] = -0.713377f;
    data->d[11] = -3.263038f;
    data->d[12] = 0.057457f;
    data->d[13] = -2.438585f;
    data->d[14] = 0.202097f;
    data->d[15] = -0.815332f;
    data->d[16] = 0.490339f;
    data->d[17] = 0.840495f;
    data->d[18] = -0.999598f;
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
    *(result->MinResult()) = 0.000144f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000144f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 255;
    state.m_index = 0;
    state.m_test = 90;
    state.m_seed = 13693257720931564479;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
