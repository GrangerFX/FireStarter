#pragma once
#include "FireStarterState.h"

// Run date: 01/14/24 10:09:25 Pacific Standard Time
// Run duration = 716.530462 seconds
// Run generation = 15
// Run evolution = 7
// Run max result = 0.00000018
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
// Run tests = 1
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
    settings.m_tests = 1;
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
    data->d[0] = 0.253927f;
    data->d[1] = -0.797736f;
    data->d[2] = -10975.520508f;
    data->d[3] = -0.328493f;
    data->d[4] = 0.000204f;
    data->d[5] = -0.289318f;
    data->d[6] = 1.123188f;
    data->d[7] = -0.180360f;
    data->d[8] = 0.421262f;
    data->d[9] = -1.528173f;
    data->d[10] = 1.932484f;
    data->d[11] = -0.486430f;
    data->d[12] = -1.711872f;
    data->d[13] = -0.392322f;
    data->d[14] = -3.201750f;
    data->d[15] = -1.019203f;
    data->d[16] = 5.300844f;
    data->d[17] = 0.211725f;
    data->d[18] = -1.296882f;
    data->d[19] = 0.000001f;
    data->d[20] = -0.000000f;
    data->d[21] = 8.218441f;
    data->d[22] = 0.068687f;
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
    data->d[0] = -0.329282f;
    data->d[1] = 1.017698f;
    data->d[2] = 2.455103f;
    data->d[3] = 0.983258f;
    data->d[4] = 0.344384f;
    data->d[5] = 1.361550f;
    data->d[6] = -0.057174f;
    data->d[7] = 1.648968f;
    data->d[8] = 0.651475f;
    data->d[9] = -0.425447f;
    data->d[10] = 0.511562f;
    data->d[11] = 2.710176f;
    data->d[12] = 0.370522f;
    data->d[13] = -0.163931f;
    data->d[14] = 3.698693f;
    data->d[15] = -0.141080f;
    data->d[16] = -3.596215f;
    data->d[17] = 0.525272f;
    data->d[18] = 0.764303f;
    data->d[19] = -0.011530f;
    data->d[20] = -1399.794189f;
    data->d[21] = -0.023520f;
    data->d[22] = 0.302013f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.391055f;
    data->d[1] = 1.023780f;
    data->d[2] = 0.189859f;
    data->d[3] = 1.438170f;
    data->d[4] = 3.084537f;
    data->d[5] = 0.754437f;
    data->d[6] = 0.783690f;
    data->d[7] = -1.153631f;
    data->d[8] = 0.162254f;
    data->d[9] = -1.806867f;
    data->d[10] = -0.038603f;
    data->d[11] = -1.224918f;
    data->d[12] = -0.372526f;
    data->d[13] = 0.189138f;
    data->d[14] = 0.005651f;
    data->d[15] = 1.497445f;
    data->d[16] = -214.718887f;
    data->d[17] = 0.717691f;
    data->d[18] = 0.065538f;
    data->d[19] = 0.200549f;
    data->d[20] = -27.380787f;
    data->d[21] = 0.000014f;
    data->d[22] = 2.611803f;
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
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 17);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 0, 21);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 15;
    state.m_evolution = 7;
    state.m_children0 = 692;
    state.m_children1 = 1;
    state.m_index = 0;
    state.m_copy_index = 44;
    state.m_id = 44;
    state.m_test = 0;
    state.m_seed = 5711246295856650272;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000006f;
    state.m_optimizeValid = true;
} // LoadState
