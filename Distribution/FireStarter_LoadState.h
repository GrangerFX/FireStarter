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
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 1, 11);
    instructions->SetOperation(2, 1, 22);
    instructions->SetOperation(3, 1, 9);
    instructions->SetOperation(4, 1, 11);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 1, 29);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 1, 29);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 23);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.199408f;
    data->d[1] = 0.395501f;
    data->d[2] = -0.871778f;
    data->d[3] = -2.466232f;
    data->d[4] = -0.099804f;
    data->d[5] = 2.828547f;
    data->d[6] = -0.241870f;
    data->d[7] = -2.973468f;
    data->d[8] = -0.267115f;
    data->d[9] = 0.242753f;
    data->d[10] = -2.578197f;
    data->d[11] = -0.038371f;
    data->d[12] = 0.636905f;
    data->d[13] = 0.640800f;
    data->d[14] = 0.600142f;
    data->d[15] = 8.313536f;
    data->d[16] = -0.101398f;
    data->d[17] = 0.000563f;
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
    *result->MinResult(0) = 0.000010f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.861153f;
    data->d[1] = 0.566890f;
    data->d[2] = -5.005620f;
    data->d[3] = 0.492180f;
    data->d[4] = -0.185414f;
    data->d[5] = 15.594525f;
    data->d[6] = -0.562570f;
    data->d[7] = 0.548452f;
    data->d[8] = -4.881953f;
    data->d[9] = 0.014209f;
    data->d[10] = -0.863118f;
    data->d[11] = -0.575005f;
    data->d[12] = -0.093103f;
    data->d[13] = -2.908669f;
    data->d[14] = 0.037010f;
    data->d[15] = 3.346480f;
    data->d[16] = 4.683061f;
    data->d[17] = -0.125133f;
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
    *result->MinResult(1) = 0.000010f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.168750f;
    data->d[1] = -0.764875f;
    data->d[2] = -1.161214f;
    data->d[3] = -0.520718f;
    data->d[4] = -0.121398f;
    data->d[5] = 18.254940f;
    data->d[6] = -0.731065f;
    data->d[7] = 11.829420f;
    data->d[8] = -2.712734f;
    data->d[9] = 0.031280f;
    data->d[10] = -1.081340f;
    data->d[11] = -0.245425f;
    data->d[12] = 0.870850f;
    data->d[13] = 0.593050f;
    data->d[14] = 0.253176f;
    data->d[15] = 5.951713f;
    data->d[16] = 1.294462f;
    data->d[17] = 0.518839f;
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
    *result->MinResult(2) = 0.000048f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000048f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 25;
    state.m_index = 1;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
