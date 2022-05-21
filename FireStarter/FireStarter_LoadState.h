#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;
    settings.m_evolveMode = 2;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 4;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 1, 19);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 29};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 1, 5, 17};
    program.m_registers[6] = {6, 2, 8, 13};
    program.m_registers[7] = {7, 3, 9, 30};
    program.m_registers[8] = {8, 4, 10, 21};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 2, 15, 18};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 4, 22, 28};
    program.m_registers[17] = {17, 2, 23, 25};
    program.m_registers[18] = {18, 18, 27, 27};
    program.m_registers[19] = {19, 19, 31, 31};
    program.m_programMode = 0;
    program.m_dataSize = 20;
    program.m_maxRegisters = 5;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.018277f;
    data->d[1] = -0.698640f;
    data->d[2] = -0.113357f;
    data->d[3] = -0.390620f;
    data->d[4] = 0.038922f;
    data->d[5] = -0.381232f;
    data->d[6] = 0.097324f;
    data->d[7] = -0.274705f;
    data->d[8] = -0.429744f;
    data->d[9] = -0.354667f;
    data->d[10] = 1.417119f;
    data->d[11] = 0.221051f;
    data->d[12] = 0.646370f;
    data->d[13] = 0.641600f;
    data->d[14] = -1.001651f;
    data->d[15] = 0.006916f;
    data->d[16] = -1.088092f;
    data->d[17] = 1.042282f;
    data->d[18] = -0.958120f;
    data->d[19] = 0.417150f;
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
    *result->MinResult(0) = 0.000082f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.687059f;
    data->d[1] = -2.367049f;
    data->d[2] = 0.155584f;
    data->d[3] = 1.086771f;
    data->d[4] = 0.069797f;
    data->d[5] = -0.594125f;
    data->d[6] = 0.222454f;
    data->d[7] = 0.311459f;
    data->d[8] = 0.745303f;
    data->d[9] = 1.457632f;
    data->d[10] = 0.259673f;
    data->d[11] = 0.099596f;
    data->d[12] = -0.793125f;
    data->d[13] = 1.174659f;
    data->d[14] = -0.193455f;
    data->d[15] = -0.154877f;
    data->d[16] = -0.596725f;
    data->d[17] = 0.855760f;
    data->d[18] = 1.688821f;
    data->d[19] = -1.214100f;
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
    *result->MinResult(1) = 0.000061f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.414758f;
    data->d[1] = 0.591075f;
    data->d[2] = -0.401671f;
    data->d[3] = 0.680813f;
    data->d[4] = -0.583440f;
    data->d[5] = -1.382307f;
    data->d[6] = 0.439771f;
    data->d[7] = 0.986930f;
    data->d[8] = 0.912188f;
    data->d[9] = -0.040652f;
    data->d[10] = -0.328966f;
    data->d[11] = -0.593204f;
    data->d[12] = 0.208751f;
    data->d[13] = 0.676082f;
    data->d[14] = -1.370266f;
    data->d[15] = -0.046277f;
    data->d[16] = -0.670885f;
    data->d[17] = -0.669305f;
    data->d[18] = -0.771290f;
    data->d[19] = 0.131931f;
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
    *result->MinResult(2) = 0.000051f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000082f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 2;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
