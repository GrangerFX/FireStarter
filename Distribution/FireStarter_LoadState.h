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
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 1, 16);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 1, 22);
    instructions->SetOperation(7, 1, 12);
    instructions->SetOperation(8, 1, 28);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 17);
    instructions->SetOperation(12, 1, 31);
    instructions->SetOperation(13, 0, 21);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 0, 31);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 1, 18);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.886991f;
    data->d[1] = -1.232733f;
    data->d[2] = 0.391740f;
    data->d[3] = 1.737866f;
    data->d[4] = 0.097253f;
    data->d[5] = -0.490015f;
    data->d[6] = 1.746927f;
    data->d[7] = -2.134725f;
    data->d[8] = 0.020082f;
    data->d[9] = -1.699746f;
    data->d[10] = -2.009010f;
    data->d[11] = 0.179997f;
    data->d[12] = -2.612287f;
    data->d[13] = 0.583620f;
    data->d[14] = -0.560161f;
    data->d[15] = -1.123610f;
    data->d[16] = -0.070885f;
    data->d[17] = 0.182921f;
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
    *result->MinResult(0) = 0.000149f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.848000f;
    data->d[1] = -0.584984f;
    data->d[2] = 0.180094f;
    data->d[3] = 0.582442f;
    data->d[4] = 1.185235f;
    data->d[5] = -0.012552f;
    data->d[6] = 0.371581f;
    data->d[7] = -0.007790f;
    data->d[8] = 0.082595f;
    data->d[9] = -0.669327f;
    data->d[10] = -2.934038f;
    data->d[11] = 1.316068f;
    data->d[12] = 0.527145f;
    data->d[13] = 0.372014f;
    data->d[14] = 1.391989f;
    data->d[15] = 1.680665f;
    data->d[16] = 0.198066f;
    data->d[17] = -0.002158f;
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
    *result->MinResult(1) = 0.000091f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.006458f;
    data->d[1] = -1.169688f;
    data->d[2] = 0.470431f;
    data->d[3] = 1.832065f;
    data->d[4] = 0.127823f;
    data->d[5] = -2.294668f;
    data->d[6] = -0.010424f;
    data->d[7] = 1.722607f;
    data->d[8] = -0.013526f;
    data->d[9] = 0.389938f;
    data->d[10] = 0.107305f;
    data->d[11] = -0.057417f;
    data->d[12] = 0.803392f;
    data->d[13] = 6.763666f;
    data->d[14] = 2.208019f;
    data->d[15] = 0.320400f;
    data->d[16] = -0.305008f;
    data->d[17] = 1.180243f;
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
    *result->MinResult(2) = 0.000322f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000322f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 0;
    state.m_index = 24;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
