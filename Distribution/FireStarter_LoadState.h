#pragma once
#include "FireStarterState.h"

// Run date: 12/30/23 11:14:49 Pacific Standard Time
// Run duration = 875.596068 seconds
// Run generation = 16
// Run evolution = 10
// Run max result = 0.00000060
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
// Run tests = 0
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
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.454733f;
    data->d[1] = 1.428585f;
    data->d[2] = 2.077460f;
    data->d[3] = -0.300215f;
    data->d[4] = 1.919028f;
    data->d[5] = -2.280842f;
    data->d[6] = -1.832761f;
    data->d[7] = 6.003745f;
    data->d[8] = -0.316924f;
    data->d[9] = 0.894086f;
    data->d[10] = -4.758564f;
    data->d[11] = 0.002719f;
    data->d[12] = -1.184952f;
    data->d[13] = -0.692568f;
    data->d[14] = 0.704834f;
    data->d[15] = 1.230134f;
    data->d[16] = -2.632452f;
    data->d[17] = -1.778247f;
    data->d[18] = -0.000001f;
    data->d[19] = 0.122300f;
    data->d[20] = 0.273536f;
    data->d[21] = -0.726824f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.593251f;
    data->d[1] = 1.833536f;
    data->d[2] = -0.034136f;
    data->d[3] = -2.012780f;
    data->d[4] = -0.718122f;
    data->d[5] = -0.741880f;
    data->d[6] = 2.433316f;
    data->d[7] = -0.510521f;
    data->d[8] = -0.749998f;
    data->d[9] = 0.185072f;
    data->d[10] = 0.673279f;
    data->d[11] = 1.848684f;
    data->d[12] = 0.560761f;
    data->d[13] = -1.192878f;
    data->d[14] = -0.752520f;
    data->d[15] = 62.738712f;
    data->d[16] = 0.094685f;
    data->d[17] = 0.906515f;
    data->d[18] = -50.688107f;
    data->d[19] = 0.003980f;
    data->d[20] = 0.433125f;
    data->d[21] = 1.352097f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.720232f;
    data->d[1] = -1.885563f;
    data->d[2] = 0.886784f;
    data->d[3] = -1.688773f;
    data->d[4] = -1.222071f;
    data->d[5] = -0.081613f;
    data->d[6] = -1.519804f;
    data->d[7] = -0.159383f;
    data->d[8] = -1.693113f;
    data->d[9] = 0.893237f;
    data->d[10] = -0.666602f;
    data->d[11] = 0.007677f;
    data->d[12] = 0.225106f;
    data->d[13] = -0.569232f;
    data->d[14] = 0.254889f;
    data->d[15] = -0.895460f;
    data->d[16] = -0.510853f;
    data->d[17] = 0.699086f;
    data->d[18] = -0.095028f;
    data->d[19] = -0.942151f;
    data->d[20] = 1.410811f;
    data->d[21] = 4.145313f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
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
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 1, 11);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 16);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 1, 19);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 22);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 0, 21);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 12);
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
    state.m_generation = 16;
    state.m_evolution = 10;
    state.m_children = 0;
    state.m_index = 17;
    state.m_copy_index = 0;
    state.m_id = 148;
    state.m_test = 0;
    state.m_seed = 5428593580264255846;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000001f;
    state.m_optimize_pass = 0;
    state.m_optimizeValid = true;
} // LoadState
