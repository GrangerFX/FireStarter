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
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 1, 6);
    instructions->SetOperation(2, 1, 17);
    instructions->SetOperation(3, 1, 28);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 29);
    instructions->SetOperation(7, 1, 8);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 1, 30);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 0, 31);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 21);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 1);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 0, 21);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 1, 2);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 0, 29);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.966551f;
    data->d[1] = -0.904054f;
    data->d[2] = 0.610004f;
    data->d[3] = -0.645392f;
    data->d[4] = 0.110513f;
    data->d[5] = -3.569006f;
    data->d[6] = 3.498317f;
    data->d[7] = -1.717213f;
    data->d[8] = 1.580603f;
    data->d[9] = 2.383780f;
    data->d[10] = 0.254019f;
    data->d[11] = 0.657915f;
    data->d[12] = -4.784294f;
    data->d[13] = 2.564904f;
    data->d[14] = 1.344283f;
    data->d[15] = -0.962562f;
    data->d[16] = 0.718227f;
    data->d[17] = 1.119063f;
    data->d[18] = 0.795877f;
    data->d[19] = -0.111161f;
    data->d[20] = -0.248799f;
    data->d[21] = 1.636398f;
    data->d[22] = -3.144363f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000325f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.313589f;
    data->d[1] = -1.861461f;
    data->d[2] = 0.757189f;
    data->d[3] = -0.135883f;
    data->d[4] = -1.243172f;
    data->d[5] = -0.116566f;
    data->d[6] = -0.029505f;
    data->d[7] = -0.671984f;
    data->d[8] = 1.899823f;
    data->d[9] = -1.954514f;
    data->d[10] = 0.381270f;
    data->d[11] = -0.777786f;
    data->d[12] = 1.258817f;
    data->d[13] = -2.137120f;
    data->d[14] = 0.040182f;
    data->d[15] = 3.209712f;
    data->d[16] = 1.775303f;
    data->d[17] = 0.983504f;
    data->d[18] = -1.074403f;
    data->d[19] = -1.641105f;
    data->d[20] = 0.604909f;
    data->d[21] = 0.912187f;
    data->d[22] = 0.079608f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000144f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.287037f;
    data->d[1] = -3.021286f;
    data->d[2] = -0.702846f;
    data->d[3] = -1.622759f;
    data->d[4] = -0.116941f;
    data->d[5] = -1.901559f;
    data->d[6] = -1.320956f;
    data->d[7] = -0.832748f;
    data->d[8] = -0.340126f;
    data->d[9] = 0.448096f;
    data->d[10] = -0.693300f;
    data->d[11] = -0.623428f;
    data->d[12] = -0.990604f;
    data->d[13] = 1.703814f;
    data->d[14] = -0.212032f;
    data->d[15] = -2.848159f;
    data->d[16] = 1.855077f;
    data->d[17] = 0.433265f;
    data->d[18] = -0.635790f;
    data->d[19] = 0.522492f;
    data->d[20] = 0.528161f;
    data->d[21] = 0.519954f;
    data->d[22] = 1.204095f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000308f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000325f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 56;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 17343017389782417919;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
