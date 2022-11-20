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
    settings.m_processes = 0;
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
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 31);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 31);
    instructions->SetOperation(24, 1, 31);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 0, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.744616f;
    data->d[1] = -1.267243f;
    data->d[2] = -2.641769f;
    data->d[3] = 0.582015f;
    data->d[4] = 0.872304f;
    data->d[5] = 0.157282f;
    data->d[6] = 5.611816f;
    data->d[7] = 0.526478f;
    data->d[8] = -0.376600f;
    data->d[9] = 0.079951f;
    data->d[10] = -2.587168f;
    data->d[11] = 0.350301f;
    data->d[12] = 0.837088f;
    data->d[13] = 2.897529f;
    data->d[14] = 0.766436f;
    data->d[15] = 0.776364f;
    data->d[16] = -0.588559f;
    data->d[17] = -8.992711f;
    data->d[18] = -0.781203f;
    data->d[19] = 3.222342f;
    data->d[20] = -5.114391f;
    data->d[21] = -3.446591f;
    data->d[22] = -0.466522f;
    data->d[23] = -2.084538f;
    data->d[24] = 0.125174f;
    data->d[25] = -0.392607f;
    data->d[26] = 0.649557f;
    data->d[27] = -0.551466f;
    data->d[28] = 0.527214f;
    data->d[29] = -0.131014f;
    data->d[30] = 7.268986f;
    data->d[31] = -0.021930f;
    *result->MinResult(0) = 0.008534f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.112478f;
    data->d[1] = 0.033431f;
    data->d[2] = -0.138212f;
    data->d[3] = 1.243425f;
    data->d[4] = 0.327088f;
    data->d[5] = -1.125925f;
    data->d[6] = 0.122266f;
    data->d[7] = 0.302552f;
    data->d[8] = 0.835799f;
    data->d[9] = 0.863910f;
    data->d[10] = 0.390765f;
    data->d[11] = -0.590927f;
    data->d[12] = -1.624390f;
    data->d[13] = -2.786581f;
    data->d[14] = 0.259403f;
    data->d[15] = 1.637733f;
    data->d[16] = 1.656624f;
    data->d[17] = 0.477962f;
    data->d[18] = 0.893927f;
    data->d[19] = 0.753706f;
    data->d[20] = -0.932517f;
    data->d[21] = 0.116406f;
    data->d[22] = 1.075473f;
    data->d[23] = 0.082744f;
    data->d[24] = -0.256644f;
    data->d[25] = -0.242356f;
    data->d[26] = -0.132891f;
    data->d[27] = 0.910131f;
    data->d[28] = -0.622115f;
    data->d[29] = -0.365442f;
    data->d[30] = -1.416350f;
    data->d[31] = -0.698074f;
    *result->MinResult(1) = 0.014455f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.463823f;
    data->d[1] = 1.091095f;
    data->d[2] = 0.652324f;
    data->d[3] = 0.489841f;
    data->d[4] = -1.382206f;
    data->d[5] = -2.556633f;
    data->d[6] = 1.454499f;
    data->d[7] = -0.133157f;
    data->d[8] = 0.136714f;
    data->d[9] = 0.590115f;
    data->d[10] = -2.625927f;
    data->d[11] = -0.355008f;
    data->d[12] = -2.423398f;
    data->d[13] = 0.535522f;
    data->d[14] = -0.257247f;
    data->d[15] = -0.534339f;
    data->d[16] = -0.579588f;
    data->d[17] = 0.763576f;
    data->d[18] = 0.321458f;
    data->d[19] = 0.091637f;
    data->d[20] = -1.282117f;
    data->d[21] = -0.204502f;
    data->d[22] = 7.784713f;
    data->d[23] = 0.442259f;
    data->d[24] = 0.302965f;
    data->d[25] = -0.000264f;
    data->d[26] = -0.800576f;
    data->d[27] = -0.481574f;
    data->d[28] = 0.112610f;
    data->d[29] = 1.189342f;
    data->d[30] = 2.278059f;
    data->d[31] = 0.876274f;
    *result->MinResult(2) = 0.008867f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.014455f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 38;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
