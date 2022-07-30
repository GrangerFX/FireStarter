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
    program.m_maxRegisters = 6;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 12};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 6};
    program.m_registers[4] = {4, 3, 4, 20};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 2, 7, 24};
    program.m_registers[7] = {7, 4, 8, 29};
    program.m_registers[8] = {8, 5, 9, 17};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 1, 13, 31};
    program.m_registers[11] = {11, 11, 18, 18};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 13, 21, 21};
    program.m_registers[14] = {14, 14, 22, 22};
    program.m_registers[15] = {15, 2, 25, 30};
    program.m_registers[16] = {16, 16, 26, 26};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 28, 28};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 1, 14);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 1, 10);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.288812f;
    data->d[1] = 0.070792f;
    data->d[2] = -0.304617f;
    data->d[3] = 0.589855f;
    data->d[4] = 2.317640f;
    data->d[5] = -1.201001f;
    data->d[6] = -1.071875f;
    data->d[7] = -0.359691f;
    data->d[8] = -0.900816f;
    data->d[9] = -0.269147f;
    data->d[10] = -0.306087f;
    data->d[11] = -0.268139f;
    data->d[12] = -1.893987f;
    data->d[13] = -0.138820f;
    data->d[14] = -0.064338f;
    data->d[15] = -0.004507f;
    data->d[16] = -0.565843f;
    data->d[17] = 0.568819f;
    data->d[18] = -1.170822f;
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
    *result->MinResult(0) = 0.008283f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.089191f;
    data->d[1] = 1.517833f;
    data->d[2] = 0.904670f;
    data->d[3] = -0.614125f;
    data->d[4] = -0.137575f;
    data->d[5] = 1.040144f;
    data->d[6] = 0.709926f;
    data->d[7] = -0.303446f;
    data->d[8] = -0.751895f;
    data->d[9] = -0.554727f;
    data->d[10] = 0.624755f;
    data->d[11] = 0.479295f;
    data->d[12] = -1.696291f;
    data->d[13] = 0.935814f;
    data->d[14] = 5.517558f;
    data->d[15] = 0.010814f;
    data->d[16] = 0.961053f;
    data->d[17] = -0.050502f;
    data->d[18] = 0.376842f;
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
    *result->MinResult(1) = 0.005508f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.426212f;
    data->d[1] = -0.063670f;
    data->d[2] = 0.870068f;
    data->d[3] = -1.551736f;
    data->d[4] = 0.081043f;
    data->d[5] = -1.738571f;
    data->d[6] = 0.213652f;
    data->d[7] = 0.740671f;
    data->d[8] = 1.165165f;
    data->d[9] = 0.859897f;
    data->d[10] = -0.386439f;
    data->d[11] = -1.346493f;
    data->d[12] = -0.477691f;
    data->d[13] = 0.348111f;
    data->d[14] = 0.313749f;
    data->d[15] = 0.464872f;
    data->d[16] = 3.115040f;
    data->d[17] = 0.100865f;
    data->d[18] = 0.323297f;
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
    *result->MinResult(2) = 0.007897f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.008283f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 545;
    state.m_seed = 3232320400;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
