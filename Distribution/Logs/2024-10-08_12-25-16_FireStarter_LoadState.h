#pragma once
#include "FireStarterState.h"

// Run date: 10/08/24 12:25:16 Pacific Daylight Time
// Run duration = 612.136818 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000045
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 524288;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000045
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.16586049f;
    data->d[2] = -1.40449703f;
    data->d[3] = 0.38133493f;
    data->d[4] = 1.53875971f;
    data->d[5] = -1.02906692f;
    data->d[6] = -1.91086864f;
    data->d[7] = -0.95381916f;
    data->d[8] = -0.06237283f;
    data->d[9] = -0.09770831f;
    data->d[10] = -0.19367298f;
    data->d[11] = -3.58561444f;
    data->d[12] = -0.54401302f;
    data->d[13] = 1.45262587f;
    data->d[14] = 1.28472137f;
    data->d[15] = -3.27220392f;
    data->d[16] = 0.47844458f;
    data->d[17] = -1.99480581f;
    data->d[18] = -1.20850015f;
    data->d[19] = 0.56619066f;
    data->d[20] = -1.21998644f;
    data->d[21] = -0.64862359f;
    data->d[22] = 1.52810729f;
    data->d[23] = -0.48880211f;
    data->d[24] = -0.26810855f;
    data->d[25] = -0.31836480f;
    data->d[26] = 0.71265054f;
    data->d[27] = -1.82035148f;
    data->d[28] = 0.12787363f;
    data->d[29] = -1.43561018f;
    *(result->MinResult()) = 0.00000045f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000045f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 0, 6);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 0, 7);
    instructions->SetOperation(7, 1, 17);
    instructions->SetOperation(8, 0, 10);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 20);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 5);
    instructions->SetOperation(20, 0, 4);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 1, 20);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 12);
    instructions->SetOperation(27, 1, 22);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 0, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.LoadCodeFromProgram();
    state.m_generation = 9;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00194311f;
    state.m_maxResult = 0.00000045f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
