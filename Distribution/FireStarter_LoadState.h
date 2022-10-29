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
    settings.m_units = 2;
    settings.m_processes = 6;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10000;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_uniqueRegisters = 20;

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 1);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 1, 5);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 8);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 1, 18);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 1, 0);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.142554f;
    data->d[1] = -0.078938f;
    data->d[2] = -0.307634f;
    data->d[3] = 0.467996f;
    data->d[4] = 0.146551f;
    data->d[5] = -0.606749f;
    data->d[6] = -6.866601f;
    data->d[7] = 0.574887f;
    data->d[8] = -4.444364f;
    data->d[9] = -0.005410f;
    data->d[10] = 0.336723f;
    data->d[11] = -0.035992f;
    data->d[12] = -1.272179f;
    data->d[13] = 4.701530f;
    data->d[14] = -0.475232f;
    data->d[15] = -13.766085f;
    data->d[16] = -1.677306f;
    data->d[17] = 0.010050f;
    data->d[18] = -2.505003f;
    data->d[19] = 2.510612f;
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
    *result->MinResult(0) = 0.000021f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.077223f;
    data->d[1] = -1.704141f;
    data->d[2] = 2.775140f;
    data->d[3] = 0.598128f;
    data->d[4] = -0.000291f;
    data->d[5] = -0.878401f;
    data->d[6] = 0.520345f;
    data->d[7] = -35.229088f;
    data->d[8] = 2.637032f;
    data->d[9] = 0.000340f;
    data->d[10] = -0.200436f;
    data->d[11] = -0.897335f;
    data->d[12] = -2.183610f;
    data->d[13] = -0.019132f;
    data->d[14] = 0.200561f;
    data->d[15] = 0.247440f;
    data->d[16] = -2.336583f;
    data->d[17] = -1.011183f;
    data->d[18] = 3.784312f;
    data->d[19] = -3.904038f;
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
    *result->MinResult(1) = 0.000033f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.619644f;
    data->d[1] = -0.214845f;
    data->d[2] = 0.503058f;
    data->d[3] = -0.069452f;
    data->d[4] = 0.206954f;
    data->d[5] = -0.466465f;
    data->d[6] = -4.730109f;
    data->d[7] = -2.457065f;
    data->d[8] = -1.198896f;
    data->d[9] = 0.333745f;
    data->d[10] = 1.815870f;
    data->d[11] = -5.339398f;
    data->d[12] = 36.940514f;
    data->d[13] = 0.207188f;
    data->d[14] = 0.073347f;
    data->d[15] = 0.398510f;
    data->d[16] = -0.327609f;
    data->d[17] = 0.306012f;
    data->d[18] = 0.506035f;
    data->d[19] = -0.128692f;
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
    state.m_generation = 647;
    state.m_bestIndex = 10055;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
