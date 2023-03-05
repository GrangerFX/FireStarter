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
    settings.m_seed = 99;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 30);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 26);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 18);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.059952f;
    data->d[1] = 0.188344f;
    data->d[2] = 1.043908f;
    data->d[3] = 0.011764f;
    data->d[4] = -1.333286f;
    data->d[5] = 1.124930f;
    data->d[6] = 1.801537f;
    data->d[7] = 1.194745f;
    data->d[8] = -0.163651f;
    data->d[9] = 1.533087f;
    data->d[10] = -1.605857f;
    data->d[11] = 0.928060f;
    data->d[12] = 0.049853f;
    data->d[13] = -0.963549f;
    data->d[14] = 1.225805f;
    data->d[15] = 1.618314f;
    data->d[16] = 2.113750f;
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
    *(result->MinResult()) = 0.000455f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.135644f;
    data->d[1] = -0.404669f;
    data->d[2] = -1.141913f;
    data->d[3] = -1.300797f;
    data->d[4] = 1.416260f;
    data->d[5] = 0.799897f;
    data->d[6] = 1.250932f;
    data->d[7] = -0.258761f;
    data->d[8] = -0.142428f;
    data->d[9] = -1.586722f;
    data->d[10] = -1.564172f;
    data->d[11] = 1.065032f;
    data->d[12] = -1.762622f;
    data->d[13] = 0.013794f;
    data->d[14] = -0.232924f;
    data->d[15] = -3.452793f;
    data->d[16] = -0.606150f;
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
    *(result->MinResult()) = 0.000216f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.113497f;
    data->d[1] = 0.494352f;
    data->d[2] = 1.255552f;
    data->d[3] = 0.179892f;
    data->d[4] = -3.310225f;
    data->d[5] = 2.509600f;
    data->d[6] = 1.528080f;
    data->d[7] = 0.626358f;
    data->d[8] = -0.099960f;
    data->d[9] = 0.986792f;
    data->d[10] = -1.558814f;
    data->d[11] = 0.905031f;
    data->d[12] = -0.061750f;
    data->d[13] = -0.526557f;
    data->d[14] = 0.372294f;
    data->d[15] = 1.132239f;
    data->d[16] = 5.114267f;
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
    *(result->MinResult()) = 0.000476f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000476f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 14;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 7294716128747844045;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
