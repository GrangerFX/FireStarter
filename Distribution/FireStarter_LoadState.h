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
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 0, 20);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.081481f;
    data->d[1] = 0.508425f;
    data->d[2] = -0.999789f;
    data->d[3] = 1.545498f;
    data->d[4] = 0.300224f;
    data->d[5] = -0.591764f;
    data->d[6] = 0.132708f;
    data->d[7] = 0.281790f;
    data->d[8] = 0.146897f;
    data->d[9] = -1.034468f;
    data->d[10] = 0.178641f;
    data->d[11] = -0.239330f;
    data->d[12] = -1.989592f;
    data->d[13] = -5.169230f;
    data->d[14] = 1.888553f;
    data->d[15] = -0.542721f;
    data->d[16] = -0.771343f;
    data->d[17] = -0.247883f;
    data->d[18] = 0.438604f;
    data->d[19] = 1.238862f;
    data->d[20] = -1.307693f;
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
    *result->MinResult(0) = 0.000035f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.568736f;
    data->d[1] = 0.519029f;
    data->d[2] = -1.385808f;
    data->d[3] = 2.764596f;
    data->d[4] = -0.414833f;
    data->d[5] = -0.659613f;
    data->d[6] = -1.342962f;
    data->d[7] = -0.589928f;
    data->d[8] = 0.020417f;
    data->d[9] = 0.792487f;
    data->d[10] = 0.881661f;
    data->d[11] = -0.192342f;
    data->d[12] = -0.523442f;
    data->d[13] = 0.392279f;
    data->d[14] = -1.748219f;
    data->d[15] = 0.722470f;
    data->d[16] = -2.184589f;
    data->d[17] = -0.495489f;
    data->d[18] = 0.627943f;
    data->d[19] = 1.011209f;
    data->d[20] = -1.252768f;
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
    *result->MinResult(1) = 0.000057f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.875145f;
    data->d[1] = 1.307437f;
    data->d[2] = -0.847029f;
    data->d[3] = 1.387926f;
    data->d[4] = 0.884363f;
    data->d[5] = -1.123447f;
    data->d[6] = -0.289621f;
    data->d[7] = -0.273128f;
    data->d[8] = 0.029666f;
    data->d[9] = 0.727458f;
    data->d[10] = 1.007603f;
    data->d[11] = -0.220654f;
    data->d[12] = -0.487695f;
    data->d[13] = -0.316356f;
    data->d[14] = -0.699178f;
    data->d[15] = -0.538420f;
    data->d[16] = 1.122221f;
    data->d[17] = 1.096543f;
    data->d[18] = 0.965893f;
    data->d[19] = -0.594788f;
    data->d[20] = 0.513963f;
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
    *result->MinResult(2) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000057f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 7;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
