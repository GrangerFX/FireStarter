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
    settings.m_seed = 2;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 6);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 1, 11);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 1, 18);
    instructions->SetOperation(10, 1, 3);
    instructions->SetOperation(11, 1, 22);
    instructions->SetOperation(12, 1, 31);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 0, 31);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 1, 18);
    instructions->SetOperation(21, 0, 29);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 29);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 0, 31);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.661271f;
    data->d[1] = 1.376013f;
    data->d[2] = 0.618541f;
    data->d[3] = -0.857132f;
    data->d[4] = 0.701119f;
    data->d[5] = 1.371641f;
    data->d[6] = -0.814010f;
    data->d[7] = -0.786963f;
    data->d[8] = -0.396687f;
    data->d[9] = -0.729175f;
    data->d[10] = 1.466120f;
    data->d[11] = 0.751997f;
    data->d[12] = 0.683781f;
    data->d[13] = 0.033321f;
    data->d[14] = -0.179117f;
    data->d[15] = 0.319621f;
    data->d[16] = -0.820161f;
    data->d[17] = 0.619580f;
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
    *result->MinResult(0) = 0.000090f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.590424f;
    data->d[1] = -0.831329f;
    data->d[2] = -0.083210f;
    data->d[3] = 3.270222f;
    data->d[4] = -0.823526f;
    data->d[5] = -1.221420f;
    data->d[6] = -4.223900f;
    data->d[7] = 0.005781f;
    data->d[8] = 0.739981f;
    data->d[9] = 0.709926f;
    data->d[10] = -1.295305f;
    data->d[11] = -0.246158f;
    data->d[12] = -3.029628f;
    data->d[13] = -0.025824f;
    data->d[14] = 1.084740f;
    data->d[15] = 1.426950f;
    data->d[16] = -0.639035f;
    data->d[17] = 1.072130f;
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
    *result->MinResult(1) = 0.000106f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.793806f;
    data->d[1] = 0.794519f;
    data->d[2] = -1.692115f;
    data->d[3] = -0.281153f;
    data->d[4] = 0.763642f;
    data->d[5] = -0.188742f;
    data->d[6] = -0.411764f;
    data->d[7] = -0.370464f;
    data->d[8] = 0.363729f;
    data->d[9] = -0.171733f;
    data->d[10] = -0.029994f;
    data->d[11] = -0.926845f;
    data->d[12] = 1.077542f;
    data->d[13] = 0.001475f;
    data->d[14] = -4.522079f;
    data->d[15] = 0.703958f;
    data->d[16] = -0.118458f;
    data->d[17] = -1.983624f;
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
    *result->MinResult(2) = 0.000196f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000196f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 19;
    state.m_index = 9;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
