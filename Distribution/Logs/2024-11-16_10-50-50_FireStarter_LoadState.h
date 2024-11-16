#pragma once
#include "FireStarterState.h"

// Run date: 11/16/24 10:50:50 Pacific Standard Time
// Run duration = 496.649476 seconds
// Run generation = 162
// Run evolution = 11
// Run max result = 0.00000048
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 500
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_passes = 500;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.16864276f;
    data->d[1] = -1.97294986f;
    data->d[2] = -0.34460852f;
    data->d[3] = -2.76739287f;
    data->d[4] = -0.50728506f;
    data->d[5] = -0.16436413f;
    data->d[6] = -2.95685840f;
    data->d[7] = 1.75246811f;
    data->d[8] = 0.30799282f;
    data->d[9] = 1.55642354f;
    data->d[10] = -1.39506602f;
    data->d[11] = 4.57932663f;
    data->d[12] = -0.56328088f;
    data->d[13] = -0.47419226f;
    data->d[14] = 0.82538736f;
    data->d[15] = 4.55120945f;
    data->d[16] = 1.43205237f;
    data->d[17] = -0.06033514f;
    data->d[18] = 0.00000006f;
    data->d[19] = 1.00640440f;
    data->d[20] = -1.20441508f;
    data->d[21] = 1.75058377f;
    data->d[22] = 1.64105582f;
    data->d[23] = 0.46652493f;
    data->d[24] = -1.74267197f;
    data->d[25] = -1.13449478f;
    data->d[26] = -0.96938664f;
    data->d[27] = -0.37990454f;
    data->d[28] = 1.33781624f;
    data->d[29] = -2.06370950f;
    *(result->MinResult()) = 0.00000009f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.27330041f;
    data->d[1] = -1.81735826f;
    data->d[2] = -1.30196977f;
    data->d[3] = 1.46399975f;
    data->d[4] = -0.02690645f;
    data->d[5] = 8.82616806f;
    data->d[6] = 0.28326717f;
    data->d[7] = -1.47412062f;
    data->d[8] = 0.25134879f;
    data->d[9] = -0.80193359f;
    data->d[10] = -2.23924446f;
    data->d[11] = 0.00206722f;
    data->d[12] = 0.01214953f;
    data->d[13] = 2.00524402f;
    data->d[14] = -5.61482811f;
    data->d[15] = -0.18353915f;
    data->d[16] = 0.40311801f;
    data->d[17] = 2.00292182f;
    data->d[18] = -0.11813188f;
    data->d[19] = -2.20978880f;
    data->d[20] = 0.62146449f;
    data->d[21] = -2.17108870f;
    data->d[22] = -2.15948653f;
    data->d[23] = -1.21939182f;
    data->d[24] = 1.51686203f;
    data->d[25] = 0.42693007f;
    data->d[26] = -1.89480007f;
    data->d[27] = -0.90683848f;
    data->d[28] = 0.67958170f;
    data->d[29] = -1.87747073f;
    *(result->MinResult()) = 0.00000048f;
} // LoadVariation1

// Variation: 2  result = 0.00000011
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.78664827f;
    data->d[1] = 0.16865459f;
    data->d[2] = -0.01754028f;
    data->d[3] = -2.85894585f;
    data->d[4] = -1.86326659f;
    data->d[5] = 1.33306634f;
    data->d[6] = -2.29446626f;
    data->d[7] = 0.17739137f;
    data->d[8] = -0.19671385f;
    data->d[9] = 2.27413464f;
    data->d[10] = -3.29243803f;
    data->d[11] = 0.06861752f;
    data->d[12] = -0.91228008f;
    data->d[13] = 1.92115760f;
    data->d[14] = 0.44401705f;
    data->d[15] = 0.71330029f;
    data->d[16] = 0.99212688f;
    data->d[17] = 2.95808148f;
    data->d[18] = 0.52359873f;
    data->d[19] = -1.67854321f;
    data->d[20] = 1.21325588f;
    data->d[21] = 1.31368899f;
    data->d[22] = -1.56737339f;
    data->d[23] = 2.38184094f;
    data->d[24] = 2.31864214f;
    data->d[25] = 0.33608818f;
    data->d[26] = -0.29376277f;
    data->d[27] = -1.49145818f;
    data->d[28] = 1.21892619f;
    data->d[29] = 2.18116903f;
    *(result->MinResult()) = 0.00000011f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.00000048f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 10);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 1, 9);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 6);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 6);
    instructions->SetOperation(29, 0, 2);
    instructions->SetOperation(30, 0, 16);
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
    state.LoadCodeFromProgram();
    state.m_generation = 162;
    state.m_evolution = 11;
    state.m_index = 12;
    state.m_copy_index = 27;
    state.m_id = 27;
    state.m_test = 0;
    state.m_seed = 5023225922336253200;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00000143f;
    state.m_maxResult = 0.00000048f;
    state.m_evolveWeight = 0.000230f;
    state.m_optimizeValid = true;
} // LoadState
