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
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 18);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 1, 20);
    instructions->SetOperation(4, 1, 9);
    instructions->SetOperation(5, 0, 8);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 1, 25);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 26);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 1, 31);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 1, 11);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 1, 21);
    instructions->SetOperation(27, 1, 31);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.429873f;
    data->d[1] = 0.427575f;
    data->d[2] = 0.752230f;
    data->d[3] = -0.268018f;
    data->d[4] = -0.038358f;
    data->d[5] = -1.269860f;
    data->d[6] = -4.303643f;
    data->d[7] = 0.514418f;
    data->d[8] = 2.399602f;
    data->d[9] = 0.313265f;
    data->d[10] = -1.108619f;
    data->d[11] = -0.236463f;
    data->d[12] = 2.640407f;
    data->d[13] = -1.023588f;
    data->d[14] = -0.613416f;
    data->d[15] = -1.556524f;
    data->d[16] = 0.376745f;
    data->d[17] = 0.418745f;
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
    *result->MinResult(0) = 0.000085f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.923764f;
    data->d[1] = 0.420245f;
    data->d[2] = 0.934264f;
    data->d[3] = 1.577414f;
    data->d[4] = 0.449202f;
    data->d[5] = 0.380613f;
    data->d[6] = -7.184295f;
    data->d[7] = 0.026509f;
    data->d[8] = 0.157609f;
    data->d[9] = -0.649528f;
    data->d[10] = -0.970721f;
    data->d[11] = 0.161934f;
    data->d[12] = -1.069377f;
    data->d[13] = -1.106903f;
    data->d[14] = -0.253797f;
    data->d[15] = -0.282908f;
    data->d[16] = 0.840369f;
    data->d[17] = -0.907629f;
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
    *result->MinResult(1) = 0.000089f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.284297f;
    data->d[1] = 0.915567f;
    data->d[2] = 0.366344f;
    data->d[3] = 0.559127f;
    data->d[4] = -0.284502f;
    data->d[5] = -1.212637f;
    data->d[6] = 0.849230f;
    data->d[7] = 11.036868f;
    data->d[8] = -0.303145f;
    data->d[9] = -1.534087f;
    data->d[10] = 0.883116f;
    data->d[11] = -0.100129f;
    data->d[12] = -1.509749f;
    data->d[13] = -0.431624f;
    data->d[14] = 0.035474f;
    data->d[15] = 0.338106f;
    data->d[16] = 2.471700f;
    data->d[17] = -0.582962f;
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
    *result->MinResult(2) = 0.000140f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000140f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 9;
    state.m_index = 79;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
