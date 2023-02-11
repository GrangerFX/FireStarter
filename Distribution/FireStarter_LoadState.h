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
    settings.m_attempts = 128;
    settings.m_seed = 4;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 11);
    instructions->SetOperation(1, 1, 10);
    instructions->SetOperation(2, 0, 31);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 1, 10);
    instructions->SetOperation(5, 1, 28);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 1, 16);
    instructions->SetOperation(10, 0, 16);
    instructions->SetOperation(11, 1, 25);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 1, 27);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 1, 19);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 1, 14);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 1, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.558299f;
    data->d[1] = 1.845611f;
    data->d[2] = -1.013446f;
    data->d[3] = -1.043748f;
    data->d[4] = -0.152079f;
    data->d[5] = -0.370971f;
    data->d[6] = 0.295182f;
    data->d[7] = -0.177531f;
    data->d[8] = -0.281706f;
    data->d[9] = -1.403229f;
    data->d[10] = 0.822210f;
    data->d[11] = -0.279247f;
    data->d[12] = 0.769689f;
    data->d[13] = -0.916529f;
    data->d[14] = 1.766472f;
    data->d[15] = -0.407551f;
    data->d[16] = -1.172100f;
    data->d[17] = -1.510726f;
    data->d[18] = -1.428906f;
    data->d[19] = -2.436875f;
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
    *(result->MinResult()) = 0.000272f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.121402f;
    data->d[1] = 0.426169f;
    data->d[2] = 1.302526f;
    data->d[3] = -1.491772f;
    data->d[4] = -0.675872f;
    data->d[5] = -1.543937f;
    data->d[6] = 1.379310f;
    data->d[7] = 1.041767f;
    data->d[8] = 0.704974f;
    data->d[9] = -1.250062f;
    data->d[10] = -1.632069f;
    data->d[11] = 0.129823f;
    data->d[12] = 1.883574f;
    data->d[13] = -1.350953f;
    data->d[14] = 3.284099f;
    data->d[15] = 1.115537f;
    data->d[16] = -1.558384f;
    data->d[17] = -0.092433f;
    data->d[18] = -0.530600f;
    data->d[19] = -0.135768f;
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
    *(result->MinResult()) = 0.000245f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.201512f;
    data->d[1] = -0.596160f;
    data->d[2] = 1.274225f;
    data->d[3] = 0.626025f;
    data->d[4] = -0.352403f;
    data->d[5] = 1.287710f;
    data->d[6] = -0.425647f;
    data->d[7] = 0.568783f;
    data->d[8] = -0.489870f;
    data->d[9] = -1.000161f;
    data->d[10] = -1.642019f;
    data->d[11] = -0.105981f;
    data->d[12] = -1.211841f;
    data->d[13] = -0.054339f;
    data->d[14] = 0.296796f;
    data->d[15] = -0.513084f;
    data->d[16] = 1.588388f;
    data->d[17] = -0.351668f;
    data->d[18] = -1.485148f;
    data->d[19] = 1.705063f;
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
    *(result->MinResult()) = 0.000189f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000272f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 15;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 905117499;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
