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
    settings.m_attempts = 8;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 26);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 8);
    instructions->SetOperation(5, 0, 9);
    instructions->SetOperation(6, 1, 28);
    instructions->SetOperation(7, 1, 30);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 1, 17);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 3);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 0, 21);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 24);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 1, 31);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 1, 13);
    instructions->SetOperation(22, 0, 3);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 30);
    instructions->SetOperation(25, 0, 29);
    instructions->SetOperation(26, 0, 22);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 31);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 0, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.409489f;
    data->d[1] = 0.688787f;
    data->d[2] = 0.854245f;
    data->d[3] = 0.644587f;
    data->d[4] = -0.903534f;
    data->d[5] = -0.382486f;
    data->d[6] = 1.205242f;
    data->d[7] = -0.183845f;
    data->d[8] = -0.726721f;
    data->d[9] = -0.790682f;
    data->d[10] = -0.701197f;
    data->d[11] = 0.761548f;
    data->d[12] = 0.629112f;
    data->d[13] = -0.736763f;
    data->d[14] = -1.756885f;
    data->d[15] = -1.584902f;
    data->d[16] = -2.126098f;
    data->d[17] = -0.011042f;
    data->d[18] = -3.228932f;
    data->d[19] = 0.252375f;
    data->d[20] = 0.758480f;
    data->d[21] = 1.811399f;
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
    *result->MinResult(0) = 0.000079f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.553085f;
    data->d[1] = 0.570187f;
    data->d[2] = 0.416483f;
    data->d[3] = 0.253501f;
    data->d[4] = 0.611564f;
    data->d[5] = -0.089401f;
    data->d[6] = 1.567616f;
    data->d[7] = 1.893766f;
    data->d[8] = 2.239125f;
    data->d[9] = -4.113338f;
    data->d[10] = -2.043022f;
    data->d[11] = 0.306661f;
    data->d[12] = -0.546914f;
    data->d[13] = -0.642838f;
    data->d[14] = -0.732276f;
    data->d[15] = -0.725704f;
    data->d[16] = 0.676485f;
    data->d[17] = -0.064582f;
    data->d[18] = -1.380902f;
    data->d[19] = -1.285133f;
    data->d[20] = -1.098644f;
    data->d[21] = -0.493129f;
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
    *result->MinResult(1) = 0.000044f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.743874f;
    data->d[1] = 0.646975f;
    data->d[2] = 0.261771f;
    data->d[3] = 0.274095f;
    data->d[4] = 0.355592f;
    data->d[5] = 0.659912f;
    data->d[6] = -0.373539f;
    data->d[7] = -1.686719f;
    data->d[8] = -4.232834f;
    data->d[9] = -9.748243f;
    data->d[10] = 0.071746f;
    data->d[11] = 0.289169f;
    data->d[12] = 0.132051f;
    data->d[13] = 1.539440f;
    data->d[14] = 1.248635f;
    data->d[15] = -1.136542f;
    data->d[16] = -1.609315f;
    data->d[17] = 1.345445f;
    data->d[18] = -1.392224f;
    data->d[19] = 1.062341f;
    data->d[20] = 0.113882f;
    data->d[21] = -2.159953f;
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
    *result->MinResult(2) = 0.000132f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000132f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 7;
    state.m_index = 31;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
