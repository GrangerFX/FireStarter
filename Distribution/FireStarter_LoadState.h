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
    program.m_dataSize = 21;
    program.m_maxRegisters = 5;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 20};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 30};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 3, 6, 14};
    program.m_registers[7] = {7, 4, 8, 29};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 9, 10, 10};
    program.m_registers[10] = {10, 10, 11, 11};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 3, 17, 28};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 17, 24, 24};
    program.m_registers[18] = {18, 18, 25, 25};
    program.m_registers[19] = {19, 0, 26, 27};
    program.m_registers[20] = {20, 20, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 1);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 0, 20);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.511311f;
    data->d[1] = 1.606264f;
    data->d[2] = 0.702618f;
    data->d[3] = -0.509167f;
    data->d[4] = 0.022977f;
    data->d[5] = -0.915645f;
    data->d[6] = 0.518323f;
    data->d[7] = -0.792420f;
    data->d[8] = 0.007045f;
    data->d[9] = 2.082282f;
    data->d[10] = 0.780029f;
    data->d[11] = -0.811464f;
    data->d[12] = -0.449260f;
    data->d[13] = -0.765020f;
    data->d[14] = 0.136281f;
    data->d[15] = -0.345592f;
    data->d[16] = 1.213079f;
    data->d[17] = 1.711940f;
    data->d[18] = -0.583726f;
    data->d[19] = 1.815497f;
    data->d[20] = 0.348738f;
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
    *result->MinResult(0) = 0.000159f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.424669f;
    data->d[1] = 1.266859f;
    data->d[2] = 0.623709f;
    data->d[3] = 0.231645f;
    data->d[4] = -0.036803f;
    data->d[5] = 0.518180f;
    data->d[6] = -0.873892f;
    data->d[7] = -0.380766f;
    data->d[8] = -0.071368f;
    data->d[9] = -1.723177f;
    data->d[10] = -0.910804f;
    data->d[11] = 0.416917f;
    data->d[12] = -1.011819f;
    data->d[13] = 0.979504f;
    data->d[14] = -0.001430f;
    data->d[15] = -0.240485f;
    data->d[16] = 0.796231f;
    data->d[17] = -0.791008f;
    data->d[18] = -3.371152f;
    data->d[19] = -2.011252f;
    data->d[20] = -0.800678f;
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
    *result->MinResult(1) = 0.000107f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.166772f;
    data->d[1] = -0.533021f;
    data->d[2] = 4.403865f;
    data->d[3] = -0.142101f;
    data->d[4] = -0.327417f;
    data->d[5] = -0.787791f;
    data->d[6] = -1.190831f;
    data->d[7] = 0.344517f;
    data->d[8] = 5.590003f;
    data->d[9] = 0.001059f;
    data->d[10] = -0.384471f;
    data->d[11] = 0.995756f;
    data->d[12] = 0.172158f;
    data->d[13] = 1.931038f;
    data->d[14] = -1.743909f;
    data->d[15] = -0.050592f;
    data->d[16] = 0.705759f;
    data->d[17] = 1.126406f;
    data->d[18] = 0.999240f;
    data->d[19] = -1.740895f;
    data->d[20] = -1.277119f;
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
    *result->MinResult(2) = 0.000551f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000551f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 200;
    state.m_seed = 3232320150;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
