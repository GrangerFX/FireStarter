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
    settings.m_generations = 4;
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
    program.m_dataSize = 22;
    program.m_maxRegisters = 5;

    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 7};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 17};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 2, 6, 15};
    program.m_registers[6] = {6, 0, 8, 24};
    program.m_registers[7] = {7, 3, 10, 26};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 4, 14, 31};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 16, 21, 21};
    program.m_registers[17] = {17, 17, 22, 22};
    program.m_registers[18] = {18, 18, 27, 27};
    program.m_registers[19] = {19, 19, 28, 28};
    program.m_registers[20] = {20, 20, 29, 29};
    program.m_registers[21] = {21, 21, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 1, 16);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 1, 6);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 1, 11);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 1, 20);
    instructions->SetOperation(30, 1, 21);
    instructions->SetOperation(31, 1, 11);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.969804f;
    data->d[1] = -0.261776f;
    data->d[2] = 0.813766f;
    data->d[3] = 0.137256f;
    data->d[4] = 0.196014f;
    data->d[5] = 0.049387f;
    data->d[6] = -0.414562f;
    data->d[7] = 0.020588f;
    data->d[8] = 0.076590f;
    data->d[9] = -0.417437f;
    data->d[10] = 0.866531f;
    data->d[11] = 0.619036f;
    data->d[12] = -0.037071f;
    data->d[13] = -0.578495f;
    data->d[14] = -0.830877f;
    data->d[15] = -0.258724f;
    data->d[16] = -0.501406f;
    data->d[17] = -0.257839f;
    data->d[18] = -0.151443f;
    data->d[19] = 0.417662f;
    data->d[20] = -0.253438f;
    data->d[21] = -0.251562f;
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
    *result->MinResult(0) = 0.028682f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.179301f;
    data->d[1] = 0.737789f;
    data->d[2] = -0.198155f;
    data->d[3] = 0.647460f;
    data->d[4] = -0.950736f;
    data->d[5] = 0.793569f;
    data->d[6] = -0.201142f;
    data->d[7] = -0.391386f;
    data->d[8] = 0.428873f;
    data->d[9] = -0.496573f;
    data->d[10] = 0.004716f;
    data->d[11] = -0.645125f;
    data->d[12] = 3.383489f;
    data->d[13] = 0.792236f;
    data->d[14] = -0.909734f;
    data->d[15] = 1.616118f;
    data->d[16] = -0.828997f;
    data->d[17] = 0.710483f;
    data->d[18] = -0.012076f;
    data->d[19] = 0.392935f;
    data->d[20] = -0.336493f;
    data->d[21] = 0.677047f;
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
    *result->MinResult(1) = 0.035926f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.174304f;
    data->d[1] = 1.123558f;
    data->d[2] = -0.157587f;
    data->d[3] = 0.651205f;
    data->d[4] = 0.485949f;
    data->d[5] = -0.230340f;
    data->d[6] = -0.864186f;
    data->d[7] = 0.240012f;
    data->d[8] = -0.636076f;
    data->d[9] = -0.409264f;
    data->d[10] = -0.487764f;
    data->d[11] = 0.441068f;
    data->d[12] = 1.133448f;
    data->d[13] = -0.394021f;
    data->d[14] = 1.053310f;
    data->d[15] = 0.337387f;
    data->d[16] = 0.436300f;
    data->d[17] = -0.455080f;
    data->d[18] = -0.750447f;
    data->d[19] = -0.443237f;
    data->d[20] = 0.567906f;
    data->d[21] = 0.326408f;
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
    *result->MinResult(2) = 0.035444f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.035926f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 24;
    state.m_seed = 3232319878;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
