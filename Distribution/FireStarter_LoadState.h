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
    program.m_maxRegisters = 7;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 19};
    program.m_registers[3] = {3, 1, 3, 5};
    program.m_registers[4] = {4, 2, 4, 31};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 1, 9, 24};
    program.m_registers[9] = {9, 3, 10, 27};
    program.m_registers[10] = {10, 4, 13, 26};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 5, 16, 30};
    program.m_registers[13] = {13, 6, 17, 21};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 23, 23};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 2);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 1, 13);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 1, 4);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.065615f;
    data->d[1] = -1.262442f;
    data->d[2] = 0.806856f;
    data->d[3] = 1.213823f;
    data->d[4] = -0.553797f;
    data->d[5] = 0.623836f;
    data->d[6] = -0.075827f;
    data->d[7] = 0.596834f;
    data->d[8] = 0.317249f;
    data->d[9] = 0.301302f;
    data->d[10] = -1.098654f;
    data->d[11] = -0.521971f;
    data->d[12] = -1.096579f;
    data->d[13] = 1.004440f;
    data->d[14] = -0.804560f;
    data->d[15] = -12.218879f;
    data->d[16] = -3.196825f;
    data->d[17] = -3.409500f;
    data->d[18] = -0.704348f;
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
    *result->MinResult(0) = 0.000304f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.267931f;
    data->d[1] = -1.095912f;
    data->d[2] = 0.500059f;
    data->d[3] = 0.637259f;
    data->d[4] = -0.155749f;
    data->d[5] = -0.767149f;
    data->d[6] = 1.026724f;
    data->d[7] = 1.189265f;
    data->d[8] = -0.680147f;
    data->d[9] = 0.218653f;
    data->d[10] = 1.444057f;
    data->d[11] = 1.508047f;
    data->d[12] = 1.341001f;
    data->d[13] = 2.754420f;
    data->d[14] = -0.246630f;
    data->d[15] = 0.983293f;
    data->d[16] = -2.837045f;
    data->d[17] = 0.381358f;
    data->d[18] = -0.025347f;
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
    *result->MinResult(1) = 0.000216f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.628849f;
    data->d[1] = -0.550986f;
    data->d[2] = 4.235576f;
    data->d[3] = -0.407826f;
    data->d[4] = 0.626335f;
    data->d[5] = -0.756951f;
    data->d[6] = 1.654050f;
    data->d[7] = -3.055559f;
    data->d[8] = 0.438995f;
    data->d[9] = -0.149275f;
    data->d[10] = 0.620804f;
    data->d[11] = 1.352528f;
    data->d[12] = -1.153165f;
    data->d[13] = 0.473500f;
    data->d[14] = -0.264449f;
    data->d[15] = -0.084186f;
    data->d[16] = -2.298498f;
    data->d[17] = -0.402698f;
    data->d[18] = 2.351878f;
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
    *result->MinResult(2) = 0.000836f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000836f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 35;
    state.m_bestIndex = 25623;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
