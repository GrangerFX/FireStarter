#pragma once
#include "FireStarterState.h"

// Run date: 02/16/25 15:08:47 Pacific Standard Time
// Run duration = 43.022736 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00001929
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_passes = 384;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001929
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.89183879f;
    data->d[1] = 0.46932945f;
    data->d[2] = -3.99595261f;
    data->d[3] = -0.91964817f;
    data->d[4] = 0.65175241f;
    data->d[5] = 1.12689805f;
    data->d[6] = -0.01784401f;
    data->d[7] = -1.47438943f;
    data->d[8] = -0.77308869f;
    data->d[9] = -3.71099472f;
    data->d[10] = 0.05669758f;
    data->d[11] = 2.01497102f;
    data->d[12] = -1.36149108f;
    data->d[13] = -0.74310595f;
    data->d[14] = 0.16662423f;
    data->d[15] = 1.67561233f;
    data->d[16] = -2.18867731f;
    data->d[17] = -2.23612142f;
    data->d[18] = -1.04141450f;
    data->d[19] = -1.84500253f;
    data->d[20] = 1.02555072f;
    data->d[21] = 1.42035186f;
    data->d[22] = -4.18863726f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 0.00001929f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00001929f;
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)1, 2);
    code->SetOperation(3, (FireStarterOpcode)1, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 7);
    code->SetOperation(8, (FireStarterOpcode)0, 5);
    code->SetOperation(9, (FireStarterOpcode)1, 5);
    code->SetOperation(10, (FireStarterOpcode)1, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 10);
    code->SetOperation(13, (FireStarterOpcode)1, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 12);
    code->SetOperation(15, (FireStarterOpcode)0, 11);
    code->SetOperation(16, (FireStarterOpcode)0, 13);
    code->SetOperation(17, (FireStarterOpcode)0, 6);
    code->SetOperation(18, (FireStarterOpcode)0, 6);
    code->SetOperation(19, (FireStarterOpcode)1, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)0, 16);
    code->SetOperation(22, (FireStarterOpcode)0, 17);
    code->SetOperation(23, (FireStarterOpcode)0, 18);
    code->SetOperation(24, (FireStarterOpcode)0, 12);
    code->SetOperation(25, (FireStarterOpcode)1, 11);
    code->SetOperation(26, (FireStarterOpcode)0, 19);
    code->SetOperation(27, (FireStarterOpcode)0, 20);
    code->SetOperation(28, (FireStarterOpcode)1, 21);
    code->SetOperation(29, (FireStarterOpcode)1, 15);
    code->SetOperation(30, (FireStarterOpcode)0, 7);
    code->SetOperation(31, (FireStarterOpcode)0, 22);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 7;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 4;
    state.m_seed = 9942415310491508969;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00001929f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
