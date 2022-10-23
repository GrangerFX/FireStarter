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
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_uniqueRegisters = 0;

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 31);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 31);
    instructions->SetOperation(24, 1, 31);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 0, 25);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.503216f;
    data->d[1] = -1.240953f;
    data->d[2] = -2.334566f;
    data->d[3] = 0.544985f;
    data->d[4] = 0.774012f;
    data->d[5] = 0.114093f;
    data->d[6] = 5.325245f;
    data->d[7] = 0.786438f;
    data->d[8] = 2.040682f;
    data->d[9] = 0.430259f;
    data->d[10] = -1.746627f;
    data->d[11] = -0.191892f;
    data->d[12] = 0.867733f;
    data->d[13] = -1.526577f;
    data->d[14] = 0.666340f;
    data->d[15] = 3.462732f;
    data->d[16] = -0.453987f;
    data->d[17] = -8.611721f;
    data->d[18] = -0.906269f;
    data->d[19] = 3.536900f;
    data->d[20] = -2.403255f;
    data->d[21] = -2.692716f;
    data->d[22] = -0.496793f;
    data->d[23] = -0.772800f;
    data->d[24] = 0.121509f;
    data->d[25] = -0.380154f;
    data->d[26] = 0.747267f;
    data->d[27] = -0.669098f;
    data->d[28] = 0.393627f;
    data->d[29] = 0.792895f;
    data->d[30] = 7.513114f;
    data->d[31] = -0.018573f;
    *result->MinResult(0) = 0.034563f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.254921f;
    data->d[1] = -0.518362f;
    data->d[2] = 0.224793f;
    data->d[3] = 1.121966f;
    data->d[4] = 0.218065f;
    data->d[5] = -0.742732f;
    data->d[6] = 0.496381f;
    data->d[7] = -0.608454f;
    data->d[8] = -122.108955f;
    data->d[9] = 0.838851f;
    data->d[10] = 0.571224f;
    data->d[11] = -0.430129f;
    data->d[12] = 0.520137f;
    data->d[13] = 7.418374f;
    data->d[14] = 0.294243f;
    data->d[15] = -76.788322f;
    data->d[16] = 2.014463f;
    data->d[17] = 0.510239f;
    data->d[18] = 0.961174f;
    data->d[19] = 0.951239f;
    data->d[20] = -4.910347f;
    data->d[21] = 0.329260f;
    data->d[22] = 122.667236f;
    data->d[23] = -50.398331f;
    data->d[24] = -0.248654f;
    data->d[25] = -0.247817f;
    data->d[26] = -0.373046f;
    data->d[27] = 0.629969f;
    data->d[28] = -0.497295f;
    data->d[29] = 128.065079f;
    data->d[30] = -0.763858f;
    data->d[31] = -0.818364f;
    *result->MinResult(1) = 0.027668f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.390004f;
    data->d[1] = 0.118805f;
    data->d[2] = 0.451245f;
    data->d[3] = 0.759506f;
    data->d[4] = -2.379844f;
    data->d[5] = -0.709070f;
    data->d[6] = 0.896569f;
    data->d[7] = 1.534560f;
    data->d[8] = 0.251066f;
    data->d[9] = 0.654574f;
    data->d[10] = 0.342519f;
    data->d[11] = -0.351282f;
    data->d[12] = -1.471082f;
    data->d[13] = 0.061228f;
    data->d[14] = -0.230559f;
    data->d[15] = -0.151996f;
    data->d[16] = 2.954738f;
    data->d[17] = 0.838491f;
    data->d[18] = 0.619818f;
    data->d[19] = -0.401267f;
    data->d[20] = -0.516584f;
    data->d[21] = 0.100589f;
    data->d[22] = 0.769831f;
    data->d[23] = 0.590783f;
    data->d[24] = 0.317133f;
    data->d[25] = 0.003592f;
    data->d[26] = -0.887848f;
    data->d[27] = -1.121655f;
    data->d[28] = -0.887172f;
    data->d[29] = -0.127852f;
    data->d[30] = 0.050268f;
    data->d[31] = 0.539699f;
    *result->MinResult(2) = 0.040962f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.040962f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 10;
    state.m_bestIndex = 7076;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
