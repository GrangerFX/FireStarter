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
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_generations = 10;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_INDIVIDUAL;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 21;
    program.m_maxRegisters = 7;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 27};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 1, 2, 11};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 2, 5, 22};
    program.m_registers[6] = {6, 3, 6, 29};
    program.m_registers[7] = {7, 4, 7, 28};
    program.m_registers[8] = {8, 5, 8, 25};
    program.m_registers[9] = {9, 9, 9, 9};
    program.m_registers[10] = {10, 6, 10, 20};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 13, 13};
    program.m_registers[13] = {13, 13, 15, 15};
    program.m_registers[14] = {14, 1, 16, 31};
    program.m_registers[15] = {15, 15, 17, 17};
    program.m_registers[16] = {16, 16, 18, 18};
    program.m_registers[17] = {17, 17, 19, 19};
    program.m_registers[18] = {18, 18, 24, 24};
    program.m_registers[19] = {19, 19, 26, 26};
    program.m_registers[20] = {20, 20, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 0, 10);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 1, 16);
    instructions->SetOperation(19, 1, 17);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 0, 14);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.642461f;
    data->d[1] = 0.176127f;
    data->d[2] = 1.046113f;
    data->d[3] = 0.422463f;
    data->d[4] = -0.032154f;
    data->d[5] = 0.301902f;
    data->d[6] = -0.605897f;
    data->d[7] = -0.874826f;
    data->d[8] = 0.441491f;
    data->d[9] = 0.790017f;
    data->d[10] = -0.159495f;
    data->d[11] = 0.357875f;
    data->d[12] = -0.764101f;
    data->d[13] = -0.121654f;
    data->d[14] = 0.207955f;
    data->d[15] = -2.150110f;
    data->d[16] = -0.671519f;
    data->d[17] = -0.865392f;
    data->d[18] = -0.262395f;
    data->d[19] = -3.585122f;
    data->d[20] = 0.800907f;
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
    *result->MinResult(0) = 0.012981f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.571714f;
    data->d[1] = 1.893393f;
    data->d[2] = 0.407406f;
    data->d[3] = 0.277376f;
    data->d[4] = -1.053410f;
    data->d[5] = -0.290259f;
    data->d[6] = 0.470641f;
    data->d[7] = 0.472151f;
    data->d[8] = 0.391661f;
    data->d[9] = -0.122023f;
    data->d[10] = 2.518477f;
    data->d[11] = -0.348041f;
    data->d[12] = -0.394303f;
    data->d[13] = -2.529937f;
    data->d[14] = 1.032982f;
    data->d[15] = 0.283522f;
    data->d[16] = -0.171776f;
    data->d[17] = -0.009430f;
    data->d[18] = -0.829791f;
    data->d[19] = 0.133259f;
    data->d[20] = 0.434961f;
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
    *result->MinResult(1) = 0.020881f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.136653f;
    data->d[1] = -0.672700f;
    data->d[2] = -2.703620f;
    data->d[3] = 0.256622f;
    data->d[4] = -0.345666f;
    data->d[5] = -0.822873f;
    data->d[6] = 0.703837f;
    data->d[7] = -0.737884f;
    data->d[8] = 0.874049f;
    data->d[9] = -0.200789f;
    data->d[10] = 2.640481f;
    data->d[11] = -0.600416f;
    data->d[12] = -0.813199f;
    data->d[13] = -0.053057f;
    data->d[14] = 0.751718f;
    data->d[15] = 0.951197f;
    data->d[16] = 1.448246f;
    data->d[17] = -1.039932f;
    data->d[18] = -1.023859f;
    data->d[19] = 0.402058f;
    data->d[20] = 0.395090f;
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
    *result->MinResult(2) = 0.023905f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.023905f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 30;
    state.m_seed = 3232319890;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
