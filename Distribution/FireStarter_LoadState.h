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
    program.m_dataSize = 18;
    program.m_maxRegisters = 8;

    program.m_registers.resize(18);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 11};
    program.m_registers[2] = {2, 1, 2, 25};
    program.m_registers[3] = {3, 2, 3, 28};
    program.m_registers[4] = {4, 3, 4, 13};
    program.m_registers[5] = {5, 4, 5, 30};
    program.m_registers[6] = {6, 5, 6, 22};
    program.m_registers[7] = {7, 6, 7, 26};
    program.m_registers[8] = {8, 8, 9, 9};
    program.m_registers[9] = {9, 7, 10, 27};
    program.m_registers[10] = {10, 10, 12, 12};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 3, 17, 20};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 24, 24};
    program.m_registers[16] = {16, 16, 29, 29};
    program.m_registers[17] = {17, 17, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 1, 1);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 1, 1);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 1, 12);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 1, 7);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 17);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.558409f;
    data->d[1] = -0.686709f;
    data->d[2] = -0.533034f;
    data->d[3] = 0.641288f;
    data->d[4] = -0.300175f;
    data->d[5] = -0.517261f;
    data->d[6] = -2.089573f;
    data->d[7] = 0.175618f;
    data->d[8] = 0.818762f;
    data->d[9] = 0.715317f;
    data->d[10] = 0.465243f;
    data->d[11] = -0.750688f;
    data->d[12] = 0.705286f;
    data->d[13] = -0.095154f;
    data->d[14] = -0.126185f;
    data->d[15] = 1.337609f;
    data->d[16] = 0.891480f;
    data->d[17] = -0.783866f;
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
    *result->MinResult(0) = 0.000149f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.776832f;
    data->d[1] = -1.258604f;
    data->d[2] = 0.231141f;
    data->d[3] = 0.639204f;
    data->d[4] = 0.839628f;
    data->d[5] = 0.562606f;
    data->d[6] = 1.502054f;
    data->d[7] = 0.927554f;
    data->d[8] = -0.740606f;
    data->d[9] = 1.505249f;
    data->d[10] = -0.908850f;
    data->d[11] = -0.127555f;
    data->d[12] = -0.863203f;
    data->d[13] = 3.448164f;
    data->d[14] = 0.659574f;
    data->d[15] = 0.376513f;
    data->d[16] = 1.216845f;
    data->d[17] = -0.313315f;
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
    *result->MinResult(1) = 0.000080f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.307215f;
    data->d[1] = 0.810215f;
    data->d[2] = -1.826139f;
    data->d[3] = -1.461958f;
    data->d[4] = -0.274055f;
    data->d[5] = 0.377289f;
    data->d[6] = -0.804368f;
    data->d[7] = -0.950552f;
    data->d[8] = -1.977013f;
    data->d[9] = 0.219369f;
    data->d[10] = 0.239817f;
    data->d[11] = -0.222646f;
    data->d[12] = -1.306693f;
    data->d[13] = 1.254241f;
    data->d[14] = 0.626774f;
    data->d[15] = 0.274215f;
    data->d[16] = -2.247947f;
    data->d[17] = -1.898516f;
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
    *result->MinResult(2) = 0.000170f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000170f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1200;
    state.m_seed = 3232321150;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
