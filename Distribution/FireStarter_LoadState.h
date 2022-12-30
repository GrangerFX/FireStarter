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
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 400;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 10484;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 28);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 29);
    instructions->SetOperation(5, 0, 9);
    instructions->SetOperation(6, 0, 28);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 1, 21);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 1, 31);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 1, 20);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 1, 22);
    instructions->SetOperation(24, 0, 10);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 7);
    instructions->SetOperation(31, 0, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.056608f;
    data->d[1] = 2.964120f;
    data->d[2] = 1.755574f;
    data->d[3] = -0.440248f;
    data->d[4] = 0.586257f;
    data->d[5] = -1.608119f;
    data->d[6] = -1.072440f;
    data->d[7] = -7.778950f;
    data->d[8] = -0.013943f;
    data->d[9] = 1.294269f;
    data->d[10] = 0.259761f;
    data->d[11] = 2.940291f;
    data->d[12] = 1.167734f;
    data->d[13] = 0.169174f;
    data->d[14] = 0.771046f;
    data->d[15] = 0.869584f;
    data->d[16] = 4.259118f;
    data->d[17] = 0.035232f;
    data->d[18] = 1.007317f;
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
    *result->MinResult(0) = 0.000406f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.890108f;
    data->d[1] = 8.255911f;
    data->d[2] = 1.186011f;
    data->d[3] = 0.500107f;
    data->d[4] = 0.891181f;
    data->d[5] = 0.000352f;
    data->d[6] = -9.890863f;
    data->d[7] = 2.391315f;
    data->d[8] = 5.903541f;
    data->d[9] = -3.231980f;
    data->d[10] = -2.494494f;
    data->d[11] = -4.161912f;
    data->d[12] = -0.914412f;
    data->d[13] = -5.947692f;
    data->d[14] = 5.406288f;
    data->d[15] = 3.245506f;
    data->d[16] = -0.611888f;
    data->d[17] = 4.374847f;
    data->d[18] = -6.027526f;
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
    *result->MinResult(1) = 0.852274f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.152207f;
    data->d[1] = 1.925462f;
    data->d[2] = -0.547605f;
    data->d[3] = 1.738180f;
    data->d[4] = -1.398633f;
    data->d[5] = -2.028015f;
    data->d[6] = 0.595876f;
    data->d[7] = -0.140958f;
    data->d[8] = -0.594334f;
    data->d[9] = 0.516758f;
    data->d[10] = 0.194096f;
    data->d[11] = 1.373630f;
    data->d[12] = -0.077452f;
    data->d[13] = -0.047558f;
    data->d[14] = 2.476355f;
    data->d[15] = -1.202789f;
    data->d[16] = -1.313911f;
    data->d[17] = -0.416816f;
    data->d[18] = 2.274941f;
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
    *result->MinResult(2) = 0.001360f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.852274f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 0;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
