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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_units = 10;
    settings.m_processes = 10;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 20);
    instructions->SetOperation(1, 1, 24);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 1, 31);
    instructions->SetOperation(5, 1, 2);
    instructions->SetOperation(6, 1, 25);
    instructions->SetOperation(7, 1, 27);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 1, 29);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 30);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 14);
    instructions->SetOperation(16, 1, 4);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 1, 16);
    instructions->SetOperation(20, 1, 31);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 1, 2);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 14);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 1, 31);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 27);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 1, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.403547f;
    data->d[1] = 1.244231f;
    data->d[2] = -0.715569f;
    data->d[3] = 0.210979f;
    data->d[4] = 0.979635f;
    data->d[5] = -0.730870f;
    data->d[6] = 0.839936f;
    data->d[7] = -1.014459f;
    data->d[8] = -0.505268f;
    data->d[9] = -0.140339f;
    data->d[10] = -1.285085f;
    data->d[11] = -0.142404f;
    data->d[12] = -4.743786f;
    data->d[13] = 1.161335f;
    data->d[14] = -0.043769f;
    data->d[15] = 0.437632f;
    data->d[16] = -2.262793f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(0) = 0.000305f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.400458f;
    data->d[1] = -1.697711f;
    data->d[2] = -0.685677f;
    data->d[3] = 0.755207f;
    data->d[4] = -0.704224f;
    data->d[5] = 3.044484f;
    data->d[6] = -2.756483f;
    data->d[7] = -1.178971f;
    data->d[8] = -1.253179f;
    data->d[9] = -1.628097f;
    data->d[10] = -0.573383f;
    data->d[11] = -0.202968f;
    data->d[12] = 1.048895f;
    data->d[13] = -0.493004f;
    data->d[14] = 0.186050f;
    data->d[15] = -2.145501f;
    data->d[16] = 2.082461f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(1) = 0.000155f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.719772f;
    data->d[1] = -1.430942f;
    data->d[2] = -0.350248f;
    data->d[3] = -1.883549f;
    data->d[4] = -0.049879f;
    data->d[5] = -0.163753f;
    data->d[6] = -0.699643f;
    data->d[7] = 2.216959f;
    data->d[8] = 0.513353f;
    data->d[9] = 0.466723f;
    data->d[10] = -0.380428f;
    data->d[11] = -2.362794f;
    data->d[12] = 0.554513f;
    data->d[13] = -1.063010f;
    data->d[14] = 0.179847f;
    data->d[15] = -0.447180f;
    data->d[16] = 2.019285f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(2) = 0.000314f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000314f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 1;
    state.m_index = 15;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
