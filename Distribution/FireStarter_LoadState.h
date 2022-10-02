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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 69632;
    settings.m_iterations = 512;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 256;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterSettings settings;
    LoadSettings(settings);
    program.InitProgram(settings);
    program.m_dataSize = 19;
    program.m_maxRegisters = 6;

    program.m_registers.resize(19);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 6};
    program.m_registers[2] = {2, 1, 2, 23};
    program.m_registers[3] = {3, 2, 3, 27};
    program.m_registers[4] = {4, 3, 4, 24};
    program.m_registers[5] = {5, 5, 7, 7};
    program.m_registers[6] = {6, 6, 9, 9};
    program.m_registers[7] = {7, 0, 10, 28};
    program.m_registers[8] = {8, 8, 11, 11};
    program.m_registers[9] = {9, 4, 13, 26};
    program.m_registers[10] = {10, 10, 14, 14};
    program.m_registers[11] = {11, 11, 15, 15};
    program.m_registers[12] = {12, 12, 16, 16};
    program.m_registers[13] = {13, 5, 18, 25};
    program.m_registers[14] = {14, 14, 21, 21};
    program.m_registers[15] = {15, 15, 22, 22};
    program.m_registers[16] = {16, 16, 29, 29};
    program.m_registers[17] = {17, 17, 30, 30};
    program.m_registers[18] = {18, 18, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 4);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 0, 18);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.994072f;
    data->d[1] = -0.227327f;
    data->d[2] = 0.709934f;
    data->d[3] = -0.181107f;
    data->d[4] = -0.586267f;
    data->d[5] = -0.182126f;
    data->d[6] = -0.834780f;
    data->d[7] = -0.774784f;
    data->d[8] = 2.371464f;
    data->d[9] = -0.393884f;
    data->d[10] = 0.415441f;
    data->d[11] = -0.634941f;
    data->d[12] = -0.935259f;
    data->d[13] = 0.737015f;
    data->d[14] = 0.066344f;
    data->d[15] = 0.952912f;
    data->d[16] = 0.871606f;
    data->d[17] = -0.000000f;
    data->d[18] = -1.391816f;
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
    *result->MinResult(0) = 0.000002f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.506053f;
    data->d[1] = -0.227703f;
    data->d[2] = 1.059889f;
    data->d[3] = -0.188812f;
    data->d[4] = -1.002609f;
    data->d[5] = -0.239767f;
    data->d[6] = 2.398613f;
    data->d[7] = -1.007435f;
    data->d[8] = 0.865817f;
    data->d[9] = 0.299098f;
    data->d[10] = -0.303483f;
    data->d[11] = 0.041083f;
    data->d[12] = 0.952446f;
    data->d[13] = 1.040475f;
    data->d[14] = 0.339839f;
    data->d[15] = -1.781697f;
    data->d[16] = 0.728271f;
    data->d[17] = -4.310475f;
    data->d[18] = 0.027405f;
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
    *result->MinResult(1) = 0.000001f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.405585f;
    data->d[1] = -0.508024f;
    data->d[2] = -0.539438f;
    data->d[3] = -0.879306f;
    data->d[4] = 0.007115f;
    data->d[5] = -0.559842f;
    data->d[6] = -5.160090f;
    data->d[7] = -1.378743f;
    data->d[8] = 0.044330f;
    data->d[9] = 0.291897f;
    data->d[10] = 0.117329f;
    data->d[11] = -3.709573f;
    data->d[12] = -0.098820f;
    data->d[13] = -0.897387f;
    data->d[14] = -0.088507f;
    data->d[15] = 1.055097f;
    data->d[16] = -1.583019f;
    data->d[17] = 1.016501f;
    data->d[18] = 0.515065f;
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
    *result->MinResult(2) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000002f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 26;
    state.m_bestIndex = 44916;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
