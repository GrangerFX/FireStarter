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
    settings.m_evolveStates = 8;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 128;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 21;
    program.m_maxRegisters = 6;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 15};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 25};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 2, 6, 27};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 8, 8, 8};
    program.m_registers[9] = {9, 9, 9, 9};
    program.m_registers[10] = {10, 3, 10, 21};
    program.m_registers[11] = {11, 11, 11, 11};
    program.m_registers[12] = {12, 4, 12, 13};
    program.m_registers[13] = {13, 13, 14, 14};
    program.m_registers[14] = {14, 0, 17, 24};
    program.m_registers[15] = {15, 15, 18, 18};
    program.m_registers[16] = {16, 4, 20, 26};
    program.m_registers[17] = {17, 3, 22, 31};
    program.m_registers[18] = {18, 5, 23, 29};
    program.m_registers[19] = {19, 19, 28, 28};
    program.m_registers[20] = {20, 20, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 0, 10);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 0, 14);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 0, 17);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.227877f;
    data->d[1] = 0.590544f;
    data->d[2] = -0.895070f;
    data->d[3] = -1.024368f;
    data->d[4] = -0.068990f;
    data->d[5] = 0.364724f;
    data->d[6] = 0.004027f;
    data->d[7] = -1.137106f;
    data->d[8] = -0.294971f;
    data->d[9] = -3.685407f;
    data->d[10] = 0.416393f;
    data->d[11] = 0.820262f;
    data->d[12] = -0.986092f;
    data->d[13] = -1.116316f;
    data->d[14] = -0.049307f;
    data->d[15] = -0.187837f;
    data->d[16] = 1.137407f;
    data->d[17] = 0.484583f;
    data->d[18] = 1.096297f;
    data->d[19] = 0.318176f;
    data->d[20] = 0.951355f;
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
    *result->MinResult(0) = 0.000043f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.473024f;
    data->d[1] = -0.889928f;
    data->d[2] = -0.747525f;
    data->d[3] = -0.455899f;
    data->d[4] = 1.792723f;
    data->d[5] = -0.942876f;
    data->d[6] = 1.169936f;
    data->d[7] = -0.314935f;
    data->d[8] = -0.463422f;
    data->d[9] = 0.117793f;
    data->d[10] = 0.905911f;
    data->d[11] = 1.509965f;
    data->d[12] = 0.695754f;
    data->d[13] = 0.488412f;
    data->d[14] = 1.354783f;
    data->d[15] = -0.020087f;
    data->d[16] = 0.982151f;
    data->d[17] = -0.265377f;
    data->d[18] = -0.714280f;
    data->d[19] = 0.508516f;
    data->d[20] = -1.764790f;
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
    *result->MinResult(1) = 0.000168f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.358830f;
    data->d[1] = 0.796672f;
    data->d[2] = 0.095185f;
    data->d[3] = 0.252227f;
    data->d[4] = -0.535557f;
    data->d[5] = 1.086241f;
    data->d[6] = -1.021282f;
    data->d[7] = -0.121083f;
    data->d[8] = 0.408965f;
    data->d[9] = 1.281241f;
    data->d[10] = -0.701289f;
    data->d[11] = 1.165548f;
    data->d[12] = 0.192448f;
    data->d[13] = -0.402065f;
    data->d[14] = -0.422178f;
    data->d[15] = 0.599186f;
    data->d[16] = -0.775619f;
    data->d[17] = 1.126135f;
    data->d[18] = -1.062474f;
    data->d[19] = -0.134505f;
    data->d[20] = -0.348139f;
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
    *result->MinResult(2) = 0.000165f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000168f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 9;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
