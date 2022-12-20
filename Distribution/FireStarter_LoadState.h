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
    instructions->SetOperation(0, 1, 15);
    instructions->SetOperation(1, 0, 8);
    instructions->SetOperation(2, 1, 8);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 1, 13);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 1, 28);
    instructions->SetOperation(10, 1, 17);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 1, 30);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 1, 22);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 22);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 1, 3);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.145628f;
    data->d[1] = -0.200564f;
    data->d[2] = -0.177266f;
    data->d[3] = -0.986238f;
    data->d[4] = -0.391935f;
    data->d[5] = -1.372664f;
    data->d[6] = 0.002814f;
    data->d[7] = 0.254967f;
    data->d[8] = 0.912270f;
    data->d[9] = 8.071958f;
    data->d[10] = -0.002522f;
    data->d[11] = 2.861972f;
    data->d[12] = 0.682011f;
    data->d[13] = -0.649813f;
    data->d[14] = 2.445248f;
    data->d[15] = 0.386536f;
    data->d[16] = 1.682908f;
    data->d[17] = -0.239873f;
    data->d[18] = 1.112730f;
    data->d[19] = 0.601535f;
    data->d[20] = -0.605407f;
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
    *result->MinResult(0) = 0.000163f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.099118f;
    data->d[1] = 0.043578f;
    data->d[2] = -0.873591f;
    data->d[3] = -0.067241f;
    data->d[4] = -0.600547f;
    data->d[5] = -7.237152f;
    data->d[6] = 0.001443f;
    data->d[7] = -0.948172f;
    data->d[8] = -0.405562f;
    data->d[9] = -0.099100f;
    data->d[10] = -2.120451f;
    data->d[11] = -2.427237f;
    data->d[12] = -1.091860f;
    data->d[13] = 3.094292f;
    data->d[14] = -3.113646f;
    data->d[15] = 0.295531f;
    data->d[16] = -1.930925f;
    data->d[17] = -0.747588f;
    data->d[18] = -2.207124f;
    data->d[19] = -0.437756f;
    data->d[20] = 0.310264f;
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
    *result->MinResult(1) = 0.000054f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.723275f;
    data->d[1] = 1.117393f;
    data->d[2] = 1.063913f;
    data->d[3] = -0.087585f;
    data->d[4] = -0.575981f;
    data->d[5] = -0.580022f;
    data->d[6] = -0.010506f;
    data->d[7] = 2.509942f;
    data->d[8] = 0.289587f;
    data->d[9] = -0.935155f;
    data->d[10] = 3.887324f;
    data->d[11] = 0.456543f;
    data->d[12] = 1.521347f;
    data->d[13] = -1.082539f;
    data->d[14] = -5.776171f;
    data->d[15] = 3.854690f;
    data->d[16] = -0.243066f;
    data->d[17] = 0.005349f;
    data->d[18] = -1.802808f;
    data->d[19] = -0.264240f;
    data->d[20] = 0.683255f;
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
    *result->MinResult(2) = 0.000354f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000354f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 0;
    state.m_index = 11;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
