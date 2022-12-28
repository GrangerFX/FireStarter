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
    instructions->SetOperation(0, 0, 15);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 29);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 11);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 1, 26);
    instructions->SetOperation(29, 1, 29);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.700225f;
    data->d[1] = -2.932656f;
    data->d[2] = 0.252897f;
    data->d[3] = 2.092485f;
    data->d[4] = 2.049924f;
    data->d[5] = -0.000002f;
    data->d[6] = -1.158680f;
    data->d[7] = 1.158673f;
    data->d[8] = 2.010513f;
    data->d[9] = 0.055385f;
    data->d[10] = -1.904785f;
    data->d[11] = -1.215684f;
    data->d[12] = -0.402051f;
    data->d[13] = 0.684363f;
    data->d[14] = -0.302801f;
    data->d[15] = -0.015359f;
    data->d[16] = 1.136192f;
    data->d[17] = 0.656237f;
    data->d[18] = 0.652748f;
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
    *result->MinResult(0) = 0.000020f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.214922f;
    data->d[1] = -0.276393f;
    data->d[2] = -1.852255f;
    data->d[3] = -1.699497f;
    data->d[4] = -0.268571f;
    data->d[5] = 1.398161f;
    data->d[6] = -0.972902f;
    data->d[7] = -1.912639f;
    data->d[8] = 0.085536f;
    data->d[9] = 0.242825f;
    data->d[10] = 0.016895f;
    data->d[11] = 2.229884f;
    data->d[12] = 0.709744f;
    data->d[13] = 1.004474f;
    data->d[14] = -1.310242f;
    data->d[15] = -0.255635f;
    data->d[16] = 1.209051f;
    data->d[17] = 2.543858f;
    data->d[18] = -1.722777f;
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
    *result->MinResult(1) = 0.000035f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.705589f;
    data->d[1] = -1.607273f;
    data->d[2] = -0.881423f;
    data->d[3] = -1.416674f;
    data->d[4] = -1.674817f;
    data->d[5] = 0.081603f;
    data->d[6] = -0.517409f;
    data->d[7] = -1.438736f;
    data->d[8] = 1.245799f;
    data->d[9] = -0.885253f;
    data->d[10] = 0.014116f;
    data->d[11] = 1.768990f;
    data->d[12] = -1.900590f;
    data->d[13] = 0.008685f;
    data->d[14] = -0.645888f;
    data->d[15] = -1.182954f;
    data->d[16] = 1.405352f;
    data->d[17] = -0.197094f;
    data->d[18] = 2.304634f;
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
    *result->MinResult(2) = 0.000033f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000035f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 8;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
