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
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 0, 29);
    instructions->SetOperation(2, 0, 18);
    instructions->SetOperation(3, 1, 30);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 1, 30);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 0, 22);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 20);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 0, 29);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.488456f;
    data->d[1] = -1.221012f;
    data->d[2] = 0.803686f;
    data->d[3] = 0.998296f;
    data->d[4] = 0.233296f;
    data->d[5] = 0.913655f;
    data->d[6] = 0.560804f;
    data->d[7] = -1.516950f;
    data->d[8] = 12.550740f;
    data->d[9] = -0.420088f;
    data->d[10] = 0.071035f;
    data->d[11] = -13.737291f;
    data->d[12] = 0.804981f;
    data->d[13] = -0.170481f;
    data->d[14] = 5.762451f;
    data->d[15] = 0.235287f;
    data->d[16] = 0.271461f;
    data->d[17] = -0.000731f;
    data->d[18] = 0.681560f;
    data->d[19] = -0.121688f;
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
    *(result->MinResult()) = 0.000235f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.695292f;
    data->d[1] = 1.579651f;
    data->d[2] = 0.457677f;
    data->d[3] = -0.753376f;
    data->d[4] = -0.282514f;
    data->d[5] = 0.359706f;
    data->d[6] = 0.298185f;
    data->d[7] = -0.513424f;
    data->d[8] = 0.392595f;
    data->d[9] = -2.524097f;
    data->d[10] = 1.860604f;
    data->d[11] = -0.906867f;
    data->d[12] = -12.433934f;
    data->d[13] = 0.240136f;
    data->d[14] = -3.292466f;
    data->d[15] = 0.000026f;
    data->d[16] = -1.235477f;
    data->d[17] = -1.414445f;
    data->d[18] = -1.355041f;
    data->d[19] = 0.010584f;
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
    *(result->MinResult()) = 0.000176f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.385378f;
    data->d[1] = 1.616990f;
    data->d[2] = 0.668235f;
    data->d[3] = -1.446711f;
    data->d[4] = -0.077729f;
    data->d[5] = -0.335842f;
    data->d[6] = -1.695789f;
    data->d[7] = -1.285483f;
    data->d[8] = -0.373914f;
    data->d[9] = -2.104119f;
    data->d[10] = -0.690733f;
    data->d[11] = -1.011141f;
    data->d[12] = 0.002897f;
    data->d[13] = 0.620564f;
    data->d[14] = 4.484784f;
    data->d[15] = -0.003595f;
    data->d[16] = -0.391087f;
    data->d[17] = -1.372423f;
    data->d[18] = -1.004056f;
    data->d[19] = 0.195095f;
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
    *(result->MinResult()) = 0.000287f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000287f;
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
    state.m_test = 0;
    state.m_seed = 5153090431021162487;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
