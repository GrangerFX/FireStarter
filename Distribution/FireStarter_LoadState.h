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
    settings.m_units = 10;
    settings.m_processes = 16;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 0, 7);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 1, 21);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 0, 1);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 0, 31);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 29);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 1, 4);
    instructions->SetOperation(23, 0, 4);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 19);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 1, 1);
    instructions->SetOperation(29, 0, 24);
    instructions->SetOperation(30, 1, 31);
    instructions->SetOperation(31, 1, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.224470f;
    data->d[1] = 0.086601f;
    data->d[2] = -2.392511f;
    data->d[3] = 0.397880f;
    data->d[4] = 0.420017f;
    data->d[5] = -0.603200f;
    data->d[6] = -1.087937f;
    data->d[7] = -2.079942f;
    data->d[8] = -4.673948f;
    data->d[9] = -3.471039f;
    data->d[10] = 0.044629f;
    data->d[11] = -0.640651f;
    data->d[12] = -1.230432f;
    data->d[13] = 0.498099f;
    data->d[14] = 0.424516f;
    data->d[15] = 1.100924f;
    data->d[16] = 2.455209f;
    data->d[17] = 0.066742f;
    data->d[18] = -0.679727f;
    data->d[19] = -2.266168f;
    data->d[20] = -0.805553f;
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
    *result->MinResult(0) = 0.000078f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.969052f;
    data->d[1] = -0.737820f;
    data->d[2] = 0.023522f;
    data->d[3] = 0.167905f;
    data->d[4] = -2.250212f;
    data->d[5] = 1.721905f;
    data->d[6] = 0.719093f;
    data->d[7] = 0.826380f;
    data->d[8] = 2.877695f;
    data->d[9] = -3.706130f;
    data->d[10] = -0.855771f;
    data->d[11] = -0.973263f;
    data->d[12] = 0.621709f;
    data->d[13] = -1.775259f;
    data->d[14] = -1.656749f;
    data->d[15] = 0.907464f;
    data->d[16] = 0.007239f;
    data->d[17] = -6.163143f;
    data->d[18] = -0.772872f;
    data->d[19] = -0.125194f;
    data->d[20] = -0.202250f;
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
    *result->MinResult(1) = 0.000031f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.542367f;
    data->d[1] = 0.786177f;
    data->d[2] = -0.498024f;
    data->d[3] = -0.697450f;
    data->d[4] = -0.808056f;
    data->d[5] = -1.206449f;
    data->d[6] = 1.257084f;
    data->d[7] = -3.824829f;
    data->d[8] = -2.993932f;
    data->d[9] = 3.242212f;
    data->d[10] = -0.004671f;
    data->d[11] = 0.949465f;
    data->d[12] = 0.840894f;
    data->d[13] = -0.907372f;
    data->d[14] = 0.754725f;
    data->d[15] = -0.209317f;
    data->d[16] = -0.200396f;
    data->d[17] = -0.597277f;
    data->d[18] = -0.592655f;
    data->d[19] = -0.331338f;
    data->d[20] = -0.060635f;
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
    *result->MinResult(2) = 0.000081f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000081f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 47;
    state.m_index = 99;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
