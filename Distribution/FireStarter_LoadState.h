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
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 15);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 0, 29);
    instructions->SetOperation(5, 0, 29);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 11);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 1, 19);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 1, 27);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 26);
    instructions->SetOperation(29, 1, 29);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.339365f;
    data->d[1] = 0.863479f;
    data->d[2] = 0.588419f;
    data->d[3] = -0.436864f;
    data->d[4] = 0.067124f;
    data->d[5] = 0.885644f;
    data->d[6] = -0.643630f;
    data->d[7] = 2.198909f;
    data->d[8] = -0.918131f;
    data->d[9] = 0.224384f;
    data->d[10] = 1.112041f;
    data->d[11] = 0.580807f;
    data->d[12] = 0.444112f;
    data->d[13] = 0.687132f;
    data->d[14] = 0.382733f;
    data->d[15] = -3.273708f;
    data->d[16] = 1.674465f;
    data->d[17] = -0.178059f;
    data->d[18] = 1.630588f;
    data->d[19] = 0.168528f;
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
    *(result->MinResult()) = 0.000184f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.227457f;
    data->d[1] = -1.001909f;
    data->d[2] = -0.313765f;
    data->d[3] = 1.621456f;
    data->d[4] = -0.340125f;
    data->d[5] = -1.182348f;
    data->d[6] = -1.081352f;
    data->d[7] = -0.603866f;
    data->d[8] = 0.230294f;
    data->d[9] = 2.193331f;
    data->d[10] = 1.016842f;
    data->d[11] = 1.948966f;
    data->d[12] = -1.987669f;
    data->d[13] = 1.420787f;
    data->d[14] = -1.669173f;
    data->d[15] = -0.459426f;
    data->d[16] = 0.972023f;
    data->d[17] = 1.112182f;
    data->d[18] = -1.037418f;
    data->d[19] = -0.154805f;
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
    *(result->MinResult()) = 0.000128f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.348739f;
    data->d[1] = -1.808853f;
    data->d[2] = 1.187071f;
    data->d[3] = 0.369038f;
    data->d[4] = 0.634832f;
    data->d[5] = -2.547964f;
    data->d[6] = -0.434069f;
    data->d[7] = -24.252342f;
    data->d[8] = 0.450804f;
    data->d[9] = 0.010499f;
    data->d[10] = 0.021436f;
    data->d[11] = -1.859888f;
    data->d[12] = -0.763977f;
    data->d[13] = 0.870498f;
    data->d[14] = -10.037540f;
    data->d[15] = 0.065738f;
    data->d[16] = -0.164091f;
    data->d[17] = -3.937709f;
    data->d[18] = -0.111345f;
    data->d[19] = -1.552595f;
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
    *(result->MinResult()) = 0.000356f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000356f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 24;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 8386240117105750379;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
