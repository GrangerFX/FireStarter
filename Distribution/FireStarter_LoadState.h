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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 139264;
    settings.m_iterations = 512;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
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
    program.m_dataSize = 20;
    program.m_maxRegisters = 5;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 4};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 1, 2, 13};
    program.m_registers[3] = {3, 2, 3, 10};
    program.m_registers[4] = {4, 0, 5, 31};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 3, 7, 30};
    program.m_registers[7] = {7, 7, 8, 8};
    program.m_registers[8] = {8, 2, 11, 18};
    program.m_registers[9] = {9, 4, 12, 25};
    program.m_registers[10] = {10, 10, 14, 14};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 2, 19, 26};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 16, 23, 23};
    program.m_registers[17] = {17, 1, 24, 28};
    program.m_registers[18] = {18, 18, 27, 27};
    program.m_registers[19] = {19, 19, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 3);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 2);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 1, 9);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 0, 4);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.000018f;
    data->d[1] = 0.391988f;
    data->d[2] = -0.336443f;
    data->d[3] = -3.324500f;
    data->d[4] = 0.259781f;
    data->d[5] = -0.991203f;
    data->d[6] = -0.408572f;
    data->d[7] = -1.011141f;
    data->d[8] = 0.483570f;
    data->d[9] = -0.623122f;
    data->d[10] = -0.878035f;
    data->d[11] = -1.946701f;
    data->d[12] = 0.187924f;
    data->d[13] = 0.417440f;
    data->d[14] = 0.461920f;
    data->d[15] = -0.716037f;
    data->d[16] = 0.454720f;
    data->d[17] = -2.311534f;
    data->d[18] = 1.925982f;
    data->d[19] = 0.081933f;
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
    *result->MinResult(0) = 0.000060f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.375963f;
    data->d[1] = 0.228483f;
    data->d[2] = -0.019403f;
    data->d[3] = -0.976580f;
    data->d[4] = 0.099465f;
    data->d[5] = 0.733812f;
    data->d[6] = 0.724884f;
    data->d[7] = -0.809044f;
    data->d[8] = -1.119765f;
    data->d[9] = -0.348859f;
    data->d[10] = -0.417677f;
    data->d[11] = -0.055798f;
    data->d[12] = 1.938614f;
    data->d[13] = 0.335801f;
    data->d[14] = -2.416228f;
    data->d[15] = 0.116154f;
    data->d[16] = -0.768507f;
    data->d[17] = -1.189196f;
    data->d[18] = 0.287935f;
    data->d[19] = -0.831894f;
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
    *result->MinResult(1) = 0.000041f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -3.195753f;
    data->d[1] = -0.778596f;
    data->d[2] = -0.407516f;
    data->d[3] = 1.310053f;
    data->d[4] = 0.086588f;
    data->d[5] = -0.595078f;
    data->d[6] = -0.138708f;
    data->d[7] = 0.239201f;
    data->d[8] = 0.572161f;
    data->d[9] = -1.158943f;
    data->d[10] = -0.688396f;
    data->d[11] = 0.293349f;
    data->d[12] = 1.115572f;
    data->d[13] = 2.084210f;
    data->d[14] = 0.564156f;
    data->d[15] = -0.481664f;
    data->d[16] = 3.346905f;
    data->d[17] = 2.015300f;
    data->d[18] = -3.827934f;
    data->d[19] = -0.048136f;
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
    *result->MinResult(2) = 0.000102f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000102f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1100;
    state.m_seed = 3232321050;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
