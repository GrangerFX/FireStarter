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
    program.m_dataSize = 21;
    program.m_maxRegisters = 6;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 7};
    program.m_registers[3] = {3, 1, 3, 17};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 2, 6, 15};
    program.m_registers[6] = {6, 0, 8, 29};
    program.m_registers[7] = {7, 3, 10, 26};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 4, 12, 18};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 5, 14, 25};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 28, 28};
    program.m_registers[19] = {19, 19, 30, 30};
    program.m_registers[20] = {20, 20, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 2);
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
    instructions->SetOperation(18, 1, 9);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 1, 6);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 1, 11);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 1, 20);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.540670f;
    data->d[1] = -0.319352f;
    data->d[2] = 0.440582f;
    data->d[3] = 0.114846f;
    data->d[4] = 0.090434f;
    data->d[5] = -0.251494f;
    data->d[6] = -0.792772f;
    data->d[7] = 0.310655f;
    data->d[8] = 0.050028f;
    data->d[9] = -0.219771f;
    data->d[10] = 0.498452f;
    data->d[11] = 1.174806f;
    data->d[12] = -0.200018f;
    data->d[13] = -1.585914f;
    data->d[14] = -0.305804f;
    data->d[15] = -0.421258f;
    data->d[16] = -0.131257f;
    data->d[17] = -0.362326f;
    data->d[18] = -0.689581f;
    data->d[19] = 1.193676f;
    data->d[20] = -1.433849f;
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
    *result->MinResult(0) = 0.009556f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.213421f;
    data->d[1] = 0.700544f;
    data->d[2] = -0.132101f;
    data->d[3] = 0.685633f;
    data->d[4] = -0.771150f;
    data->d[5] = 0.718347f;
    data->d[6] = -0.097375f;
    data->d[7] = -0.484006f;
    data->d[8] = 0.348221f;
    data->d[9] = -0.562088f;
    data->d[10] = -0.200998f;
    data->d[11] = -0.811482f;
    data->d[12] = 3.400798f;
    data->d[13] = -0.778054f;
    data->d[14] = 1.574897f;
    data->d[15] = -0.851123f;
    data->d[16] = 0.644708f;
    data->d[17] = -0.167239f;
    data->d[18] = 0.423430f;
    data->d[19] = 0.711707f;
    data->d[20] = -0.354462f;
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
    *result->MinResult(1) = 0.014061f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.223554f;
    data->d[1] = 0.682796f;
    data->d[2] = -0.256279f;
    data->d[3] = 0.591604f;
    data->d[4] = 0.481507f;
    data->d[5] = 0.296837f;
    data->d[6] = -1.099807f;
    data->d[7] = 0.092514f;
    data->d[8] = 0.682055f;
    data->d[9] = 2.035658f;
    data->d[10] = -1.435284f;
    data->d[11] = -0.361739f;
    data->d[12] = 0.890189f;
    data->d[13] = 0.968007f;
    data->d[14] = 0.350081f;
    data->d[15] = -0.943130f;
    data->d[16] = -0.146114f;
    data->d[17] = 0.176580f;
    data->d[18] = -1.289445f;
    data->d[19] = 0.170376f;
    data->d[20] = 0.593374f;
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
    *result->MinResult(2) = 0.014503f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.014503f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 288;
    state.m_seed = 3232320142;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
