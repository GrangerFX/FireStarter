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
    settings.m_seed = 100;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 17);
    instructions->SetOperation(1, 1, 26);
    instructions->SetOperation(2, 1, 4);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 1, 26);
    instructions->SetOperation(5, 0, 30);
    instructions->SetOperation(6, 1, 30);
    instructions->SetOperation(7, 0, 20);
    instructions->SetOperation(8, 1, 3);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 12);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 0, 30);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 1, 26);
    instructions->SetOperation(17, 0, 25);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 30);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 23);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.210487f;
    data->d[1] = 0.874538f;
    data->d[2] = 0.109258f;
    data->d[3] = 0.222250f;
    data->d[4] = -4.185292f;
    data->d[5] = 1.626918f;
    data->d[6] = -0.168020f;
    data->d[7] = -0.792401f;
    data->d[8] = -0.639865f;
    data->d[9] = -2.372367f;
    data->d[10] = 1.788249f;
    data->d[11] = 0.443848f;
    data->d[12] = -2.825552f;
    data->d[13] = -3.830040f;
    data->d[14] = -0.148949f;
    data->d[15] = 0.604838f;
    data->d[16] = 0.007108f;
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
    *(result->MinResult()) = 0.000051f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.076559f;
    data->d[1] = 0.236761f;
    data->d[2] = 0.028301f;
    data->d[3] = 2.097974f;
    data->d[4] = 0.390114f;
    data->d[5] = -0.620477f;
    data->d[6] = 1.149601f;
    data->d[7] = -1.597428f;
    data->d[8] = 1.384283f;
    data->d[9] = 2.274819f;
    data->d[10] = 2.274010f;
    data->d[11] = -6.553887f;
    data->d[12] = -0.740467f;
    data->d[13] = 2.625951f;
    data->d[14] = -1.162698f;
    data->d[15] = 0.673771f;
    data->d[16] = 0.271951f;
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
    *(result->MinResult()) = 0.000065f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.278093f;
    data->d[1] = 0.000003f;
    data->d[2] = -0.233331f;
    data->d[3] = 0.197583f;
    data->d[4] = 0.467430f;
    data->d[5] = -0.442447f;
    data->d[6] = 1.547973f;
    data->d[7] = -1.504198f;
    data->d[8] = -0.206573f;
    data->d[9] = 0.200238f;
    data->d[10] = -2.056248f;
    data->d[11] = -3.773097f;
    data->d[12] = 2.658833f;
    data->d[13] = 2.760600f;
    data->d[14] = 0.053777f;
    data->d[15] = 1.165248f;
    data->d[16] = 0.000460f;
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
    *(result->MinResult()) = 0.000129f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000129f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 5;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
