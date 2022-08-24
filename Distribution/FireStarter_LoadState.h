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
    settings.m_population = 17408;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 1;
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
    program.m_dataSize = 18;
    program.m_maxRegisters = 6;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 27};
    program.m_registers[2] = {2, 1, 2, 25};
    program.m_registers[3] = {3, 3, 3, 3};
    program.m_registers[4] = {4, 2, 4, 12};
    program.m_registers[5] = {5, 3, 6, 22};
    program.m_registers[6] = {6, 4, 7, 29};
    program.m_registers[7] = {7, 5, 8, 9};
    program.m_registers[8] = {8, 5, 10, 28};
    program.m_registers[9] = {9, 9, 11, 11};
    program.m_registers[10] = {10, 10, 15, 15};
    program.m_registers[11] = {11, 11, 16, 16};
    program.m_registers[12] = {12, 12, 17, 17};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 3, 23, 24};
    program.m_registers[16] = {16, 16, 30, 30};
    program.m_registers[17] = {17, 17, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 2);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 1, 1);
    instructions->SetOperation(28, 1, 8);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 1, 16);
    instructions->SetOperation(31, 1, 17);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.417024f;
    data->d[1] = 0.383159f;
    data->d[2] = 0.382362f;
    data->d[3] = 0.802033f;
    data->d[4] = 0.613016f;
    data->d[5] = 0.195871f;
    data->d[6] = 0.077076f;
    data->d[7] = 3.246162f;
    data->d[8] = 0.144712f;
    data->d[9] = -0.122547f;
    data->d[10] = -2.036026f;
    data->d[11] = -3.069885f;
    data->d[12] = -0.400181f;
    data->d[13] = -0.330042f;
    data->d[14] = 1.807173f;
    data->d[15] = -0.715116f;
    data->d[16] = -1.087192f;
    data->d[17] = 1.876310f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(0) = 0.008597f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.340820f;
    data->d[1] = -0.495971f;
    data->d[2] = -0.660912f;
    data->d[3] = 0.404472f;
    data->d[4] = 0.602175f;
    data->d[5] = -1.079814f;
    data->d[6] = 0.374874f;
    data->d[7] = 1.309843f;
    data->d[8] = -1.070869f;
    data->d[9] = -0.339492f;
    data->d[10] = 0.427352f;
    data->d[11] = 0.603691f;
    data->d[12] = 0.568378f;
    data->d[13] = -6.083853f;
    data->d[14] = 0.733351f;
    data->d[15] = -0.596845f;
    data->d[16] = 0.570124f;
    data->d[17] = 0.672191f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(1) = 0.008629f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.506687f;
    data->d[1] = 0.504845f;
    data->d[2] = 0.534064f;
    data->d[3] = 0.895390f;
    data->d[4] = -0.519700f;
    data->d[5] = 0.522478f;
    data->d[6] = 0.040932f;
    data->d[7] = 0.608410f;
    data->d[8] = 0.671793f;
    data->d[9] = 0.668280f;
    data->d[10] = -0.595932f;
    data->d[11] = -0.221265f;
    data->d[12] = -3.170888f;
    data->d[13] = -2.207053f;
    data->d[14] = 0.147218f;
    data->d[15] = 0.633011f;
    data->d[16] = 0.558326f;
    data->d[17] = 0.584867f;
    data->d[18] = 0.000000f;
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
    *result->MinResult(2) = 0.008948f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.008948f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 131;
    state.m_seed = 3232319982;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
