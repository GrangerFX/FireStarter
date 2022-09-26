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
    settings.m_attempts = 330;
    settings.m_seed = 300;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 20;
    program.m_maxRegisters = 4;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 18};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 1, 2, 11};
    program.m_registers[3] = {3, 2, 3, 4};
    program.m_registers[4] = {4, 2, 5, 21};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 1, 12, 20};
    program.m_registers[10] = {10, 3, 14, 28};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 0, 19, 29};
    program.m_registers[14] = {14, 2, 22, 23};
    program.m_registers[15] = {15, 15, 24, 24};
    program.m_registers[16] = {16, 16, 26, 26};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 30, 30};
    program.m_registers[19] = {19, 19, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 2);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 0);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 9);
    instructions->SetOperation(18, 1, 0);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 1, 9);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 1, 13);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 0, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.665616f;
    data->d[1] = 3.486752f;
    data->d[2] = -0.619677f;
    data->d[3] = -0.848061f;
    data->d[4] = -0.936237f;
    data->d[5] = -2.719358f;
    data->d[6] = 0.009783f;
    data->d[7] = -0.673854f;
    data->d[8] = -0.503913f;
    data->d[9] = -0.250292f;
    data->d[10] = -0.087331f;
    data->d[11] = -0.673841f;
    data->d[12] = 1.011184f;
    data->d[13] = -1.166274f;
    data->d[14] = 0.120718f;
    data->d[15] = -1.117950f;
    data->d[16] = 1.309458f;
    data->d[17] = -0.826206f;
    data->d[18] = -1.136930f;
    data->d[19] = 0.624569f;
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
    *result->MinResult(0) = 0.000127f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.003428f;
    data->d[1] = -1.672903f;
    data->d[2] = 1.785402f;
    data->d[3] = 0.317259f;
    data->d[4] = -0.294183f;
    data->d[5] = -2.736972f;
    data->d[6] = 0.044230f;
    data->d[7] = -1.354502f;
    data->d[8] = 0.195715f;
    data->d[9] = -0.478491f;
    data->d[10] = -0.010434f;
    data->d[11] = 0.529787f;
    data->d[12] = -0.913196f;
    data->d[13] = 1.296218f;
    data->d[14] = 0.058717f;
    data->d[15] = -1.002834f;
    data->d[16] = -3.523023f;
    data->d[17] = 0.746379f;
    data->d[18] = -0.852847f;
    data->d[19] = -0.498428f;
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
    *result->MinResult(1) = 0.000068f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.353834f;
    data->d[1] = -1.018771f;
    data->d[2] = -0.545046f;
    data->d[3] = 0.213658f;
    data->d[4] = 1.474220f;
    data->d[5] = -2.127256f;
    data->d[6] = 0.122705f;
    data->d[7] = -0.450380f;
    data->d[8] = -0.630221f;
    data->d[9] = -0.938161f;
    data->d[10] = -0.104264f;
    data->d[11] = -0.426997f;
    data->d[12] = 0.438211f;
    data->d[13] = 0.763753f;
    data->d[14] = 1.200596f;
    data->d[15] = 1.046450f;
    data->d[16] = 9.510407f;
    data->d[17] = 2.501007f;
    data->d[18] = 4.057075f;
    data->d[19] = -0.517111f;
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
    *result->MinResult(2) = 0.000213f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000213f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 40;
    state.m_bestIndex = 68937;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
