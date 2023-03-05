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
    settings.m_attempts = 32;
    settings.m_seed = 99;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 30);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 0, 30);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 1, 17);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 0, 21);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 22);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 27);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.416677f;
    data->d[1] = -0.214158f;
    data->d[2] = 0.109092f;
    data->d[3] = -0.466533f;
    data->d[4] = 0.347087f;
    data->d[5] = 1.753385f;
    data->d[6] = 0.679584f;
    data->d[7] = 0.499142f;
    data->d[8] = 1.819366f;
    data->d[9] = 0.325219f;
    data->d[10] = 0.298912f;
    data->d[11] = 0.404209f;
    data->d[12] = 0.017672f;
    data->d[13] = -1.663452f;
    data->d[14] = -0.450068f;
    data->d[15] = 1.361565f;
    data->d[16] = -2.307723f;
    data->d[17] = 4.056588f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000284f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.370706f;
    data->d[1] = -1.316234f;
    data->d[2] = -0.109973f;
    data->d[3] = 0.473537f;
    data->d[4] = -0.289320f;
    data->d[5] = 0.917341f;
    data->d[6] = 1.358678f;
    data->d[7] = -1.916125f;
    data->d[8] = 1.785797f;
    data->d[9] = 0.113749f;
    data->d[10] = -1.948915f;
    data->d[11] = -2.705877f;
    data->d[12] = 0.348593f;
    data->d[13] = 0.602307f;
    data->d[14] = -3.615836f;
    data->d[15] = -3.309294f;
    data->d[16] = -0.300231f;
    data->d[17] = 3.916686f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000134f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.516943f;
    data->d[1] = 1.792492f;
    data->d[2] = -0.077838f;
    data->d[3] = -0.853126f;
    data->d[4] = 1.783091f;
    data->d[5] = -2.167670f;
    data->d[6] = -0.971489f;
    data->d[7] = -1.147285f;
    data->d[8] = -0.979911f;
    data->d[9] = -0.534540f;
    data->d[10] = 2.109622f;
    data->d[11] = -0.043780f;
    data->d[12] = 0.253486f;
    data->d[13] = 2.410154f;
    data->d[14] = -1.359508f;
    data->d[15] = -1.529300f;
    data->d[16] = -2.977329f;
    data->d[17] = 0.729114f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000305f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000305f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 27;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 11236648141961122000;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
