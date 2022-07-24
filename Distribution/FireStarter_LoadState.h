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
    program.m_registers[14] = {14, 1, 16, 17};
    program.m_registers[15] = {15, 15, 18, 18};
    program.m_registers[16] = {16, 16, 19, 19};
    program.m_registers[17] = {17, 17, 24, 24};
    program.m_registers[18] = {18, 18, 26, 26};
    program.m_registers[19] = {19, 19, 30, 30};
    program.m_registers[20] = {20, 20, 31, 31};

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
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 1, 16);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 0, 20);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.135315f;
    data->d[1] = -0.680875f;
    data->d[2] = -0.373796f;
    data->d[3] = -0.530833f;
    data->d[4] = -0.056024f;
    data->d[5] = 0.450534f;
    data->d[6] = 1.125913f;
    data->d[7] = -0.382874f;
    data->d[8] = 0.911248f;
    data->d[9] = -0.213693f;
    data->d[10] = 0.463774f;
    data->d[11] = 0.001467f;
    data->d[12] = -0.068090f;
    data->d[13] = 0.761629f;
    data->d[14] = 0.366315f;
    data->d[15] = -0.299407f;
    data->d[16] = -1.130219f;
    data->d[17] = -1.053616f;
    data->d[18] = 1.929438f;
    data->d[19] = 0.739165f;
    data->d[20] = -0.921866f;
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
    *result->MinResult(0) = 0.021480f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.905420f;
    data->d[1] = 1.933557f;
    data->d[2] = 0.409181f;
    data->d[3] = 0.277266f;
    data->d[4] = -1.119124f;
    data->d[5] = -0.307768f;
    data->d[6] = 0.476631f;
    data->d[7] = 0.226053f;
    data->d[8] = 0.384277f;
    data->d[9] = -0.380020f;
    data->d[10] = 2.521300f;
    data->d[11] = -0.348072f;
    data->d[12] = -0.393253f;
    data->d[13] = -2.644956f;
    data->d[14] = 0.300587f;
    data->d[15] = -0.075528f;
    data->d[16] = 1.469800f;
    data->d[17] = -0.958917f;
    data->d[18] = 0.135619f;
    data->d[19] = 0.259256f;
    data->d[20] = 4.477755f;
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
    *result->MinResult(1) = 0.023108f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.142415f;
    data->d[1] = -0.730251f;
    data->d[2] = -2.670136f;
    data->d[3] = 0.259165f;
    data->d[4] = -0.413501f;
    data->d[5] = -0.897381f;
    data->d[6] = 0.760877f;
    data->d[7] = -0.856756f;
    data->d[8] = 0.781363f;
    data->d[9] = -0.145549f;
    data->d[10] = 2.421597f;
    data->d[11] = -0.589002f;
    data->d[12] = -0.702284f;
    data->d[13] = -0.009313f;
    data->d[14] = 7.098835f;
    data->d[15] = 1.468359f;
    data->d[16] = -1.007084f;
    data->d[17] = -1.101938f;
    data->d[18] = 0.412558f;
    data->d[19] = 0.397472f;
    data->d[20] = 0.879508f;
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
    *result->MinResult(2) = 0.023275f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.023275f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 40;
    state.m_seed = 3232319900;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
