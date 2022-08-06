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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_states = 1;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 5;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 22;
    program.m_maxRegisters = 5;

    program.m_registers.resize(22);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 0, 3, 16};
    program.m_registers[4] = {4, 1, 4, 30};
    program.m_registers[5] = {5, 2, 6, 7};
    program.m_registers[6] = {6, 2, 8, 29};
    program.m_registers[7] = {7, 7, 9, 9};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 9, 12, 12};
    program.m_registers[10] = {10, 3, 13, 28};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 0, 17, 27};
    program.m_registers[13] = {13, 13, 18, 18};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 16, 21, 21};
    program.m_registers[17] = {17, 17, 22, 22};
    program.m_registers[18] = {18, 4, 23, 24};
    program.m_registers[19] = {19, 19, 25, 25};
    program.m_registers[20] = {20, 20, 26, 26};
    program.m_registers[21] = {21, 21, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 1, 20);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 21);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.906503f;
    data->d[1] = -4.048098f;
    data->d[2] = 0.446110f;
    data->d[3] = 0.099183f;
    data->d[4] = 5.273177f;
    data->d[5] = -1.488915f;
    data->d[6] = -0.216546f;
    data->d[7] = 0.435099f;
    data->d[8] = -1.340767f;
    data->d[9] = -8.316538f;
    data->d[10] = 0.972814f;
    data->d[11] = 1.953531f;
    data->d[12] = 0.081533f;
    data->d[13] = 1.604430f;
    data->d[14] = 2.634698f;
    data->d[15] = -1.143227f;
    data->d[16] = 0.507116f;
    data->d[17] = 8.165469f;
    data->d[18] = -3.013703f;
    data->d[19] = 0.614969f;
    data->d[20] = -0.677519f;
    data->d[21] = 0.000001f;
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
    *result->MinResult(0) = 0.000745f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.280448f;
    data->d[1] = -3.371006f;
    data->d[2] = 0.613031f;
    data->d[3] = 0.185489f;
    data->d[4] = 0.476875f;
    data->d[5] = -0.819121f;
    data->d[6] = -0.777176f;
    data->d[7] = -2.762637f;
    data->d[8] = 0.253740f;
    data->d[9] = -4.298836f;
    data->d[10] = -3.457016f;
    data->d[11] = -0.476795f;
    data->d[12] = 3.545413f;
    data->d[13] = 2.228275f;
    data->d[14] = 5.727786f;
    data->d[15] = -5.784444f;
    data->d[16] = 1.193319f;
    data->d[17] = 0.226547f;
    data->d[18] = 0.466976f;
    data->d[19] = 6.628518f;
    data->d[20] = 1.003051f;
    data->d[21] = -0.118635f;
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
    *result->MinResult(1) = 0.000864f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -3.175814f;
    data->d[1] = 0.557821f;
    data->d[2] = 3.413863f;
    data->d[3] = -0.085695f;
    data->d[4] = 0.218422f;
    data->d[5] = -0.573088f;
    data->d[6] = 4.582030f;
    data->d[7] = 0.487102f;
    data->d[8] = 0.117951f;
    data->d[9] = -4.695327f;
    data->d[10] = 1.438779f;
    data->d[11] = 0.713505f;
    data->d[12] = -1.590264f;
    data->d[13] = -0.309147f;
    data->d[14] = 0.746909f;
    data->d[15] = -2.369571f;
    data->d[16] = 0.455712f;
    data->d[17] = 1.642732f;
    data->d[18] = -0.157382f;
    data->d[19] = 2.352179f;
    data->d[20] = -2.025101f;
    data->d[21] = 0.523589f;
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
    *result->MinResult(2) = 0.000855f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000864f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 295;
    state.m_seed = 3232320150;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
