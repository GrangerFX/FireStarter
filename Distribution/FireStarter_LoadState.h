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
    program.m_maxRegisters = 6;

    program.m_registers.resize(20);
    program.m_registers[0] = {0, 0, 0, 15};
    program.m_registers[1] = {1, 1, 1, 14};
    program.m_registers[2] = {2, 2, 2, 2};
    program.m_registers[3] = {3, 2, 3, 23};
    program.m_registers[4] = {4, 4, 5, 5};
    program.m_registers[5] = {5, 3, 6, 11};
    program.m_registers[6] = {6, 6, 8, 8};
    program.m_registers[7] = {7, 4, 9, 12};
    program.m_registers[8] = {8, 5, 10, 31};
    program.m_registers[9] = {9, 4, 13, 21};
    program.m_registers[10] = {10, 10, 16, 16};
    program.m_registers[11] = {11, 11, 17, 17};
    program.m_registers[12] = {12, 0, 18, 29};
    program.m_registers[13] = {13, 13, 19, 19};
    program.m_registers[14] = {14, 14, 20, 20};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 24, 24};
    program.m_registers[17] = {17, 17, 26, 26};
    program.m_registers[18] = {18, 18, 28, 28};
    program.m_registers[19] = {19, 19, 30, 30};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 0, 12);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 1, 12);
    instructions->SetOperation(30, 0, 19);
    instructions->SetOperation(31, 1, 8);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141593f;
    data->d[1] = 0.940564f;
    data->d[2] = -0.921715f;
    data->d[3] = 0.100449f;
    data->d[4] = 1.096324f;
    data->d[5] = 0.817083f;
    data->d[6] = 0.274323f;
    data->d[7] = 1.096729f;
    data->d[8] = 0.929336f;
    data->d[9] = 0.924666f;
    data->d[10] = 0.964110f;
    data->d[11] = 0.294818f;
    data->d[12] = 0.934034f;
    data->d[13] = -0.096276f;
    data->d[14] = 0.096646f;
    data->d[15] = -0.001632f;
    data->d[16] = -1.235898f;
    data->d[17] = 0.666183f;
    data->d[18] = -0.000001f;
    data->d[19] = 0.096870f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090659f;
    data->d[1] = -0.448769f;
    data->d[2] = -0.601127f;
    data->d[3] = 0.284494f;
    data->d[4] = -0.020247f;
    data->d[5] = 0.447068f;
    data->d[6] = 5.047451f;
    data->d[7] = -0.219899f;
    data->d[8] = 0.010597f;
    data->d[9] = 1.082898f;
    data->d[10] = -0.753305f;
    data->d[11] = 1.234032f;
    data->d[12] = -1.078776f;
    data->d[13] = -0.438546f;
    data->d[14] = 0.438548f;
    data->d[15] = -0.473743f;
    data->d[16] = 0.719383f;
    data->d[17] = 0.562927f;
    data->d[18] = 0.120034f;
    data->d[19] = -0.984158f;
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
    *result->MinResult(1) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617995f;
    data->d[1] = -0.811203f;
    data->d[2] = -0.229540f;
    data->d[3] = -0.710367f;
    data->d[4] = 0.199340f;
    data->d[5] = -0.948820f;
    data->d[6] = 0.512613f;
    data->d[7] = 0.307072f;
    data->d[8] = 1.631610f;
    data->d[9] = 0.338210f;
    data->d[10] = 0.604705f;
    data->d[11] = 1.349952f;
    data->d[12] = -0.599197f;
    data->d[13] = -0.081304f;
    data->d[14] = 0.082909f;
    data->d[15] = 0.099336f;
    data->d[16] = 2.122959f;
    data->d[17] = -1.498426f;
    data->d[18] = -0.397104f;
    data->d[19] = -1.318535f;
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
    *result->MinResult(2) = 0.000014f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000014f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 6300;
    state.m_seed = 3232326250;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
