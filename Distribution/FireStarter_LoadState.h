#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_states = 1;
    settings.m_units = 2;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_generations = 5;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 18;
    program.m_maxRegisters = 6;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 12};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 6};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 2, 7, 24};
    program.m_registers[7] = {7, 3, 8, 29};
    program.m_registers[8] = {8, 4, 9, 17};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 1, 13, 31};
    program.m_registers[11] = {11, 4, 18, 26};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 5, 20, 28};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 10);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.277975f;
    data->d[1] = 0.182334f;
    data->d[2] = -0.532437f;
    data->d[3] = -0.563459f;
    data->d[4] = 0.635834f;
    data->d[5] = 0.253669f;
    data->d[6] = -0.953803f;
    data->d[7] = -0.358638f;
    data->d[8] = -0.895014f;
    data->d[9] = -0.277504f;
    data->d[10] = -0.414717f;
    data->d[11] = -0.877171f;
    data->d[12] = -0.626592f;
    data->d[13] = -1.025100f;
    data->d[14] = 0.621112f;
    data->d[15] = -0.570739f;
    data->d[16] = 0.767740f;
    data->d[17] = 0.000506f;
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
    *result->MinResult(0) = 0.023007f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.063674f;
    data->d[1] = 1.547668f;
    data->d[2] = -0.916604f;
    data->d[3] = 0.506192f;
    data->d[4] = -0.153277f;
    data->d[5] = -0.870515f;
    data->d[6] = 0.642587f;
    data->d[7] = -0.298498f;
    data->d[8] = -0.753959f;
    data->d[9] = -0.516860f;
    data->d[10] = 0.616667f;
    data->d[11] = 0.192996f;
    data->d[12] = 0.922852f;
    data->d[13] = 1.096689f;
    data->d[14] = 0.784253f;
    data->d[15] = 3.874139f;
    data->d[16] = 0.058431f;
    data->d[17] = 0.013971f;
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
    *result->MinResult(1) = 0.017971f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.539987f;
    data->d[1] = 0.051465f;
    data->d[2] = 0.963369f;
    data->d[3] = -0.327597f;
    data->d[4] = 2.405525f;
    data->d[5] = 0.099169f;
    data->d[6] = 0.534386f;
    data->d[7] = 0.798760f;
    data->d[8] = 1.093339f;
    data->d[9] = 1.052006f;
    data->d[10] = -0.859948f;
    data->d[11] = -0.199852f;
    data->d[12] = -1.900175f;
    data->d[13] = 0.518108f;
    data->d[14] = 0.373452f;
    data->d[15] = 0.125535f;
    data->d[16] = -0.005495f;
    data->d[17] = 0.482806f;
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
    *result->MinResult(2) = 0.022641f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.023007f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 25;
    state.m_seed = 3232319880;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
