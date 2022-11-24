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

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_units = 2;
    settings.m_processes = 12;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10000;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 1, 20);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 1, 24);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 16);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 1, 27);
    instructions->SetOperation(16, 0, 31);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 29);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 31);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.682329f;
    data->d[1] = 0.098009f;
    data->d[2] = -1.972838f;
    data->d[3] = -1.594334f;
    data->d[4] = -1.250650f;
    data->d[5] = 2.875142f;
    data->d[6] = -0.135859f;
    data->d[7] = -1.375576f;
    data->d[8] = -0.027762f;
    data->d[9] = 0.548807f;
    data->d[10] = 0.000330f;
    data->d[11] = 0.000144f;
    data->d[12] = -0.006927f;
    data->d[13] = 0.971216f;
    data->d[14] = -0.023042f;
    data->d[15] = 0.688766f;
    data->d[16] = 0.449392f;
    data->d[17] = 33.207401f;
    data->d[18] = -0.026165f;
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
    *result->MinResult(0) = 0.000311f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -2.585363f;
    data->d[1] = -0.275719f;
    data->d[2] = -0.381106f;
    data->d[3] = 0.809854f;
    data->d[4] = -21.355524f;
    data->d[5] = -1.731121f;
    data->d[6] = 16.895155f;
    data->d[7] = 2.048384f;
    data->d[8] = 0.000160f;
    data->d[9] = -0.019286f;
    data->d[10] = 1.198675f;
    data->d[11] = -0.266218f;
    data->d[12] = 0.524204f;
    data->d[13] = 1.026831f;
    data->d[14] = -0.002062f;
    data->d[15] = -0.609853f;
    data->d[16] = -0.000061f;
    data->d[17] = -0.793616f;
    data->d[18] = -0.969793f;
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
    *result->MinResult(1) = 0.000150f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -5.193270f;
    data->d[1] = 2.145347f;
    data->d[2] = 0.719160f;
    data->d[3] = 0.737988f;
    data->d[4] = -4.937484f;
    data->d[5] = -0.648038f;
    data->d[6] = -0.842097f;
    data->d[7] = -2.485368f;
    data->d[8] = 0.000385f;
    data->d[9] = -0.028390f;
    data->d[10] = 4.338893f;
    data->d[11] = 0.413014f;
    data->d[12] = 0.639319f;
    data->d[13] = 0.851439f;
    data->d[14] = -0.006578f;
    data->d[15] = 0.374387f;
    data->d[16] = 0.002944f;
    data->d[17] = 2.090125f;
    data->d[18] = 1.209480f;
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
    *result->MinResult(2) = 0.000393f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000393f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 5;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
