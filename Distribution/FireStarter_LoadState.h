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
    program.m_dataSize = 21;
    program.m_maxRegisters = 4;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 12};
    program.m_registers[1] = {1, 1, 1, 31};
    program.m_registers[2] = {2, 2, 2, 3};
    program.m_registers[3] = {3, 3, 4, 4};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 2, 6, 25};
    program.m_registers[6] = {6, 6, 8, 8};
    program.m_registers[7] = {7, 3, 9, 19};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 12, 17, 17};
    program.m_registers[13] = {13, 0, 18, 22};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 0, 23, 28};
    program.m_registers[17] = {17, 17, 26, 26};
    program.m_registers[18] = {18, 18, 27, 27};
    program.m_registers[19] = {19, 19, 29, 29};
    program.m_registers[20] = {20, 20, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 1);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.212802f;
    data->d[1] = -0.734622f;
    data->d[2] = 0.137908f;
    data->d[3] = 0.051937f;
    data->d[4] = -0.721117f;
    data->d[5] = -2.002993f;
    data->d[6] = -1.075081f;
    data->d[7] = 0.425124f;
    data->d[8] = -0.543737f;
    data->d[9] = -0.145843f;
    data->d[10] = 0.560116f;
    data->d[11] = 0.672353f;
    data->d[12] = 1.905620f;
    data->d[13] = -0.959224f;
    data->d[14] = -0.728269f;
    data->d[15] = -1.307874f;
    data->d[16] = 0.216238f;
    data->d[17] = -2.215032f;
    data->d[18] = -0.164110f;
    data->d[19] = -2.823201f;
    data->d[20] = 0.247970f;
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
    *result->MinResult(0) = 0.000481f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.284534f;
    data->d[1] = -0.454745f;
    data->d[2] = -0.709116f;
    data->d[3] = 0.024826f;
    data->d[4] = -0.583265f;
    data->d[5] = -0.464524f;
    data->d[6] = 0.044255f;
    data->d[7] = 1.250301f;
    data->d[8] = 0.309842f;
    data->d[9] = -0.111296f;
    data->d[10] = -0.428483f;
    data->d[11] = -0.846218f;
    data->d[12] = 0.877354f;
    data->d[13] = 0.601466f;
    data->d[14] = 1.153902f;
    data->d[15] = 1.155231f;
    data->d[16] = 0.545857f;
    data->d[17] = 0.601822f;
    data->d[18] = -0.912715f;
    data->d[19] = 0.234346f;
    data->d[20] = -3.129589f;
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
    *result->MinResult(1) = 0.000136f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.162501f;
    data->d[1] = -0.832030f;
    data->d[2] = -0.277447f;
    data->d[3] = 0.698008f;
    data->d[4] = -0.463015f;
    data->d[5] = -0.758090f;
    data->d[6] = -3.713954f;
    data->d[7] = 0.074685f;
    data->d[8] = -0.502460f;
    data->d[9] = -0.503168f;
    data->d[10] = -0.985360f;
    data->d[11] = -0.591573f;
    data->d[12] = 0.078541f;
    data->d[13] = -0.755503f;
    data->d[14] = 1.963898f;
    data->d[15] = -1.336216f;
    data->d[16] = 1.388942f;
    data->d[17] = -2.392733f;
    data->d[18] = -1.237794f;
    data->d[19] = 1.989490f;
    data->d[20] = -0.124757f;
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
    *result->MinResult(2) = 0.001671f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.001671f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 600;
    state.m_seed = 3232320550;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
