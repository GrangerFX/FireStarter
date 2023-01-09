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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 1;
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
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 31);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 1, 17);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 31);
    instructions->SetOperation(24, 1, 31);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 0, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.699310f;
    data->d[1] = -0.953739f;
    data->d[2] = -2.502321f;
    data->d[3] = 0.285889f;
    data->d[4] = 0.651422f;
    data->d[5] = 0.080220f;
    data->d[6] = 5.829679f;
    data->d[7] = 0.739984f;
    data->d[8] = -0.558689f;
    data->d[9] = 1.001298f;
    data->d[10] = 0.320381f;
    data->d[11] = -0.100696f;
    data->d[12] = 0.946082f;
    data->d[13] = 0.134363f;
    data->d[14] = 0.745556f;
    data->d[15] = 5.265979f;
    data->d[16] = -0.785507f;
    data->d[17] = -8.630675f;
    data->d[18] = -0.960292f;
    data->d[19] = 3.554649f;
    data->d[20] = -2.150913f;
    data->d[21] = -3.734110f;
    data->d[22] = -0.799357f;
    data->d[23] = -0.693490f;
    data->d[24] = 0.121509f;
    data->d[25] = -0.381297f;
    data->d[26] = 2.248838f;
    data->d[27] = -0.749875f;
    data->d[28] = 0.658281f;
    data->d[29] = 0.781936f;
    data->d[30] = 7.042801f;
    data->d[31] = -0.019390f;
    *(result->MinResult()) = 0.021498f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.956193f;
    data->d[1] = -1.365972f;
    data->d[2] = -0.999224f;
    data->d[3] = 1.264009f;
    data->d[4] = 0.127570f;
    data->d[5] = -0.984880f;
    data->d[6] = 0.445831f;
    data->d[7] = -0.599999f;
    data->d[8] = 0.587097f;
    data->d[9] = 0.827959f;
    data->d[10] = 0.535540f;
    data->d[11] = -0.390026f;
    data->d[12] = 0.714819f;
    data->d[13] = 0.408949f;
    data->d[14] = 0.304620f;
    data->d[15] = -0.096987f;
    data->d[16] = 2.091537f;
    data->d[17] = 0.521069f;
    data->d[18] = 0.940730f;
    data->d[19] = 0.816617f;
    data->d[20] = -0.846609f;
    data->d[21] = 0.374467f;
    data->d[22] = 1.949141f;
    data->d[23] = 0.288654f;
    data->d[24] = -0.243733f;
    data->d[25] = -0.218592f;
    data->d[26] = -0.241552f;
    data->d[27] = 0.540178f;
    data->d[28] = -0.572703f;
    data->d[29] = 1.086251f;
    data->d[30] = -0.874909f;
    data->d[31] = -0.790122f;
    *(result->MinResult()) = 0.025294f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.623975f;
    data->d[1] = 0.193750f;
    data->d[2] = 0.683883f;
    data->d[3] = 0.609264f;
    data->d[4] = -2.256798f;
    data->d[5] = -0.619103f;
    data->d[6] = 0.657585f;
    data->d[7] = -0.054211f;
    data->d[8] = 0.281561f;
    data->d[9] = -0.180462f;
    data->d[10] = -0.581267f;
    data->d[11] = -0.335188f;
    data->d[12] = -1.556570f;
    data->d[13] = 0.012429f;
    data->d[14] = -0.190357f;
    data->d[15] = -0.055184f;
    data->d[16] = 1.305710f;
    data->d[17] = 0.726771f;
    data->d[18] = 0.582371f;
    data->d[19] = -0.439132f;
    data->d[20] = 0.978361f;
    data->d[21] = 0.151762f;
    data->d[22] = 0.933277f;
    data->d[23] = 0.540140f;
    data->d[24] = 0.313863f;
    data->d[25] = 0.004878f;
    data->d[26] = -0.767867f;
    data->d[27] = -1.080700f;
    data->d[28] = -0.708228f;
    data->d[29] = 1.718430f;
    data->d[30] = 0.043901f;
    data->d[31] = 0.562895f;
    *(result->MinResult()) = 0.021435f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(472162927));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(1));

    state.m_maxResult = 0.025294f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 11;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
