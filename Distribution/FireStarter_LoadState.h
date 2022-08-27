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
    data->d[0] = -0.122821f;
    data->d[1] = -0.435411f;
    data->d[2] = 0.368791f;
    data->d[3] = -0.320292f;
    data->d[4] = 0.874093f;
    data->d[5] = 0.849869f;
    data->d[6] = 0.842500f;
    data->d[7] = 0.245067f;
    data->d[8] = 0.473488f;
    data->d[9] = -0.143465f;
    data->d[10] = -1.054132f;
    data->d[11] = -0.779111f;
    data->d[12] = 0.607610f;
    data->d[13] = 1.043299f;
    data->d[14] = -0.948273f;
    data->d[15] = -0.325836f;
    data->d[16] = 0.743641f;
    data->d[17] = 0.792177f;
    data->d[18] = 0.790362f;
    data->d[19] = -1.608077f;
    data->d[20] = -0.577809f;
    data->d[21] = 0.957416f;
    data->d[22] = -0.220162f;
    data->d[23] = -0.888898f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.002263f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -11.886034f;
    data->d[1] = 5.407288f;
    data->d[2] = -1.276009f;
    data->d[3] = 0.760073f;
    data->d[4] = -0.913744f;
    data->d[5] = 0.422884f;
    data->d[6] = -0.447084f;
    data->d[7] = -1.905104f;
    data->d[8] = -1.350476f;
    data->d[9] = 1.586839f;
    data->d[10] = -0.865119f;
    data->d[11] = 1.241563f;
    data->d[12] = -113.490623f;
    data->d[13] = 0.253956f;
    data->d[14] = 0.090890f;
    data->d[15] = 1.925487f;
    data->d[16] = -0.011128f;
    data->d[17] = 2.159083f;
    data->d[18] = 0.821740f;
    data->d[19] = 1.099180f;
    data->d[20] = -0.016305f;
    data->d[21] = -3.327790f;
    data->d[22] = 0.084937f;
    data->d[23] = -0.750747f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.008288f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.414393f;
    data->d[1] = -0.533632f;
    data->d[2] = -0.409940f;
    data->d[3] = 0.345451f;
    data->d[4] = -0.892044f;
    data->d[5] = -0.447106f;
    data->d[6] = 0.761240f;
    data->d[7] = -0.152338f;
    data->d[8] = -0.807221f;
    data->d[9] = 0.776412f;
    data->d[10] = -0.955161f;
    data->d[11] = -0.360951f;
    data->d[12] = -0.964441f;
    data->d[13] = -0.627246f;
    data->d[14] = 0.826175f;
    data->d[15] = -1.105588f;
    data->d[16] = 0.875396f;
    data->d[17] = -0.390742f;
    data->d[18] = -1.733010f;
    data->d[19] = -0.877004f;
    data->d[20] = -0.829624f;
    data->d[21] = -1.509318f;
    data->d[22] = 0.416306f;
    data->d[23] = -1.108983f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.004420f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.008288f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1200;
    state.m_seed = 3232321150;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
