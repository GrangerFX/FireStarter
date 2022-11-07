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
    settings.m_units = 8;
    settings.m_processes = 8;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
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
    program.m_uniqueRegisters = 15;

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 1);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 1, 7);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 1, 5);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 1, 6);
    instructions->SetOperation(26, 1, 1);
    instructions->SetOperation(27, 1, 0);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 1, 12);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 1, 4);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.144608f;
    data->d[1] = -0.975296f;
    data->d[2] = 0.304501f;
    data->d[3] = -7.417940f;
    data->d[4] = 0.000873f;
    data->d[5] = 0.007397f;
    data->d[6] = -0.056434f;
    data->d[7] = -3.463925f;
    data->d[8] = 0.006230f;
    data->d[9] = -0.075054f;
    data->d[10] = 1.830595f;
    data->d[11] = 3.097453f;
    data->d[12] = 0.668638f;
    data->d[13] = 0.191305f;
    data->d[14] = 0.706005f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.000000f;
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
    *result->MinResult(0) = 0.000057f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.982483f;
    data->d[1] = -1.031599f;
    data->d[2] = 1.184416f;
    data->d[3] = 0.860210f;
    data->d[4] = 0.000325f;
    data->d[5] = -0.064064f;
    data->d[6] = 0.765659f;
    data->d[7] = 1.717572f;
    data->d[8] = 0.014952f;
    data->d[9] = -1.846920f;
    data->d[10] = 0.132115f;
    data->d[11] = 1.107678f;
    data->d[12] = 1.076274f;
    data->d[13] = 2.833428f;
    data->d[14] = -0.082070f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.000000f;
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
    *result->MinResult(1) = 0.000092f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.954197f;
    data->d[1] = -1.037118f;
    data->d[2] = 0.800100f;
    data->d[3] = 4.931274f;
    data->d[4] = -1.323484f;
    data->d[5] = -0.506235f;
    data->d[6] = -0.770603f;
    data->d[7] = -0.734864f;
    data->d[8] = 0.456345f;
    data->d[9] = -0.792445f;
    data->d[10] = 0.373267f;
    data->d[11] = -0.625022f;
    data->d[12] = -1.230175f;
    data->d[13] = 0.704695f;
    data->d[14] = 1.071132f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.000000f;
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
    *result->MinResult(2) = 0.000047f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000092f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 20;
    state.m_index = 4;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
