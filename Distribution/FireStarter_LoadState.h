#pragma once
#include "FireStarterState.h"

// Run date: 04/01/23 18:13:26 Pacific Daylight Time
// Run duration = 2891.791536 seconds
// Run generation = 78
// Run result = 0.00030112
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 2
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 2;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00013581
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.270386f;
    data->d[1] = 0.849419f;
    data->d[2] = -0.067447f;
    data->d[3] = -0.241018f;
    data->d[4] = 1.674216f;
    data->d[5] = 95.258286f;
    data->d[6] = 0.729570f;
    data->d[7] = 0.256940f;
    data->d[8] = 1.211130f;
    data->d[9] = -0.283111f;
    data->d[10] = -0.716778f;
    data->d[11] = -3.499557f;
    data->d[12] = -0.910368f;
    data->d[13] = 1.360168f;
    data->d[14] = -0.044972f;
    data->d[15] = 1.403372f;
    data->d[16] = 0.811057f;
    data->d[17] = -0.165129f;
    data->d[18] = 0.039690f;
    data->d[19] = 27.862394f;
    data->d[20] = 11.554958f;
    data->d[21] = -4.709227f;
    data->d[22] = -0.070196f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000136f;
} // LoadVariation0

// Variation: 1  result = 0.00023389
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.373041f;
    data->d[1] = 1.112759f;
    data->d[2] = 0.474484f;
    data->d[3] = -1.444876f;
    data->d[4] = -2.462735f;
    data->d[5] = 0.064386f;
    data->d[6] = -0.672717f;
    data->d[7] = -0.585667f;
    data->d[8] = 2.657220f;
    data->d[9] = -1.671683f;
    data->d[10] = 0.690573f;
    data->d[11] = -0.842740f;
    data->d[12] = -1.835009f;
    data->d[13] = -0.455479f;
    data->d[14] = -0.041563f;
    data->d[15] = -0.991844f;
    data->d[16] = 2.154068f;
    data->d[17] = 1.893099f;
    data->d[18] = -1.029714f;
    data->d[19] = -0.595701f;
    data->d[20] = -1.279995f;
    data->d[21] = 2.930161f;
    data->d[22] = 0.075350f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000234f;
} // LoadVariation1

// Variation: 2  result = 0.00030112
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.596762f;
    data->d[1] = -1.906937f;
    data->d[2] = 1.016064f;
    data->d[3] = -0.017515f;
    data->d[4] = 1.743488f;
    data->d[5] = -0.485951f;
    data->d[6] = -1.716993f;
    data->d[7] = 0.984898f;
    data->d[8] = 2.431454f;
    data->d[9] = 0.446353f;
    data->d[10] = -1.543027f;
    data->d[11] = 1.401313f;
    data->d[12] = 0.597503f;
    data->d[13] = -1.250552f;
    data->d[14] = -1.650035f;
    data->d[15] = -0.537073f;
    data->d[16] = -0.909807f;
    data->d[17] = -1.499975f;
    data->d[18] = -0.073498f;
    data->d[19] = 1.334958f;
    data->d[20] = 0.090311f;
    data->d[21] = -1.160663f;
    data->d[22] = -1.549283f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000301f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000301f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 29);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 0, 8);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 30);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 0, 31);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 1, 5);
    instructions->SetOperation(11, 1, 19);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 1, 29);
    instructions->SetOperation(14, 1, 26);
    instructions->SetOperation(15, 0, 26);
    instructions->SetOperation(16, 0, 24);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 1, 18);
    instructions->SetOperation(21, 0, 29);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 1, 4);
    instructions->SetOperation(25, 1, 22);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 0, 26);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 0, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 78;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 1672356057917341295;
} // LoadState
