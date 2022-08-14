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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 139264;
    settings.m_iterations = 512;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
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
    program.m_maxRegisters = 5;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 26};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 19};
    program.m_registers[4] = {4, 2, 4, 11};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 3, 6, 31};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 4, 8, 28};
    program.m_registers[9] = {9, 9, 9, 9};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 2, 15, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 18, 18};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 16, 21, 21};
    program.m_registers[17] = {17, 17, 23, 23};
    program.m_registers[18] = {18, 1, 25, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 1, 16);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 8);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 1, 1);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 0, 6);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.015745f;
    data->d[1] = 0.433991f;
    data->d[2] = 0.328969f;
    data->d[3] = -0.678502f;
    data->d[4] = 0.532746f;
    data->d[5] = 0.255518f;
    data->d[6] = 0.660893f;
    data->d[7] = 0.000000f;
    data->d[8] = -19.075369f;
    data->d[9] = 13.466266f;
    data->d[10] = -0.366430f;
    data->d[11] = -0.740262f;
    data->d[12] = 0.139430f;
    data->d[13] = 0.855950f;
    data->d[14] = -0.584026f;
    data->d[15] = -0.942326f;
    data->d[16] = -0.854615f;
    data->d[17] = 1.335505f;
    data->d[18] = -0.853128f;
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
    *result->MinResult(0) = 0.000223f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.160261f;
    data->d[1] = -1.014453f;
    data->d[2] = -0.169898f;
    data->d[3] = 0.366498f;
    data->d[4] = -1.103501f;
    data->d[5] = -0.681010f;
    data->d[6] = 0.290025f;
    data->d[7] = -0.427173f;
    data->d[8] = -0.146435f;
    data->d[9] = -1.209560f;
    data->d[10] = 0.931199f;
    data->d[11] = 0.323012f;
    data->d[12] = -0.563254f;
    data->d[13] = -0.720469f;
    data->d[14] = -0.858824f;
    data->d[15] = 0.191581f;
    data->d[16] = -0.483804f;
    data->d[17] = -0.018349f;
    data->d[18] = 0.919075f;
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
    *result->MinResult(1) = 0.000074f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.364663f;
    data->d[1] = -0.875800f;
    data->d[2] = 0.219624f;
    data->d[3] = -2.874182f;
    data->d[4] = 1.367820f;
    data->d[5] = 0.440934f;
    data->d[6] = 0.567381f;
    data->d[7] = -6.449829f;
    data->d[8] = 0.000000f;
    data->d[9] = -9.451872f;
    data->d[10] = -0.208307f;
    data->d[11] = -0.282876f;
    data->d[12] = 2.718868f;
    data->d[13] = 1.248938f;
    data->d[14] = 0.509592f;
    data->d[15] = -0.459989f;
    data->d[16] = 1.558755f;
    data->d[17] = -0.084822f;
    data->d[18] = -0.648131f;
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
    *result->MinResult(2) = 0.000154f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000223f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1500;
    state.m_seed = 3232321450;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
