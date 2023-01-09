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

    settings.m_mode = FIRESTARTER_TEST;
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
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 1, 29);
    instructions->SetOperation(2, 1, 19);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 25);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 3);
    instructions->SetOperation(18, 0, 30);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 1, 22);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.476666f;
    data->d[1] = -1.489616f;
    data->d[2] = -0.175311f;
    data->d[3] = 0.997207f;
    data->d[4] = 0.909781f;
    data->d[5] = -1.167425f;
    data->d[6] = -4.226989f;
    data->d[7] = -0.000010f;
    data->d[8] = -1.484739f;
    data->d[9] = 1.486036f;
    data->d[10] = 0.088126f;
    data->d[11] = -0.312493f;
    data->d[12] = 0.326801f;
    data->d[13] = 2.151173f;
    data->d[14] = -0.434109f;
    data->d[15] = -1.904673f;
    data->d[16] = -0.317138f;
    data->d[17] = -0.797222f;
    data->d[18] = -1.964317f;
    data->d[19] = -2.352031f;
    data->d[20] = -0.000002f;
    data->d[21] = 0.061065f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.297996f;
    data->d[1] = -1.841430f;
    data->d[2] = -1.547226f;
    data->d[3] = -1.839187f;
    data->d[4] = -0.295871f;
    data->d[5] = -0.595672f;
    data->d[6] = 2.556982f;
    data->d[7] = 0.004242f;
    data->d[8] = 0.577222f;
    data->d[9] = -0.960241f;
    data->d[10] = 0.047279f;
    data->d[11] = 0.983144f;
    data->d[12] = 3.377252f;
    data->d[13] = -2.075757f;
    data->d[14] = 3.631849f;
    data->d[15] = -0.064309f;
    data->d[16] = 3.224960f;
    data->d[17] = -0.001865f;
    data->d[18] = 0.740844f;
    data->d[19] = -1.793687f;
    data->d[20] = -0.084320f;
    data->d[21] = 1.400998f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.558560f;
    data->d[1] = -0.724822f;
    data->d[2] = -0.334614f;
    data->d[3] = 0.827107f;
    data->d[4] = 0.545875f;
    data->d[5] = 0.053879f;
    data->d[6] = -2.659238f;
    data->d[7] = -0.019759f;
    data->d[8] = 0.715612f;
    data->d[9] = 0.277266f;
    data->d[10] = -0.076826f;
    data->d[11] = 0.086859f;
    data->d[12] = 3.518712f;
    data->d[13] = -1.600531f;
    data->d[14] = 3.745607f;
    data->d[15] = 0.117486f;
    data->d[16] = -1.586671f;
    data->d[17] = 0.008164f;
    data->d[18] = 1.435752f;
    data->d[19] = 0.898497f;
    data->d[20] = -0.277204f;
    data->d[21] = -1.888863f;
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
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(3282477679));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(1));

    state.m_maxResult = 0.000007f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 119;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
