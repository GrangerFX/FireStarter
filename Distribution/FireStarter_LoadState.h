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
    settings.m_population = 69632;
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
    program.m_dataSize = 24;
    program.m_maxRegisters = 7;

    program.m_registers.resize(24);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 24};
    program.m_registers[2] = {2, 1, 2, 27};
    program.m_registers[3] = {3, 2, 3, 19};
    program.m_registers[4] = {4, 3, 4, 20};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 4, 6, 26};
    program.m_registers[7] = {7, 5, 7, 28};
    program.m_registers[8] = {8, 6, 8, 11};
    program.m_registers[9] = {9, 9, 9, 9};
    program.m_registers[10] = {10, 10, 10, 10};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 13, 15, 15};
    program.m_registers[14] = {14, 14, 16, 16};
    program.m_registers[15] = {15, 15, 17, 17};
    program.m_registers[16] = {16, 16, 18, 18};
    program.m_registers[17] = {17, 17, 21, 21};
    program.m_registers[18] = {18, 18, 22, 22};
    program.m_registers[19] = {19, 19, 23, 23};
    program.m_registers[20] = {20, 20, 25, 25};
    program.m_registers[21] = {21, 21, 29, 29};
    program.m_registers[22] = {22, 22, 30, 30};
    program.m_registers[23] = {23, 23, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 0, 23);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.209803f;
    data->d[1] = -0.476618f;
    data->d[2] = 0.307495f;
    data->d[3] = -0.232463f;
    data->d[4] = 0.159754f;
    data->d[5] = -0.071244f;
    data->d[6] = 0.744153f;
    data->d[7] = 0.978440f;
    data->d[8] = 0.694778f;
    data->d[9] = 1.734653f;
    data->d[10] = -4.490391f;
    data->d[11] = 0.829736f;
    data->d[12] = 0.813654f;
    data->d[13] = 1.385183f;
    data->d[14] = 0.221954f;
    data->d[15] = 3.330164f;
    data->d[16] = 0.236722f;
    data->d[17] = 0.067661f;
    data->d[18] = -7.574399f;
    data->d[19] = -0.094687f;
    data->d[20] = 1.391273f;
    data->d[21] = -0.715211f;
    data->d[22] = 15.625525f;
    data->d[23] = -0.087851f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000145f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.355165f;
    data->d[1] = -0.069961f;
    data->d[2] = 1.527902f;
    data->d[3] = 0.266371f;
    data->d[4] = -1.040088f;
    data->d[5] = -1.019157f;
    data->d[6] = 0.534928f;
    data->d[7] = 1.051853f;
    data->d[8] = -1.369466f;
    data->d[9] = -3.956521f;
    data->d[10] = 1.076893f;
    data->d[11] = -4.275232f;
    data->d[12] = 21.934299f;
    data->d[13] = 1.528792f;
    data->d[14] = -0.308511f;
    data->d[15] = 0.656013f;
    data->d[16] = -2.165171f;
    data->d[17] = -0.128051f;
    data->d[18] = 0.106701f;
    data->d[19] = -0.120300f;
    data->d[20] = 0.070226f;
    data->d[21] = -0.307707f;
    data->d[22] = -1.788381f;
    data->d[23] = 0.052050f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000090f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.001575f;
    data->d[1] = -0.001074f;
    data->d[2] = -0.769674f;
    data->d[3] = 0.404691f;
    data->d[4] = 1.202931f;
    data->d[5] = -1.665080f;
    data->d[6] = -1.259126f;
    data->d[7] = -1.721254f;
    data->d[8] = 4.504725f;
    data->d[9] = -0.324988f;
    data->d[10] = 0.365430f;
    data->d[11] = 0.446800f;
    data->d[12] = 2.455448f;
    data->d[13] = 0.017248f;
    data->d[14] = -32.064693f;
    data->d[15] = -0.012464f;
    data->d[16] = 64.458931f;
    data->d[17] = 0.138488f;
    data->d[18] = 1.489934f;
    data->d[19] = -0.022334f;
    data->d[20] = -9.943032f;
    data->d[21] = 0.808702f;
    data->d[22] = 0.343603f;
    data->d[23] = 3.437858f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.001138f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.001138f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 7400;
    state.m_seed = 3232327350;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
