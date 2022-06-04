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
    settings.m_evolveUnits = 4;
    settings.m_evolveStates = 1;
    settings.m_evolvePopulation = 34816;
    settings.m_evolveIterations = 256;
    settings.m_evolveGenerations = 100;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 1, 2);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 17);
    program.m_opcodes.resize(2);
    program.m_opcodes[0] = (FireStarterOpcode)0;
    program.m_opcodes[1] = (FireStarterOpcode)1;
    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 13};
    program.m_registers[1] = {1, 1, 1, 11};
    program.m_registers[2] = {2, 2, 2, 20};
    program.m_registers[3] = {3, 3, 3, 15};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 4, 7, 22};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 9, 10, 10};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 0, 14, 17};
    program.m_registers[12] = {12, 3, 16, 30};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 23, 23};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 4, 25, 31};
    program.m_registers[18] = {18, 18, 26, 26};
    program.m_registers[19] = {19, 19, 27, 27};
    program.m_registers[20] = {20, 20, 28, 28};
    program.m_registers[21] = {21, 21, 29, 29};
    program.m_programMode = 2;
    program.m_dataSize = 22;
    program.m_maxRegisters = 5;
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.234534f;
    data->d[1] = -1.274887f;
    data->d[2] = 0.900820f;
    data->d[3] = -0.912594f;
    data->d[4] = -0.764700f;
    data->d[5] = 1.162603f;
    data->d[6] = 0.718980f;
    data->d[7] = 1.549847f;
    data->d[8] = -2.946927f;
    data->d[9] = -0.430781f;
    data->d[10] = 1.612370f;
    data->d[11] = -0.321360f;
    data->d[12] = 1.909069f;
    data->d[13] = 0.554762f;
    data->d[14] = 0.163979f;
    data->d[15] = 0.264010f;
    data->d[16] = -0.415208f;
    data->d[17] = -0.845236f;
    data->d[18] = 0.636540f;
    data->d[19] = 0.531503f;
    data->d[20] = 0.040007f;
    data->d[21] = -0.082801f;
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
    *result->MinResult(0) = 0.000129f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.394711f;
    data->d[1] = -0.370870f;
    data->d[2] = 0.688436f;
    data->d[3] = -0.256389f;
    data->d[4] = -0.489988f;
    data->d[5] = 0.442546f;
    data->d[6] = 0.212048f;
    data->d[7] = -0.954888f;
    data->d[8] = 0.259282f;
    data->d[9] = 0.444182f;
    data->d[10] = 0.170964f;
    data->d[11] = 0.805006f;
    data->d[12] = -0.074395f;
    data->d[13] = -0.317373f;
    data->d[14] = 0.599996f;
    data->d[15] = 0.265583f;
    data->d[16] = 0.760184f;
    data->d[17] = 0.491377f;
    data->d[18] = -0.719562f;
    data->d[19] = 1.379708f;
    data->d[20] = 0.369696f;
    data->d[21] = 1.284868f;
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
    *result->MinResult(1) = 0.000180f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -3.961515f;
    data->d[1] = 0.705100f;
    data->d[2] = 0.307922f;
    data->d[3] = -0.901275f;
    data->d[4] = -0.588353f;
    data->d[5] = -1.225949f;
    data->d[6] = 0.583724f;
    data->d[7] = 1.104228f;
    data->d[8] = 0.394523f;
    data->d[9] = -0.243736f;
    data->d[10] = -0.015820f;
    data->d[11] = -1.051065f;
    data->d[12] = -0.728777f;
    data->d[13] = 0.748971f;
    data->d[14] = -0.335513f;
    data->d[15] = -0.612989f;
    data->d[16] = -0.744753f;
    data->d[17] = -0.985658f;
    data->d[18] = -1.412082f;
    data->d[19] = 0.109019f;
    data->d[20] = -1.049758f;
    data->d[21] = 0.237554f;
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
    *result->MinResult(2) = 0.000262f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000262f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadSettings(state.m_settings);
    LoadProgram(state.m_program);
    LoadResult(state);

} // LoadState
