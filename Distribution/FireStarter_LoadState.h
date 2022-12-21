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
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 29);
    instructions->SetOperation(2, 1, 10);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 1, 30);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 7);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 1, 15);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 24);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 1, 31);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 18);
    instructions->SetOperation(17, 1, 24);
    instructions->SetOperation(18, 1, 20);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 0, 11);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 10);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.553908f;
    data->d[1] = -0.203260f;
    data->d[2] = 0.525967f;
    data->d[3] = 0.825903f;
    data->d[4] = 0.434419f;
    data->d[5] = -0.895437f;
    data->d[6] = 0.093795f;
    data->d[7] = -4.367361f;
    data->d[8] = -0.681508f;
    data->d[9] = -0.853403f;
    data->d[10] = 0.642072f;
    data->d[11] = -0.325474f;
    data->d[12] = -0.914826f;
    data->d[13] = -28.058010f;
    data->d[14] = 23.164774f;
    data->d[15] = -64.682823f;
    data->d[16] = 0.589792f;
    data->d[17] = 0.020547f;
    data->d[18] = -0.083334f;
    data->d[19] = 0.099568f;
    data->d[20] = 0.526003f;
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
    *result->MinResult(0) = 0.000019f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.293658f;
    data->d[1] = -0.408973f;
    data->d[2] = 1.143884f;
    data->d[3] = -0.559513f;
    data->d[4] = -0.640043f;
    data->d[5] = 0.409756f;
    data->d[6] = -0.041463f;
    data->d[7] = 0.954516f;
    data->d[8] = 0.470436f;
    data->d[9] = 1.459364f;
    data->d[10] = 0.367609f;
    data->d[11] = -0.683075f;
    data->d[12] = 1.442424f;
    data->d[13] = 0.834602f;
    data->d[14] = -3.818352f;
    data->d[15] = 5.508203f;
    data->d[16] = 0.238264f;
    data->d[17] = 0.364083f;
    data->d[18] = -0.571841f;
    data->d[19] = -0.685638f;
    data->d[20] = 1.025788f;
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
    *result->MinResult(1) = 0.000003f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.340607f;
    data->d[1] = 0.334331f;
    data->d[2] = -0.989158f;
    data->d[3] = -0.351134f;
    data->d[4] = 0.347319f;
    data->d[5] = -0.821518f;
    data->d[6] = 0.095349f;
    data->d[7] = -0.665394f;
    data->d[8] = -2.684168f;
    data->d[9] = 1.091152f;
    data->d[10] = 0.297793f;
    data->d[11] = -0.604400f;
    data->d[12] = -1.236936f;
    data->d[13] = 0.809265f;
    data->d[14] = -1.127834f;
    data->d[15] = -7.326907f;
    data->d[16] = -0.162995f;
    data->d[17] = 6.758240f;
    data->d[18] = -1.863088f;
    data->d[19] = 0.098451f;
    data->d[20] = -0.465574f;
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
    *result->MinResult(2) = 0.000038f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000038f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 17;
    state.m_index = 17;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
