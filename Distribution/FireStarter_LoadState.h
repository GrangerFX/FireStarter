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
    settings.m_population = 139264;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 3;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 1, 14);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 1, 16);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 1, 31);
    instructions->SetOperation(9, 0, 3);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 31);
    instructions->SetOperation(14, 0, 31);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 19);
    instructions->SetOperation(22, 1, 30);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 30);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 1, 9);
    instructions->SetOperation(30, 1, 29);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.142417f;
    data->d[1] = -0.942922f;
    data->d[2] = -0.419897f;
    data->d[3] = -0.792734f;
    data->d[4] = -0.018199f;
    data->d[5] = -0.256900f;
    data->d[6] = 1.665767f;
    data->d[7] = -1.292784f;
    data->d[8] = 0.930760f;
    data->d[9] = 0.713200f;
    data->d[10] = 0.826078f;
    data->d[11] = 0.920340f;
    data->d[12] = 0.167372f;
    data->d[13] = -9.756278f;
    data->d[14] = 0.171623f;
    data->d[15] = -7.049608f;
    data->d[16] = -2.707744f;
    data->d[17] = -2.204089f;
    data->d[18] = -0.738815f;
    data->d[19] = 1.035777f;
    data->d[20] = -0.018944f;
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
    *result->MinResult(0) = 0.000013f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.091055f;
    data->d[1] = -1.247745f;
    data->d[2] = 0.383170f;
    data->d[3] = 0.956602f;
    data->d[4] = -0.007733f;
    data->d[5] = 1.091039f;
    data->d[6] = -1.059679f;
    data->d[7] = 0.920452f;
    data->d[8] = 5.016404f;
    data->d[9] = -0.848440f;
    data->d[10] = -0.422388f;
    data->d[11] = 0.110030f;
    data->d[12] = -0.758953f;
    data->d[13] = 1.111690f;
    data->d[14] = -1.011663f;
    data->d[15] = 1.460417f;
    data->d[16] = -0.107935f;
    data->d[17] = 0.496490f;
    data->d[18] = 6.728162f;
    data->d[19] = -0.283277f;
    data->d[20] = -0.015730f;
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
    *result->MinResult(1) = 0.000019f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.623918f;
    data->d[1] = 1.026693f;
    data->d[2] = -0.344365f;
    data->d[3] = 0.701777f;
    data->d[4] = 0.155541f;
    data->d[5] = 0.218177f;
    data->d[6] = -0.869071f;
    data->d[7] = 0.578129f;
    data->d[8] = 0.297552f;
    data->d[9] = 0.117070f;
    data->d[10] = -0.238907f;
    data->d[11] = -4.241571f;
    data->d[12] = -64.235298f;
    data->d[13] = 5.296363f;
    data->d[14] = 0.134733f;
    data->d[15] = -1.213583f;
    data->d[16] = -5.148105f;
    data->d[17] = -0.097224f;
    data->d[18] = 3.899148f;
    data->d[19] = 9.097481f;
    data->d[20] = 0.039227f;
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
    *result->MinResult(2) = 0.000045f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000045f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 58;
    state.m_index = 3;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
