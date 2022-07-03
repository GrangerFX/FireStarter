#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_process = 0;
    settings.m_clients = 4;
    settings.m_seed = 9965;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 3;
    settings.m_evolveStates = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolvePopulation = 69632;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 0;
    settings.m_evolveAttempts = 10000;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 22;
    program.m_maxRegisters = 4;

    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 13};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 1, 4, 6};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 1, 7, 30};
    program.m_registers[7] = {7, 2, 8, 18};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 3, 10, 15};
    program.m_registers[10] = {10, 10, 11, 11};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 3, 17, 21};
    program.m_registers[15] = {15, 2, 19, 28};
    program.m_registers[16] = {16, 0, 20, 29};
    program.m_registers[17] = {17, 3, 22, 25};
    program.m_registers[18] = {18, 18, 23, 23};
    program.m_registers[19] = {19, 19, 24, 24};
    program.m_registers[20] = {20, 20, 27, 27};
    program.m_registers[21] = {21, 21, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 2);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 1, 19);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 21);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.050210f;
    data->d[1] = 0.765105f;
    data->d[2] = -0.479841f;
    data->d[3] = -0.353436f;
    data->d[4] = 0.370293f;
    data->d[5] = 0.766255f;
    data->d[6] = -0.828412f;
    data->d[7] = -0.352608f;
    data->d[8] = -0.590538f;
    data->d[9] = -0.925860f;
    data->d[10] = -0.818193f;
    data->d[11] = 0.566767f;
    data->d[12] = 0.814929f;
    data->d[13] = 0.424890f;
    data->d[14] = -0.407511f;
    data->d[15] = 1.691461f;
    data->d[16] = -1.726548f;
    data->d[17] = -0.810868f;
    data->d[18] = -0.466812f;
    data->d[19] = 0.300432f;
    data->d[20] = -0.039041f;
    data->d[21] = 0.114722f;
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
    *result->MinResult(0) = 0.000024f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.860461f;
    data->d[1] = -2.572186f;
    data->d[2] = -0.327868f;
    data->d[3] = -0.358985f;
    data->d[4] = -0.148259f;
    data->d[5] = 0.657097f;
    data->d[6] = -1.242195f;
    data->d[7] = -0.531128f;
    data->d[8] = 0.481802f;
    data->d[9] = -0.564776f;
    data->d[10] = 0.177436f;
    data->d[11] = 0.004331f;
    data->d[12] = 0.811979f;
    data->d[13] = -1.197775f;
    data->d[14] = -0.779779f;
    data->d[15] = 0.823603f;
    data->d[16] = -0.581255f;
    data->d[17] = 0.298352f;
    data->d[18] = -2.321058f;
    data->d[19] = -0.841365f;
    data->d[20] = -0.004975f;
    data->d[21] = -0.036793f;
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
    *result->MinResult(1) = 0.000058f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.680270f;
    data->d[1] = -0.307543f;
    data->d[2] = -0.733462f;
    data->d[3] = -1.020976f;
    data->d[4] = -0.713306f;
    data->d[5] = -0.757441f;
    data->d[6] = -0.488448f;
    data->d[7] = -0.943393f;
    data->d[8] = -0.339280f;
    data->d[9] = 0.528129f;
    data->d[10] = -0.963454f;
    data->d[11] = 0.745995f;
    data->d[12] = 0.620664f;
    data->d[13] = -0.394093f;
    data->d[14] = -2.847180f;
    data->d[15] = -0.895326f;
    data->d[16] = 0.381645f;
    data->d[17] = 0.789437f;
    data->d[18] = -1.749516f;
    data->d[19] = -0.312503f;
    data->d[20] = -0.275145f;
    data->d[21] = 0.559478f;
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
    *result->MinResult(2) = 0.000040f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000058f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
