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

    settings.m_mode = FIRESTARTER_UNIT;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 128;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 8337;
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
    program.m_maxRegisters = 6;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 27};
    program.m_registers[1] = {1, 1, 1, 9};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 22};
    program.m_registers[4] = {4, 3, 5, 18};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 4, 7, 24};
    program.m_registers[7] = {7, 5, 8, 10};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 5, 14, 30};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 13, 17, 17};
    program.m_registers[14] = {14, 14, 23, 23};
    program.m_registers[15] = {15, 4, 25, 29};
    program.m_registers[16] = {16, 16, 26, 26};
    program.m_registers[17] = {17, 17, 28, 28};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 4);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 11);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 1, 0);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 0, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = -0.604841f;
    data->d[2] = 0.403651f;
    data->d[3] = 1.082892f;
    data->d[4] = -0.194995f;
    data->d[5] = 1.180090f;
    data->d[6] = 0.744423f;
    data->d[7] = -0.391137f;
    data->d[8] = 10.417123f;
    data->d[9] = -0.094021f;
    data->d[10] = 5.249770f;
    data->d[11] = 0.008697f;
    data->d[12] = 0.232988f;
    data->d[13] = -2.054035f;
    data->d[14] = -4.013783f;
    data->d[15] = 0.000000f;
    data->d[16] = -0.482419f;
    data->d[17] = -0.777924f;
    data->d[18] = -0.289964f;
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
    *result->MinResult(0) = 0.000008f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090660f;
    data->d[1] = -0.111146f;
    data->d[2] = 0.674562f;
    data->d[3] = -0.281188f;
    data->d[4] = -4.679060f;
    data->d[5] = 3.656806f;
    data->d[6] = -1.329560f;
    data->d[7] = 0.863509f;
    data->d[8] = 4.611165f;
    data->d[9] = 2.123069f;
    data->d[10] = -17.024218f;
    data->d[11] = 0.045477f;
    data->d[12] = 1.016931f;
    data->d[13] = 5.164644f;
    data->d[14] = -2.030783f;
    data->d[15] = -0.162758f;
    data->d[16] = 0.913825f;
    data->d[17] = 0.021859f;
    data->d[18] = 0.711607f;
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
    *result->MinResult(1) = 0.000008f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617991f;
    data->d[1] = 0.926823f;
    data->d[2] = -0.321158f;
    data->d[3] = -0.517300f;
    data->d[4] = 0.723119f;
    data->d[5] = -0.791167f;
    data->d[6] = 6.648443f;
    data->d[7] = 6.726340f;
    data->d[8] = -1.156801f;
    data->d[9] = 0.282805f;
    data->d[10] = 0.413251f;
    data->d[11] = 0.002191f;
    data->d[12] = -1.357537f;
    data->d[13] = -0.310565f;
    data->d[14] = 0.145177f;
    data->d[15] = -0.964235f;
    data->d[16] = 0.170403f;
    data->d[17] = -0.726088f;
    data->d[18] = -0.619691f;
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
    *result->MinResult(2) = 0.000007f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000008f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 12;
    state.m_seed = 3985843222;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
