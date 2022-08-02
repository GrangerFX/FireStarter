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
    settings.m_generations = 5;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 19;
    program.m_maxRegisters = 11;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 25};
    program.m_registers[3] = {3, 1, 3, 20};
    program.m_registers[4] = {4, 2, 4, 26};
    program.m_registers[5] = {5, 3, 5, 9};
    program.m_registers[6] = {6, 4, 6, 29};
    program.m_registers[7] = {7, 5, 7, 16};
    program.m_registers[8] = {8, 6, 8, 24};
    program.m_registers[9] = {9, 3, 10, 21};
    program.m_registers[10] = {10, 7, 11, 28};
    program.m_registers[11] = {11, 8, 13, 22};
    program.m_registers[12] = {12, 9, 14, 31};
    program.m_registers[13] = {13, 10, 15, 18};
    program.m_registers[14] = {14, 14, 17, 17};
    program.m_registers[15] = {15, 15, 19, 19};
    program.m_registers[16] = {16, 16, 23, 23};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 0, 11);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 1, 12);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -2.352396f;
    data->d[1] = -3.524875f;
    data->d[2] = -0.446443f;
    data->d[3] = -1.056650f;
    data->d[4] = -0.422117f;
    data->d[5] = 0.895082f;
    data->d[6] = 0.490477f;
    data->d[7] = 0.008806f;
    data->d[8] = 0.536786f;
    data->d[9] = 0.738085f;
    data->d[10] = -0.437408f;
    data->d[11] = 0.169472f;
    data->d[12] = 0.205857f;
    data->d[13] = -1.341250f;
    data->d[14] = 0.043282f;
    data->d[15] = -0.886527f;
    data->d[16] = 0.736872f;
    data->d[17] = -0.435710f;
    data->d[18] = -0.590107f;
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
    *result->MinResult(0) = 0.022072f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.055085f;
    data->d[1] = 0.374216f;
    data->d[2] = 0.369963f;
    data->d[3] = -0.910646f;
    data->d[4] = -0.515760f;
    data->d[5] = 0.476952f;
    data->d[6] = 0.649592f;
    data->d[7] = -0.409099f;
    data->d[8] = 0.511803f;
    data->d[9] = 0.418221f;
    data->d[10] = 0.297992f;
    data->d[11] = -0.296460f;
    data->d[12] = 0.633918f;
    data->d[13] = 0.386168f;
    data->d[14] = 0.244447f;
    data->d[15] = 0.994937f;
    data->d[16] = 0.657094f;
    data->d[17] = -0.492558f;
    data->d[18] = 0.125104f;
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
    *result->MinResult(1) = 0.031365f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.316889f;
    data->d[1] = 0.955965f;
    data->d[2] = -0.365713f;
    data->d[3] = 0.367914f;
    data->d[4] = 0.750598f;
    data->d[5] = 0.484450f;
    data->d[6] = 0.919801f;
    data->d[7] = 0.493034f;
    data->d[8] = 0.355594f;
    data->d[9] = 0.626105f;
    data->d[10] = -0.016440f;
    data->d[11] = 0.427297f;
    data->d[12] = -0.206109f;
    data->d[13] = 0.704695f;
    data->d[14] = -1.233890f;
    data->d[15] = 0.806135f;
    data->d[16] = -0.019162f;
    data->d[17] = -0.283179f;
    data->d[18] = -0.028390f;
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
    *result->MinResult(2) = 0.025352f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.031365f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 75;
    state.m_seed = 3232319930;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
