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
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 1, 21);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 10);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.341118f;
    data->d[1] = 0.738618f;
    data->d[2] = 0.128113f;
    data->d[3] = 0.019268f;
    data->d[4] = -0.000017f;
    data->d[5] = -0.272207f;
    data->d[6] = -0.481858f;
    data->d[7] = 0.309332f;
    data->d[8] = -0.968468f;
    data->d[9] = -0.692744f;
    data->d[10] = 0.635031f;
    data->d[11] = 0.320799f;
    data->d[12] = -0.184125f;
    data->d[13] = -0.891854f;
    data->d[14] = -2.385419f;
    data->d[15] = -0.224021f;
    data->d[16] = -0.002897f;
    data->d[17] = -1.816211f;
    data->d[18] = 1.045284f;
    data->d[19] = 0.788204f;
    data->d[20] = -1.134611f;
    data->d[21] = -0.884055f;
    data->d[22] = 0.884068f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000002f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.098630f;
    data->d[1] = -0.578300f;
    data->d[2] = 1.053207f;
    data->d[3] = 0.098790f;
    data->d[4] = -0.000008f;
    data->d[5] = -0.602776f;
    data->d[6] = -0.931710f;
    data->d[7] = 0.244102f;
    data->d[8] = 4.156508f;
    data->d[9] = 0.679173f;
    data->d[10] = -0.003049f;
    data->d[11] = 0.148023f;
    data->d[12] = -2.641008f;
    data->d[13] = -0.856437f;
    data->d[14] = 0.353929f;
    data->d[15] = 0.600081f;
    data->d[16] = -0.803388f;
    data->d[17] = 1.518106f;
    data->d[18] = -0.961394f;
    data->d[19] = 0.191141f;
    data->d[20] = 3.301705f;
    data->d[21] = 0.355100f;
    data->d[22] = -0.473242f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000004f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.907820f;
    data->d[1] = -0.496389f;
    data->d[2] = 0.177755f;
    data->d[3] = 0.174765f;
    data->d[4] = 0.000006f;
    data->d[5] = 0.924242f;
    data->d[6] = -3.466517f;
    data->d[7] = 0.286066f;
    data->d[8] = -5.838177f;
    data->d[9] = -3.470743f;
    data->d[10] = -0.501342f;
    data->d[11] = -1.639498f;
    data->d[12] = -0.070888f;
    data->d[13] = 0.556452f;
    data->d[14] = -5.283404f;
    data->d[15] = 9.069757f;
    data->d[16] = -0.023850f;
    data->d[17] = -1.436607f;
    data->d[18] = -0.984101f;
    data->d[19] = 0.833342f;
    data->d[20] = -2.583315f;
    data->d[21] = 0.793625f;
    data->d[22] = -0.270019f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.000004f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000004f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 80;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
