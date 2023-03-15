#pragma once
#include "FireStarterState.h"

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_units = 2;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_seed = 1;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 30);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 33);
    instructions->SetOperation(3, 1, 36);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 1, 24);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 13);
    instructions->SetOperation(8, 0, 22);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 0, 49);
    instructions->SetOperation(15, 1, 45);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 0, 30);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 43);
    instructions->SetOperation(21, 1, 29);
    instructions->SetOperation(22, 0, 11);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 44);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 0, 25);
    instructions->SetOperation(31, 1, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.083501f;
    data->d[1] = 0.262365f;
    data->d[2] = 2.026365f;
    data->d[3] = -0.201553f;
    data->d[4] = -3.653341f;
    data->d[5] = 38.128418f;
    data->d[6] = 0.124884f;
    data->d[7] = -3.124201f;
    data->d[8] = -1.497855f;
    data->d[9] = -0.372535f;
    data->d[10] = 0.168063f;
    data->d[11] = -1.817548f;
    data->d[12] = -30.700584f;
    data->d[13] = 0.863088f;
    data->d[14] = 18.175200f;
    data->d[15] = -0.617410f;
    data->d[16] = 1.611092f;
    data->d[17] = 0.272311f;
    data->d[18] = -0.022921f;
    data->d[19] = 0.758197f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000117f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.069882f;
    data->d[1] = 0.675753f;
    data->d[2] = -0.686732f;
    data->d[3] = 1.545684f;
    data->d[4] = -1.714489f;
    data->d[5] = 0.253155f;
    data->d[6] = 0.005221f;
    data->d[7] = 1.121830f;
    data->d[8] = 1.121297f;
    data->d[9] = 1.754553f;
    data->d[10] = -0.363186f;
    data->d[11] = -0.516531f;
    data->d[12] = 1.492979f;
    data->d[13] = 0.652586f;
    data->d[14] = -1.545176f;
    data->d[15] = 2.018108f;
    data->d[16] = -0.876606f;
    data->d[17] = 1.412347f;
    data->d[18] = -0.683689f;
    data->d[19] = -1.321607f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000110f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.098533f;
    data->d[1] = -0.257905f;
    data->d[2] = -4.372405f;
    data->d[3] = -2.374160f;
    data->d[4] = 0.070452f;
    data->d[5] = 0.794633f;
    data->d[6] = -0.538795f;
    data->d[7] = -0.647083f;
    data->d[8] = -1.507686f;
    data->d[9] = 0.254363f;
    data->d[10] = -1.939738f;
    data->d[11] = -0.334472f;
    data->d[12] = -1.830132f;
    data->d[13] = -2.098877f;
    data->d[14] = 0.021974f;
    data->d[15] = -2.440199f;
    data->d[16] = 0.237727f;
    data->d[17] = 1.914930f;
    data->d[18] = 0.244436f;
    data->d[19] = 1.263803f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000063f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000117f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 127;
    state.m_index = 0;
    state.m_test = 92;
    state.m_seed = 10040532446253299094;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
