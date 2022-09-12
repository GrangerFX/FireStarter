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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_units = 2;
    settings.m_processes = 6;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10000;
    settings.m_seed = 88;
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
    program.m_maxRegisters = 7;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 0, 3, 19};
    program.m_registers[4] = {4, 1, 4, 22};
    program.m_registers[5] = {5, 2, 5, 20};
    program.m_registers[6] = {6, 3, 6, 31};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 4, 8, 17};
    program.m_registers[9] = {9, 5, 10, 18};
    program.m_registers[10] = {10, 6, 12, 23};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 13, 15, 15};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 24, 24};
    program.m_registers[16] = {16, 6, 25, 26};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 28, 28};
    program.m_registers[19] = {19, 19, 29, 29};
    program.m_registers[20] = {20, 20, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 3);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 6);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.423936f;
    data->d[1] = 0.929731f;
    data->d[2] = -0.092908f;
    data->d[3] = -0.250114f;
    data->d[4] = -1.362848f;
    data->d[5] = -0.645957f;
    data->d[6] = 0.282933f;
    data->d[7] = 2.473055f;
    data->d[8] = -0.331876f;
    data->d[9] = -1.723780f;
    data->d[10] = 0.405325f;
    data->d[11] = 3.006686f;
    data->d[12] = -3.036374f;
    data->d[13] = -0.351631f;
    data->d[14] = -0.300217f;
    data->d[15] = 2.058569f;
    data->d[16] = -2.684677f;
    data->d[17] = 6.514383f;
    data->d[18] = -6.944272f;
    data->d[19] = 1.564382f;
    data->d[20] = 0.487897f;
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
    *result->MinResult(0) = 0.000228f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.797332f;
    data->d[1] = 0.838418f;
    data->d[2] = -0.691335f;
    data->d[3] = 0.093193f;
    data->d[4] = -2.266078f;
    data->d[5] = -0.394589f;
    data->d[6] = 1.332607f;
    data->d[7] = 0.294068f;
    data->d[8] = -0.389782f;
    data->d[9] = -0.857360f;
    data->d[10] = 0.628170f;
    data->d[11] = 0.246389f;
    data->d[12] = -0.195735f;
    data->d[13] = 0.012323f;
    data->d[14] = -0.203572f;
    data->d[15] = 0.972506f;
    data->d[16] = -1.130895f;
    data->d[17] = -2.181419f;
    data->d[18] = 1.089495f;
    data->d[19] = 0.582583f;
    data->d[20] = 0.436168f;
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
    *result->MinResult(1) = 0.000036f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.561129f;
    data->d[1] = 0.667010f;
    data->d[2] = 0.116990f;
    data->d[3] = 0.999605f;
    data->d[4] = -0.305705f;
    data->d[5] = -0.865260f;
    data->d[6] = -0.138479f;
    data->d[7] = 4.019332f;
    data->d[8] = 0.294313f;
    data->d[9] = -1.511310f;
    data->d[10] = 0.610132f;
    data->d[11] = -0.587855f;
    data->d[12] = -0.455254f;
    data->d[13] = 0.544213f;
    data->d[14] = -0.103149f;
    data->d[15] = -2.595856f;
    data->d[16] = 2.975821f;
    data->d[17] = 0.107985f;
    data->d[18] = -4.512373f;
    data->d[19] = 3.343323f;
    data->d[20] = -1.139431f;
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
    *result->MinResult(2) = 0.000352f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000352f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 24;
    state.m_seed = 188;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
