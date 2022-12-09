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
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 1, 16);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 30);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 17);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 16);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 25);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 1, 18);
    instructions->SetOperation(21, 0, 31);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 1, 9);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 29);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.040027f;
    data->d[1] = -0.044557f;
    data->d[2] = 0.823254f;
    data->d[3] = 0.045443f;
    data->d[4] = -0.728279f;
    data->d[5] = 1.096101f;
    data->d[6] = 0.465415f;
    data->d[7] = -0.422902f;
    data->d[8] = 2.327649f;
    data->d[9] = -1.005146f;
    data->d[10] = 0.056854f;
    data->d[11] = 2.028452f;
    data->d[12] = -0.302813f;
    data->d[13] = 0.031420f;
    data->d[14] = 1.817769f;
    data->d[15] = 0.296320f;
    data->d[16] = -0.499306f;
    data->d[17] = 0.924776f;
    data->d[18] = -1.421423f;
    data->d[19] = -0.229316f;
    data->d[20] = 0.071106f;
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
    *result->MinResult(0) = 0.000049f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.372560f;
    data->d[1] = 0.281823f;
    data->d[2] = 0.045651f;
    data->d[3] = -0.597503f;
    data->d[4] = -0.453773f;
    data->d[5] = 0.114736f;
    data->d[6] = -0.864361f;
    data->d[7] = 0.338600f;
    data->d[8] = -1.890241f;
    data->d[9] = -0.346123f;
    data->d[10] = -3.607312f;
    data->d[11] = 2.884160f;
    data->d[12] = -0.000311f;
    data->d[13] = 0.477987f;
    data->d[14] = -3.567798f;
    data->d[15] = -2.409520f;
    data->d[16] = -0.608577f;
    data->d[17] = 0.939278f;
    data->d[18] = -0.671231f;
    data->d[19] = -0.456330f;
    data->d[20] = -0.589134f;
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
    *result->MinResult(1) = 0.000025f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.700329f;
    data->d[1] = -1.924103f;
    data->d[2] = -0.592631f;
    data->d[3] = -0.129553f;
    data->d[4] = 0.193454f;
    data->d[5] = -0.168894f;
    data->d[6] = 1.323314f;
    data->d[7] = 0.544862f;
    data->d[8] = 0.371891f;
    data->d[9] = -0.803984f;
    data->d[10] = -0.385868f;
    data->d[11] = -1.734593f;
    data->d[12] = 0.005904f;
    data->d[13] = 1.824553f;
    data->d[14] = -2.079487f;
    data->d[15] = -1.133233f;
    data->d[16] = -0.631968f;
    data->d[17] = 0.491944f;
    data->d[18] = -0.612398f;
    data->d[19] = -0.699944f;
    data->d[20] = -0.562805f;
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
    *result->MinResult(2) = 0.000035f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000049f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 81;
    state.m_index = 3;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
