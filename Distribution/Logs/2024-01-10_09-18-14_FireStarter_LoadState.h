#pragma once
#include "FireStarterState.h"

// Run date: 01/10/24 09:18:14 Pacific Standard Time
// Run duration = 10902.622779 seconds
// Run generation = 30
// Run evolution = 12
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_states = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.892478f;
    data->d[1] = -1.658403f;
    data->d[2] = -1.145400f;
    data->d[3] = 0.123226f;
    data->d[4] = -0.205136f;
    data->d[5] = -0.272537f;
    data->d[6] = 0.968605f;
    data->d[7] = 0.267378f;
    data->d[8] = 1.104356f;
    data->d[9] = 2.348076f;
    data->d[10] = -0.475617f;
    data->d[11] = -0.966099f;
    data->d[12] = -0.069123f;
    data->d[13] = 0.685861f;
    data->d[14] = -1.074500f;
    data->d[15] = 0.270138f;
    data->d[16] = 3.597374f;
    data->d[17] = -0.116567f;
    data->d[18] = 0.233134f;
    data->d[19] = 1.242742f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.527493f;
    data->d[1] = -1.601746f;
    data->d[2] = -0.028554f;
    data->d[3] = 0.013671f;
    data->d[4] = -1.238150f;
    data->d[5] = 0.652815f;
    data->d[6] = 361.168823f;
    data->d[7] = 0.074928f;
    data->d[8] = 3.855147f;
    data->d[9] = -1.927599f;
    data->d[10] = -1.960802f;
    data->d[11] = -0.189480f;
    data->d[12] = 0.078507f;
    data->d[13] = -0.599383f;
    data->d[14] = -0.278709f;
    data->d[15] = -0.462304f;
    data->d[16] = -0.182459f;
    data->d[17] = 0.204197f;
    data->d[18] = -0.494620f;
    data->d[19] = 1.370017f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.148853f;
    data->d[1] = 0.544651f;
    data->d[2] = -0.934348f;
    data->d[3] = 0.843333f;
    data->d[4] = 0.190678f;
    data->d[5] = -0.098454f;
    data->d[6] = -2.612861f;
    data->d[7] = -1.558924f;
    data->d[8] = 1.258101f;
    data->d[9] = 1.697062f;
    data->d[10] = -0.410243f;
    data->d[11] = -0.571175f;
    data->d[12] = -0.189015f;
    data->d[13] = 3.653358f;
    data->d[14] = 3.386961f;
    data->d[15] = 0.454980f;
    data->d[16] = -1.449880f;
    data->d[17] = 0.192671f;
    data->d[18] = -0.045568f;
    data->d[19] = 1.541017f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
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
    instructions->SetOperation(0, 0, 2);
    instructions->SetOperation(1, 1, 3);
    instructions->SetOperation(2, 1, 16);
    instructions->SetOperation(3, 0, 15);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 0, 20);
    instructions->SetOperation(10, 1, 17);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 18);
    instructions->SetOperation(13, 1, 23);
    instructions->SetOperation(14, 0, 5);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 1, 20);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 22);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 0, 6);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 30;
    state.m_evolution = 12;
    state.m_children = 267;
    state.m_index = 52;
    state.m_copy_index = 264;
    state.m_id = 125;
    state.m_test = 6;
    state.m_seed = 3382479706686172915;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveResult = 0.000064f;
    state.m_optimizeValid = true;
} // LoadState
