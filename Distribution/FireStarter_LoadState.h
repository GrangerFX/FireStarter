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

    settings.m_mode = FIRESTARTER_UNIT;
    settings.m_states = 1;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = 1;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 16;
    program.m_maxRegisters = 6;

    program.m_registers.resize(16);
    program.m_registers[0] = {0, 0, 0, 20};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 1, 5, 28};
    program.m_registers[6] = {6, 2, 6, 14};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 3, 8, 12};
    program.m_registers[9] = {9, 4, 11, 27};
    program.m_registers[10] = {10, 3, 13, 25};
    program.m_registers[11] = {11, 2, 16, 31};
    program.m_registers[12] = {12, 5, 18, 23};
    program.m_registers[13] = {13, 0, 21, 22};
    program.m_registers[14] = {14, 5, 24, 29};
    program.m_registers[15] = {15, 15, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 11);
    instructions->SetOperation(20, 1, 0);
    instructions->SetOperation(21, 1, 13);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 0, 11);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.703657f;
    data->d[1] = -4.311313f;
    data->d[2] = 0.087133f;
    data->d[3] = 1.062295f;
    data->d[4] = 1.043469f;
    data->d[5] = -0.941106f;
    data->d[6] = -0.509645f;
    data->d[7] = 0.848207f;
    data->d[8] = -0.688915f;
    data->d[9] = 0.947101f;
    data->d[10] = -1.200879f;
    data->d[11] = -0.105128f;
    data->d[12] = -0.250916f;
    data->d[13] = -0.447722f;
    data->d[14] = 0.571240f;
    data->d[15] = -1.369475f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(0) = 0.000153f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.141646f;
    data->d[1] = 0.773270f;
    data->d[2] = 0.701003f;
    data->d[3] = -0.881606f;
    data->d[4] = -0.274878f;
    data->d[5] = 0.890309f;
    data->d[6] = -1.432980f;
    data->d[7] = -0.876301f;
    data->d[8] = -0.735727f;
    data->d[9] = -0.090839f;
    data->d[10] = -0.358806f;
    data->d[11] = -0.366983f;
    data->d[12] = 0.064313f;
    data->d[13] = 4.270132f;
    data->d[14] = -0.054729f;
    data->d[15] = 0.492599f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(1) = 0.000140f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.422998f;
    data->d[1] = 0.199602f;
    data->d[2] = 1.372722f;
    data->d[3] = 0.382115f;
    data->d[4] = -0.478437f;
    data->d[5] = 0.689905f;
    data->d[6] = -0.362408f;
    data->d[7] = 0.220924f;
    data->d[8] = 0.436397f;
    data->d[9] = 0.504955f;
    data->d[10] = 0.561304f;
    data->d[11] = 0.697470f;
    data->d[12] = -0.616068f;
    data->d[13] = 0.565341f;
    data->d[14] = -2.011332f;
    data->d[15] = 0.555984f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(2) = 0.000143f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000153f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 28;
    state.m_seed = 3232322898;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
