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
    settings.m_units = 2;
    settings.m_processes = 6;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10000;
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
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 28};
    program.m_registers[3] = {3, 1, 3, 25};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 2, 6, 26};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 8, 12, 12};
    program.m_registers[9] = {9, 3, 13, 30};
    program.m_registers[10] = {10, 10, 14, 14};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 4, 17, 27};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 17, 29, 29};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 2);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 0, 2);
    instructions->SetOperation(19, 0, 5);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 1, 5);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 1, 3);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 1, 2);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 0, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.478582f;
    data->d[1] = 0.275421f;
    data->d[2] = 0.530380f;
    data->d[3] = -0.009729f;
    data->d[4] = -4.037915f;
    data->d[5] = 0.097421f;
    data->d[6] = 2.049846f;
    data->d[7] = 15.649654f;
    data->d[8] = 48.993813f;
    data->d[9] = 0.729084f;
    data->d[10] = 7.745353f;
    data->d[11] = -2.034778f;
    data->d[12] = 36.032749f;
    data->d[13] = -0.203501f;
    data->d[14] = -664.666748f;
    data->d[15] = -0.347695f;
    data->d[16] = 2.377449f;
    data->d[17] = -0.094007f;
    data->d[18] = -0.007918f;
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
    *result->MinResult(0) = 0.000061f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -4.119772f;
    data->d[1] = -0.858486f;
    data->d[2] = -0.355246f;
    data->d[3] = 1.940744f;
    data->d[4] = -0.924607f;
    data->d[5] = 0.030176f;
    data->d[6] = -43.408447f;
    data->d[7] = 83.159851f;
    data->d[8] = -91.429405f;
    data->d[9] = -0.042675f;
    data->d[10] = 2.336970f;
    data->d[11] = 0.021019f;
    data->d[12] = -0.198830f;
    data->d[13] = 0.279793f;
    data->d[14] = -8.325649f;
    data->d[15] = -0.038672f;
    data->d[16] = -0.152472f;
    data->d[17] = -0.478974f;
    data->d[18] = -0.485880f;
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
    *result->MinResult(1) = 0.000034f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.614355f;
    data->d[1] = 0.533106f;
    data->d[2] = -1.434020f;
    data->d[3] = -0.663898f;
    data->d[4] = 0.650650f;
    data->d[5] = -0.507865f;
    data->d[6] = -4.150202f;
    data->d[7] = -0.254739f;
    data->d[8] = 4.123038f;
    data->d[9] = -0.425445f;
    data->d[10] = 0.707326f;
    data->d[11] = 0.026243f;
    data->d[12] = 0.214175f;
    data->d[13] = -0.550694f;
    data->d[14] = 3.004763f;
    data->d[15] = 0.018121f;
    data->d[16] = 1.764144f;
    data->d[17] = -0.438869f;
    data->d[18] = -0.854735f;
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
    *result->MinResult(2) = 0.000059f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000061f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 9216;
    state.m_bestIndex = 42209;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
