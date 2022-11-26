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

    settings.m_mode = FIRESTARTER_UNIT;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 3;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.783796f;
    data->d[1] = -0.175169f;
    data->d[2] = 0.411123f;
    data->d[3] = 0.604460f;
    data->d[4] = -1.080370f;
    data->d[5] = -0.430980f;
    data->d[6] = -0.498559f;
    data->d[7] = -0.291920f;
    data->d[8] = 3.391081f;
    data->d[9] = -0.205772f;
    data->d[10] = 0.141097f;
    data->d[11] = 0.032775f;
    data->d[12] = -0.782717f;
    data->d[13] = -0.396047f;
    data->d[14] = -4.451014f;
    data->d[15] = 1.467285f;
    data->d[16] = -0.010163f;
    data->d[17] = 0.095051f;
    data->d[18] = 0.934196f;
    data->d[19] = 0.440157f;
    data->d[20] = -0.477112f;
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
    data->d[0] = -0.809516f;
    data->d[1] = -0.576135f;
    data->d[2] = -0.370673f;
    data->d[3] = 0.687124f;
    data->d[4] = -0.424245f;
    data->d[5] = 0.310212f;
    data->d[6] = -0.183737f;
    data->d[7] = 0.584260f;
    data->d[8] = 0.984301f;
    data->d[9] = -0.678545f;
    data->d[10] = -4.624993f;
    data->d[11] = -0.775918f;
    data->d[12] = 1.692102f;
    data->d[13] = -1.678134f;
    data->d[14] = 4.693487f;
    data->d[15] = 0.022766f;
    data->d[16] = 0.370345f;
    data->d[17] = -0.566380f;
    data->d[18] = -0.663123f;
    data->d[19] = 0.391246f;
    data->d[20] = -0.214325f;
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
    *result->MinResult(1) = 0.000338f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.827971f;
    data->d[1] = -0.307925f;
    data->d[2] = -0.431404f;
    data->d[3] = 1.226791f;
    data->d[4] = -1.161676f;
    data->d[5] = 0.246827f;
    data->d[6] = 1.830686f;
    data->d[7] = 0.207865f;
    data->d[8] = -4.000387f;
    data->d[9] = -1.434060f;
    data->d[10] = 0.208742f;
    data->d[11] = -1.419689f;
    data->d[12] = -0.923510f;
    data->d[13] = -0.133855f;
    data->d[14] = 0.021683f;
    data->d[15] = -3.653486f;
    data->d[16] = -0.016332f;
    data->d[17] = -4.727130f;
    data->d[18] = 0.466792f;
    data->d[19] = 2.414893f;
    data->d[20] = -1.757859f;
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
    *result->MinResult(2) = 0.000885f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000885f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 11;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
