#pragma once
#include "FireStarterState.h"

// Run date: 05/05/24 20:53:42 Pacific Daylight Time
// Run duration = 17084.284695 seconds
// Run generation = 708
// Run evolution = 13
// Run max result = 0.00000031
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.990128f;
    data->d[1] = 0.360064f;
    data->d[2] = 0.488471f;
    data->d[3] = -0.947937f;
    data->d[4] = -2.270846f;
    data->d[5] = -1.056004f;
    data->d[6] = -0.157233f;
    data->d[7] = 1.494422f;
    data->d[8] = -0.022072f;
    data->d[9] = 1.559636f;
    data->d[10] = -0.234568f;
    data->d[11] = -0.653759f;
    data->d[12] = 1.210624f;
    data->d[13] = -1.749158f;
    data->d[14] = 0.158511f;
    data->d[15] = 0.870211f;
    data->d[16] = -8.556007f;
    data->d[17] = -0.001049f;
    data->d[18] = 0.925177f;
    data->d[19] = 1.393963f;
    data->d[20] = -0.046533f;
    data->d[21] = -0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000031
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.052832f;
    data->d[1] = -0.808214f;
    data->d[2] = -0.229612f;
    data->d[3] = 1.433408f;
    data->d[4] = -2.407298f;
    data->d[5] = -0.139113f;
    data->d[6] = -2.318033f;
    data->d[7] = -3.448627f;
    data->d[8] = -0.001173f;
    data->d[9] = -1.349164f;
    data->d[10] = -0.282323f;
    data->d[11] = 0.800168f;
    data->d[12] = 0.419357f;
    data->d[13] = 0.345490f;
    data->d[14] = -0.993221f;
    data->d[15] = 0.814274f;
    data->d[16] = 1.176514f;
    data->d[17] = -1.677993f;
    data->d[18] = 12.259068f;
    data->d[19] = 1.126894f;
    data->d[20] = 1.819631f;
    data->d[21] = -0.118132f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000021
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.868890f;
    data->d[1] = 0.968448f;
    data->d[2] = -2.717552f;
    data->d[3] = 0.788684f;
    data->d[4] = -0.883154f;
    data->d[5] = -0.631789f;
    data->d[6] = -0.266659f;
    data->d[7] = -1.789261f;
    data->d[8] = 0.042136f;
    data->d[9] = -0.092536f;
    data->d[10] = 4.402225f;
    data->d[11] = 1.419519f;
    data->d[12] = 1.270745f;
    data->d[13] = -0.677922f;
    data->d[14] = -0.951307f;
    data->d[15] = 0.321592f;
    data->d[16] = 2.516395f;
    data->d[17] = 0.330919f;
    data->d[18] = 2.591719f;
    data->d[19] = 1.999046f;
    data->d[20] = 0.019113f;
    data->d[21] = 0.523599f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 27);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 1, 22);
    instructions->SetOperation(3, 0, 4);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 1, 14);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 0, 16);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 0, 24);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 1, 12);
    instructions->SetOperation(26, 0, 22);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 708;
    state.m_evolution = 13;
    state.m_index = 6;
    state.m_copy_index = 99;
    state.m_id = 99;
    state.m_test = 15;
    state.m_seed = 15150954548291713955;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000686f;
    state.m_optimizeValid = true;
} // LoadState
