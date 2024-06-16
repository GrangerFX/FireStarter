#pragma once
#include "FireStarterState.h"

// Run date: 06/15/24 17:42:26 Pacific Daylight Time
// Run duration = 39.322445 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00000024
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.238795f;
    data->d[1] = 0.157143f;
    data->d[2] = -0.845491f;
    data->d[3] = 2.152295f;
    data->d[4] = -9.527081f;
    data->d[5] = 1.507104f;
    data->d[6] = 0.806759f;
    data->d[7] = 1.516696f;
    data->d[8] = 0.149448f;
    data->d[9] = 2.241588f;
    data->d[10] = 2.817387f;
    data->d[11] = -2.117465f;
    data->d[12] = 0.016081f;
    data->d[13] = 0.357806f;
    data->d[14] = 2.288008f;
    data->d[15] = -1.896762f;
    data->d[16] = 0.894893f;
    data->d[17] = 3.684130f;
    data->d[18] = -0.935277f;
    data->d[19] = -0.007867f;
    data->d[20] = -0.230580f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.870721f;
    data->d[1] = 0.529859f;
    data->d[2] = -2.098971f;
    data->d[3] = 0.311128f;
    data->d[4] = -4.348224f;
    data->d[5] = 2.938928f;
    data->d[6] = -0.454525f;
    data->d[7] = 1.809037f;
    data->d[8] = -1.053148f;
    data->d[9] = -0.490898f;
    data->d[10] = 1.698429f;
    data->d[11] = 1.444583f;
    data->d[12] = 0.007638f;
    data->d[13] = -0.194750f;
    data->d[14] = 0.963694f;
    data->d[15] = -1.306948f;
    data->d[16] = 0.312715f;
    data->d[17] = -0.680339f;
    data->d[18] = 0.040485f;
    data->d[19] = -2.945654f;
    data->d[20] = 3.535405f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.259398f;
    data->d[1] = 0.534044f;
    data->d[2] = -1.536654f;
    data->d[3] = -0.124111f;
    data->d[4] = 2.842253f;
    data->d[5] = -0.103745f;
    data->d[6] = -0.509605f;
    data->d[7] = 2.880622f;
    data->d[8] = -3.193224f;
    data->d[9] = 1.095885f;
    data->d[10] = -1.563783f;
    data->d[11] = 2.422250f;
    data->d[12] = 0.079833f;
    data->d[13] = -0.958196f;
    data->d[14] = -4.420440f;
    data->d[15] = -1.683494f;
    data->d[16] = -1.915879f;
    data->d[17] = -0.375203f;
    data->d[18] = 1.938458f;
    data->d[19] = 0.327951f;
    data->d[20] = 1.298167f;
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
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 9);
    instructions->SetOperation(3, 1, 27);
    instructions->SetOperation(4, 0, 12);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 1, 13);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 1, 15);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 1, 26);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 0, 29);
    instructions->SetOperation(18, 0, 24);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 0, 16);
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
    state.m_index = 1;
    state.m_copy_index = 1;
    state.m_id = 1;
    state.m_test = 0;
    state.m_seed = 12495441629385950763;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
