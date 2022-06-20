#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_seed = 0;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 3;
    settings.m_evolveUnits = 4;
    settings.m_evolveStates = 4;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
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
    program.m_registers[1] = {1, 0, 1, 27};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 14};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 2, 5, 10};
    program.m_registers[6] = {6, 6, 6, 6};
    program.m_registers[7] = {7, 3, 7, 28};
    program.m_registers[8] = {8, 4, 9, 17};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 2, 12, 21};
    program.m_registers[11] = {11, 5, 13, 20};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 22, 22};
    program.m_registers[15] = {15, 2, 23, 30};
    program.m_registers[16] = {16, 5, 24, 31};
    program.m_registers[17] = {17, 17, 25, 25};
    program.m_registers[18] = {18, 18, 26, 26};
    program.m_registers[19] = {19, 19, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 0, 3);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 11);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 0, 16);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.444000f;
    data->d[1] = 0.448875f;
    data->d[2] = 0.573343f;
    data->d[3] = -0.007395f;
    data->d[4] = -0.371122f;
    data->d[5] = 0.177228f;
    data->d[6] = -0.114291f;
    data->d[7] = -0.887135f;
    data->d[8] = 0.180332f;
    data->d[9] = 1.353248f;
    data->d[10] = -0.512932f;
    data->d[11] = -0.878850f;
    data->d[12] = 0.235727f;
    data->d[13] = -0.569093f;
    data->d[14] = -0.484078f;
    data->d[15] = -0.744178f;
    data->d[16] = 3.897312f;
    data->d[17] = 1.009541f;
    data->d[18] = -0.267412f;
    data->d[19] = 0.393989f;
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
    *result->MinResult(0) = 0.000075f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.257446f;
    data->d[1] = -0.130278f;
    data->d[2] = -0.255729f;
    data->d[3] = -0.560365f;
    data->d[4] = 0.540542f;
    data->d[5] = 0.205940f;
    data->d[6] = 0.035540f;
    data->d[7] = -0.447528f;
    data->d[8] = -0.516903f;
    data->d[9] = -1.127839f;
    data->d[10] = -0.979660f;
    data->d[11] = 0.639424f;
    data->d[12] = 0.194974f;
    data->d[13] = -1.230239f;
    data->d[14] = 0.812617f;
    data->d[15] = 1.029331f;
    data->d[16] = 1.147651f;
    data->d[17] = 0.109087f;
    data->d[18] = 0.402388f;
    data->d[19] = 0.172849f;
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
    *result->MinResult(1) = 0.000084f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.414417f;
    data->d[1] = -0.921860f;
    data->d[2] = -0.136920f;
    data->d[3] = -0.673594f;
    data->d[4] = 0.368005f;
    data->d[5] = -0.324645f;
    data->d[6] = 0.868588f;
    data->d[7] = -0.986844f;
    data->d[8] = 0.337825f;
    data->d[9] = 0.600574f;
    data->d[10] = 0.481466f;
    data->d[11] = 1.597673f;
    data->d[12] = -0.552644f;
    data->d[13] = 0.253657f;
    data->d[14] = 1.125297f;
    data->d[15] = 1.239233f;
    data->d[16] = -0.741404f;
    data->d[17] = 0.280751f;
    data->d[18] = 0.062169f;
    data->d[19] = -0.194102f;
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
    *result->MinResult(2) = 0.000103f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000103f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 3;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
