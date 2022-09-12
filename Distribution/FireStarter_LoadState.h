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
    settings.m_seed = 1142;
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
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 17};
    program.m_registers[2] = {2, 1, 3, 27};
    program.m_registers[3] = {3, 2, 4, 19};
    program.m_registers[4] = {4, 3, 5, 6};
    program.m_registers[5] = {5, 3, 7, 14};
    program.m_registers[6] = {6, 6, 8, 8};
    program.m_registers[7] = {7, 4, 9, 15};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 5, 12, 30};
    program.m_registers[10] = {10, 10, 13, 13};
    program.m_registers[11] = {11, 4, 16, 29};
    program.m_registers[12] = {12, 2, 20, 28};
    program.m_registers[13] = {13, 13, 21, 21};
    program.m_registers[14] = {14, 14, 22, 22};
    program.m_registers[15] = {15, 15, 23, 23};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 1);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 3);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 5);
    instructions->SetOperation(15, 0, 7);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 1, 9);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 1, 12);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 1, 14);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 1, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.824724f;
    data->d[1] = 0.733976f;
    data->d[2] = 4.008630f;
    data->d[3] = -0.088863f;
    data->d[4] = -0.291767f;
    data->d[5] = 0.039534f;
    data->d[6] = 30.061852f;
    data->d[7] = 0.169432f;
    data->d[8] = 1.084875f;
    data->d[9] = 0.050229f;
    data->d[10] = -0.278693f;
    data->d[11] = 3.714576f;
    data->d[12] = -89.111618f;
    data->d[13] = -0.010264f;
    data->d[14] = 2.891508f;
    data->d[15] = 0.884241f;
    data->d[16] = 0.062485f;
    data->d[17] = -0.035960f;
    data->d[18] = 0.036551f;
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
    *result->MinResult(0) = 0.000066f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.330762f;
    data->d[1] = 0.239594f;
    data->d[2] = -0.511708f;
    data->d[3] = -0.102639f;
    data->d[4] = 0.195471f;
    data->d[5] = 0.881895f;
    data->d[6] = -0.160671f;
    data->d[7] = -0.428326f;
    data->d[8] = -1.408808f;
    data->d[9] = -1.993619f;
    data->d[10] = 0.565321f;
    data->d[11] = -0.453629f;
    data->d[12] = 1.883331f;
    data->d[13] = 5.517949f;
    data->d[14] = 1.718068f;
    data->d[15] = 0.495381f;
    data->d[16] = -1.853411f;
    data->d[17] = 0.361330f;
    data->d[18] = -0.044350f;
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
    *result->MinResult(1) = 0.000060f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.397234f;
    data->d[1] = 0.380806f;
    data->d[2] = -0.742140f;
    data->d[3] = -0.143386f;
    data->d[4] = 0.154819f;
    data->d[5] = 0.032875f;
    data->d[6] = -2.758272f;
    data->d[7] = 0.585072f;
    data->d[8] = -0.475150f;
    data->d[9] = 0.545204f;
    data->d[10] = 5.809281f;
    data->d[11] = -0.748240f;
    data->d[12] = -0.599299f;
    data->d[13] = 2.156332f;
    data->d[14] = -4.263861f;
    data->d[15] = 1.038575f;
    data->d[16] = -0.275766f;
    data->d[17] = 1.086114f;
    data->d[18] = 0.534708f;
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
    *result->MinResult(2) = 0.000011f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000066f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1078;
    state.m_seed = 1242;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
