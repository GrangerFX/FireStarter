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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_units = 8;
    settings.m_processes = 16;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 7986;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 1, 25);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 1, 24);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 1, 18);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 0, 26);
    instructions->SetOperation(11, 1, 30);
    instructions->SetOperation(12, 0, 30);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 0, 18);
    instructions->SetOperation(15, 1, 20);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 17);
    instructions->SetOperation(22, 0, 8);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 1, 23);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 1, 29);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 1, 5);
    instructions->SetOperation(30, 0, 30);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.656077f;
    data->d[1] = 1.598370f;
    data->d[2] = 0.539008f;
    data->d[3] = -1.972844f;
    data->d[4] = -1.270907f;
    data->d[5] = -0.000730f;
    data->d[6] = -1.210997f;
    data->d[7] = 0.001638f;
    data->d[8] = -1.535767f;
    data->d[9] = -0.467243f;
    data->d[10] = -1.252976f;
    data->d[11] = -0.894798f;
    data->d[12] = 0.260441f;
    data->d[13] = 1.850959f;
    data->d[14] = 0.667425f;
    data->d[15] = 1.103336f;
    data->d[16] = 0.652560f;
    data->d[17] = -0.586345f;
    data->d[18] = 0.034193f;
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
    *(result->MinResult()) = 0.000011f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.917409f;
    data->d[1] = 0.562281f;
    data->d[2] = -0.186347f;
    data->d[3] = -0.422678f;
    data->d[4] = -0.663541f;
    data->d[5] = 0.001061f;
    data->d[6] = -0.707436f;
    data->d[7] = 0.413518f;
    data->d[8] = -1.773440f;
    data->d[9] = -0.303725f;
    data->d[10] = -0.586317f;
    data->d[11] = -1.547061f;
    data->d[12] = 1.617520f;
    data->d[13] = 2.036784f;
    data->d[14] = 1.181621f;
    data->d[15] = 2.524038f;
    data->d[16] = -2.670131f;
    data->d[17] = -0.753498f;
    data->d[18] = -0.118441f;
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
    *(result->MinResult()) = 0.000009f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.437079f;
    data->d[1] = -0.710982f;
    data->d[2] = 0.288670f;
    data->d[3] = -0.882813f;
    data->d[4] = 1.345309f;
    data->d[5] = 0.004356f;
    data->d[6] = -0.490919f;
    data->d[7] = -0.027493f;
    data->d[8] = -2.552495f;
    data->d[9] = 0.106221f;
    data->d[10] = 0.573435f;
    data->d[11] = 0.959723f;
    data->d[12] = -1.076883f;
    data->d[13] = -1.110988f;
    data->d[14] = 0.696073f;
    data->d[15] = 0.901353f;
    data->d[16] = -0.219635f;
    data->d[17] = 0.638901f;
    data->d[18] = 0.462189f;
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
    *(result->MinResult()) = 0.000014f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000014f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 0;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 3871084832961392673;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
