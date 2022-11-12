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
    settings.m_attempts = 100;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 1, 6);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 1, 16);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 1, 10);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 14);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 1, 17);
    instructions->SetOperation(11, 1, 11);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 1, 31);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 27);
    instructions->SetOperation(17, 1, 6);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 25);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.189120f;
    data->d[1] = -0.691828f;
    data->d[2] = 0.258812f;
    data->d[3] = 0.266673f;
    data->d[4] = -0.976405f;
    data->d[5] = -2.776690f;
    data->d[6] = -2.119575f;
    data->d[7] = -11.571775f;
    data->d[8] = 2.249334f;
    data->d[9] = 4.208508f;
    data->d[10] = 0.276436f;
    data->d[11] = 6.122605f;
    data->d[12] = 3.493510f;
    data->d[13] = -0.103992f;
    data->d[14] = 0.898105f;
    data->d[15] = 1.198184f;
    data->d[16] = -0.385553f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(0) = 0.000520f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.340560f;
    data->d[1] = 0.556676f;
    data->d[2] = 0.298629f;
    data->d[3] = 0.008139f;
    data->d[4] = 1.184871f;
    data->d[5] = -2.879352f;
    data->d[6] = -424.903534f;
    data->d[7] = 254.309860f;
    data->d[8] = -2.753268f;
    data->d[9] = 1.125299f;
    data->d[10] = 0.006323f;
    data->d[11] = -0.359261f;
    data->d[12] = 0.744450f;
    data->d[13] = -5.101595f;
    data->d[14] = -1.444330f;
    data->d[15] = -1.404460f;
    data->d[16] = -15.705594f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(1) = 0.000285f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.160709f;
    data->d[1] = -0.189918f;
    data->d[2] = -0.315087f;
    data->d[3] = -1.393563f;
    data->d[4] = -0.648847f;
    data->d[5] = -1.106074f;
    data->d[6] = 3.915696f;
    data->d[7] = -5.338996f;
    data->d[8] = -6.692717f;
    data->d[9] = 2.356589f;
    data->d[10] = 0.185447f;
    data->d[11] = -3.001699f;
    data->d[12] = 8.579756f;
    data->d[13] = 0.136543f;
    data->d[14] = 0.069667f;
    data->d[15] = 0.205654f;
    data->d[16] = -0.617942f;
    data->d[17] = 0.000000f;
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
    *result->MinResult(2) = 0.001304f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.001304f;
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
