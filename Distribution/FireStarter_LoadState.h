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
    settings.m_states = 1;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 69632;
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
    program.m_dataSize = 22;
    program.m_maxRegisters = 5;

    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 0, 3, 16};
    program.m_registers[4] = {4, 1, 4, 30};
    program.m_registers[5] = {5, 2, 6, 7};
    program.m_registers[6] = {6, 2, 8, 29};
    program.m_registers[7] = {7, 7, 9, 9};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 3, 13, 28};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 0, 17, 27};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 16, 21, 21};
    program.m_registers[17] = {17, 17, 22, 22};
    program.m_registers[18] = {18, 4, 23, 24};
    program.m_registers[19] = {19, 19, 25, 25};
    program.m_registers[20] = {20, 20, 26, 26};
    program.m_registers[21] = {21, 21, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 1, 20);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 21);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.003643f;
    data->d[1] = -3.145236f;
    data->d[2] = 0.279878f;
    data->d[3] = -0.727789f;
    data->d[4] = 0.434319f;
    data->d[5] = -0.898910f;
    data->d[6] = 1.087626f;
    data->d[7] = -1.130970f;
    data->d[8] = -1.020145f;
    data->d[9] = 1.376990f;
    data->d[10] = -1.532473f;
    data->d[11] = 1.916647f;
    data->d[12] = -0.023702f;
    data->d[13] = 0.822533f;
    data->d[14] = -0.193404f;
    data->d[15] = -0.426242f;
    data->d[16] = 0.650126f;
    data->d[17] = -0.460763f;
    data->d[18] = 1.047570f;
    data->d[19] = -1.941974f;
    data->d[20] = -0.272585f;
    data->d[21] = -0.000000f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.223304f;
    data->d[1] = -1.867354f;
    data->d[2] = 0.203656f;
    data->d[3] = -0.904608f;
    data->d[4] = 0.556221f;
    data->d[5] = -0.946281f;
    data->d[6] = 0.560667f;
    data->d[7] = -0.246439f;
    data->d[8] = 0.912824f;
    data->d[9] = 1.771351f;
    data->d[10] = 0.022743f;
    data->d[11] = -1.044430f;
    data->d[12] = 0.804029f;
    data->d[13] = 0.687435f;
    data->d[14] = -0.318103f;
    data->d[15] = -0.743687f;
    data->d[16] = -0.357034f;
    data->d[17] = -0.969340f;
    data->d[18] = -1.442854f;
    data->d[19] = -2.676803f;
    data->d[20] = 0.414789f;
    data->d[21] = -0.118132f;
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
    *result->MinResult(1) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.404566f;
    data->d[1] = -1.213427f;
    data->d[2] = 0.726173f;
    data->d[3] = 0.908085f;
    data->d[4] = -0.129742f;
    data->d[5] = 3.101505f;
    data->d[6] = 0.275545f;
    data->d[7] = 0.236131f;
    data->d[8] = 0.388938f;
    data->d[9] = 0.167832f;
    data->d[10] = 1.505757f;
    data->d[11] = 0.009372f;
    data->d[12] = 0.455573f;
    data->d[13] = 0.490392f;
    data->d[14] = -3.313184f;
    data->d[15] = 2.780834f;
    data->d[16] = -0.000002f;
    data->d[17] = 0.004211f;
    data->d[18] = 0.689464f;
    data->d[19] = -0.330805f;
    data->d[20] = -0.280572f;
    data->d[21] = 0.523599f;
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
    *result->MinResult(2) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000003f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 4200;
    state.m_seed = 3232324150;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
