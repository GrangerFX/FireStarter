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
    program.m_dataSize = 19;
    program.m_maxRegisters = 7;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 23};
    program.m_registers[1] = {1, 1, 1, 26};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 28};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 3, 7, 15};
    program.m_registers[7] = {7, 4, 8, 29};
    program.m_registers[8] = {8, 5, 9, 17};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 6, 13, 31};
    program.m_registers[11] = {11, 11, 18, 18};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 13, 20, 20};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 17, 27, 27};
    program.m_registers[18] = {18, 18, 30, 30};

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
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 1, 10);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.251605f;
    data->d[1] = 0.159276f;
    data->d[2] = -0.504783f;
    data->d[3] = -0.551404f;
    data->d[4] = 0.742369f;
    data->d[5] = 0.336588f;
    data->d[6] = -0.969235f;
    data->d[7] = -0.360001f;
    data->d[8] = -0.903265f;
    data->d[9] = -0.228349f;
    data->d[10] = -0.346272f;
    data->d[11] = -1.001023f;
    data->d[12] = -0.422891f;
    data->d[13] = -1.369886f;
    data->d[14] = -1.468877f;
    data->d[15] = -0.490171f;
    data->d[16] = 0.856146f;
    data->d[17] = 0.922389f;
    data->d[18] = 0.000331f;
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
    *result->MinResult(0) = 0.013550f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.131455f;
    data->d[1] = 1.580557f;
    data->d[2] = -0.886054f;
    data->d[3] = 0.536337f;
    data->d[4] = 0.067335f;
    data->d[5] = 1.075459f;
    data->d[6] = 0.647358f;
    data->d[7] = -0.320508f;
    data->d[8] = -0.768989f;
    data->d[9] = -0.440526f;
    data->d[10] = 0.638504f;
    data->d[11] = 0.130286f;
    data->d[12] = 0.410724f;
    data->d[13] = 0.815678f;
    data->d[14] = 1.578824f;
    data->d[15] = 3.805946f;
    data->d[16] = 0.756479f;
    data->d[17] = 0.807177f;
    data->d[18] = 0.002825f;
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
    *result->MinResult(1) = 0.013003f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.542183f;
    data->d[1] = -0.179234f;
    data->d[2] = 0.900895f;
    data->d[3] = -0.467399f;
    data->d[4] = 0.031171f;
    data->d[5] = -1.575066f;
    data->d[6] = 0.554148f;
    data->d[7] = 0.796775f;
    data->d[8] = 1.061809f;
    data->d[9] = 1.097027f;
    data->d[10] = -0.444656f;
    data->d[11] = -0.402069f;
    data->d[12] = -2.515475f;
    data->d[13] = 0.142426f;
    data->d[14] = 0.393053f;
    data->d[15] = 0.043326f;
    data->d[16] = 0.816407f;
    data->d[17] = -0.055504f;
    data->d[18] = 0.231890f;
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
    *result->MinResult(2) = 0.004182f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.013550f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 50;
    state.m_seed = 3232319905;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
