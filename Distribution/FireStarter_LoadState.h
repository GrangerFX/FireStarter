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
    program.m_uniqueRegisters = 21;

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 1, 20);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.036914f;
    data->d[1] = 0.575317f;
    data->d[2] = -0.283405f;
    data->d[3] = -0.589889f;
    data->d[4] = 0.881348f;
    data->d[5] = -0.458442f;
    data->d[6] = -3.853571f;
    data->d[7] = 0.015163f;
    data->d[8] = -3.917196f;
    data->d[9] = -0.045444f;
    data->d[10] = 3.459901f;
    data->d[11] = -0.270966f;
    data->d[12] = 0.704644f;
    data->d[13] = 2.503149f;
    data->d[14] = 3.640718f;
    data->d[15] = 0.007770f;
    data->d[16] = -1.006974f;
    data->d[17] = -0.093554f;
    data->d[18] = 0.803976f;
    data->d[19] = -0.259622f;
    data->d[20] = 0.303186f;
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
    *result->MinResult(0) = 0.000148f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.258307f;
    data->d[1] = 0.298312f;
    data->d[2] = 0.275244f;
    data->d[3] = 0.574748f;
    data->d[4] = -0.853035f;
    data->d[5] = -1.525042f;
    data->d[6] = -0.927250f;
    data->d[7] = -0.232467f;
    data->d[8] = 0.266610f;
    data->d[9] = -0.903392f;
    data->d[10] = 0.848055f;
    data->d[11] = 0.816605f;
    data->d[12] = -0.489172f;
    data->d[13] = 0.010409f;
    data->d[14] = 0.019489f;
    data->d[15] = 0.790419f;
    data->d[16] = 0.730964f;
    data->d[17] = 0.090976f;
    data->d[18] = 1.270187f;
    data->d[19] = -0.354429f;
    data->d[20] = 0.156451f;
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
    *result->MinResult(1) = 0.000118f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.573595f;
    data->d[1] = 0.442436f;
    data->d[2] = -0.300477f;
    data->d[3] = 0.445263f;
    data->d[4] = -0.160180f;
    data->d[5] = -1.524088f;
    data->d[6] = -0.355295f;
    data->d[7] = 0.130438f;
    data->d[8] = 0.016116f;
    data->d[9] = 0.246914f;
    data->d[10] = -0.752924f;
    data->d[11] = 0.319299f;
    data->d[12] = 2.347084f;
    data->d[13] = 1.289738f;
    data->d[14] = 3.236745f;
    data->d[15] = -0.001020f;
    data->d[16] = -1.194806f;
    data->d[17] = 0.018768f;
    data->d[18] = -2.055650f;
    data->d[19] = -0.176090f;
    data->d[20] = 0.733645f;
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
    *result->MinResult(2) = 0.000177f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000177f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 33;
    state.m_bestIndex = 31545;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
