#pragma once
#include "FireStarterState.h"

// Run date: 06/17/24 15:58:58 Pacific Daylight Time
// Run duration = 131.820986 seconds
// Run generation = 45
// Run evolution = 2
// Run max result = 0.00002337
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00002027
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.913123f;
    data->d[1] = -0.914221f;
    data->d[2] = -0.976346f;
    data->d[3] = -0.309733f;
    data->d[4] = -3.398588f;
    data->d[5] = 0.548470f;
    data->d[6] = 1.248361f;
    data->d[7] = -1.307191f;
    data->d[8] = 0.005887f;
    data->d[9] = 2.121642f;
    data->d[10] = 0.647826f;
    data->d[11] = 0.048458f;
    data->d[12] = -0.346877f;
    data->d[13] = 1.730039f;
    data->d[14] = 4.372249f;
    data->d[15] = 1.385685f;
    data->d[16] = -3.367742f;
    data->d[17] = -0.179352f;
    data->d[18] = -2.457124f;
    data->d[19] = 2.359217f;
    data->d[20] = 0.004582f;
    data->d[21] = -0.147744f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000020f;
} // LoadVariation0

// Variation: 1  result = 0.00002158
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.135271f;
    data->d[1] = 0.294812f;
    data->d[2] = -0.572139f;
    data->d[3] = -0.446197f;
    data->d[4] = 1.210189f;
    data->d[5] = 0.973718f;
    data->d[6] = -0.399719f;
    data->d[7] = 0.303240f;
    data->d[8] = -0.687010f;
    data->d[9] = 1.393705f;
    data->d[10] = -1.049763f;
    data->d[11] = -0.190969f;
    data->d[12] = 0.625703f;
    data->d[13] = 8.864054f;
    data->d[14] = 1.565730f;
    data->d[15] = 4.903325f;
    data->d[16] = 5.257777f;
    data->d[17] = -8.004611f;
    data->d[18] = -4.419729f;
    data->d[19] = -15.418944f;
    data->d[20] = 11.891389f;
    data->d[21] = -0.009971f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000022f;
} // LoadVariation1

// Variation: 2  result = 0.00002337
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.384507f;
    data->d[1] = -0.345229f;
    data->d[2] = -1.050143f;
    data->d[3] = -1.062778f;
    data->d[4] = -0.758136f;
    data->d[5] = 0.626809f;
    data->d[6] = 1.983205f;
    data->d[7] = -2.417825f;
    data->d[8] = -0.004258f;
    data->d[9] = 3.470768f;
    data->d[10] = -0.539938f;
    data->d[11] = 0.163589f;
    data->d[12] = -3.350423f;
    data->d[13] = 0.458217f;
    data->d[14] = -1.280126f;
    data->d[15] = 2.101235f;
    data->d[16] = 1.705246f;
    data->d[17] = 2.943671f;
    data->d[18] = 0.243380f;
    data->d[19] = -0.061973f;
    data->d[20] = -0.650335f;
    data->d[21] = -0.805354f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000023f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000023f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 1, 13);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 1, 16);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 1, 27);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 45;
    state.m_evolution = 2;
    state.m_index = 12;
    state.m_copy_index = 20;
    state.m_id = 20;
    state.m_test = 0;
    state.m_seed = 13062955085307292437;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000026f;
    state.m_maxResult = 0.000023f;
    state.m_evolveWeight = 0.001020f;
    state.m_optimizeValid = true;
} // LoadState
