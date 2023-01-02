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
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 31);
    instructions->SetOperation(1, 1, 29);
    instructions->SetOperation(2, 1, 19);
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
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.691061f;
    data->d[1] = -1.140242f;
    data->d[2] = -1.310164f;
    data->d[3] = -0.839179f;
    data->d[4] = 0.838952f;
    data->d[5] = -9.869770f;
    data->d[6] = 6.124785f;
    data->d[7] = -0.005460f;
    data->d[8] = 1.153808f;
    data->d[9] = 0.604943f;
    data->d[10] = 0.047821f;
    data->d[11] = 3.068470f;
    data->d[12] = -0.554154f;
    data->d[13] = -5.953751f;
    data->d[14] = 3.175782f;
    data->d[15] = 0.028265f;
    data->d[16] = 0.288328f;
    data->d[17] = -0.275363f;
    data->d[18] = -1.997157f;
    data->d[19] = -0.004069f;
    data->d[20] = -0.034218f;
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
    *result->MinResult(0) = 0.000065f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.463185f;
    data->d[1] = 1.129695f;
    data->d[2] = -2.756716f;
    data->d[3] = 0.632374f;
    data->d[4] = -0.633162f;
    data->d[5] = -28.601961f;
    data->d[6] = 22.024437f;
    data->d[7] = 0.007318f;
    data->d[8] = 1.062524f;
    data->d[9] = -1.769810f;
    data->d[10] = -1.184621f;
    data->d[11] = -0.466948f;
    data->d[12] = 0.694895f;
    data->d[13] = 0.403250f;
    data->d[14] = 0.640602f;
    data->d[15] = -0.406475f;
    data->d[16] = 1.004760f;
    data->d[17] = 0.137860f;
    data->d[18] = 0.746826f;
    data->d[19] = 0.702588f;
    data->d[20] = -0.167410f;
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
    *result->MinResult(1) = 0.000083f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.615946f;
    data->d[1] = -1.903130f;
    data->d[2] = 0.901462f;
    data->d[3] = 1.617754f;
    data->d[4] = -1.618579f;
    data->d[5] = -4.983060f;
    data->d[6] = 1.188685f;
    data->d[7] = 0.033621f;
    data->d[8] = 0.549574f;
    data->d[9] = -0.924881f;
    data->d[10] = -0.004372f;
    data->d[11] = -0.852373f;
    data->d[12] = -3.012512f;
    data->d[13] = 2.013230f;
    data->d[14] = 2.970366f;
    data->d[15] = 0.309094f;
    data->d[16] = -3.550676f;
    data->d[17] = -0.014821f;
    data->d[18] = -0.211641f;
    data->d[19] = 1.527958f;
    data->d[20] = 0.343005f;
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
    *result->MinResult(2) = 0.000124f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000124f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 28;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
