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
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 10);
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
    data->d[0] = 1.864882f;
    data->d[1] = -3.008509f;
    data->d[2] = -1.997734f;
    data->d[3] = -0.598696f;
    data->d[4] = 0.598229f;
    data->d[5] = -9.869435f;
    data->d[6] = 7.144067f;
    data->d[7] = 0.009959f;
    data->d[8] = 0.468534f;
    data->d[9] = -1.329058f;
    data->d[10] = -0.233372f;
    data->d[11] = 0.964713f;
    data->d[12] = -1.014094f;
    data->d[13] = -1.179975f;
    data->d[14] = 0.801241f;
    data->d[15] = 2.407221f;
    data->d[16] = -3.615079f;
    data->d[17] = 1.107153f;
    data->d[18] = 1.190786f;
    data->d[19] = 0.003717f;
    data->d[20] = 0.069811f;
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
    *(result->MinResult()) = 0.000050f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.043142f;
    data->d[1] = 1.542714f;
    data->d[2] = -4.590443f;
    data->d[3] = 1.561345f;
    data->d[4] = -1.560992f;
    data->d[5] = -62.450092f;
    data->d[6] = 56.810184f;
    data->d[7] = 0.036858f;
    data->d[8] = -0.141792f;
    data->d[9] = -0.479987f;
    data->d[10] = -0.342192f;
    data->d[11] = 2.574430f;
    data->d[12] = -3.363831f;
    data->d[13] = 6.536655f;
    data->d[14] = -3.492530f;
    data->d[15] = 0.571098f;
    data->d[16] = 2.443077f;
    data->d[17] = 0.937778f;
    data->d[18] = 0.570565f;
    data->d[19] = 2.090415f;
    data->d[20] = -0.056625f;
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
    *(result->MinResult()) = 0.000037f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.342507f;
    data->d[1] = -1.267727f;
    data->d[2] = -1.007873f;
    data->d[3] = -0.870584f;
    data->d[4] = 0.870819f;
    data->d[5] = -4.983560f;
    data->d[6] = 1.856491f;
    data->d[7] = 0.164053f;
    data->d[8] = -0.303642f;
    data->d[9] = 2.251624f;
    data->d[10] = 1.809210f;
    data->d[11] = 0.128849f;
    data->d[12] = 0.134772f;
    data->d[13] = -0.782370f;
    data->d[14] = -0.626142f;
    data->d[15] = 0.553196f;
    data->d[16] = 0.045065f;
    data->d[17] = -0.002518f;
    data->d[18] = 0.298906f;
    data->d[19] = 0.826970f;
    data->d[20] = 0.632971f;
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
    *(result->MinResult()) = 0.000111f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000111f;
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

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
