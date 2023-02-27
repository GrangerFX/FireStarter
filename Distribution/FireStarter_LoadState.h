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
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 0, 31);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 1, 29);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 31);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 30);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.382619f;
    data->d[1] = -1.202015f;
    data->d[2] = 1.567102f;
    data->d[3] = -0.000101f;
    data->d[4] = -1.403313f;
    data->d[5] = 0.020770f;
    data->d[6] = 2.072938f;
    data->d[7] = -0.732226f;
    data->d[8] = -0.023199f;
    data->d[9] = -1.174627f;
    data->d[10] = 1.830334f;
    data->d[11] = -1.775687f;
    data->d[12] = 2.970654f;
    data->d[13] = -2.592128f;
    data->d[14] = 2.735013f;
    data->d[15] = -0.084732f;
    data->d[16] = -1.834227f;
    data->d[17] = -1.712601f;
    data->d[18] = 0.952587f;
    data->d[19] = 0.759353f;
    data->d[20] = -0.079612f;
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
    *(result->MinResult()) = 0.000017f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.596507f;
    data->d[1] = 1.843598f;
    data->d[2] = 0.993292f;
    data->d[3] = 0.000012f;
    data->d[4] = -0.986771f;
    data->d[5] = -0.012399f;
    data->d[6] = 3.676284f;
    data->d[7] = -0.306106f;
    data->d[8] = 1.932215f;
    data->d[9] = -1.080587f;
    data->d[10] = -0.435344f;
    data->d[11] = 1.528140f;
    data->d[12] = -0.708385f;
    data->d[13] = 0.420391f;
    data->d[14] = -3.190351f;
    data->d[15] = 0.079928f;
    data->d[16] = 0.729274f;
    data->d[17] = 1.293856f;
    data->d[18] = -0.775324f;
    data->d[19] = -0.699480f;
    data->d[20] = 0.652812f;
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
    *(result->MinResult()) = 0.000012f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.588690f;
    data->d[1] = 1.541139f;
    data->d[2] = 0.633855f;
    data->d[3] = 0.000088f;
    data->d[4] = -1.263058f;
    data->d[5] = -0.479271f;
    data->d[6] = -0.282901f;
    data->d[7] = -0.813698f;
    data->d[8] = -1.943896f;
    data->d[9] = -0.295164f;
    data->d[10] = -0.619036f;
    data->d[11] = -1.210799f;
    data->d[12] = -2.275401f;
    data->d[13] = 0.998704f;
    data->d[14] = -0.878099f;
    data->d[15] = -0.858057f;
    data->d[16] = 0.168012f;
    data->d[17] = -0.660148f;
    data->d[18] = 1.435010f;
    data->d[19] = -0.101164f;
    data->d[20] = 0.777291f;
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
    *(result->MinResult()) = 0.000033f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000033f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 78;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 5707706343283237850;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
