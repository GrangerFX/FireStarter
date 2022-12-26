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
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 1, 11);
    instructions->SetOperation(2, 1, 24);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 9);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 22);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 1);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 1, 19);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 1, 30);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 1, 14);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.065980f;
    data->d[1] = -0.075613f;
    data->d[2] = -0.000000f;
    data->d[3] = 0.189680f;
    data->d[4] = 0.745973f;
    data->d[5] = 0.379416f;
    data->d[6] = 2.018703f;
    data->d[7] = 4.540609f;
    data->d[8] = 1.212095f;
    data->d[9] = 0.000788f;
    data->d[10] = -1.453017f;
    data->d[11] = -1.551722f;
    data->d[12] = 1.108799f;
    data->d[13] = -0.670858f;
    data->d[14] = -1.590221f;
    data->d[15] = 0.284051f;
    data->d[16] = 1.661370f;
    data->d[17] = -0.014992f;
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
    *result->MinResult(0) = 0.000000f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.030941f;
    data->d[1] = -1.059732f;
    data->d[2] = 0.000024f;
    data->d[3] = -0.131601f;
    data->d[4] = -0.151347f;
    data->d[5] = 1.836656f;
    data->d[6] = 0.234169f;
    data->d[7] = -11.321939f;
    data->d[8] = 1.322513f;
    data->d[9] = -0.000176f;
    data->d[10] = -0.425364f;
    data->d[11] = -1.224149f;
    data->d[12] = 2.538675f;
    data->d[13] = 0.862143f;
    data->d[14] = -2.161394f;
    data->d[15] = -0.524909f;
    data->d[16] = -0.077316f;
    data->d[17] = 0.727902f;
    data->d[18] = -0.118148f;
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
    *result->MinResult(1) = 0.000003f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.778592f;
    data->d[1] = -1.839401f;
    data->d[2] = -0.000001f;
    data->d[3] = -0.089404f;
    data->d[4] = 1.607431f;
    data->d[5] = 14.749910f;
    data->d[6] = -1.461974f;
    data->d[7] = -0.074908f;
    data->d[8] = 1.671985f;
    data->d[9] = 0.802292f;
    data->d[10] = -0.047424f;
    data->d[11] = -0.687849f;
    data->d[12] = -2.410004f;
    data->d[13] = -0.217232f;
    data->d[14] = 0.119105f;
    data->d[15] = -4.318996f;
    data->d[16] = 2.187643f;
    data->d[17] = -1.186141f;
    data->d[18] = 0.523599f;
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
    *result->MinResult(2) = 0.000004f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000004f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 3533;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
