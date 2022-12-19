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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_units = 10;
    settings.m_processes = 16;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 0, 25);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 1, 30);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 1, 8);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 30);
    instructions->SetOperation(12, 1, 26);
    instructions->SetOperation(13, 1, 28);
    instructions->SetOperation(14, 1, 31);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 0, 29);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 1, 26);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 1, 19);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 0, 23);
    instructions->SetOperation(25, 0, 12);
    instructions->SetOperation(26, 0, 21);
    instructions->SetOperation(27, 1, 2);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 0, 8);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.176524f;
    data->d[1] = 0.093094f;
    data->d[2] = 0.816081f;
    data->d[3] = -0.535721f;
    data->d[4] = 4.873035f;
    data->d[5] = -0.170710f;
    data->d[6] = 0.842510f;
    data->d[7] = 1.054250f;
    data->d[8] = 0.117849f;
    data->d[9] = -0.427513f;
    data->d[10] = -2.167983f;
    data->d[11] = -0.561050f;
    data->d[12] = 0.230525f;
    data->d[13] = 1.093885f;
    data->d[14] = 0.685409f;
    data->d[15] = -3.796689f;
    data->d[16] = 0.038290f;
    data->d[17] = 2.860124f;
    data->d[18] = 0.000000f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000118f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.579729f;
    data->d[1] = 0.147163f;
    data->d[2] = -0.286177f;
    data->d[3] = 0.867936f;
    data->d[4] = 1.239398f;
    data->d[5] = -0.045033f;
    data->d[6] = -1.068501f;
    data->d[7] = 0.719729f;
    data->d[8] = -0.047688f;
    data->d[9] = 0.990576f;
    data->d[10] = 1.435260f;
    data->d[11] = -1.413546f;
    data->d[12] = -0.166327f;
    data->d[13] = -0.002393f;
    data->d[14] = -0.653286f;
    data->d[15] = 0.002417f;
    data->d[16] = -8.120490f;
    data->d[17] = -4.717419f;
    data->d[18] = 0.000000f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000040f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.999282f;
    data->d[1] = 0.201392f;
    data->d[2] = -0.236352f;
    data->d[3] = 1.435397f;
    data->d[4] = -3.637069f;
    data->d[5] = -0.022834f;
    data->d[6] = -0.473384f;
    data->d[7] = -0.284258f;
    data->d[8] = -0.138645f;
    data->d[9] = 1.232772f;
    data->d[10] = 0.403352f;
    data->d[11] = 1.433706f;
    data->d[12] = -0.239578f;
    data->d[13] = -3.695143f;
    data->d[14] = -0.005950f;
    data->d[15] = -0.084404f;
    data->d[16] = 1.601408f;
    data->d[17] = -8.119230f;
    data->d[18] = 0.000000f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.000091f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000118f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 2;
    state.m_index = 157;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
