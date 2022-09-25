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

    settings.m_mode = FIRESTARTER_TEST;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10;
    settings.m_seed = 1075946347;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 20;
    program.m_maxRegisters = 6;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 0, 3, 24};
    program.m_registers[4] = {4, 1, 4, 8};
    program.m_registers[5] = {5, 2, 6, 29};
    program.m_registers[6] = {6, 6, 9, 9};
    program.m_registers[7] = {7, 1, 10, 25};
    program.m_registers[8] = {8, 3, 11, 27};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 4, 13, 14};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 13, 17, 17};
    program.m_registers[14] = {14, 4, 18, 28};
    program.m_registers[15] = {15, 15, 19, 19};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 5, 23, 26};
    program.m_registers[18] = {18, 18, 30, 30};
    program.m_registers[19] = {19, 19, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 3);
    instructions->SetOperation(25, 1, 7);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 1, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.203014f;
    data->d[1] = 1.348885f;
    data->d[2] = -3.509249f;
    data->d[3] = 0.221778f;
    data->d[4] = -0.000007f;
    data->d[5] = -0.882433f;
    data->d[6] = 1.931461f;
    data->d[7] = -1.028942f;
    data->d[8] = -0.563553f;
    data->d[9] = 0.018352f;
    data->d[10] = 0.805168f;
    data->d[11] = -0.489110f;
    data->d[12] = -3.055002f;
    data->d[13] = -0.091709f;
    data->d[14] = 3.522779f;
    data->d[15] = 0.249984f;
    data->d[16] = -0.213276f;
    data->d[17] = -0.569757f;
    data->d[18] = 0.188285f;
    data->d[19] = -0.188292f;
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
    *result->MinResult(0) = 0.000004f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.491989f;
    data->d[1] = 0.415806f;
    data->d[2] = -0.558714f;
    data->d[3] = -1.455825f;
    data->d[4] = -0.000023f;
    data->d[5] = -0.398539f;
    data->d[6] = 0.691521f;
    data->d[7] = -1.322592f;
    data->d[8] = -0.005858f;
    data->d[9] = -3.768633f;
    data->d[10] = -0.938521f;
    data->d[11] = -0.913407f;
    data->d[12] = 1.171370f;
    data->d[13] = 0.706032f;
    data->d[14] = 0.011945f;
    data->d[15] = -3.343184f;
    data->d[16] = 0.696518f;
    data->d[17] = -0.812052f;
    data->d[18] = 2.127340f;
    data->d[19] = -2.245542f;
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
    *result->MinResult(1) = 0.000008f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.725505f;
    data->d[1] = 0.115631f;
    data->d[2] = 0.038592f;
    data->d[3] = -1.046707f;
    data->d[4] = 0.000016f;
    data->d[5] = -0.172851f;
    data->d[6] = 0.223673f;
    data->d[7] = 1.009748f;
    data->d[8] = 0.705903f;
    data->d[9] = 0.156820f;
    data->d[10] = 1.181914f;
    data->d[11] = 3.192597f;
    data->d[12] = -0.595303f;
    data->d[13] = 0.617972f;
    data->d[14] = -2.443182f;
    data->d[15] = -0.212229f;
    data->d[16] = -0.691414f;
    data->d[17] = 1.443897f;
    data->d[18] = 2.381294f;
    data->d[19] = -1.857675f;
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
    *result->MinResult(2) = 0.000018f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000018f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 6;
    state.m_seed = 1075946447;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
