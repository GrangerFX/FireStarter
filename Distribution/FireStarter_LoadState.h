#pragma once
#include "FireStarterState.h"

// Run date: 06/23/24 15:42:39 Pacific Daylight Time
// Run duration = 495.425283 seconds
// Run generation = 426
// Run evolution = 11
// Run max result = 0.00000057
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
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.167443f;
    data->d[2] = -0.141532f;
    data->d[3] = -0.404479f;
    data->d[4] = -3.268936f;
    data->d[5] = -2.041325f;
    data->d[6] = -0.591569f;
    data->d[7] = -0.086808f;
    data->d[8] = -2.239614f;
    data->d[9] = 0.513071f;
    data->d[10] = -0.300193f;
    data->d[11] = -0.900405f;
    data->d[12] = -0.066242f;
    data->d[13] = 1.620804f;
    data->d[14] = 0.163120f;
    data->d[15] = -1.028849f;
    data->d[16] = 0.000698f;
    data->d[17] = -0.163003f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.445715f;
    data->d[2] = 0.168171f;
    data->d[3] = -1.593604f;
    data->d[4] = -0.599427f;
    data->d[5] = 0.594102f;
    data->d[6] = -0.884409f;
    data->d[7] = -0.411273f;
    data->d[8] = -5.234425f;
    data->d[9] = -0.008682f;
    data->d[10] = -1.697926f;
    data->d[11] = 2.039568f;
    data->d[12] = 0.540300f;
    data->d[13] = 0.086685f;
    data->d[14] = -0.322757f;
    data->d[15] = -1.681962f;
    data->d[16] = -0.786399f;
    data->d[17] = 0.631533f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000057
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.114205f;
    data->d[2] = 0.808003f;
    data->d[3] = 0.047044f;
    data->d[4] = -1.029237f;
    data->d[5] = -0.314361f;
    data->d[6] = 3.276380f;
    data->d[7] = 0.996818f;
    data->d[8] = 0.065247f;
    data->d[9] = 0.306446f;
    data->d[10] = -2.514789f;
    data->d[11] = -0.825180f;
    data->d[12] = 2.313199f;
    data->d[13] = -1.071987f;
    data->d[14] = 1.524688f;
    data->d[15] = -1.003407f;
    data->d[16] = 1.674506f;
    data->d[17] = 1.560708f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 1, 16);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 0, 20);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 1, 3);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 1, 26);
    instructions->SetOperation(17, 1, 22);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 1, 28);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 1, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 426;
    state.m_evolution = 11;
    state.m_index = 13;
    state.m_copy_index = 22;
    state.m_id = 22;
    state.m_test = 0;
    state.m_seed = 10371520904245602612;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000438f;
    state.m_optimizeValid = true;
} // LoadState
