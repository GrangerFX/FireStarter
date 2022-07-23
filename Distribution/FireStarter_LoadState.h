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
    settings.m_generations = 10;
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
    program.m_dataSize = 20;
    program.m_maxRegisters = 7;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 16};
    program.m_registers[2] = {2, 1, 2, 18};
    program.m_registers[3] = {3, 2, 3, 30};
    program.m_registers[4] = {4, 4, 4, 4};
    program.m_registers[5] = {5, 3, 5, 14};
    program.m_registers[6] = {6, 4, 8, 24};
    program.m_registers[7] = {7, 5, 9, 25};
    program.m_registers[8] = {8, 8, 10, 10};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 6, 12, 28};
    program.m_registers[11] = {11, 11, 13, 13};
    program.m_registers[12] = {12, 12, 15, 15};
    program.m_registers[13] = {13, 13, 17, 17};
    program.m_registers[14] = {14, 14, 19, 19};
    program.m_registers[15] = {15, 15, 20, 20};
    program.m_registers[16] = {16, 16, 22, 22};
    program.m_registers[17] = {17, 1, 23, 31};
    program.m_registers[18] = {18, 18, 26, 26};
    program.m_registers[19] = {19, 19, 27, 27};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 1, 3);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 2);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 6);
    instructions->SetOperation(25, 1, 7);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 3);
    instructions->SetOperation(31, 0, 17);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.590374f;
    data->d[1] = 0.382382f;
    data->d[2] = 0.086127f;
    data->d[3] = 0.188887f;
    data->d[4] = -0.103710f;
    data->d[5] = -0.968120f;
    data->d[6] = 0.942297f;
    data->d[7] = -0.046117f;
    data->d[8] = 0.088310f;
    data->d[9] = 0.964784f;
    data->d[10] = -0.434640f;
    data->d[11] = 0.178842f;
    data->d[12] = 1.042453f;
    data->d[13] = 0.691442f;
    data->d[14] = 1.111926f;
    data->d[15] = 0.441685f;
    data->d[16] = -0.418948f;
    data->d[17] = -1.055619f;
    data->d[18] = -0.033562f;
    data->d[19] = -0.986695f;
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
    *result->MinResult(0) = 0.212839f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.083132f;
    data->d[1] = 2.312407f;
    data->d[2] = 0.928513f;
    data->d[3] = 0.880158f;
    data->d[4] = 0.166267f;
    data->d[5] = -1.505887f;
    data->d[6] = -0.233028f;
    data->d[7] = 0.756533f;
    data->d[8] = 0.977844f;
    data->d[9] = -0.858642f;
    data->d[10] = 0.047676f;
    data->d[11] = 0.962395f;
    data->d[12] = -0.004739f;
    data->d[13] = 0.521428f;
    data->d[14] = 0.738306f;
    data->d[15] = 0.788007f;
    data->d[16] = -0.571898f;
    data->d[17] = -0.804989f;
    data->d[18] = -0.422292f;
    data->d[19] = -0.836173f;
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
    *result->MinResult(1) = 0.160615f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.777257f;
    data->d[1] = 0.596112f;
    data->d[2] = -0.227554f;
    data->d[3] = 0.352718f;
    data->d[4] = 0.156885f;
    data->d[5] = -0.626017f;
    data->d[6] = -0.382621f;
    data->d[7] = -0.114724f;
    data->d[8] = -0.921911f;
    data->d[9] = -0.476042f;
    data->d[10] = 0.692607f;
    data->d[11] = 0.130012f;
    data->d[12] = 0.710277f;
    data->d[13] = -0.517217f;
    data->d[14] = -0.683630f;
    data->d[15] = 0.253542f;
    data->d[16] = 0.139194f;
    data->d[17] = 0.427844f;
    data->d[18] = 0.789470f;
    data->d[19] = -0.958283f;
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
    *result->MinResult(2) = 0.208686f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.212839f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 0;
    state.m_seed = 3232319860;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
