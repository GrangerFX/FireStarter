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

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 34816;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 1;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 31);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 1, 22);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 31);
    instructions->SetOperation(24, 1, 31);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 0, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.476961f;
    data->d[1] = -1.167079f;
    data->d[2] = -2.408368f;
    data->d[3] = 0.332780f;
    data->d[4] = 0.612300f;
    data->d[5] = 0.160120f;
    data->d[6] = 5.203110f;
    data->d[7] = 0.778981f;
    data->d[8] = -0.482722f;
    data->d[9] = -0.751487f;
    data->d[10] = 0.212920f;
    data->d[11] = -0.083035f;
    data->d[12] = 0.915597f;
    data->d[13] = -0.192240f;
    data->d[14] = 0.658268f;
    data->d[15] = 3.345397f;
    data->d[16] = -0.647914f;
    data->d[17] = -8.584152f;
    data->d[18] = -2.595487f;
    data->d[19] = 3.546984f;
    data->d[20] = -2.383957f;
    data->d[21] = -3.492156f;
    data->d[22] = -0.550446f;
    data->d[23] = -0.637503f;
    data->d[24] = 0.121509f;
    data->d[25] = -0.381838f;
    data->d[26] = 2.295975f;
    data->d[27] = -0.803107f;
    data->d[28] = 0.355800f;
    data->d[29] = 0.740349f;
    data->d[30] = 7.228129f;
    data->d[31] = -0.019503f;
    *result->MinResult(0) = 0.028615f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 0.956261f;
    data->d[1] = -0.575965f;
    data->d[2] = 0.206099f;
    data->d[3] = 1.093520f;
    data->d[4] = 0.081654f;
    data->d[5] = -0.944778f;
    data->d[6] = 0.593330f;
    data->d[7] = -0.477417f;
    data->d[8] = 0.786662f;
    data->d[9] = 0.943735f;
    data->d[10] = 0.533175f;
    data->d[11] = -0.562712f;
    data->d[12] = 0.526742f;
    data->d[13] = 0.505831f;
    data->d[14] = 0.294782f;
    data->d[15] = -0.373480f;
    data->d[16] = 2.371882f;
    data->d[17] = 0.528355f;
    data->d[18] = 0.214389f;
    data->d[19] = 0.816760f;
    data->d[20] = -0.640875f;
    data->d[21] = 0.155528f;
    data->d[22] = 1.172440f;
    data->d[23] = 0.110402f;
    data->d[24] = -0.268906f;
    data->d[25] = -0.251227f;
    data->d[26] = -0.423140f;
    data->d[27] = 0.592608f;
    data->d[28] = -0.707754f;
    data->d[29] = 1.251881f;
    data->d[30] = -0.539737f;
    data->d[31] = -0.741492f;
    *result->MinResult(1) = 0.038712f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 0.368521f;
    data->d[1] = 0.159923f;
    data->d[2] = 0.549903f;
    data->d[3] = 0.566386f;
    data->d[4] = -2.181653f;
    data->d[5] = -0.712061f;
    data->d[6] = 0.622027f;
    data->d[7] = 0.206009f;
    data->d[8] = 0.211842f;
    data->d[9] = 0.485832f;
    data->d[10] = -0.513862f;
    data->d[11] = -0.402596f;
    data->d[12] = -1.348100f;
    data->d[13] = 0.149370f;
    data->d[14] = -0.171749f;
    data->d[15] = -0.157935f;
    data->d[16] = 1.366271f;
    data->d[17] = 0.731818f;
    data->d[18] = 0.371784f;
    data->d[19] = -0.329764f;
    data->d[20] = -0.598526f;
    data->d[21] = 0.015234f;
    data->d[22] = 0.835134f;
    data->d[23] = 0.432119f;
    data->d[24] = 0.293830f;
    data->d[25] = -0.007824f;
    data->d[26] = -0.721605f;
    data->d[27] = -0.931835f;
    data->d[28] = -0.875448f;
    data->d[29] = -0.203752f;
    data->d[30] = 0.080939f;
    data->d[31] = 0.533882f;
    *result->MinResult(2) = 0.036603f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.038712f;
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
