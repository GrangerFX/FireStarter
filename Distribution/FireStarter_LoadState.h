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
    instructions->SetOperation(0, 0, 2);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 1, 9);
    instructions->SetOperation(3, 0, 29);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 25);
    instructions->SetOperation(6, 0, 31);
    instructions->SetOperation(7, 0, 15);
    instructions->SetOperation(8, 1, 15);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 1, 16);
    instructions->SetOperation(12, 1, 23);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 0, 5);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 29);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 1, 27);
    instructions->SetOperation(21, 1, 6);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 0, 6);
    instructions->SetOperation(27, 1, 15);
    instructions->SetOperation(28, 0, 30);
    instructions->SetOperation(29, 1, 13);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 0, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.156104f;
    data->d[1] = -0.303556f;
    data->d[2] = -0.074823f;
    data->d[3] = -0.972923f;
    data->d[4] = 0.045603f;
    data->d[5] = -2.497505f;
    data->d[6] = 0.047584f;
    data->d[7] = 0.994214f;
    data->d[8] = 1.010299f;
    data->d[9] = 2.003984f;
    data->d[10] = 0.156039f;
    data->d[11] = -1.386678f;
    data->d[12] = 0.673655f;
    data->d[13] = -0.177038f;
    data->d[14] = 1.423324f;
    data->d[15] = -0.447287f;
    data->d[16] = -2.410287f;
    data->d[17] = 7.648921f;
    data->d[18] = 5.200958f;
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
    *result->MinResult(0) = 0.000073f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 2.364197f;
    data->d[1] = -0.822012f;
    data->d[2] = -1.695142f;
    data->d[3] = 0.019865f;
    data->d[4] = -0.270135f;
    data->d[5] = 0.097278f;
    data->d[6] = -3.041115f;
    data->d[7] = 0.001241f;
    data->d[8] = -0.318986f;
    data->d[9] = 0.973277f;
    data->d[10] = -0.667944f;
    data->d[11] = 3.388222f;
    data->d[12] = -0.386272f;
    data->d[13] = -0.599509f;
    data->d[14] = 1.850951f;
    data->d[15] = -2.351894f;
    data->d[16] = -6.645928f;
    data->d[17] = 0.530600f;
    data->d[18] = 0.392633f;
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
    *result->MinResult(1) = 0.000046f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.224360f;
    data->d[1] = 0.494626f;
    data->d[2] = 2.197961f;
    data->d[3] = -0.081566f;
    data->d[4] = -0.051672f;
    data->d[5] = -0.321365f;
    data->d[6] = -4.600477f;
    data->d[7] = -0.001724f;
    data->d[8] = 0.000921f;
    data->d[9] = 0.320631f;
    data->d[10] = 1.116644f;
    data->d[11] = -1.495514f;
    data->d[12] = -0.901808f;
    data->d[13] = -1.078511f;
    data->d[14] = -0.447390f;
    data->d[15] = 1.893898f;
    data->d[16] = 2.499030f;
    data->d[17] = 1.391010f;
    data->d[18] = 0.915117f;
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
    *result->MinResult(2) = 0.000076f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000076f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 21;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
