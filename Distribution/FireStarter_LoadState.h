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
    settings.m_attempts = 8;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 27);
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
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 1, 17);
    instructions->SetOperation(20, 1, 23);
    instructions->SetOperation(21, 1, 21);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.720528f;
    data->d[1] = 0.555904f;
    data->d[2] = -0.102253f;
    data->d[3] = -1.925990f;
    data->d[4] = 1.555575f;
    data->d[5] = 0.215052f;
    data->d[6] = -0.882132f;
    data->d[7] = 0.515644f;
    data->d[8] = 0.023628f;
    data->d[9] = -0.932964f;
    data->d[10] = -0.396934f;
    data->d[11] = 0.997215f;
    data->d[12] = 0.805372f;
    data->d[13] = -0.376992f;
    data->d[14] = 0.685282f;
    data->d[15] = -0.891428f;
    data->d[16] = -0.214917f;
    data->d[17] = 0.352651f;
    data->d[18] = -0.535468f;
    data->d[19] = 1.647949f;
    data->d[20] = 0.134378f;
    data->d[21] = -0.054692f;
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
    *result->MinResult(0) = 0.000001f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.522565f;
    data->d[1] = -0.184760f;
    data->d[2] = -0.216969f;
    data->d[3] = 0.945650f;
    data->d[4] = 0.795102f;
    data->d[5] = -0.720548f;
    data->d[6] = 0.290302f;
    data->d[7] = 0.640430f;
    data->d[8] = 0.247834f;
    data->d[9] = -1.261185f;
    data->d[10] = -0.093986f;
    data->d[11] = 0.505084f;
    data->d[12] = -0.381807f;
    data->d[13] = 0.069220f;
    data->d[14] = 2.348794f;
    data->d[15] = 1.938002f;
    data->d[16] = -0.431724f;
    data->d[17] = -2.363804f;
    data->d[18] = 2.003448f;
    data->d[19] = -0.010821f;
    data->d[20] = -0.985590f;
    data->d[21] = 0.860731f;
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
    *result->MinResult(1) = 0.000054f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.985137f;
    data->d[1] = 0.579219f;
    data->d[2] = -0.395223f;
    data->d[3] = 1.933718f;
    data->d[4] = -0.173702f;
    data->d[5] = 2.156496f;
    data->d[6] = 0.348677f;
    data->d[7] = 0.047274f;
    data->d[8] = 0.755532f;
    data->d[9] = -2.748764f;
    data->d[10] = -0.618692f;
    data->d[11] = -0.446033f;
    data->d[12] = 0.529989f;
    data->d[13] = 0.743795f;
    data->d[14] = 0.525757f;
    data->d[15] = -0.123222f;
    data->d[16] = 0.786999f;
    data->d[17] = -0.833707f;
    data->d[18] = 0.864847f;
    data->d[19] = -0.562903f;
    data->d[20] = -0.344968f;
    data->d[21] = 0.587411f;
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
    *result->MinResult(2) = 0.000294f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000294f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 1;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
