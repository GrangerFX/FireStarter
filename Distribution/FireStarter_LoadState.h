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

    settings.m_mode = FIRESTARTER_TEST;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 1, 31);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 29);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 0, 24);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 1, 26);
    instructions->SetOperation(29, 1, 29);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.454096f;
    data->d[1] = 0.281188f;
    data->d[2] = 1.677128f;
    data->d[3] = 0.181563f;
    data->d[4] = 0.000057f;
    data->d[5] = -0.521336f;
    data->d[6] = -0.599009f;
    data->d[7] = 1.706351f;
    data->d[8] = -0.946584f;
    data->d[9] = -1.325503f;
    data->d[10] = -0.230302f;
    data->d[11] = 0.947874f;
    data->d[12] = -0.413980f;
    data->d[13] = -1.597564f;
    data->d[14] = 1.911619f;
    data->d[15] = 1.505830f;
    data->d[16] = -0.471368f;
    data->d[17] = -1.325401f;
    data->d[18] = -0.167691f;
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
    *result->MinResult(0) = 0.000015f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.282903f;
    data->d[1] = -1.243267f;
    data->d[2] = -1.508658f;
    data->d[3] = -1.162560f;
    data->d[4] = -0.246082f;
    data->d[5] = -1.217332f;
    data->d[6] = 0.089252f;
    data->d[7] = -1.329861f;
    data->d[8] = -1.653194f;
    data->d[9] = 0.850875f;
    data->d[10] = 0.460611f;
    data->d[11] = 1.414619f;
    data->d[12] = -1.919510f;
    data->d[13] = 1.316200f;
    data->d[14] = 2.738109f;
    data->d[15] = 0.698662f;
    data->d[16] = -1.879948f;
    data->d[17] = 0.333659f;
    data->d[18] = -0.116277f;
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
    *result->MinResult(1) = 0.000031f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.460636f;
    data->d[1] = -0.234305f;
    data->d[2] = -0.131490f;
    data->d[3] = -0.229931f;
    data->d[4] = -0.151673f;
    data->d[5] = -1.012911f;
    data->d[6] = -0.809076f;
    data->d[7] = 0.318249f;
    data->d[8] = 0.076763f;
    data->d[9] = 1.122903f;
    data->d[10] = 1.438231f;
    data->d[11] = 0.155912f;
    data->d[12] = 1.004015f;
    data->d[13] = 0.412753f;
    data->d[14] = -1.472461f;
    data->d[15] = 1.469385f;
    data->d[16] = -0.478292f;
    data->d[17] = 0.859855f;
    data->d[18] = -1.113006f;
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
    *result->MinResult(2) = 0.000097f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000097f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 27;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
