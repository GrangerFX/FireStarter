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

    settings.m_mode = FIRESTARTER_UNIT;
    settings.m_states = 4;
    settings.m_units = 1;
    settings.m_process = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = 0;
    settings.m_attempts = 32;
    settings.m_seed = 3;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 21;
    program.m_maxRegisters = 6;

    program.m_registers.resize(21);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 1, 1, 1};
    program.m_registers[2] = {2, 0, 2, 23};
    program.m_registers[3] = {3, 1, 3, 15};
    program.m_registers[4] = {4, 2, 4, 13};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 3, 6, 27};
    program.m_registers[7] = {7, 4, 7, 25};
    program.m_registers[8] = {8, 8, 8, 8};
    program.m_registers[9] = {9, 5, 10, 16};
    program.m_registers[10] = {10, 10, 11, 11};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 2, 14, 30};
    program.m_registers[13] = {13, 5, 17, 20};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 21, 21};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 17, 26, 26};
    program.m_registers[18] = {18, 18, 28, 28};
    program.m_registers[19] = {19, 19, 29, 29};
    program.m_registers[20] = {20, 20, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 1, 2);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 1, 2);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 1, 7);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 6);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 20);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.385176f;
    data->d[1] = -0.277501f;
    data->d[2] = -0.867123f;
    data->d[3] = 0.448455f;
    data->d[4] = 3.051292f;
    data->d[5] = -0.637916f;
    data->d[6] = 0.363849f;
    data->d[7] = 0.069109f;
    data->d[8] = -0.083653f;
    data->d[9] = 0.903132f;
    data->d[10] = 0.982266f;
    data->d[11] = 1.206963f;
    data->d[12] = -0.820818f;
    data->d[13] = 0.400716f;
    data->d[14] = -1.120634f;
    data->d[15] = 0.379336f;
    data->d[16] = 0.048756f;
    data->d[17] = 1.187727f;
    data->d[18] = 0.936245f;
    data->d[19] = -0.204347f;
    data->d[20] = -0.185858f;
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
    *result->MinResult(0) = 0.000204f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.375497f;
    data->d[1] = 1.408406f;
    data->d[2] = -0.181373f;
    data->d[3] = 0.438954f;
    data->d[4] = -0.995559f;
    data->d[5] = 1.103216f;
    data->d[6] = -0.675737f;
    data->d[7] = 1.023839f;
    data->d[8] = 1.639631f;
    data->d[9] = 1.710386f;
    data->d[10] = -0.409192f;
    data->d[11] = 2.238908f;
    data->d[12] = -0.680995f;
    data->d[13] = 0.379342f;
    data->d[14] = -0.913731f;
    data->d[15] = -0.093138f;
    data->d[16] = 1.167868f;
    data->d[17] = -0.182812f;
    data->d[18] = -0.964438f;
    data->d[19] = -0.132319f;
    data->d[20] = -0.238465f;
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
    *result->MinResult(1) = 0.000096f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.571167f;
    data->d[1] = 0.577418f;
    data->d[2] = 0.577015f;
    data->d[3] = 0.404433f;
    data->d[4] = 2.313514f;
    data->d[5] = 0.455980f;
    data->d[6] = -0.440913f;
    data->d[7] = -0.025685f;
    data->d[8] = 0.088227f;
    data->d[9] = -0.645270f;
    data->d[10] = 1.488497f;
    data->d[11] = 0.339029f;
    data->d[12] = -0.500404f;
    data->d[13] = 0.780443f;
    data->d[14] = -0.413975f;
    data->d[15] = -0.942093f;
    data->d[16] = -0.565941f;
    data->d[17] = 1.197842f;
    data->d[18] = -1.483342f;
    data->d[19] = -0.428007f;
    data->d[20] = -0.027589f;
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
    *result->MinResult(2) = 0.000169f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000204f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 24;
    state.m_seed = 3329834945;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
