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
    settings.m_processes = 16;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 8;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 1, 11);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 1, 17);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 31);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 1, 16);
    instructions->SetOperation(8, 0, 10);
    instructions->SetOperation(9, 1, 28);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 1, 6);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 21);
    instructions->SetOperation(14, 1, 0);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 0, 31);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 31);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 31);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 1, 28);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 1, 26);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -2.470027f;
    data->d[1] = -1.344662f;
    data->d[2] = 0.708682f;
    data->d[3] = 0.640237f;
    data->d[4] = 0.302501f;
    data->d[5] = 0.720766f;
    data->d[6] = -0.191941f;
    data->d[7] = -0.021207f;
    data->d[8] = 0.870575f;
    data->d[9] = 1.263226f;
    data->d[10] = 0.102172f;
    data->d[11] = -1.509216f;
    data->d[12] = 5.674718f;
    data->d[13] = 1.060714f;
    data->d[14] = 1.618033f;
    data->d[15] = 3.380643f;
    data->d[16] = 0.692032f;
    data->d[17] = -6.265846f;
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
    *result->MinResult(0) = 0.000017f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.548987f;
    data->d[1] = -3.452805f;
    data->d[2] = 0.338144f;
    data->d[3] = -0.055739f;
    data->d[4] = 0.644586f;
    data->d[5] = 0.648536f;
    data->d[6] = -0.504501f;
    data->d[7] = 0.020273f;
    data->d[8] = 0.654854f;
    data->d[9] = 0.206008f;
    data->d[10] = 0.045627f;
    data->d[11] = -1.649240f;
    data->d[12] = -2.936647f;
    data->d[13] = -0.044523f;
    data->d[14] = -11.235161f;
    data->d[15] = -0.975855f;
    data->d[16] = 2.947472f;
    data->d[17] = -2.553235f;
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
    *result->MinResult(1) = 0.000027f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -3.533222f;
    data->d[1] = -0.518715f;
    data->d[2] = 0.205015f;
    data->d[3] = 0.770997f;
    data->d[4] = 0.722264f;
    data->d[5] = -0.321170f;
    data->d[6] = 1.496838f;
    data->d[7] = 0.052545f;
    data->d[8] = 0.960245f;
    data->d[9] = -0.052005f;
    data->d[10] = 1.537203f;
    data->d[11] = -2.306301f;
    data->d[12] = -0.379229f;
    data->d[13] = 0.340813f;
    data->d[14] = -1.846215f;
    data->d[15] = 0.952784f;
    data->d[16] = -3.918122f;
    data->d[17] = 4.918252f;
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
    *result->MinResult(2) = 0.000048f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000048f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 62;
    state.m_index = 8;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
