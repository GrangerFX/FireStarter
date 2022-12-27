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
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 1, 16);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 1, 12);
    instructions->SetOperation(6, 1, 22);
    instructions->SetOperation(7, 1, 30);
    instructions->SetOperation(8, 1, 28);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 17);
    instructions->SetOperation(12, 1, 31);
    instructions->SetOperation(13, 1, 27);
    instructions->SetOperation(14, 0, 1);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 1, 18);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.065348f;
    data->d[1] = 0.206227f;
    data->d[2] = -0.169367f;
    data->d[3] = -0.042012f;
    data->d[4] = -0.858820f;
    data->d[5] = -0.069211f;
    data->d[6] = 0.026763f;
    data->d[7] = -0.862525f;
    data->d[8] = -0.244402f;
    data->d[9] = -0.991394f;
    data->d[10] = 0.002977f;
    data->d[11] = 0.643635f;
    data->d[12] = -1.684471f;
    data->d[13] = 1.763956f;
    data->d[14] = -9.411754f;
    data->d[15] = -0.029547f;
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
    *result->MinResult(0) = 0.000112f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.657488f;
    data->d[1] = -0.019164f;
    data->d[2] = 9.525724f;
    data->d[3] = 0.075271f;
    data->d[4] = -0.178340f;
    data->d[5] = -0.606827f;
    data->d[6] = 0.423172f;
    data->d[7] = -0.850124f;
    data->d[8] = 0.287607f;
    data->d[9] = 0.544131f;
    data->d[10] = 3.985146f;
    data->d[11] = -0.969588f;
    data->d[12] = -0.967813f;
    data->d[13] = -0.921193f;
    data->d[14] = 0.057987f;
    data->d[15] = -0.333489f;
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
    *result->MinResult(1) = 0.000083f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.104012f;
    data->d[1] = -0.126082f;
    data->d[2] = 1.553722f;
    data->d[3] = 1.709741f;
    data->d[4] = -0.304436f;
    data->d[5] = 0.657181f;
    data->d[6] = 1.163387f;
    data->d[7] = -5.224497f;
    data->d[8] = -0.082103f;
    data->d[9] = 1.526393f;
    data->d[10] = -1.071692f;
    data->d[11] = -1.406647f;
    data->d[12] = -0.976424f;
    data->d[13] = -2.220484f;
    data->d[14] = 4.874610f;
    data->d[15] = 0.010505f;
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
    *result->MinResult(2) = 0.000088f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000112f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 6;
    state.m_index = 20;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
