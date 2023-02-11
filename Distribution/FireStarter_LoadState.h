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
    instructions->SetOperation(0, 1, 22);
    instructions->SetOperation(1, 1, 19);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 1, 5);
    instructions->SetOperation(4, 1, 7);
    instructions->SetOperation(5, 1, 16);
    instructions->SetOperation(6, 1, 24);
    instructions->SetOperation(7, 0, 11);
    instructions->SetOperation(8, 1, 10);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 0, 30);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 22);
    instructions->SetOperation(17, 0, 9);
    instructions->SetOperation(18, 1, 0);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 4);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 0, 31);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 6);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 29);
    instructions->SetOperation(31, 1, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.646397f;
    data->d[1] = 3.268530f;
    data->d[2] = -0.139477f;
    data->d[3] = 0.001634f;
    data->d[4] = -0.203619f;
    data->d[5] = -0.503288f;
    data->d[6] = 1.580921f;
    data->d[7] = 1.050506f;
    data->d[8] = 0.787780f;
    data->d[9] = 0.893634f;
    data->d[10] = -1.814627f;
    data->d[11] = -1.179681f;
    data->d[12] = 0.957549f;
    data->d[13] = 0.094654f;
    data->d[14] = 0.626797f;
    data->d[15] = 1.064447f;
    data->d[16] = 2.045033f;
    data->d[17] = -0.271739f;
    data->d[18] = 1.719947f;
    data->d[19] = 0.403720f;
    data->d[20] = 0.318789f;
    data->d[21] = 0.504592f;
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
    *(result->MinResult()) = 0.000364f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.648810f;
    data->d[1] = 3.902915f;
    data->d[2] = -0.491008f;
    data->d[3] = 2.657306f;
    data->d[4] = 1.505268f;
    data->d[5] = -0.023128f;
    data->d[6] = -0.698811f;
    data->d[7] = -0.478064f;
    data->d[8] = -1.395606f;
    data->d[9] = -1.365877f;
    data->d[10] = -0.789591f;
    data->d[11] = 1.749832f;
    data->d[12] = -0.162719f;
    data->d[13] = 0.046054f;
    data->d[14] = -0.816660f;
    data->d[15] = 0.871631f;
    data->d[16] = 0.319801f;
    data->d[17] = 0.762445f;
    data->d[18] = 2.724053f;
    data->d[19] = -0.512592f;
    data->d[20] = -0.504369f;
    data->d[21] = 1.836271f;
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
    *(result->MinResult()) = 0.000203f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.953999f;
    data->d[1] = 2.150565f;
    data->d[2] = -0.329517f;
    data->d[3] = -0.612593f;
    data->d[4] = 1.517233f;
    data->d[5] = -0.819993f;
    data->d[6] = 1.585067f;
    data->d[7] = 1.044705f;
    data->d[8] = 1.544277f;
    data->d[9] = 1.098562f;
    data->d[10] = -1.249834f;
    data->d[11] = -0.737082f;
    data->d[12] = 0.587622f;
    data->d[13] = -1.129472f;
    data->d[14] = 0.448376f;
    data->d[15] = -0.159639f;
    data->d[16] = -0.508320f;
    data->d[17] = -1.153842f;
    data->d[18] = -2.303509f;
    data->d[19] = 0.285570f;
    data->d[20] = -0.320317f;
    data->d[21] = 1.591603f;
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
    *(result->MinResult()) = 0.000413f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000413f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 57;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 4138115085;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
