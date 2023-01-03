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
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 11000;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 9);
    instructions->SetOperation(4, 1, 29);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 0, 31);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 1, 21);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 31);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 0, 31);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = -0.335232f;
    data->d[2] = 1.863497f;
    data->d[3] = -7.787549f;
    data->d[4] = 1.216463f;
    data->d[5] = -0.600569f;
    data->d[6] = -0.697991f;
    data->d[7] = -0.337556f;
    data->d[8] = 0.460245f;
    data->d[9] = 0.173688f;
    data->d[10] = 0.051250f;
    data->d[11] = 3.078382f;
    data->d[12] = 0.000530f;
    data->d[13] = -0.861504f;
    data->d[14] = 0.631397f;
    data->d[15] = 2.327358f;
    data->d[16] = 1.216624f;
    data->d[17] = -0.735555f;
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
    *result->MinResult(0) = 0.000009f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090647f;
    data->d[1] = -0.591500f;
    data->d[2] = -0.026574f;
    data->d[3] = 1.068427f;
    data->d[4] = -1.864744f;
    data->d[5] = -3.571103f;
    data->d[6] = 0.184863f;
    data->d[7] = -1.086480f;
    data->d[8] = 0.248584f;
    data->d[9] = -0.146022f;
    data->d[10] = -0.792198f;
    data->d[11] = -0.008972f;
    data->d[12] = 5.092273f;
    data->d[13] = 0.550905f;
    data->d[14] = -0.815872f;
    data->d[15] = -1.224951f;
    data->d[16] = -1.614324f;
    data->d[17] = 0.636240f;
    data->d[18] = -0.118134f;
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
    *result->MinResult(1) = 0.000024f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617970f;
    data->d[1] = -0.866463f;
    data->d[2] = -0.023626f;
    data->d[3] = 2.792324f;
    data->d[4] = 0.319314f;
    data->d[5] = 1.349120f;
    data->d[6] = 1.435585f;
    data->d[7] = 0.212081f;
    data->d[8] = 1.435316f;
    data->d[9] = -1.452421f;
    data->d[10] = 0.488096f;
    data->d[11] = 0.144985f;
    data->d[12] = -1.550852f;
    data->d[13] = -6.253912f;
    data->d[14] = -3.657776f;
    data->d[15] = 0.177829f;
    data->d[16] = 0.805553f;
    data->d[17] = 1.366301f;
    data->d[18] = 0.523579f;
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
    *result->MinResult(2) = 0.000044f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000044f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 10484;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
