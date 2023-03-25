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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_units = 2;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_seed = 1;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 50);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 45);
    instructions->SetOperation(7, 1, 13);
    instructions->SetOperation(8, 0, 22);
    instructions->SetOperation(9, 1, 24);
    instructions->SetOperation(10, 0, 26);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 0, 26);
    instructions->SetOperation(15, 1, 18);
    instructions->SetOperation(16, 0, 38);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 0, 37);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 1, 29);
    instructions->SetOperation(22, 0, 11);
    instructions->SetOperation(23, 1, 4);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 1, 11);
    instructions->SetOperation(28, 0, 37);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 0, 24);
    instructions->SetOperation(31, 1, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.243894f;
    data->d[1] = 1.533808f;
    data->d[2] = -2.386651f;
    data->d[3] = 0.464377f;
    data->d[4] = -1.074636f;
    data->d[5] = 1.354949f;
    data->d[6] = 0.003626f;
    data->d[7] = 1.859202f;
    data->d[8] = 1.214569f;
    data->d[9] = -1.390064f;
    data->d[10] = -4.714039f;
    data->d[11] = 2.922288f;
    data->d[12] = 3.098662f;
    data->d[13] = -1.469446f;
    data->d[14] = -4.125080f;
    data->d[15] = -0.530217f;
    data->d[16] = 1.179842f;
    data->d[17] = 1.287700f;
    data->d[18] = -0.847523f;
    data->d[19] = 0.057774f;
    data->d[20] = -0.107763f;
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
    *(result->MinResult()) = 0.000080f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.355083f;
    data->d[1] = 1.447656f;
    data->d[2] = -0.488470f;
    data->d[3] = -0.117554f;
    data->d[4] = 1.239607f;
    data->d[5] = -1.731361f;
    data->d[6] = 1.390927f;
    data->d[7] = -0.403798f;
    data->d[8] = 0.042387f;
    data->d[9] = 2.759038f;
    data->d[10] = -0.154205f;
    data->d[11] = -0.787104f;
    data->d[12] = -0.445637f;
    data->d[13] = 3.088189f;
    data->d[14] = -6.404751f;
    data->d[15] = -2.382905f;
    data->d[16] = -1.387794f;
    data->d[17] = -0.044427f;
    data->d[18] = 0.716122f;
    data->d[19] = -0.339944f;
    data->d[20] = -0.103419f;
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
    *(result->MinResult()) = 0.000252f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.101914f;
    data->d[1] = -0.354437f;
    data->d[2] = 2.426332f;
    data->d[3] = -0.109972f;
    data->d[4] = 1.744581f;
    data->d[5] = 0.409543f;
    data->d[6] = 1.085281f;
    data->d[7] = 1.222365f;
    data->d[8] = -0.358577f;
    data->d[9] = -2.261681f;
    data->d[10] = -0.154072f;
    data->d[11] = -1.490386f;
    data->d[12] = 0.384047f;
    data->d[13] = 0.461888f;
    data->d[14] = -0.430818f;
    data->d[15] = 1.446801f;
    data->d[16] = -0.658992f;
    data->d[17] = -0.640468f;
    data->d[18] = -1.875335f;
    data->d[19] = -0.637421f;
    data->d[20] = 1.062762f;
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
    *(result->MinResult()) = 0.000288f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000288f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 29;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 6146874008622003375;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
