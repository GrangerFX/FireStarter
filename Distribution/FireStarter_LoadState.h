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
    settings.m_seed = 99;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 16);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 1, 31);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 30);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 1, 18);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 1, 14);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 1, 28);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 0, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.455798f;
    data->d[1] = 0.750384f;
    data->d[2] = -0.296557f;
    data->d[3] = -0.453579f;
    data->d[4] = 5.727234f;
    data->d[5] = -0.040087f;
    data->d[6] = -0.028847f;
    data->d[7] = 1.350390f;
    data->d[8] = 2.546600f;
    data->d[9] = 1.762971f;
    data->d[10] = -2.344841f;
    data->d[11] = -0.048997f;
    data->d[12] = -2.117561f;
    data->d[13] = -0.919459f;
    data->d[14] = -1.480346f;
    data->d[15] = -1.573224f;
    data->d[16] = -0.214742f;
    data->d[17] = -0.033666f;
    data->d[18] = -0.735193f;
    data->d[19] = 1.676434f;
    data->d[20] = 0.116246f;
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
    *(result->MinResult()) = 0.000275f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.151491f;
    data->d[1] = 0.499549f;
    data->d[2] = -0.842710f;
    data->d[3] = 1.189404f;
    data->d[4] = -1.750078f;
    data->d[5] = -0.014535f;
    data->d[6] = 0.702289f;
    data->d[7] = -1.612533f;
    data->d[8] = 0.264336f;
    data->d[9] = -1.553697f;
    data->d[10] = 1.400762f;
    data->d[11] = -0.149405f;
    data->d[12] = -2.827451f;
    data->d[13] = -1.835696f;
    data->d[14] = -2.288381f;
    data->d[15] = -0.587051f;
    data->d[16] = -2.474502f;
    data->d[17] = 0.195104f;
    data->d[18] = 0.298056f;
    data->d[19] = -1.216747f;
    data->d[20] = -0.024622f;
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
    *(result->MinResult()) = 0.000257f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.139219f;
    data->d[1] = 1.262098f;
    data->d[2] = 1.443428f;
    data->d[3] = 0.225115f;
    data->d[4] = 0.426709f;
    data->d[5] = -0.321611f;
    data->d[6] = 1.571347f;
    data->d[7] = 0.692140f;
    data->d[8] = -2.126578f;
    data->d[9] = 4.936857f;
    data->d[10] = -1.622584f;
    data->d[11] = 0.112327f;
    data->d[12] = -5.483285f;
    data->d[13] = 0.495277f;
    data->d[14] = 0.693871f;
    data->d[15] = -0.250892f;
    data->d[16] = -1.268404f;
    data->d[17] = 3.049014f;
    data->d[18] = -0.818618f;
    data->d[19] = -1.793428f;
    data->d[20] = -0.491631f;
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
    *(result->MinResult()) = 0.000312f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000312f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 195;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 5444928730304521417;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
