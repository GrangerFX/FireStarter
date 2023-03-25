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
    settings.m_units = 8;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 21);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 1, 17);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 0, 11);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 0, 32);
    instructions->SetOperation(11, 1, 19);
    instructions->SetOperation(12, 0, 45);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 28);
    instructions->SetOperation(17, 1, 31);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 1, 40);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 55);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 1, 11);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 3);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.271015f;
    data->d[1] = -0.110242f;
    data->d[2] = 0.590955f;
    data->d[3] = -0.202073f;
    data->d[4] = -1.847035f;
    data->d[5] = 1.699546f;
    data->d[6] = -0.572247f;
    data->d[7] = 0.634482f;
    data->d[8] = 0.674971f;
    data->d[9] = 0.219451f;
    data->d[10] = 0.503396f;
    data->d[11] = -0.660133f;
    data->d[12] = 0.014160f;
    data->d[13] = -0.259094f;
    data->d[14] = -3.525687f;
    data->d[15] = 0.958508f;
    data->d[16] = 0.307873f;
    data->d[17] = 0.649929f;
    data->d[18] = 1.386254f;
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
    *(result->MinResult()) = 0.000319f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.495908f;
    data->d[1] = -0.973523f;
    data->d[2] = -0.039453f;
    data->d[3] = -1.544900f;
    data->d[4] = 0.154941f;
    data->d[5] = -2.010348f;
    data->d[6] = -0.818619f;
    data->d[7] = 0.850864f;
    data->d[8] = 0.379765f;
    data->d[9] = 0.861178f;
    data->d[10] = 0.816353f;
    data->d[11] = -0.870729f;
    data->d[12] = -1.130050f;
    data->d[13] = -0.502221f;
    data->d[14] = -1.579121f;
    data->d[15] = -0.681793f;
    data->d[16] = 0.067645f;
    data->d[17] = 0.384184f;
    data->d[18] = 0.176208f;
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
    *(result->MinResult()) = 0.000261f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.443119f;
    data->d[1] = 2.327894f;
    data->d[2] = 1.541513f;
    data->d[3] = 0.052928f;
    data->d[4] = 0.035098f;
    data->d[5] = -0.253021f;
    data->d[6] = 1.083472f;
    data->d[7] = -1.014579f;
    data->d[8] = 1.950112f;
    data->d[9] = -1.665581f;
    data->d[10] = -0.082358f;
    data->d[11] = 1.012416f;
    data->d[12] = -2.134029f;
    data->d[13] = 1.380880f;
    data->d[14] = -0.075676f;
    data->d[15] = 2.220905f;
    data->d[16] = 0.168878f;
    data->d[17] = -0.014796f;
    data->d[18] = 0.933256f;
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
    *(result->MinResult()) = 0.000323f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000323f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 120;
    state.m_index = 0;
    state.m_test = 98;
    state.m_seed = 8739654513756583355;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
