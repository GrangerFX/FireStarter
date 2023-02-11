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
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 128;
    settings.m_seed = 4;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 1);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 27);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 30);
    instructions->SetOperation(15, 0, 7);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 1, 31);
    instructions->SetOperation(20, 0, 21);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 25);
    instructions->SetOperation(23, 0, 30);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 20);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 1, 6);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.885665f;
    data->d[1] = -1.226536f;
    data->d[2] = 0.171152f;
    data->d[3] = -0.682580f;
    data->d[4] = -1.381326f;
    data->d[5] = 1.278103f;
    data->d[6] = 0.996147f;
    data->d[7] = -0.439882f;
    data->d[8] = 1.497435f;
    data->d[9] = 0.852833f;
    data->d[10] = 0.468450f;
    data->d[11] = -0.547793f;
    data->d[12] = -1.001911f;
    data->d[13] = 0.482020f;
    data->d[14] = -2.068772f;
    data->d[15] = 0.151365f;
    data->d[16] = -1.767473f;
    data->d[17] = 3.790503f;
    data->d[18] = 4.133747f;
    data->d[19] = 1.996379f;
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
    *(result->MinResult()) = 0.000112f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.324404f;
    data->d[1] = -0.661655f;
    data->d[2] = -0.717282f;
    data->d[3] = 0.994076f;
    data->d[4] = -1.002005f;
    data->d[5] = 1.944170f;
    data->d[6] = 1.311421f;
    data->d[7] = 1.084285f;
    data->d[8] = -0.298264f;
    data->d[9] = 2.161305f;
    data->d[10] = -0.262641f;
    data->d[11] = -1.144256f;
    data->d[12] = -0.576032f;
    data->d[13] = -0.930812f;
    data->d[14] = -1.300642f;
    data->d[15] = 1.014298f;
    data->d[16] = 0.505581f;
    data->d[17] = -1.486834f;
    data->d[18] = -0.549991f;
    data->d[19] = 1.664468f;
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
    *(result->MinResult()) = 0.000220f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.438917f;
    data->d[1] = 1.350027f;
    data->d[2] = -0.555264f;
    data->d[3] = 0.939352f;
    data->d[4] = 0.893324f;
    data->d[5] = 1.527238f;
    data->d[6] = -0.914049f;
    data->d[7] = 0.630328f;
    data->d[8] = 1.583983f;
    data->d[9] = -0.470105f;
    data->d[10] = 1.108046f;
    data->d[11] = 2.194927f;
    data->d[12] = -2.058597f;
    data->d[13] = -0.050290f;
    data->d[14] = -0.021806f;
    data->d[15] = -0.856008f;
    data->d[16] = 1.080889f;
    data->d[17] = 3.155249f;
    data->d[18] = -8.225710f;
    data->d[19] = -0.938414f;
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
    *(result->MinResult()) = 0.000291f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000291f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 104;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 3191388217692092021;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
