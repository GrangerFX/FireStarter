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
    settings.m_units = 2;
    settings.m_processes = 12;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 1;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 12);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 17);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 9);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 1, 26);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 1, 17);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 16);
    instructions->SetOperation(31, 1, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141025f;
    data->d[1] = -0.425520f;
    data->d[2] = 0.483956f;
    data->d[3] = 3.731086f;
    data->d[4] = 0.169842f;
    data->d[5] = -1.020037f;
    data->d[6] = 0.612789f;
    data->d[7] = -0.003308f;
    data->d[8] = 8.363056f;
    data->d[9] = -1.289769f;
    data->d[10] = -0.236795f;
    data->d[11] = -0.098942f;
    data->d[12] = 0.945174f;
    data->d[13] = -0.098640f;
    data->d[14] = 0.208477f;
    data->d[15] = 0.000300f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(0) = 0.000268f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.776555f;
    data->d[1] = -0.265503f;
    data->d[2] = 0.139309f;
    data->d[3] = 0.999651f;
    data->d[4] = -1.931497f;
    data->d[5] = 0.586149f;
    data->d[6] = -0.131885f;
    data->d[7] = 2.135390f;
    data->d[8] = 0.441142f;
    data->d[9] = 0.442857f;
    data->d[10] = 7.583895f;
    data->d[11] = 6.989605f;
    data->d[12] = -0.063620f;
    data->d[13] = -0.132645f;
    data->d[14] = 0.382132f;
    data->d[15] = 1.216740f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(1) = 0.000409f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.057236f;
    data->d[1] = -0.441580f;
    data->d[2] = -0.592614f;
    data->d[3] = -0.041454f;
    data->d[4] = -5.436442f;
    data->d[5] = 0.049756f;
    data->d[6] = -0.035456f;
    data->d[7] = 1.712928f;
    data->d[8] = 0.458454f;
    data->d[9] = 0.576046f;
    data->d[10] = 0.823874f;
    data->d[11] = 1.695034f;
    data->d[12] = 0.512577f;
    data->d[13] = -0.306949f;
    data->d[14] = -0.059126f;
    data->d[15] = 1.035318f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(2) = 0.000567f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000567f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 3;
    state.m_index = 1;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
