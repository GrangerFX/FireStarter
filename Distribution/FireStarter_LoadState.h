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
    settings.m_units = 2;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 1, 11);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 1, 26);
    instructions->SetOperation(6, 1, 21);
    instructions->SetOperation(7, 0, 11);
    instructions->SetOperation(8, 1, 29);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 29);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 1, 30);
    instructions->SetOperation(31, 0, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.138839f;
    data->d[1] = -1.628877f;
    data->d[2] = -1.034907f;
    data->d[3] = -0.237724f;
    data->d[4] = 0.858933f;
    data->d[5] = -2.672421f;
    data->d[6] = -0.246168f;
    data->d[7] = -0.019970f;
    data->d[8] = -1.091030f;
    data->d[9] = -1.044433f;
    data->d[10] = -0.152313f;
    data->d[11] = 0.802816f;
    data->d[12] = -1.620654f;
    data->d[13] = 2.149410f;
    data->d[14] = 14.295518f;
    data->d[15] = -0.995180f;
    data->d[16] = 0.025748f;
    data->d[17] = 1.185828f;
    data->d[18] = -0.153882f;
    data->d[19] = -0.086498f;
    data->d[20] = -0.060655f;
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
    *(result->MinResult()) = 0.000125f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.030844f;
    data->d[1] = -0.671572f;
    data->d[2] = -0.317702f;
    data->d[3] = -1.557055f;
    data->d[4] = 1.439042f;
    data->d[5] = 0.470230f;
    data->d[6] = -2.590411f;
    data->d[7] = -0.041496f;
    data->d[8] = 1.054460f;
    data->d[9] = -1.454938f;
    data->d[10] = 0.334350f;
    data->d[11] = 0.401072f;
    data->d[12] = 1.675992f;
    data->d[13] = 0.264544f;
    data->d[14] = -19.003370f;
    data->d[15] = 0.102439f;
    data->d[16] = 0.221835f;
    data->d[17] = 0.482428f;
    data->d[18] = -0.378370f;
    data->d[19] = 1.516971f;
    data->d[20] = -0.110153f;
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
    *(result->MinResult()) = 0.000082f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.619703f;
    data->d[1] = -1.358322f;
    data->d[2] = 0.142552f;
    data->d[3] = -1.519637f;
    data->d[4] = 1.207307f;
    data->d[5] = -0.323711f;
    data->d[6] = 0.612245f;
    data->d[7] = -0.266022f;
    data->d[8] = -1.446396f;
    data->d[9] = -0.254238f;
    data->d[10] = -0.334826f;
    data->d[11] = -0.496541f;
    data->d[12] = -0.342762f;
    data->d[13] = -1.440203f;
    data->d[14] = -1.392514f;
    data->d[15] = -1.469052f;
    data->d[16] = 0.587288f;
    data->d[17] = 0.388029f;
    data->d[18] = 0.825251f;
    data->d[19] = -0.971488f;
    data->d[20] = -1.118055f;
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
    *(result->MinResult()) = 0.000106f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000125f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 92;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 6570303855404584737;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
