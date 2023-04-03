#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 16:38:10 Pacific Daylight Time
// Run duration = 2645.095744 seconds
// Run generation = 177
// Run result = 0.00001001
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
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
    settings.m_registers = 29;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
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

// Variation: 0  result = 0.00001001
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141588f;
    data->d[1] = -1.022218f;
    data->d[2] = -0.344547f;
    data->d[3] = -0.611265f;
    data->d[4] = 0.909069f;
    data->d[5] = -1.325734f;
    data->d[6] = 1.150222f;
    data->d[7] = 1.057580f;
    data->d[8] = -0.091808f;
    data->d[9] = 0.807665f;
    data->d[10] = -0.040771f;
    data->d[11] = -1.723146f;
    data->d[12] = 1.342831f;
    data->d[13] = -0.103881f;
    data->d[14] = -0.613823f;
    data->d[15] = 1.404576f;
    data->d[16] = -0.085968f;
    data->d[17] = 1.649338f;
    data->d[18] = 1.758443f;
    data->d[19] = -1.695046f;
    data->d[20] = 2.980636f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000005f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000010f;
} // LoadVariation0

// Variation: 1  result = 0.00000525
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090657f;
    data->d[1] = -0.513214f;
    data->d[2] = -0.545046f;
    data->d[3] = 1.604926f;
    data->d[4] = -0.927421f;
    data->d[5] = -1.809518f;
    data->d[6] = -1.202088f;
    data->d[7] = -0.075355f;
    data->d[8] = -0.013460f;
    data->d[9] = 0.031130f;
    data->d[10] = 1.217558f;
    data->d[11] = -0.622648f;
    data->d[12] = -1.225614f;
    data->d[13] = 1.426810f;
    data->d[14] = -1.256690f;
    data->d[15] = -0.255043f;
    data->d[16] = -1.013996f;
    data->d[17] = 1.919510f;
    data->d[18] = 1.260067f;
    data->d[19] = -2.343233f;
    data->d[20] = 2.834502f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000009f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000882
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617988f;
    data->d[1] = 0.634242f;
    data->d[2] = 0.368995f;
    data->d[3] = 0.917736f;
    data->d[4] = 1.745316f;
    data->d[5] = -1.441720f;
    data->d[6] = 0.205648f;
    data->d[7] = 1.634778f;
    data->d[8] = -0.075262f;
    data->d[9] = 0.370624f;
    data->d[10] = 1.887097f;
    data->d[11] = -0.492338f;
    data->d[12] = 0.372867f;
    data->d[13] = -1.273566f;
    data->d[14] = -1.315233f;
    data->d[15] = -1.003129f;
    data->d[16] = 0.459693f;
    data->d[17] = -0.800458f;
    data->d[18] = -20.406191f;
    data->d[19] = -3.219845f;
    data->d[20] = -65.181175f;
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
    *(result->MinResult()) = 0.000009f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000010f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 9);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 15);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 24);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 0, 28);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 0, 29);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 3);
    instructions->SetOperation(15, 0, 4);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 1, 20);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 5);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 1, 1);
    instructions->SetOperation(23, 1, 5);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 6);
    instructions->SetOperation(29, 1, 13);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 177;
    state.m_index = 0;
    state.m_test = 97;
    state.m_seed = 5257008008030859375;
} // LoadState
