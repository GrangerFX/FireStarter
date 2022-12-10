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
    settings.m_seed = 5;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 0, 11);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 1, 24);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 16);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 1, 27);
    instructions->SetOperation(16, 0, 31);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 29);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 0, 31);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.073635f;
    data->d[1] = -0.699412f;
    data->d[2] = 3.326745f;
    data->d[3] = 0.647184f;
    data->d[4] = -0.055402f;
    data->d[5] = -1.314683f;
    data->d[6] = -1.278877f;
    data->d[7] = -0.598750f;
    data->d[8] = 2.458565f;
    data->d[9] = -0.077589f;
    data->d[10] = -0.003726f;
    data->d[11] = 2.881015f;
    data->d[12] = -0.571770f;
    data->d[13] = 1.121298f;
    data->d[14] = 1.402376f;
    data->d[15] = 0.088529f;
    data->d[16] = -0.694012f;
    data->d[17] = 0.765955f;
    data->d[18] = 0.176044f;
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
    *result->MinResult(0) = 0.000126f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.811241f;
    data->d[1] = 0.750242f;
    data->d[2] = -0.792099f;
    data->d[3] = 0.527834f;
    data->d[4] = 2.262259f;
    data->d[5] = -2.699719f;
    data->d[6] = 1.036907f;
    data->d[7] = -0.231914f;
    data->d[8] = -0.005416f;
    data->d[9] = -0.134069f;
    data->d[10] = 0.158558f;
    data->d[11] = 0.350901f;
    data->d[12] = -0.250341f;
    data->d[13] = 0.916852f;
    data->d[14] = -0.613426f;
    data->d[15] = -0.172489f;
    data->d[16] = -2.872541f;
    data->d[17] = 0.543197f;
    data->d[18] = 0.727558f;
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
    *result->MinResult(1) = 0.000198f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 1.913251f;
    data->d[1] = 0.551832f;
    data->d[2] = -2.080921f;
    data->d[3] = 0.748811f;
    data->d[4] = 0.244690f;
    data->d[5] = -1.305156f;
    data->d[6] = 1.456289f;
    data->d[7] = -0.302070f;
    data->d[8] = 0.195401f;
    data->d[9] = 0.086885f;
    data->d[10] = -0.190979f;
    data->d[11] = -2.382112f;
    data->d[12] = -0.869801f;
    data->d[13] = -0.834094f;
    data->d[14] = 1.605085f;
    data->d[15] = 1.008736f;
    data->d[16] = -1.355067f;
    data->d[17] = -0.260084f;
    data->d[18] = 0.304985f;
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
    *result->MinResult(2) = 0.000059f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000198f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 2;
    state.m_index = 5;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
