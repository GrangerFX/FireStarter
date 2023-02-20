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
    settings.m_seed = 708;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 10);
    instructions->SetOperation(2, 1, 14);
    instructions->SetOperation(3, 1, 7);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 21);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 1, 18);
    instructions->SetOperation(8, 0, 29);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 1, 30);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 1, 28);
    instructions->SetOperation(18, 0, 30);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 1, 1);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 1, 1);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 0, 29);
    instructions->SetOperation(25, 1, 12);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 1, 31);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 1, 7);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.089225f;
    data->d[1] = 0.414354f;
    data->d[2] = -0.997741f;
    data->d[3] = 3.295022f;
    data->d[4] = -0.353011f;
    data->d[5] = -0.396946f;
    data->d[6] = 0.424704f;
    data->d[7] = -1.233441f;
    data->d[8] = 0.031898f;
    data->d[9] = -0.047150f;
    data->d[10] = -0.401205f;
    data->d[11] = 0.776625f;
    data->d[12] = 1.537932f;
    data->d[13] = -0.027701f;
    data->d[14] = 0.953985f;
    data->d[15] = 1.244914f;
    data->d[16] = 0.098917f;
    data->d[17] = 6.516391f;
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
    *(result->MinResult()) = 0.000007f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.227614f;
    data->d[1] = 2.238754f;
    data->d[2] = -0.971824f;
    data->d[3] = -0.551137f;
    data->d[4] = -1.546434f;
    data->d[5] = 0.340002f;
    data->d[6] = 0.126577f;
    data->d[7] = 0.462915f;
    data->d[8] = -0.175098f;
    data->d[9] = -0.002268f;
    data->d[10] = 0.189997f;
    data->d[11] = -0.396774f;
    data->d[12] = -0.489902f;
    data->d[13] = -0.195466f;
    data->d[14] = -0.065276f;
    data->d[15] = -2.008152f;
    data->d[16] = -1.216170f;
    data->d[17] = -4.784925f;
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
    *(result->MinResult()) = 0.000016f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.162562f;
    data->d[1] = 0.009491f;
    data->d[2] = -0.418264f;
    data->d[3] = 0.572192f;
    data->d[4] = -1.420546f;
    data->d[5] = -0.507091f;
    data->d[6] = 0.909362f;
    data->d[7] = -1.035633f;
    data->d[8] = -0.004732f;
    data->d[9] = -1.281576f;
    data->d[10] = 0.847100f;
    data->d[11] = 0.028509f;
    data->d[12] = 1.707929f;
    data->d[13] = 0.922904f;
    data->d[14] = -0.578914f;
    data->d[15] = 0.735295f;
    data->d[16] = -7.241933f;
    data->d[17] = 10.295105f;
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
    *(result->MinResult()) = 0.000035f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000035f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 240;
    state.m_index = 0;
    state.m_test = 708;
    state.m_seed = 16230562737006003892;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
