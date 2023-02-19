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
    settings.m_seed = 638;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 1, 26);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 20);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 1, 30);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 1, 11);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 23);
    instructions->SetOperation(12, 1, 25);
    instructions->SetOperation(13, 1, 28);
    instructions->SetOperation(14, 1, 0);
    instructions->SetOperation(15, 1, 28);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 0, 19);
    instructions->SetOperation(20, 1, 30);
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 1, 13);
    instructions->SetOperation(23, 1, 26);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 0, 26);
    instructions->SetOperation(31, 1, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.249465f;
    data->d[2] = 0.231913f;
    data->d[3] = 0.807012f;
    data->d[4] = 1.033869f;
    data->d[5] = -0.006237f;
    data->d[6] = -1.510422f;
    data->d[7] = -1.879651f;
    data->d[8] = 2.798544f;
    data->d[9] = -0.561398f;
    data->d[10] = 0.082737f;
    data->d[11] = 0.001316f;
    data->d[12] = 0.516827f;
    data->d[13] = -0.772888f;
    data->d[14] = 3.116719f;
    data->d[15] = 3.786881f;
    data->d[16] = 4.999163f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090661f;
    data->d[1] = -0.264270f;
    data->d[2] = 0.111460f;
    data->d[3] = 5.721100f;
    data->d[4] = 0.969827f;
    data->d[5] = -0.120085f;
    data->d[6] = -0.981744f;
    data->d[7] = -0.499691f;
    data->d[8] = -0.617676f;
    data->d[9] = -0.112634f;
    data->d[10] = 1.561096f;
    data->d[11] = 1.945089f;
    data->d[12] = 0.011930f;
    data->d[13] = -1.859274f;
    data->d[14] = -0.822385f;
    data->d[15] = 4.101560f;
    data->d[16] = 0.122936f;
    data->d[17] = -0.118133f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.525335f;
    data->d[2] = 0.013208f;
    data->d[3] = 0.257058f;
    data->d[4] = 4.942934f;
    data->d[5] = 0.066004f;
    data->d[6] = 2.402426f;
    data->d[7] = 3.376893f;
    data->d[8] = 0.161286f;
    data->d[9] = 0.605653f;
    data->d[10] = 0.588073f;
    data->d[11] = 0.014865f;
    data->d[12] = 1.330731f;
    data->d[13] = 0.500862f;
    data->d[14] = -0.359174f;
    data->d[15] = -7.107716f;
    data->d[16] = 14.763474f;
    data->d[17] = 0.523599f;
    data->d[18] = 0.523761f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));

    state.m_maxResult = 0.000003f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 66;
    state.m_index = 0;
    state.m_test = 638;
    state.m_seed = 9444553363895918462;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
