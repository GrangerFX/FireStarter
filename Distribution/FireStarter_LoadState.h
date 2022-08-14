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
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 4352;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 5;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 1;
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
    program.m_maxRegisters = 5;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 26};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 19};
    program.m_registers[4] = {4, 2, 4, 11};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 3, 6, 31};
    program.m_registers[7] = {7, 7, 7, 7};
    program.m_registers[8] = {8, 4, 8, 28};
    program.m_registers[9] = {9, 9, 9, 9};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 14, 14};
    program.m_registers[12] = {12, 2, 15, 30};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 18, 18};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 16, 21, 21};
    program.m_registers[17] = {17, 17, 23, 23};
    program.m_registers[18] = {18, 1, 25, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 1, 16);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 8);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 1, 1);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 0, 6);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -4.851392f;
    data->d[1] = 0.044390f;
    data->d[2] = 0.762268f;
    data->d[3] = 0.736974f;
    data->d[4] = 0.618500f;
    data->d[5] = -0.672644f;
    data->d[6] = 0.969606f;
    data->d[7] = 0.348099f;
    data->d[8] = -1.167834f;
    data->d[9] = 0.476986f;
    data->d[10] = 0.308473f;
    data->d[11] = 0.583121f;
    data->d[12] = 0.063690f;
    data->d[13] = -0.291030f;
    data->d[14] = 0.000375f;
    data->d[15] = -0.241650f;
    data->d[16] = 1.002447f;
    data->d[17] = -0.533108f;
    data->d[18] = 0.894837f;
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
    *result->MinResult(0) = 0.001681f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.574407f;
    data->d[1] = -0.402459f;
    data->d[2] = 0.745458f;
    data->d[3] = -1.104052f;
    data->d[4] = -0.356321f;
    data->d[5] = -0.091073f;
    data->d[6] = 0.796962f;
    data->d[7] = 0.478721f;
    data->d[8] = 0.206999f;
    data->d[9] = 0.339570f;
    data->d[10] = -0.005917f;
    data->d[11] = -2.912197f;
    data->d[12] = -0.077075f;
    data->d[13] = 0.555248f;
    data->d[14] = -0.161801f;
    data->d[15] = -4.067394f;
    data->d[16] = 0.337892f;
    data->d[17] = 0.600097f;
    data->d[18] = -0.151580f;
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
    *result->MinResult(1) = 0.010182f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 38.609398f;
    data->d[1] = -0.010335f;
    data->d[2] = -0.826874f;
    data->d[3] = 0.537886f;
    data->d[4] = 0.201153f;
    data->d[5] = 0.683731f;
    data->d[6] = 0.062003f;
    data->d[7] = 0.835896f;
    data->d[8] = -0.151269f;
    data->d[9] = 0.444147f;
    data->d[10] = 3.528934f;
    data->d[11] = -0.820929f;
    data->d[12] = -0.654662f;
    data->d[13] = 0.609971f;
    data->d[14] = -0.091687f;
    data->d[15] = -0.709988f;
    data->d[16] = -0.718432f;
    data->d[17] = 1.349293f;
    data->d[18] = -0.037523f;
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
    *result->MinResult(2) = 0.010284f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.010284f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1345;
    state.m_seed = 663892451;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
