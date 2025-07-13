#pragma once
#include "FireStarterState.h"

// Run date: 07/12/25 14:43:02 Pacific Daylight Time
// Run duration = 19594.083183 seconds
// Run test = 15
// Run generation = 520
// Run evolution = 8
// Run precision  = 0.00000645
// Run max result = 0.00000063
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run population = 262144
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_population = 262144;
    settings.m_generations = 0;
    settings.m_passes = 512;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_candidates = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000063f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = -3.43867779f;
    data->d[1] = 0.29708514f;
    data->d[2] = 0.51659900f;
    data->d[3] = -0.04641045f;
    data->d[4] = 2.19110131f;
    data->d[5] = 0.62241614f;
    data->d[6] = -0.27514616f;
    data->d[7] = 1.81149650f;
    data->d[8] = 6.40294981f;
    data->d[9] = -2.99128127f;
    data->d[10] = -27.60607719f;
    data->d[11] = -0.00254572f;
    data->d[12] = 0.43134364f;
    data->d[13] = -2.02753186f;
    data->d[14] = -0.01834626f;
    data->d[15] = 3.86783195f;
    data->d[16] = -0.99281144f;
    data->d[17] = -0.86495036f;
    data->d[18] = -1.59654570f;
    data->d[19] = -0.21004844f;
    data->d[20] = -0.06240228f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation0

// Variation: 1
inline void LoadVariation1(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000036f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -1.63687634f;
    data->d[1] = -1.45378196f;
    data->d[2] = -2.32984853f;
    data->d[3] = -0.36984056f;
    data->d[4] = -0.04220890f;
    data->d[5] = -1.91786325f;
    data->d[6] = 2.09196663f;
    data->d[7] = 2.36625147f;
    data->d[8] = -1.27471077f;
    data->d[9] = 0.82035488f;
    data->d[10] = 2.33385587f;
    data->d[11] = -0.00021589f;
    data->d[12] = -1.05657446f;
    data->d[13] = 1.10461998f;
    data->d[14] = 4.92435837f;
    data->d[15] = 0.77196324f;
    data->d[16] = 2.41049194f;
    data->d[17] = 0.99124593f;
    data->d[18] = 0.94645894f;
    data->d[19] = -0.62127399f;
    data->d[20] = 0.78506511f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation1

// Variation: 2
inline void LoadVariation2(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000042f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -1.44732940f;
    data->d[1] = -1.17066467f;
    data->d[2] = 0.19025838f;
    data->d[3] = 7.71768475f;
    data->d[4] = -0.00394943f;
    data->d[5] = -1.74055004f;
    data->d[6] = 2.69412756f;
    data->d[7] = -0.47348052f;
    data->d[8] = -0.65892202f;
    data->d[9] = 4.36028481f;
    data->d[10] = -0.06856378f;
    data->d[11] = -0.72695953f;
    data->d[12] = 1.20112884f;
    data->d[13] = 0.27741072f;
    data->d[14] = -0.76398742f;
    data->d[15] = -3.22164536f;
    data->d[16] = 1.07032561f;
    data->d[17] = 0.77484995f;
    data->d[18] = -0.76824015f;
    data->d[19] = 0.46067908f;
    data->d[20] = -0.01570181f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 1);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 11);
    code->SetOperation(13, (FireStarterOpcode)1, 12);
    code->SetOperation(14, (FireStarterOpcode)1, 13);
    code->SetOperation(15, (FireStarterOpcode)0, 8);
    code->SetOperation(16, (FireStarterOpcode)0, 14);
    code->SetOperation(17, (FireStarterOpcode)0, 15);
    code->SetOperation(18, (FireStarterOpcode)0, 16);
    code->SetOperation(19, (FireStarterOpcode)0, 14);
    code->SetOperation(20, (FireStarterOpcode)1, 17);
    code->SetOperation(21, (FireStarterOpcode)1, 17);
    code->SetOperation(22, (FireStarterOpcode)0, 18);
    code->SetOperation(23, (FireStarterOpcode)0, 6);
    code->SetOperation(24, (FireStarterOpcode)0, 12);
    code->SetOperation(25, (FireStarterOpcode)0, 3);
    code->SetOperation(26, (FireStarterOpcode)0, 18);
    code->SetOperation(27, (FireStarterOpcode)0, 8);
    code->SetOperation(28, (FireStarterOpcode)1, 0);
    code->SetOperation(29, (FireStarterOpcode)1, 8);
    code->SetOperation(30, (FireStarterOpcode)0, 19);
    code->SetOperation(31, (FireStarterOpcode)1, 20);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 520;
    state.m_evolution = 8;
    state.m_index = 7;
    state.m_evolveIndex = 203;
    state.m_id = 203;
    state.m_test = 15;
    state.m_seed = 16062205539830929733;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00000063f;
    state.m_oldResult = 0.00000149f;
    state.m_evolveWeight = 0.000773f;
    state.m_optimizeValid = true;
} // LoadState
