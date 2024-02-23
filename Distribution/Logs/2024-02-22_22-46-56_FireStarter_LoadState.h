#pragma once
#include "FireStarterState.h"

// Run date: 02/22/24 22:46:56 Pacific Standard Time
// Run duration = 16706.319847 seconds
// Run generation = 44
// Run evolution = 13
// Run max result = 0.00032198
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 64
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
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 64;
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

// Variation: 0  result = 0.00025606
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.753088f;
    data->d[1] = -0.161001f;
    data->d[2] = 1.025924f;
    data->d[3] = -0.331920f;
    data->d[4] = 3.147946f;
    data->d[5] = -0.700385f;
    data->d[6] = 0.954040f;
    data->d[7] = -0.920174f;
    data->d[8] = 0.359772f;
    data->d[9] = -1.215954f;
    data->d[10] = -0.641478f;
    data->d[11] = -0.146177f;
    data->d[12] = -19.982159f;
    data->d[13] = 5.649418f;
    data->d[14] = -0.031449f;
    data->d[15] = 0.086152f;
    data->d[16] = -3.005061f;
    data->d[17] = 1.537366f;
    data->d[18] = -0.121593f;
    data->d[19] = -0.459605f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000256f;
} // LoadVariation0

// Variation: 1  result = 0.00019109
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.855961f;
    data->d[1] = 0.133466f;
    data->d[2] = 0.089992f;
    data->d[3] = -0.537793f;
    data->d[4] = -1.507474f;
    data->d[5] = -1.436094f;
    data->d[6] = 0.519293f;
    data->d[7] = -1.313886f;
    data->d[8] = 0.601789f;
    data->d[9] = 0.048494f;
    data->d[10] = -1.450129f;
    data->d[11] = 0.416335f;
    data->d[12] = 0.883333f;
    data->d[13] = -9.371240f;
    data->d[14] = -0.542955f;
    data->d[15] = -0.611156f;
    data->d[16] = 0.164605f;
    data->d[17] = 1.312025f;
    data->d[18] = -1383.776489f;
    data->d[19] = -0.142712f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000191f;
} // LoadVariation1

// Variation: 2  result = 0.00032198
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.073160f;
    data->d[1] = -0.320822f;
    data->d[2] = 0.959374f;
    data->d[3] = -1.454926f;
    data->d[4] = 5.947645f;
    data->d[5] = 0.554432f;
    data->d[6] = -1.628929f;
    data->d[7] = -0.167203f;
    data->d[8] = -1.301255f;
    data->d[9] = 0.204507f;
    data->d[10] = 0.601189f;
    data->d[11] = 9.004909f;
    data->d[12] = 0.029777f;
    data->d[13] = -0.140076f;
    data->d[14] = -0.187977f;
    data->d[15] = -3.164544f;
    data->d[16] = -1.849995f;
    data->d[17] = -0.006566f;
    data->d[18] = -849.181030f;
    data->d[19] = 0.103240f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000322f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000322f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 1, 16);
    instructions->SetOperation(3, 1, 23);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 0, 25);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 23);
    instructions->SetOperation(15, 0, 27);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 0, 4);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 1, 19);
    instructions->SetOperation(26, 1, 1);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 6);
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
    state.m_generation = 44;
    state.m_evolution = 13;
    state.m_children0 = 43;
    state.m_children1 = 1;
    state.m_index = 0;
    state.m_copy_index = 15;
    state.m_id = 0;
    state.m_test = 253;
    state.m_seed = 5104601804662627132;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000860f;
    state.m_maxResult = 0.000322f;
    state.m_evolveWeight = 0.001686f;
    state.m_optimizeValid = true;
} // LoadState
