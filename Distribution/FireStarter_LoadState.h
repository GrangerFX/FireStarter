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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 99;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 18);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 1, 29);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 22);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 27);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.618937f;
    data->d[1] = -1.410409f;
    data->d[2] = 0.274548f;
    data->d[3] = -2.035351f;
    data->d[4] = -1.248779f;
    data->d[5] = 2.181086f;
    data->d[6] = 1.338363f;
    data->d[7] = 0.500870f;
    data->d[8] = -0.295249f;
    data->d[9] = 0.056328f;
    data->d[10] = 1.796184f;
    data->d[11] = -1.940697f;
    data->d[12] = -0.115609f;
    data->d[13] = 0.540884f;
    data->d[14] = 0.252774f;
    data->d[15] = -0.963436f;
    data->d[16] = 1.502575f;
    data->d[17] = -1.315584f;
    data->d[18] = -0.840611f;
    data->d[19] = 1.727777f;
    data->d[20] = 1.057049f;
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
    *(result->MinResult()) = 0.000095f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.220297f;
    data->d[1] = 1.715609f;
    data->d[2] = -0.680874f;
    data->d[3] = 1.420699f;
    data->d[4] = -0.311155f;
    data->d[5] = 0.783216f;
    data->d[6] = -1.360761f;
    data->d[7] = 0.831678f;
    data->d[8] = 1.543169f;
    data->d[9] = -0.612394f;
    data->d[10] = 1.631292f;
    data->d[11] = -1.554442f;
    data->d[12] = -1.774301f;
    data->d[13] = 0.226192f;
    data->d[14] = -0.092333f;
    data->d[15] = -1.769038f;
    data->d[16] = -0.793308f;
    data->d[17] = 1.387322f;
    data->d[18] = 1.313205f;
    data->d[19] = 0.535160f;
    data->d[20] = -0.268102f;
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
    *(result->MinResult()) = 0.000209f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.410775f;
    data->d[1] = 1.194988f;
    data->d[2] = -0.288731f;
    data->d[3] = 2.449007f;
    data->d[4] = 0.141604f;
    data->d[5] = 0.684309f;
    data->d[6] = -0.952873f;
    data->d[7] = 2.441534f;
    data->d[8] = -0.150733f;
    data->d[9] = 0.069897f;
    data->d[10] = -1.469192f;
    data->d[11] = 0.185013f;
    data->d[12] = -1.497184f;
    data->d[13] = 1.354064f;
    data->d[14] = -0.261683f;
    data->d[15] = -1.800613f;
    data->d[16] = -0.623232f;
    data->d[17] = 0.252911f;
    data->d[18] = -0.284926f;
    data->d[19] = -0.016271f;
    data->d[20] = -0.803253f;
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
    *(result->MinResult()) = 0.000208f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000209f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 62;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 1730211484817483284;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
