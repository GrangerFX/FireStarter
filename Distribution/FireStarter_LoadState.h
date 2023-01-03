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
    settings.m_units = 8;
    settings.m_processes = 8;
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
    instructions->SetOperation(0, 0, 8);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 0, 25);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 1, 26);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 1, 18);
    instructions->SetOperation(8, 1, 15);
    instructions->SetOperation(9, 0, 29);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 1, 13);
    instructions->SetOperation(12, 1, 6);
    instructions->SetOperation(13, 0, 29);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 1, 0);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 1, 25);
    instructions->SetOperation(30, 1, 30);
    instructions->SetOperation(31, 1, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.471390f;
    data->d[1] = 1.004641f;
    data->d[2] = 0.325856f;
    data->d[3] = 1.518820f;
    data->d[4] = -0.754004f;
    data->d[5] = -0.836088f;
    data->d[6] = 1.776680f;
    data->d[7] = -0.589370f;
    data->d[8] = 0.001473f;
    data->d[9] = -1.473090f;
    data->d[10] = -0.188530f;
    data->d[11] = -1.548983f;
    data->d[12] = 0.171884f;
    data->d[13] = -1.496121f;
    data->d[14] = -1.697422f;
    data->d[15] = -0.577680f;
    data->d[16] = 0.176235f;
    data->d[17] = -0.976588f;
    data->d[18] = -1.275102f;
    data->d[19] = 0.170456f;
    data->d[20] = 0.103654f;
    data->d[21] = -0.194172f;
    data->d[22] = -0.484559f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000373f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.054561f;
    data->d[1] = -4.573681f;
    data->d[2] = -0.745897f;
    data->d[3] = -1.874909f;
    data->d[4] = 1.925787f;
    data->d[5] = -1.153824f;
    data->d[6] = 0.499046f;
    data->d[7] = -0.288113f;
    data->d[8] = 1.320021f;
    data->d[9] = 1.250537f;
    data->d[10] = 0.130561f;
    data->d[11] = -0.864692f;
    data->d[12] = -0.624812f;
    data->d[13] = -3.412830f;
    data->d[14] = 1.250159f;
    data->d[15] = -1.102337f;
    data->d[16] = -0.174428f;
    data->d[17] = -1.403662f;
    data->d[18] = 2.668018f;
    data->d[19] = -2.421036f;
    data->d[20] = 0.211904f;
    data->d[21] = -1.400362f;
    data->d[22] = -0.271341f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000329f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 1.556379f;
    data->d[1] = -0.239595f;
    data->d[2] = -1.259613f;
    data->d[3] = 0.961604f;
    data->d[4] = -1.313224f;
    data->d[5] = 1.361295f;
    data->d[6] = 0.302847f;
    data->d[7] = -1.335408f;
    data->d[8] = 1.584032f;
    data->d[9] = 1.952993f;
    data->d[10] = -0.338002f;
    data->d[11] = -0.756519f;
    data->d[12] = 0.566932f;
    data->d[13] = -2.522557f;
    data->d[14] = -1.104609f;
    data->d[15] = 0.305513f;
    data->d[16] = -0.743324f;
    data->d[17] = 1.377844f;
    data->d[18] = -1.744570f;
    data->d[19] = 0.095209f;
    data->d[20] = -0.186942f;
    data->d[21] = 0.801848f;
    data->d[22] = -1.699887f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.000253f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000373f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 59;
    state.m_index = 124;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
