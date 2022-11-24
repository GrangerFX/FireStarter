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
    settings.m_processes = 12;
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
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 0, 4);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 1, 11);
    instructions->SetOperation(4, 1, 29);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 1, 18);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 1, 21);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 0, 26);
    instructions->SetOperation(15, 0, 26);
    instructions->SetOperation(16, 0, 27);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 22);
    instructions->SetOperation(20, 1, 31);
    instructions->SetOperation(21, 1, 27);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 29);
    instructions->SetOperation(24, 1, 30);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 0);
    instructions->SetOperation(27, 1, 23);
    instructions->SetOperation(28, 0, 31);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 1, 29);
    instructions->SetOperation(31, 0, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.064046f;
    data->d[1] = 0.315807f;
    data->d[2] = 0.170839f;
    data->d[3] = 0.494607f;
    data->d[4] = 0.039654f;
    data->d[5] = -0.996832f;
    data->d[6] = -0.372940f;
    data->d[7] = 0.653528f;
    data->d[8] = 2.182741f;
    data->d[9] = 0.487314f;
    data->d[10] = -0.036408f;
    data->d[11] = 5.019031f;
    data->d[12] = 5.019231f;
    data->d[13] = -6.001167f;
    data->d[14] = -2.196571f;
    data->d[15] = 32.434078f;
    data->d[16] = 1.791219f;
    data->d[17] = 0.217981f;
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
    *result->MinResult(0) = 0.000146f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.770897f;
    data->d[1] = 0.728269f;
    data->d[2] = 0.081941f;
    data->d[3] = 0.273653f;
    data->d[4] = 0.920239f;
    data->d[5] = -0.165700f;
    data->d[6] = -0.700734f;
    data->d[7] = 0.928170f;
    data->d[8] = 1.141667f;
    data->d[9] = 3.264895f;
    data->d[10] = -0.889879f;
    data->d[11] = -0.500488f;
    data->d[12] = 1.755626f;
    data->d[13] = 4.480731f;
    data->d[14] = 0.040039f;
    data->d[15] = -0.322627f;
    data->d[16] = 1.621252f;
    data->d[17] = 0.083274f;
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
    *result->MinResult(1) = 0.000266f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.540001f;
    data->d[1] = 1.008461f;
    data->d[2] = 0.271827f;
    data->d[3] = 0.421607f;
    data->d[4] = -0.246014f;
    data->d[5] = -0.047730f;
    data->d[6] = 0.859764f;
    data->d[7] = 0.772074f;
    data->d[8] = -0.839848f;
    data->d[9] = -2.969990f;
    data->d[10] = 0.246191f;
    data->d[11] = 2.363746f;
    data->d[12] = -0.108349f;
    data->d[13] = -0.398491f;
    data->d[14] = 0.968097f;
    data->d[15] = 1.598059f;
    data->d[16] = 1.301782f;
    data->d[17] = -0.598829f;
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
    *result->MinResult(2) = 0.000205f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000266f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 41;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
