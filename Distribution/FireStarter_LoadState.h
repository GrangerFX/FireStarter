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
    settings.m_attempts = 32;
    settings.m_seed = 209;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 10);
    instructions->SetOperation(1, 0, 31);
    instructions->SetOperation(2, 1, 8);
    instructions->SetOperation(3, 1, 13);
    instructions->SetOperation(4, 1, 0);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 0, 11);
    instructions->SetOperation(8, 1, 29);
    instructions->SetOperation(9, 0, 29);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 26);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 1, 23);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 1, 16);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 1, 17);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 1, 24);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.543926f;
    data->d[1] = -0.583386f;
    data->d[2] = 0.092054f;
    data->d[3] = 0.411784f;
    data->d[4] = -0.155378f;
    data->d[5] = 0.497686f;
    data->d[6] = 1.280561f;
    data->d[7] = 0.024426f;
    data->d[8] = 0.595477f;
    data->d[9] = 1.793315f;
    data->d[10] = 2.942509f;
    data->d[11] = 1.701400f;
    data->d[12] = 0.061545f;
    data->d[13] = 1.651401f;
    data->d[14] = 1.048216f;
    data->d[15] = -0.594974f;
    data->d[16] = -0.156176f;
    data->d[17] = 0.158954f;
    data->d[18] = 0.773552f;
    data->d[19] = -0.838405f;
    data->d[20] = -1.321118f;
    data->d[21] = 0.000061f;
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
    *(result->MinResult()) = 0.000116f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.286071f;
    data->d[1] = -0.576921f;
    data->d[2] = 1.595702f;
    data->d[3] = 0.460320f;
    data->d[4] = -1.083653f;
    data->d[5] = 1.069933f;
    data->d[6] = 0.902309f;
    data->d[7] = -0.206935f;
    data->d[8] = -1.320319f;
    data->d[9] = 1.659186f;
    data->d[10] = -0.728093f;
    data->d[11] = 1.210969f;
    data->d[12] = 0.158716f;
    data->d[13] = -2.784892f;
    data->d[14] = 0.170643f;
    data->d[15] = -0.435061f;
    data->d[16] = -1.002657f;
    data->d[17] = -1.063883f;
    data->d[18] = -2.147627f;
    data->d[19] = -1.030372f;
    data->d[20] = 2.476655f;
    data->d[21] = 0.002368f;
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
    *(result->MinResult()) = 0.000320f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.459822f;
    data->d[1] = 1.381745f;
    data->d[2] = 1.014702f;
    data->d[3] = -0.138378f;
    data->d[4] = -0.611377f;
    data->d[5] = 0.055304f;
    data->d[6] = 1.246273f;
    data->d[7] = -0.929883f;
    data->d[8] = 0.506970f;
    data->d[9] = 0.097917f;
    data->d[10] = -1.782008f;
    data->d[11] = 1.700928f;
    data->d[12] = 0.453461f;
    data->d[13] = -0.929673f;
    data->d[14] = 0.075630f;
    data->d[15] = -6.590074f;
    data->d[16] = 2.157724f;
    data->d[17] = -1.026466f;
    data->d[18] = -2.084327f;
    data->d[19] = -3.013512f;
    data->d[20] = 0.386239f;
    data->d[21] = 0.619042f;
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
    *(result->MinResult()) = 0.000224f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000320f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 0;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
