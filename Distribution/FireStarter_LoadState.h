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
    settings.m_processes = 0;
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
    program.m_dataSize = 19;
    program.m_maxRegisters = 5;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 22};
    program.m_registers[4] = {4, 2, 5, 17};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 3, 7, 29};
    program.m_registers[7] = {7, 4, 8, 26};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 0, 11, 30};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 14, 23, 23};
    program.m_registers[15] = {15, 15, 25, 25};
    program.m_registers[16] = {16, 16, 27, 27};
    program.m_registers[17] = {17, 17, 28, 28};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 0, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = -0.470301f;
    data->d[2] = -1.057404f;
    data->d[3] = 0.906259f;
    data->d[4] = 1.022354f;
    data->d[5] = 0.077470f;
    data->d[6] = 0.788457f;
    data->d[7] = 0.236117f;
    data->d[8] = -0.883975f;
    data->d[9] = 0.029958f;
    data->d[10] = 4.167114f;
    data->d[11] = -5.321479f;
    data->d[12] = -0.033437f;
    data->d[13] = 0.500166f;
    data->d[14] = 1.858051f;
    data->d[15] = 11.445942f;
    data->d[16] = 8.479458f;
    data->d[17] = -0.000000f;
    data->d[18] = -0.883453f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090658f;
    data->d[1] = -0.308351f;
    data->d[2] = 0.135044f;
    data->d[3] = 1.071377f;
    data->d[4] = -0.407497f;
    data->d[5] = -3.167479f;
    data->d[6] = -0.020501f;
    data->d[7] = -3.719213f;
    data->d[8] = 0.099431f;
    data->d[9] = -0.208318f;
    data->d[10] = 3.693475f;
    data->d[11] = -1.914901f;
    data->d[12] = 0.102619f;
    data->d[13] = 0.858430f;
    data->d[14] = 1.465705f;
    data->d[15] = 1.080874f;
    data->d[16] = -0.330067f;
    data->d[17] = -0.279446f;
    data->d[18] = -1.280754f;
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
    *result->MinResult(1) = 0.000002f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617994f;
    data->d[1] = -0.680762f;
    data->d[2] = -0.741183f;
    data->d[3] = -0.735445f;
    data->d[4] = -1.425749f;
    data->d[5] = -0.098356f;
    data->d[6] = 1.336357f;
    data->d[7] = -0.003285f;
    data->d[8] = 0.979796f;
    data->d[9] = 2.092115f;
    data->d[10] = 0.251213f;
    data->d[11] = 2.101310f;
    data->d[12] = 0.823105f;
    data->d[13] = 0.363554f;
    data->d[14] = -0.595327f;
    data->d[15] = -0.160527f;
    data->d[16] = 0.939987f;
    data->d[17] = 0.706240f;
    data->d[18] = 0.788723f;
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
    *result->MinResult(2) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000002f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 400;
    state.m_seed = 3232320350;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
