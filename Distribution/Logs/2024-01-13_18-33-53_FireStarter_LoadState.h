#pragma once
#include "FireStarterState.h"

// Run date: 01/13/24 18:33:53 Pacific Standard Time
// Run duration = 10820.066893 seconds
// Run generation = 61
// Run evolution = 5
// Run max result = 0.00000048
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

// Variation: 0  result = 0.00000008
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.123903f;
    data->d[2] = -1.547127f;
    data->d[3] = 0.457085f;
    data->d[4] = 0.176318f;
    data->d[5] = -0.109761f;
    data->d[6] = 0.014427f;
    data->d[7] = 0.004820f;
    data->d[8] = -8.262179f;
    data->d[9] = -48.802658f;
    data->d[10] = -1.342389f;
    data->d[11] = -0.306188f;
    data->d[12] = -0.806439f;
    data->d[13] = 18.235146f;
    data->d[14] = -0.403147f;
    data->d[15] = -0.221673f;
    data->d[16] = -0.171042f;
    data->d[17] = -2.499769f;
    data->d[18] = -0.459351f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.075237f;
    data->d[2] = -2.512396f;
    data->d[3] = 1.307869f;
    data->d[4] = 0.341547f;
    data->d[5] = 1.979012f;
    data->d[6] = -2.403471f;
    data->d[7] = -0.767796f;
    data->d[8] = 24.163687f;
    data->d[9] = -0.001847f;
    data->d[10] = -1.158290f;
    data->d[11] = 1.785332f;
    data->d[12] = -0.794294f;
    data->d[13] = 5.503170f;
    data->d[14] = 0.297351f;
    data->d[15] = 1.422116f;
    data->d[16] = -1.192625f;
    data->d[17] = -0.719277f;
    data->d[18] = -0.315167f;
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

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.104693f;
    data->d[2] = -1.681543f;
    data->d[3] = 3.122572f;
    data->d[4] = 0.114219f;
    data->d[5] = 1.388593f;
    data->d[6] = 0.902674f;
    data->d[7] = 0.000023f;
    data->d[8] = -28.290873f;
    data->d[9] = 1.776923f;
    data->d[10] = 0.889150f;
    data->d[11] = 0.348274f;
    data->d[12] = 0.729964f;
    data->d[13] = 1.936290f;
    data->d[14] = -0.349039f;
    data->d[15] = -0.044424f;
    data->d[16] = 0.874597f;
    data->d[17] = -1.430526f;
    data->d[18] = 0.404469f;
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
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 1, 5);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 17);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 1, 4);
    instructions->SetOperation(8, 1, 1);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 0, 2);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 0, 18);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 1, 24);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 17);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 26);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 61;
    state.m_evolution = 5;
    state.m_children = 11;
    state.m_index = 19;
    state.m_copy_index = 414;
    state.m_id = 313;
    state.m_test = 1;
    state.m_seed = 3281663418970508884;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000005f;
    state.m_optimizeValid = true;
} // LoadState
