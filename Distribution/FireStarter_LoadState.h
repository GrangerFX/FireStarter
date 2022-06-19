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
    program.m_dataSize = 19;
    program.m_maxRegisters = 6;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 2};
    program.m_registers[1] = {1, 1, 1, 27};
    program.m_registers[2] = {2, 0, 3, 14};
    program.m_registers[3] = {3, 3, 4, 4};
    program.m_registers[4] = {4, 2, 5, 10};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 3, 7, 28};
    program.m_registers[7] = {7, 4, 9, 17};
    program.m_registers[8] = {8, 2, 11, 19};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 5, 13, 20};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 13, 22, 22};
    program.m_registers[14] = {14, 5, 23, 30};
    program.m_registers[15] = {15, 2, 24, 31};
    program.m_registers[16] = {16, 16, 25, 25};
    program.m_registers[17] = {17, 17, 26, 26};
    program.m_registers[18] = {18, 18, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 1, 18);
    instructions->SetOperation(30, 0, 14);
    instructions->SetOperation(31, 0, 15);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.019938f;
    data->d[1] = 0.097978f;
    data->d[2] = -0.426319f;
    data->d[3] = 1.243575f;
    data->d[4] = -0.374032f;
    data->d[5] = 0.477541f;
    data->d[6] = 0.403807f;
    data->d[7] = -0.011694f;
    data->d[8] = 1.066840f;
    data->d[9] = 0.006235f;
    data->d[10] = 1.244631f;
    data->d[11] = 0.562109f;
    data->d[12] = -0.359293f;
    data->d[13] = -0.213349f;
    data->d[14] = -0.871476f;
    data->d[15] = 0.538564f;
    data->d[16] = 0.524121f;
    data->d[17] = -0.640552f;
    data->d[18] = -0.001352f;
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
    *result->MinResult(0) = 0.000068f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.961187f;
    data->d[1] = 0.242126f;
    data->d[2] = -0.969405f;
    data->d[3] = -0.211989f;
    data->d[4] = 0.577782f;
    data->d[5] = -0.410320f;
    data->d[6] = -0.130360f;
    data->d[7] = 0.403796f;
    data->d[8] = -1.393882f;
    data->d[9] = 0.073397f;
    data->d[10] = 0.110992f;
    data->d[11] = 1.215648f;
    data->d[12] = 0.092112f;
    data->d[13] = -0.769087f;
    data->d[14] = 0.861908f;
    data->d[15] = -0.718381f;
    data->d[16] = 0.144077f;
    data->d[17] = -1.166279f;
    data->d[18] = 0.287365f;
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
    *result->MinResult(1) = 0.000099f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.532124f;
    data->d[1] = -1.096853f;
    data->d[2] = 0.792528f;
    data->d[3] = 0.488199f;
    data->d[4] = 1.083497f;
    data->d[5] = -0.737462f;
    data->d[6] = -0.338746f;
    data->d[7] = 0.138568f;
    data->d[8] = 1.441321f;
    data->d[9] = 0.008147f;
    data->d[10] = 1.113186f;
    data->d[11] = -0.286943f;
    data->d[12] = 2.120024f;
    data->d[13] = 0.100356f;
    data->d[14] = 1.115358f;
    data->d[15] = 0.812741f;
    data->d[16] = 0.129771f;
    data->d[17] = -0.374224f;
    data->d[18] = 0.623924f;
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
    *result->MinResult(2) = 0.000088f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000099f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 6;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
