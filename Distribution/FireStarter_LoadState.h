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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_units = 10;
    settings.m_processes = 16;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
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
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 0, 20);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.190090f;
    data->d[1] = -0.448519f;
    data->d[2] = -1.000051f;
    data->d[3] = 0.626358f;
    data->d[4] = -2.206268f;
    data->d[5] = -8.176058f;
    data->d[6] = -2.483496f;
    data->d[7] = -0.274219f;
    data->d[8] = -1.064096f;
    data->d[9] = 0.944478f;
    data->d[10] = -0.709294f;
    data->d[11] = -0.679815f;
    data->d[12] = 2.512088f;
    data->d[13] = 4.698642f;
    data->d[14] = -6.041179f;
    data->d[15] = -0.003972f;
    data->d[16] = -0.492971f;
    data->d[17] = -0.072482f;
    data->d[18] = 1.230136f;
    data->d[19] = -0.656603f;
    data->d[20] = 3.025991f;
    data->d[21] = -3.057793f;
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
    *result->MinResult(0) = 0.000042f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.501177f;
    data->d[1] = -0.339648f;
    data->d[2] = -0.411247f;
    data->d[3] = 0.219022f;
    data->d[4] = -0.405477f;
    data->d[5] = 0.580388f;
    data->d[6] = -1.123768f;
    data->d[7] = 0.551701f;
    data->d[8] = -3.710200f;
    data->d[9] = 0.692908f;
    data->d[10] = -0.872756f;
    data->d[11] = 0.779654f;
    data->d[12] = -1.580274f;
    data->d[13] = 4.680727f;
    data->d[14] = 1.316988f;
    data->d[15] = 0.156917f;
    data->d[16] = 4.928107f;
    data->d[17] = 0.002290f;
    data->d[18] = 5.334926f;
    data->d[19] = -1.061827f;
    data->d[20] = 0.558473f;
    data->d[21] = -0.263745f;
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
    *result->MinResult(1) = 0.000026f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.780848f;
    data->d[1] = 0.577974f;
    data->d[2] = -0.653968f;
    data->d[3] = 0.309386f;
    data->d[4] = 0.501804f;
    data->d[5] = -0.205123f;
    data->d[6] = -0.477779f;
    data->d[7] = -0.653441f;
    data->d[8] = 0.130990f;
    data->d[9] = 0.828426f;
    data->d[10] = 0.708964f;
    data->d[11] = 0.582255f;
    data->d[12] = 1.893719f;
    data->d[13] = 3.664757f;
    data->d[14] = 1.290399f;
    data->d[15] = 3.273673f;
    data->d[16] = -0.602398f;
    data->d[17] = 0.069905f;
    data->d[18] = 1.035729f;
    data->d[19] = -0.329587f;
    data->d[20] = 4.132623f;
    data->d[21] = -4.126567f;
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
    *result->MinResult(2) = 0.000020f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000042f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 12;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
