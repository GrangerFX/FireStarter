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
    settings.m_seed = 10484;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 9);
    instructions->SetOperation(4, 1, 29);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 0, 31);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 21);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 31);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -3.141587f;
    data->d[1] = -0.137271f;
    data->d[2] = -0.677007f;
    data->d[3] = 3.768199f;
    data->d[4] = -1.060682f;
    data->d[5] = -0.991456f;
    data->d[6] = 0.160369f;
    data->d[7] = 0.910915f;
    data->d[8] = 0.191844f;
    data->d[9] = -1.706994f;
    data->d[10] = 2.468028f;
    data->d[11] = 1.639217f;
    data->d[12] = 0.576698f;
    data->d[13] = 0.851702f;
    data->d[14] = -4.690389f;
    data->d[15] = 0.443814f;
    data->d[16] = 0.080234f;
    data->d[17] = 1.048385f;
    data->d[18] = -0.451919f;
    data->d[19] = -0.000006f;
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
    *result->MinResult(0) = 0.000012f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -3.090656f;
    data->d[1] = -0.568976f;
    data->d[2] = -0.014302f;
    data->d[3] = 1.352042f;
    data->d[4] = 1.103356f;
    data->d[5] = -0.956355f;
    data->d[6] = -0.632445f;
    data->d[7] = 1.663948f;
    data->d[8] = -0.201849f;
    data->d[9] = 1.110837f;
    data->d[10] = 0.679852f;
    data->d[11] = -0.908997f;
    data->d[12] = 0.650247f;
    data->d[13] = -0.082647f;
    data->d[14] = 1.401140f;
    data->d[15] = -0.453386f;
    data->d[16] = -2.080801f;
    data->d[17] = -1.776807f;
    data->d[18] = 0.311047f;
    data->d[19] = -0.118131f;
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
    *result->MinResult(1) = 0.000005f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -2.617987f;
    data->d[1] = -0.423971f;
    data->d[2] = 0.053732f;
    data->d[3] = -1.844816f;
    data->d[4] = 0.381519f;
    data->d[5] = 0.857525f;
    data->d[6] = -2.149367f;
    data->d[7] = 0.509932f;
    data->d[8] = 1.080789f;
    data->d[9] = 1.462446f;
    data->d[10] = -0.889087f;
    data->d[11] = -2.697402f;
    data->d[12] = 4.090013f;
    data->d[13] = 0.049224f;
    data->d[14] = -2.025902f;
    data->d[15] = 0.657881f;
    data->d[16] = -1.483862f;
    data->d[17] = -2.149194f;
    data->d[18] = -3.444718f;
    data->d[19] = 0.523588f;
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
    *result->MinResult(2) = 0.000018f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000018f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 21;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
