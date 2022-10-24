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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 512;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    program.m_uniqueRegisters = 20;

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 9);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 1, 18);
    instructions->SetOperation(30, 0, 1);
    instructions->SetOperation(31, 1, 19);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -2.765939f;
    data->d[1] = -0.375654f;
    data->d[2] = 0.000000f;
    data->d[3] = 0.266123f;
    data->d[4] = -0.478727f;
    data->d[5] = 0.230873f;
    data->d[6] = -57.867737f;
    data->d[7] = -0.157852f;
    data->d[8] = -0.011472f;
    data->d[9] = 0.711188f;
    data->d[10] = 0.304998f;
    data->d[11] = -3.401770f;
    data->d[12] = 1.727282f;
    data->d[13] = 0.022016f;
    data->d[14] = -1.515170f;
    data->d[15] = -8.303826f;
    data->d[16] = -1.099460f;
    data->d[17] = -0.329171f;
    data->d[18] = -0.377804f;
    data->d[19] = -0.000000f;
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
    *result->MinResult(0) = 0.000000f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.841414f;
    data->d[1] = -2.249245f;
    data->d[2] = 0.000000f;
    data->d[3] = -0.242276f;
    data->d[4] = -13.024505f;
    data->d[5] = 5.502565f;
    data->d[6] = 0.004604f;
    data->d[7] = 1.679780f;
    data->d[8] = -1.404214f;
    data->d[9] = -0.824806f;
    data->d[10] = -2.919451f;
    data->d[11] = 0.027525f;
    data->d[12] = 11.129306f;
    data->d[13] = -0.002578f;
    data->d[14] = 2.741094f;
    data->d[15] = 2.428216f;
    data->d[16] = -1.479443f;
    data->d[17] = -0.105765f;
    data->d[18] = -0.481116f;
    data->d[19] = -0.118132f;
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
    *result->MinResult(1) = 0.000000f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.036714f;
    data->d[1] = -0.581280f;
    data->d[2] = 0.000000f;
    data->d[3] = 0.410114f;
    data->d[4] = 0.221833f;
    data->d[5] = -0.296246f;
    data->d[6] = -1.879203f;
    data->d[7] = 0.331844f;
    data->d[8] = 0.957236f;
    data->d[9] = 6.072854f;
    data->d[10] = -3.773373f;
    data->d[11] = 0.020613f;
    data->d[12] = 12.208789f;
    data->d[13] = 0.005178f;
    data->d[14] = 0.963203f;
    data->d[15] = 3.257668f;
    data->d[16] = 0.932834f;
    data->d[17] = -0.253086f;
    data->d[18] = 0.064865f;
    data->d[19] = 0.523599f;
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
    *result->MinResult(2) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000001f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings

    LoadSettings(settings)
    state.InitState(settings)
    LoadProgram(state.m_program)
    LoadResult(state)
    state.m_generation = 66;
    state.m_bestIndex = 56737;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
