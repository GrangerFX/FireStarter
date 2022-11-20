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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 17408;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 1;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 31);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 31);
    instructions->SetOperation(24, 1, 31);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 0, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.735902f;
    data->d[1] = -1.267927f;
    data->d[2] = -2.602717f;
    data->d[3] = 0.579471f;
    data->d[4] = 0.769776f;
    data->d[5] = 0.264141f;
    data->d[6] = 5.618546f;
    data->d[7] = 0.579738f;
    data->d[8] = -0.421231f;
    data->d[9] = 0.070018f;
    data->d[10] = -2.600740f;
    data->d[11] = 0.353466f;
    data->d[12] = 0.836456f;
    data->d[13] = -0.585293f;
    data->d[14] = 0.769026f;
    data->d[15] = 3.325090f;
    data->d[16] = -0.588527f;
    data->d[17] = -8.996612f;
    data->d[18] = -0.780579f;
    data->d[19] = 3.328945f;
    data->d[20] = -7.504484f;
    data->d[21] = -3.457000f;
    data->d[22] = -0.450672f;
    data->d[23] = -2.104439f;
    data->d[24] = 0.125174f;
    data->d[25] = -0.392845f;
    data->d[26] = 0.622203f;
    data->d[27] = -0.536684f;
    data->d[28] = 0.523280f;
    data->d[29] = -0.130256f;
    data->d[30] = 7.258570f;
    data->d[31] = -0.021930f;
    *result->MinResult(0) = 0.014021f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.112562f;
    data->d[1] = 0.034002f;
    data->d[2] = -0.143813f;
    data->d[3] = 1.247748f;
    data->d[4] = 0.323053f;
    data->d[5] = -1.113837f;
    data->d[6] = 0.138450f;
    data->d[7] = 0.296102f;
    data->d[8] = 0.836522f;
    data->d[9] = 0.863765f;
    data->d[10] = 0.396142f;
    data->d[11] = -0.597286f;
    data->d[12] = -1.652320f;
    data->d[13] = -2.783697f;
    data->d[14] = 0.261446f;
    data->d[15] = 4.082424f;
    data->d[16] = 2.061762f;
    data->d[17] = 0.479582f;
    data->d[18] = 0.894260f;
    data->d[19] = 0.753364f;
    data->d[20] = -0.939888f;
    data->d[21] = 0.122452f;
    data->d[22] = 1.078833f;
    data->d[23] = 0.082703f;
    data->d[24] = -0.256509f;
    data->d[25] = -0.240974f;
    data->d[26] = -0.132891f;
    data->d[27] = 0.910408f;
    data->d[28] = -0.617742f;
    data->d[29] = -0.369473f;
    data->d[30] = -0.469272f;
    data->d[31] = -0.697507f;
    *result->MinResult(1) = 0.015783f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.465465f;
    data->d[1] = 1.085366f;
    data->d[2] = 0.653394f;
    data->d[3] = 0.489668f;
    data->d[4] = -1.383253f;
    data->d[5] = -2.554617f;
    data->d[6] = 1.454122f;
    data->d[7] = -0.126171f;
    data->d[8] = 0.141958f;
    data->d[9] = 0.588030f;
    data->d[10] = -2.080455f;
    data->d[11] = -0.355601f;
    data->d[12] = -2.428908f;
    data->d[13] = 0.539444f;
    data->d[14] = -0.256960f;
    data->d[15] = -0.535949f;
    data->d[16] = -0.051756f;
    data->d[17] = 0.760058f;
    data->d[18] = 0.321586f;
    data->d[19] = 0.091048f;
    data->d[20] = -1.285487f;
    data->d[21] = -0.195574f;
    data->d[22] = 7.784899f;
    data->d[23] = 0.438614f;
    data->d[24] = 0.302621f;
    data->d[25] = -0.001117f;
    data->d[26] = -0.800019f;
    data->d[27] = -0.483346f;
    data->d[28] = 0.112199f;
    data->d[29] = 1.192351f;
    data->d[30] = 2.164521f;
    data->d[31] = 0.886276f;
    *result->MinResult(2) = 0.011554f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.015783f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 18;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
