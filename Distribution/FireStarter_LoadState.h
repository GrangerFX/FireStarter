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
    instructions->SetOperation(0, 1, 29);
    instructions->SetOperation(1, 0, 21);
    instructions->SetOperation(2, 1, 10);
    instructions->SetOperation(3, 1, 13);
    instructions->SetOperation(4, 1, 17);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 1, 28);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 1, 15);
    instructions->SetOperation(10, 1, 31);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 0, 1);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 4);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 1, 4);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 29);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 1, 1);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 9);
    instructions->SetOperation(30, 0, 19);
    instructions->SetOperation(31, 1, 7);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.398920f;
    data->d[1] = 0.268791f;
    data->d[2] = 2.159152f;
    data->d[3] = -1.965874f;
    data->d[4] = 0.771985f;
    data->d[5] = 0.415620f;
    data->d[6] = -1.311727f;
    data->d[7] = 0.069235f;
    data->d[8] = -1.837436f;
    data->d[9] = -2.286618f;
    data->d[10] = 0.371713f;
    data->d[11] = 0.978051f;
    data->d[12] = -1.759367f;
    data->d[13] = -0.174840f;
    data->d[14] = -0.144138f;
    data->d[15] = -1.390776f;
    data->d[16] = 0.374622f;
    data->d[17] = 1.458725f;
    data->d[18] = 1.800810f;
    data->d[19] = -0.481460f;
    data->d[20] = 0.790037f;
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
    *(result->MinResult()) = 0.000047f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.947195f;
    data->d[1] = 0.350050f;
    data->d[2] = 1.279061f;
    data->d[3] = -1.223473f;
    data->d[4] = 1.728063f;
    data->d[5] = -1.557277f;
    data->d[6] = -0.976447f;
    data->d[7] = -0.751602f;
    data->d[8] = -3.757579f;
    data->d[9] = -7.151734f;
    data->d[10] = -0.140877f;
    data->d[11] = -0.119830f;
    data->d[12] = -0.740380f;
    data->d[13] = 4.273987f;
    data->d[14] = -1.955286f;
    data->d[15] = -0.142116f;
    data->d[16] = -4.332128f;
    data->d[17] = -1.241895f;
    data->d[18] = -0.982367f;
    data->d[19] = 1.163751f;
    data->d[20] = -0.695438f;
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
    *(result->MinResult()) = 0.000091f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.776083f;
    data->d[1] = 0.237805f;
    data->d[2] = 0.350177f;
    data->d[3] = -0.540847f;
    data->d[4] = -0.637036f;
    data->d[5] = -1.392311f;
    data->d[6] = 2.019798f;
    data->d[7] = -0.200199f;
    data->d[8] = -1.390882f;
    data->d[9] = -2.381100f;
    data->d[10] = 0.754608f;
    data->d[11] = 1.355710f;
    data->d[12] = -0.422568f;
    data->d[13] = -0.498801f;
    data->d[14] = -0.471844f;
    data->d[15] = 1.773985f;
    data->d[16] = 0.643369f;
    data->d[17] = 0.658336f;
    data->d[18] = 0.931953f;
    data->d[19] = 0.694414f;
    data->d[20] = -0.078498f;
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
    *(result->MinResult()) = 0.000096f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000096f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 192;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 2419966525338703693;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
