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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 99;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 30);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 7);
    instructions->SetOperation(7, 1, 25);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 1, 25);
    instructions->SetOperation(15, 1, 20);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 1, 5);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 25);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.330030f;
    data->d[1] = -1.153261f;
    data->d[2] = 0.041489f;
    data->d[3] = 1.958304f;
    data->d[4] = -1.742898f;
    data->d[5] = 1.931680f;
    data->d[6] = -0.331397f;
    data->d[7] = 0.453640f;
    data->d[8] = 1.311468f;
    data->d[9] = -1.530415f;
    data->d[10] = -1.222112f;
    data->d[11] = -2.782034f;
    data->d[12] = 4.847745f;
    data->d[13] = 0.065468f;
    data->d[14] = 0.833117f;
    data->d[15] = 0.000000f;
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
    *(result->MinResult()) = 0.000240f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.124155f;
    data->d[1] = 1.122631f;
    data->d[2] = -1.132694f;
    data->d[3] = 0.571540f;
    data->d[4] = -0.925532f;
    data->d[5] = 0.229792f;
    data->d[6] = 0.022671f;
    data->d[7] = 1.456575f;
    data->d[8] = -1.618819f;
    data->d[9] = 2.034804f;
    data->d[10] = -0.182673f;
    data->d[11] = 1.115805f;
    data->d[12] = 1.467402f;
    data->d[13] = 0.037250f;
    data->d[14] = -0.925963f;
    data->d[15] = 0.000000f;
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
    *(result->MinResult()) = 0.000315f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.253943f;
    data->d[1] = -0.198296f;
    data->d[2] = 1.940772f;
    data->d[3] = 1.020638f;
    data->d[4] = -0.664769f;
    data->d[5] = 0.883317f;
    data->d[6] = 0.037310f;
    data->d[7] = -1.170125f;
    data->d[8] = 1.867906f;
    data->d[9] = -0.865899f;
    data->d[10] = 4.539969f;
    data->d[11] = 1.802309f;
    data->d[12] = -2.866945f;
    data->d[13] = -0.111794f;
    data->d[14] = 0.311525f;
    data->d[15] = 0.000000f;
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
    *(result->MinResult()) = 0.000238f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000315f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 33;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 14838810757319136066;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
