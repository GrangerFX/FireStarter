#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_evolution = 1;
    settings.m_seed = 1;

    settings.m_sampleMin = 0.000000f;
    settings.m_sampleMax = 6.283185f;
    settings.m_evolveFactor = 0.100000f;
    settings.m_evolveStartFactor = 4.000000f;
    settings.m_evolveStartResult = 10.000000f;
    settings.m_evolveCandidates = 16;

    settings.m_evolveMode = 1;
    settings.m_evolveUnits = 1;
    settings.m_evolveStates = 1;
    settings.m_evolvePopulation = 4352;
    settings.m_evolveIterations = 512;
    settings.m_evolveGenerations = 10;
    settings.m_evolvePrecision = 256;
    settings.m_evolveFailures = 32;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 32;
    program.m_maxRegisters = 32;

    program.m_registers.resize(0);

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 12);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 1, 6);
    instructions->SetOperation(3, 1, 29);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 1, 8);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 1, 10);
    instructions->SetOperation(9, 1, 21);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 0, 24);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 1, 16);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 25);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 4);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 0, 29);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 25);
    instructions->SetOperation(31, 1, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.777108f;
    data->d[1] = 0.798125f;
    data->d[2] = -0.263584f;
    data->d[3] = 0.232465f;
    data->d[4] = 0.424547f;
    data->d[5] = 1.138905f;
    data->d[6] = -4.371603f;
    data->d[7] = 0.898870f;
    data->d[8] = 0.405572f;
    data->d[9] = 0.103947f;
    data->d[10] = 0.988626f;
    data->d[11] = -0.920462f;
    data->d[12] = -0.364998f;
    data->d[13] = -0.882295f;
    data->d[14] = -0.028952f;
    data->d[15] = -0.849401f;
    data->d[16] = -1.019683f;
    data->d[17] = -0.920422f;
    data->d[18] = -0.152052f;
    data->d[19] = -0.320406f;
    data->d[20] = -0.056616f;
    data->d[21] = 0.498674f;
    data->d[22] = 0.521706f;
    data->d[23] = -0.706891f;
    data->d[24] = -0.140024f;
    data->d[25] = -0.191414f;
    data->d[26] = -0.175065f;
    data->d[27] = 0.434245f;
    data->d[28] = -0.055296f;
    data->d[29] = -0.414285f;
    data->d[30] = -0.019891f;
    data->d[31] = -0.327649f;
    *result->MinResult(0) = 0.072683f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.813456f;
    data->d[1] = 0.249408f;
    data->d[2] = -0.069179f;
    data->d[3] = 0.940657f;
    data->d[4] = 0.460169f;
    data->d[5] = 1.004830f;
    data->d[6] = -0.760278f;
    data->d[7] = 0.511999f;
    data->d[8] = 2.613120f;
    data->d[9] = -0.100475f;
    data->d[10] = 0.022368f;
    data->d[11] = 0.344724f;
    data->d[12] = 0.887363f;
    data->d[13] = -0.694711f;
    data->d[14] = -0.152649f;
    data->d[15] = -0.048880f;
    data->d[16] = -0.560170f;
    data->d[17] = 0.196986f;
    data->d[18] = 0.779120f;
    data->d[19] = 0.006032f;
    data->d[20] = 0.536986f;
    data->d[21] = -0.857320f;
    data->d[22] = 0.015049f;
    data->d[23] = -0.959305f;
    data->d[24] = 0.610518f;
    data->d[25] = 0.644366f;
    data->d[26] = -0.263179f;
    data->d[27] = -0.497970f;
    data->d[28] = -0.273170f;
    data->d[29] = 0.866752f;
    data->d[30] = -0.451857f;
    data->d[31] = -0.657416f;
    *result->MinResult(1) = 0.028532f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.485447f;
    data->d[1] = -0.191493f;
    data->d[2] = -0.076745f;
    data->d[3] = 0.985491f;
    data->d[4] = 0.199988f;
    data->d[5] = 0.376243f;
    data->d[6] = 0.136772f;
    data->d[7] = -1.090786f;
    data->d[8] = 0.309152f;
    data->d[9] = -0.188348f;
    data->d[10] = -0.231990f;
    data->d[11] = -0.834907f;
    data->d[12] = -0.336682f;
    data->d[13] = 0.463930f;
    data->d[14] = 1.166921f;
    data->d[15] = -0.273342f;
    data->d[16] = -0.075991f;
    data->d[17] = 0.504779f;
    data->d[18] = -0.039873f;
    data->d[19] = -0.622751f;
    data->d[20] = -3.717174f;
    data->d[21] = 0.169565f;
    data->d[22] = 0.179047f;
    data->d[23] = -0.531117f;
    data->d[24] = 0.283573f;
    data->d[25] = -0.654169f;
    data->d[26] = -0.573608f;
    data->d[27] = 0.527488f;
    data->d[28] = -0.931302f;
    data->d[29] = -0.861381f;
    data->d[30] = -0.038850f;
    data->d[31] = -0.884992f;
    *result->MinResult(2) = 0.062835f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.072683f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 3;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
