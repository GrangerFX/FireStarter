#pragma once
#include "FireStarterState.h"

// Run date: 07/08/24 16:49:11 Pacific Daylight Time
// Run duration = 6.897291 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00813597
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
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

    settings.m_mode = FIRESTARTER_EVOLVE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
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

// Variation: 0  result = 0.00186903
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -13.625657f;
    data->d[1] = 0.867977f;
    data->d[2] = -1.146831f;
    data->d[3] = -1.453836f;
    data->d[4] = 1.750676f;
    data->d[5] = 0.771150f;
    data->d[6] = 0.361177f;
    data->d[7] = 0.336468f;
    data->d[8] = 0.933275f;
    data->d[9] = 0.871699f;
    data->d[10] = 0.513917f;
    data->d[11] = -1.964626f;
    data->d[12] = 0.053815f;
    data->d[13] = -0.690769f;
    data->d[14] = 0.890952f;
    data->d[15] = 0.938527f;
    data->d[16] = -0.459726f;
    data->d[17] = -1.074511f;
    data->d[18] = 1.194063f;
    data->d[19] = -0.152356f;
    data->d[20] = 0.440105f;
    data->d[21] = -0.802427f;
    data->d[22] = 1.743693f;
    data->d[23] = 1.775285f;
    data->d[24] = 0.516081f;
    data->d[25] = 0.579970f;
    data->d[26] = 1.497961f;
    data->d[27] = 1.146881f;
    data->d[28] = 0.054292f;
    data->d[29] = 1.175028f;
    *(result->MinResult()) = 0.001869f;
} // LoadVariation0

// Variation: 1  result = 0.00226533
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.602098f;
    data->d[1] = 0.976929f;
    data->d[2] = -0.939930f;
    data->d[3] = -1.690954f;
    data->d[4] = -0.942482f;
    data->d[5] = 0.290548f;
    data->d[6] = 0.327705f;
    data->d[7] = 1.267421f;
    data->d[8] = -0.011675f;
    data->d[9] = -1.300921f;
    data->d[10] = 0.642993f;
    data->d[11] = 0.643585f;
    data->d[12] = 1.456230f;
    data->d[13] = -1.506962f;
    data->d[14] = 0.199223f;
    data->d[15] = -1.136435f;
    data->d[16] = -1.207832f;
    data->d[17] = 1.950417f;
    data->d[18] = -0.092592f;
    data->d[19] = 1.332569f;
    data->d[20] = -1.039668f;
    data->d[21] = 0.945150f;
    data->d[22] = -0.472558f;
    data->d[23] = 0.009826f;
    data->d[24] = 0.121162f;
    data->d[25] = -1.992954f;
    data->d[26] = 1.661516f;
    data->d[27] = -0.540321f;
    data->d[28] = 0.147918f;
    data->d[29] = -0.900727f;
    *(result->MinResult()) = 0.002265f;
} // LoadVariation1

// Variation: 2  result = 0.00813597
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.326571f;
    data->d[1] = 0.424802f;
    data->d[2] = -1.310769f;
    data->d[3] = -0.155371f;
    data->d[4] = 1.191356f;
    data->d[5] = -0.134369f;
    data->d[6] = 0.580931f;
    data->d[7] = 1.303110f;
    data->d[8] = -0.434071f;
    data->d[9] = -1.149941f;
    data->d[10] = -0.254314f;
    data->d[11] = 1.387900f;
    data->d[12] = 0.550580f;
    data->d[13] = 0.153111f;
    data->d[14] = -0.179718f;
    data->d[15] = 1.652843f;
    data->d[16] = 0.958554f;
    data->d[17] = -1.399211f;
    data->d[18] = -1.568272f;
    data->d[19] = 1.240004f;
    data->d[20] = 1.033933f;
    data->d[21] = -1.030761f;
    data->d[22] = 0.006799f;
    data->d[23] = -1.780866f;
    data->d[24] = 0.533481f;
    data->d[25] = -0.316700f;
    data->d[26] = 1.784995f;
    data->d[27] = -1.268783f;
    data->d[28] = 0.080425f;
    data->d[29] = -1.948203f;
    *(result->MinResult()) = 0.008136f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.008136f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 0, 0);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 0);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 0, 0);
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
    state.m_generation = 1;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.008136f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
