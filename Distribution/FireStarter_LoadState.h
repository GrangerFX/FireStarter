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
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 27);
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
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 1, 31);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 27);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.747325f;
    data->d[1] = 0.569641f;
    data->d[2] = 0.946005f;
    data->d[3] = 0.477511f;
    data->d[4] = -0.936501f;
    data->d[5] = -3.599142f;
    data->d[6] = -29.803049f;
    data->d[7] = 0.401001f;
    data->d[8] = -0.203020f;
    data->d[9] = -0.672242f;
    data->d[10] = -0.440589f;
    data->d[11] = 0.315751f;
    data->d[12] = 0.972008f;
    data->d[13] = -0.798757f;
    data->d[14] = -0.063703f;
    data->d[15] = 0.082307f;
    data->d[16] = -0.459478f;
    data->d[17] = -0.102155f;
    data->d[18] = -0.852774f;
    data->d[19] = -0.850550f;
    data->d[20] = 0.060702f;
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
    *result->MinResult(0) = 0.000217f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.491150f;
    data->d[1] = -0.242671f;
    data->d[2] = -0.365496f;
    data->d[3] = 0.042635f;
    data->d[4] = 0.034469f;
    data->d[5] = -1.326548f;
    data->d[6] = -0.871819f;
    data->d[7] = 0.790165f;
    data->d[8] = -0.336562f;
    data->d[9] = 0.987090f;
    data->d[10] = 0.865731f;
    data->d[11] = 0.769887f;
    data->d[12] = -0.680919f;
    data->d[13] = -0.039411f;
    data->d[14] = 0.478938f;
    data->d[15] = 0.856127f;
    data->d[16] = -0.691761f;
    data->d[17] = 0.807771f;
    data->d[18] = 1.059409f;
    data->d[19] = -0.058672f;
    data->d[20] = 0.311093f;
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
    *result->MinResult(1) = 0.000310f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.163002f;
    data->d[1] = -0.792334f;
    data->d[2] = 0.612434f;
    data->d[3] = 0.412478f;
    data->d[4] = 2.016313f;
    data->d[5] = -58.636650f;
    data->d[6] = -15.517672f;
    data->d[7] = -0.192872f;
    data->d[8] = 0.248536f;
    data->d[9] = -0.744349f;
    data->d[10] = -1.857541f;
    data->d[11] = -0.684133f;
    data->d[12] = 1.471309f;
    data->d[13] = 1.313571f;
    data->d[14] = 0.020828f;
    data->d[15] = -0.698432f;
    data->d[16] = 2.810435f;
    data->d[17] = -0.068863f;
    data->d[18] = 3.823925f;
    data->d[19] = -0.116964f;
    data->d[20] = -2.133606f;
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
    *result->MinResult(2) = 0.000404f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000404f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 2;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
