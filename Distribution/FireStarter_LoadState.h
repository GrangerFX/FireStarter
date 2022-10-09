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
    settings.m_units = 2;
    settings.m_processes = 6;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 100;
    settings.m_seed = 7988;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 19;
    program.m_maxRegisters = 6;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 6};
    program.m_registers[2] = {2, 1, 2, 23};
    program.m_registers[3] = {3, 2, 3, 27};
    program.m_registers[4] = {4, 3, 4, 24};
    program.m_registers[5] = {5, 5, 7, 7};
    program.m_registers[6] = {6, 6, 9, 9};
    program.m_registers[7] = {7, 0, 10, 28};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 4, 13, 26};
    program.m_registers[10] = {10, 10, 14, 14};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 5, 18, 25};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 29, 29};
    program.m_registers[17] = {17, 17, 30, 30};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 4);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 0, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.225209f;
    data->d[1] = 0.397952f;
    data->d[2] = 0.309563f;
    data->d[3] = -0.257164f;
    data->d[4] = 1.017596f;
    data->d[5] = 0.196143f;
    data->d[6] = 2.339940f;
    data->d[7] = -1.247778f;
    data->d[8] = -1.137383f;
    data->d[9] = -0.045445f;
    data->d[10] = 0.390805f;
    data->d[11] = 0.450702f;
    data->d[12] = 7.754164f;
    data->d[13] = 1.240546f;
    data->d[14] = -0.820324f;
    data->d[15] = 1.906610f;
    data->d[16] = -3.274545f;
    data->d[17] = 0.000065f;
    data->d[18] = -0.127284f;
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
    *result->MinResult(0) = 0.000021f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.205909f;
    data->d[1] = -0.026237f;
    data->d[2] = -0.610158f;
    data->d[3] = 0.485194f;
    data->d[4] = -0.636657f;
    data->d[5] = 3.248646f;
    data->d[6] = 0.626874f;
    data->d[7] = -1.288114f;
    data->d[8] = 0.547798f;
    data->d[9] = 1.239847f;
    data->d[10] = 0.246374f;
    data->d[11] = -0.003600f;
    data->d[12] = 1.252342f;
    data->d[13] = 0.728503f;
    data->d[14] = -0.545022f;
    data->d[15] = 0.513311f;
    data->d[16] = -0.575208f;
    data->d[17] = 0.627358f;
    data->d[18] = -0.188302f;
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
    *result->MinResult(1) = 0.000020f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.097762f;
    data->d[1] = 1.079051f;
    data->d[2] = -0.823131f;
    data->d[3] = -1.569939f;
    data->d[4] = -0.094128f;
    data->d[5] = -0.506890f;
    data->d[6] = 2.446606f;
    data->d[7] = -11.490304f;
    data->d[8] = 0.511495f;
    data->d[9] = 0.187103f;
    data->d[10] = -0.505634f;
    data->d[11] = 0.567097f;
    data->d[12] = -0.601532f;
    data->d[13] = -0.715165f;
    data->d[14] = 0.577803f;
    data->d[15] = -3.698504f;
    data->d[16] = -0.113103f;
    data->d[17] = 0.161064f;
    data->d[18] = 3.252169f;
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
    *result->MinResult(2) = 0.000020f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000021f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 176;
    state.m_bestIndex = 13728;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
