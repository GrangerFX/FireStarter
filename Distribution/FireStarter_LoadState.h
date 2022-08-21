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
    settings.m_iterations = 512;
    settings.m_candidates = 16;
    settings.m_generations = 10;
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
    program.m_maxRegisters = 5;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 7};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 1, 3, 18};
    program.m_registers[4] = {4, 2, 4, 25};
    program.m_registers[5] = {5, 3, 6, 10};
    program.m_registers[6] = {6, 0, 8, 16};
    program.m_registers[7] = {7, 3, 11, 23};
    program.m_registers[8] = {8, 8, 12, 12};
    program.m_registers[9] = {9, 4, 14, 29};
    program.m_registers[10] = {10, 10, 15, 15};
    program.m_registers[11] = {11, 11, 17, 17};
    program.m_registers[12] = {12, 12, 19, 19};
    program.m_registers[13] = {13, 13, 20, 20};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 3, 24, 28};
    program.m_registers[17] = {17, 17, 30, 30};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 1, 5);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 1, 7);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 1, 9);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 1, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -2.661388f;
    data->d[1] = -0.490039f;
    data->d[2] = 0.403242f;
    data->d[3] = -0.730342f;
    data->d[4] = 0.550576f;
    data->d[5] = -0.261530f;
    data->d[6] = -0.804815f;
    data->d[7] = 0.624227f;
    data->d[8] = 0.816320f;
    data->d[9] = 0.047791f;
    data->d[10] = 0.644772f;
    data->d[11] = -0.132737f;
    data->d[12] = 0.557034f;
    data->d[13] = -0.315803f;
    data->d[14] = -0.505243f;
    data->d[15] = -0.515581f;
    data->d[16] = -0.746395f;
    data->d[17] = 0.489430f;
    data->d[18] = -0.967423f;
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
    *result->MinResult(0) = 0.019947f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.106920f;
    data->d[1] = -0.546054f;
    data->d[2] = -0.630139f;
    data->d[3] = -0.597614f;
    data->d[4] = 0.429602f;
    data->d[5] = 0.150934f;
    data->d[6] = 0.598090f;
    data->d[7] = -0.298456f;
    data->d[8] = 0.440522f;
    data->d[9] = -0.099451f;
    data->d[10] = -0.864315f;
    data->d[11] = -0.897795f;
    data->d[12] = 0.960814f;
    data->d[13] = -0.620623f;
    data->d[14] = -0.336556f;
    data->d[15] = -0.225701f;
    data->d[16] = 0.567236f;
    data->d[17] = 0.347128f;
    data->d[18] = 0.834147f;
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
    *result->MinResult(1) = 0.018516f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.778799f;
    data->d[1] = -0.870755f;
    data->d[2] = 0.283754f;
    data->d[3] = -1.039786f;
    data->d[4] = 0.074841f;
    data->d[5] = 0.288292f;
    data->d[6] = 0.361882f;
    data->d[7] = 0.430567f;
    data->d[8] = 0.364217f;
    data->d[9] = 0.006446f;
    data->d[10] = 0.603122f;
    data->d[11] = -0.060700f;
    data->d[12] = -0.252821f;
    data->d[13] = -2.534344f;
    data->d[14] = 0.601223f;
    data->d[15] = -1.451125f;
    data->d[16] = -0.241459f;
    data->d[17] = 2.011233f;
    data->d[18] = -2.265357f;
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
    *result->MinResult(2) = 0.020200f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.020200f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 20;
    state.m_seed = 3232319880;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
