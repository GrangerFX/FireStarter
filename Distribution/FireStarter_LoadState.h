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
    program.m_dataSize = 32;
    program.m_maxRegisters = 32;

    program.m_registers.resize(0);

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 12);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 0, 3);
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
    data->d[0] = -0.814421f;
    data->d[1] = 0.195751f;
    data->d[2] = -0.017987f;
    data->d[3] = -0.256669f;
    data->d[4] = -0.527406f;
    data->d[5] = -0.755550f;
    data->d[6] = 0.751535f;
    data->d[7] = -1.123859f;
    data->d[8] = 0.819147f;
    data->d[9] = -0.217769f;
    data->d[10] = 0.976119f;
    data->d[11] = 1.021531f;
    data->d[12] = 0.401311f;
    data->d[13] = 0.648138f;
    data->d[14] = 0.076374f;
    data->d[15] = 1.091285f;
    data->d[16] = -1.032237f;
    data->d[17] = -0.483684f;
    data->d[18] = -0.144004f;
    data->d[19] = 0.202289f;
    data->d[20] = 0.782859f;
    data->d[21] = 0.087606f;
    data->d[22] = 0.500932f;
    data->d[23] = 0.792537f;
    data->d[24] = -1.031242f;
    data->d[25] = 0.815072f;
    data->d[26] = 1.188422f;
    data->d[27] = -0.647274f;
    data->d[28] = -0.709408f;
    data->d[29] = -0.769140f;
    data->d[30] = -0.832160f;
    data->d[31] = 0.678716f;
    *result->MinResult(0) = 0.005796f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.261204f;
    data->d[1] = 0.198660f;
    data->d[2] = -0.001239f;
    data->d[3] = -0.196555f;
    data->d[4] = 0.694127f;
    data->d[5] = -0.433887f;
    data->d[6] = 1.049175f;
    data->d[7] = 0.542084f;
    data->d[8] = -0.951624f;
    data->d[9] = -0.150365f;
    data->d[10] = 0.380560f;
    data->d[11] = -0.974750f;
    data->d[12] = 0.914861f;
    data->d[13] = -0.991166f;
    data->d[14] = 2.045591f;
    data->d[15] = 0.680388f;
    data->d[16] = -0.524189f;
    data->d[17] = -0.655834f;
    data->d[18] = 1.117154f;
    data->d[19] = -0.812240f;
    data->d[20] = 0.647342f;
    data->d[21] = -0.912430f;
    data->d[22] = -0.239001f;
    data->d[23] = 0.711418f;
    data->d[24] = 0.810013f;
    data->d[25] = 0.994096f;
    data->d[26] = 0.503071f;
    data->d[27] = -0.487343f;
    data->d[28] = -0.214715f;
    data->d[29] = -0.746395f;
    data->d[30] = 0.462317f;
    data->d[31] = 0.190709f;
    *result->MinResult(1) = 0.003645f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.323642f;
    data->d[1] = -0.224158f;
    data->d[2] = -0.968321f;
    data->d[3] = -0.556688f;
    data->d[4] = 0.161481f;
    data->d[5] = -0.451149f;
    data->d[6] = -0.500633f;
    data->d[7] = 0.025885f;
    data->d[8] = -0.400950f;
    data->d[9] = -0.423084f;
    data->d[10] = -0.464003f;
    data->d[11] = 0.732591f;
    data->d[12] = -0.118391f;
    data->d[13] = 0.433747f;
    data->d[14] = -0.753043f;
    data->d[15] = -0.764358f;
    data->d[16] = 0.506202f;
    data->d[17] = 0.568616f;
    data->d[18] = -0.055988f;
    data->d[19] = 0.168188f;
    data->d[20] = -0.626063f;
    data->d[21] = 0.072764f;
    data->d[22] = 0.315931f;
    data->d[23] = -0.483563f;
    data->d[24] = 0.716756f;
    data->d[25] = 0.166035f;
    data->d[26] = -1.107346f;
    data->d[27] = 1.026303f;
    data->d[28] = 0.015299f;
    data->d[29] = 2.389120f;
    data->d[30] = 0.101931f;
    data->d[31] = 0.934973f;
    *result->MinResult(2) = 0.006314f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.006314f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
