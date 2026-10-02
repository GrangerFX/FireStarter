#pragma once
#include "FireStarterState.h"

// Run date: 01/09/24 14:06:11 Pacific Standard Time
// Run duration = 9619.766243 seconds
// Run generation = 118
// Run evolution = 15
// Run max result = 0.00000012
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
// Run tests = 4
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
    settings.m_tests = 4;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.199773f;
    data->d[1] = -0.941407f;
    data->d[2] = 1.241455f;
    data->d[3] = 0.411142f;
    data->d[4] = -0.469099f;
    data->d[5] = -1.002702f;
    data->d[6] = 0.915568f;
    data->d[7] = 0.001832f;
    data->d[8] = -1.281376f;
    data->d[9] = -4.757870f;
    data->d[10] = -0.418770f;
    data->d[11] = 1.854209f;
    data->d[12] = 1.231544f;
    data->d[13] = 1.355621f;
    data->d[14] = 1.344793f;
    data->d[15] = -73200.382812f;
    data->d[16] = -0.000004f;
    data->d[17] = -0.440428f;
    data->d[18] = 0.042033f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.347322f;
    data->d[1] = 0.467263f;
    data->d[2] = -0.183661f;
    data->d[3] = 0.072718f;
    data->d[4] = -0.038249f;
    data->d[5] = 0.565506f;
    data->d[6] = -47.278996f;
    data->d[7] = 0.318322f;
    data->d[8] = 0.000315f;
    data->d[9] = 4.661358f;
    data->d[10] = -0.529186f;
    data->d[11] = -1.284094f;
    data->d[12] = -2.215894f;
    data->d[13] = -0.334754f;
    data->d[14] = 0.181183f;
    data->d[15] = 0.446553f;
    data->d[16] = 0.198300f;
    data->d[17] = 1.903860f;
    data->d[18] = -1.126407f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.435271f;
    data->d[1] = -1.709306f;
    data->d[2] = -0.510608f;
    data->d[3] = 1.446937f;
    data->d[4] = -1.407954f;
    data->d[5] = 1.382391f;
    data->d[6] = -0.064370f;
    data->d[7] = -103.943489f;
    data->d[8] = 0.000362f;
    data->d[9] = 1.218797f;
    data->d[10] = 0.159564f;
    data->d[11] = 0.966142f;
    data->d[12] = -1.983787f;
    data->d[13] = -1.108175f;
    data->d[14] = 0.909073f;
    data->d[15] = -0.813758f;
    data->d[16] = -1.549070f;
    data->d[17] = -1.296619f;
    data->d[18] = 1.127733f;
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
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 1);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 1, 19);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 27);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 18);
    instructions->SetOperation(11, 0, 28);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 23);
    instructions->SetOperation(15, 0, 7);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 1, 23);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 1, 25);
    instructions->SetOperation(30, 1, 26);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 118;
    state.m_evolution = 15;
    state.m_children = 335;
    state.m_index = 8;
    state.m_copy_index = 839;
    state.m_id = 117;
    state.m_test = 1;
    state.m_seed = 9916477269767079825;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveResult = 0.000439f;
    state.m_optimizeValid = true;
} // LoadState
