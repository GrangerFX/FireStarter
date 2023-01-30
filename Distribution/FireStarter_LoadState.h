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
    settings.m_units = 8;
    settings.m_processes = 8;
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
    instructions->SetOperation(0, 1, 29);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 1, 20);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 1, 29);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 1, 14);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 1, 27);
    instructions->SetOperation(21, 0, 30);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 0, 31);
    instructions->SetOperation(24, 1, 29);
    instructions->SetOperation(25, 1, 20);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 0, 31);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.814769f;
    data->d[1] = -0.447084f;
    data->d[2] = -1.040280f;
    data->d[3] = -1.497885f;
    data->d[4] = -0.345865f;
    data->d[5] = -1.880694f;
    data->d[6] = -0.907715f;
    data->d[7] = -0.434214f;
    data->d[8] = -1.081687f;
    data->d[9] = -1.079548f;
    data->d[10] = -0.381238f;
    data->d[11] = 2.384577f;
    data->d[12] = -1.315695f;
    data->d[13] = 0.632780f;
    data->d[14] = -1.312443f;
    data->d[15] = -0.534173f;
    data->d[16] = 0.110333f;
    data->d[17] = -1.409948f;
    data->d[18] = 2.901961f;
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
    *(result->MinResult()) = 0.000136f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.163364f;
    data->d[1] = -1.194858f;
    data->d[2] = -0.222231f;
    data->d[3] = -0.329574f;
    data->d[4] = -1.271863f;
    data->d[5] = -0.535680f;
    data->d[6] = -0.720201f;
    data->d[7] = 0.478747f;
    data->d[8] = 0.894540f;
    data->d[9] = -0.710116f;
    data->d[10] = 1.196280f;
    data->d[11] = 1.421879f;
    data->d[12] = -1.450768f;
    data->d[13] = 0.531651f;
    data->d[14] = -0.778142f;
    data->d[15] = 0.841416f;
    data->d[16] = 2.173047f;
    data->d[17] = -0.474798f;
    data->d[18] = 2.071219f;
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
    *(result->MinResult()) = 0.000106f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.021281f;
    data->d[1] = 0.456823f;
    data->d[2] = -2.939961f;
    data->d[3] = -0.514932f;
    data->d[4] = -10.049000f;
    data->d[5] = -0.186398f;
    data->d[6] = -1.226642f;
    data->d[7] = -0.443528f;
    data->d[8] = -0.688151f;
    data->d[9] = -0.877581f;
    data->d[10] = 1.349762f;
    data->d[11] = 0.511452f;
    data->d[12] = 0.458694f;
    data->d[13] = 0.286792f;
    data->d[14] = -3.142503f;
    data->d[15] = 1.594847f;
    data->d[16] = 0.112305f;
    data->d[17] = -1.058938f;
    data->d[18] = 3.677765f;
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
    *(result->MinResult()) = 0.000191f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000191f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 34;
    state.m_index = 6;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
