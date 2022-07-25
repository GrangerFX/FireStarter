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
    settings.m_generations = 4;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_INDIVIDUAL;
    settings.m_attempts = 32;
    settings.m_seed = 0;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 20;
    program.m_maxRegisters = 7;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 27};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 1, 2, 21};
    program.m_registers[3] = {3, 2, 3, 10};
    program.m_registers[4] = {4, 3, 4, 17};
    program.m_registers[5] = {5, 5, 6, 6};
    program.m_registers[6] = {6, 6, 7, 7};
    program.m_registers[7] = {7, 4, 8, 31};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 2, 11, 18};
    program.m_registers[10] = {10, 5, 13, 26};
    program.m_registers[11] = {11, 6, 14, 30};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 13, 16, 16};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 2, 20, 28};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 17, 23, 23};
    program.m_registers[18] = {18, 18, 24, 24};
    program.m_registers[19] = {19, 19, 29, 29};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 2);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 3);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 7);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 1, 7);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.501160f;
    data->d[1] = 0.693035f;
    data->d[2] = -0.013766f;
    data->d[3] = -1.197485f;
    data->d[4] = -0.519423f;
    data->d[5] = -2.750625f;
    data->d[6] = 0.227549f;
    data->d[7] = 0.759495f;
    data->d[8] = -0.859782f;
    data->d[9] = -0.809213f;
    data->d[10] = -0.857797f;
    data->d[11] = 0.714420f;
    data->d[12] = 0.057109f;
    data->d[13] = 0.906214f;
    data->d[14] = 0.540610f;
    data->d[15] = -0.612388f;
    data->d[16] = -1.594102f;
    data->d[17] = 0.110428f;
    data->d[18] = -0.692172f;
    data->d[19] = -0.667869f;
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
    *result->MinResult(0) = 0.006652f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.071341f;
    data->d[1] = 0.876979f;
    data->d[2] = -0.149066f;
    data->d[3] = 0.726618f;
    data->d[4] = 0.561410f;
    data->d[5] = -1.170480f;
    data->d[6] = 0.220137f;
    data->d[7] = 0.553738f;
    data->d[8] = -0.470244f;
    data->d[9] = -4.368986f;
    data->d[10] = -0.441488f;
    data->d[11] = 0.760745f;
    data->d[12] = -0.298392f;
    data->d[13] = 1.047718f;
    data->d[14] = 0.456182f;
    data->d[15] = -0.572385f;
    data->d[16] = -8.242656f;
    data->d[17] = 0.632087f;
    data->d[18] = 0.000929f;
    data->d[19] = -0.261221f;
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
    *result->MinResult(1) = 0.013097f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.320068f;
    data->d[1] = 0.523599f;
    data->d[2] = -0.648620f;
    data->d[3] = -0.151032f;
    data->d[4] = -3.431681f;
    data->d[5] = -2.946283f;
    data->d[6] = -0.241869f;
    data->d[7] = -0.384819f;
    data->d[8] = 0.120042f;
    data->d[9] = -0.451809f;
    data->d[10] = -0.086615f;
    data->d[11] = -1.765883f;
    data->d[12] = -0.789034f;
    data->d[13] = 0.900804f;
    data->d[14] = -0.490459f;
    data->d[15] = -0.115060f;
    data->d[16] = -0.358930f;
    data->d[17] = 0.758777f;
    data->d[18] = -2.507998f;
    data->d[19] = -0.000610f;
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
    *result->MinResult(2) = 0.016391f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.016391f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 300;
    state.m_seed = 3232320154;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
