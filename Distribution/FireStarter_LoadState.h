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
    settings.m_process = 0;
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
    program.m_dataSize = 24;
    program.m_maxRegisters = 7;

    program.m_registers.resize(24);
    program.m_registers[0] = {0, 0, 0, 0};
    program.m_registers[1] = {1, 0, 1, 24};
    program.m_registers[2] = {2, 1, 2, 27};
    program.m_registers[3] = {3, 2, 3, 19};
    program.m_registers[4] = {4, 3, 4, 20};
    program.m_registers[5] = {5, 5, 5, 5};
    program.m_registers[6] = {6, 4, 6, 26};
    program.m_registers[7] = {7, 5, 7, 28};
    program.m_registers[8] = {8, 6, 8, 11};
    program.m_registers[9] = {9, 9, 9, 9};
    program.m_registers[10] = {10, 10, 10, 10};
    program.m_registers[11] = {11, 11, 12, 12};
    program.m_registers[12] = {12, 12, 14, 14};
    program.m_registers[13] = {13, 13, 15, 15};
    program.m_registers[14] = {14, 14, 16, 16};
    program.m_registers[15] = {15, 15, 17, 17};
    program.m_registers[16] = {16, 16, 18, 18};
    program.m_registers[17] = {17, 17, 21, 21};
    program.m_registers[18] = {18, 18, 22, 22};
    program.m_registers[19] = {19, 19, 23, 23};
    program.m_registers[20] = {20, 20, 25, 25};
    program.m_registers[21] = {21, 21, 29, 29};
    program.m_registers[22] = {22, 22, 30, 30};
    program.m_registers[23] = {23, 23, 31, 31};

    FireStarterInstructions* instructions = program.Instructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 1, 6);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 0, 23);
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 1.272419f;
    data->d[1] = 0.188073f;
    data->d[2] = 0.685046f;
    data->d[3] = 0.358343f;
    data->d[4] = -0.406776f;
    data->d[5] = -0.450651f;
    data->d[6] = 0.686832f;
    data->d[7] = -0.750774f;
    data->d[8] = -0.696466f;
    data->d[9] = 1.047239f;
    data->d[10] = -1.262317f;
    data->d[11] = 2.022084f;
    data->d[12] = 1.381186f;
    data->d[13] = 0.878770f;
    data->d[14] = 0.345326f;
    data->d[15] = -1.159260f;
    data->d[16] = -0.844372f;
    data->d[17] = 0.632832f;
    data->d[18] = -0.044722f;
    data->d[19] = -0.702703f;
    data->d[20] = 0.696630f;
    data->d[21] = 0.978553f;
    data->d[22] = -0.609522f;
    data->d[23] = 0.259794f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000731f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 2.016825f;
    data->d[1] = 0.305823f;
    data->d[2] = 0.465317f;
    data->d[3] = -0.793642f;
    data->d[4] = 0.519988f;
    data->d[5] = -0.584432f;
    data->d[6] = -0.159354f;
    data->d[7] = -1.300816f;
    data->d[8] = 0.529910f;
    data->d[9] = -0.880310f;
    data->d[10] = 1.038599f;
    data->d[11] = -1.164239f;
    data->d[12] = -1.075096f;
    data->d[13] = 0.960915f;
    data->d[14] = -0.928287f;
    data->d[15] = -0.876129f;
    data->d[16] = -0.273066f;
    data->d[17] = 1.563163f;
    data->d[18] = -0.097862f;
    data->d[19] = 0.989042f;
    data->d[20] = 1.394353f;
    data->d[21] = 0.684795f;
    data->d[22] = -0.744189f;
    data->d[23] = 0.524147f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000071f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.133862f;
    data->d[1] = 0.854895f;
    data->d[2] = -0.433211f;
    data->d[3] = -0.378660f;
    data->d[4] = -0.287503f;
    data->d[5] = 0.839271f;
    data->d[6] = -0.976472f;
    data->d[7] = 1.333758f;
    data->d[8] = -2.427996f;
    data->d[9] = -1.186916f;
    data->d[10] = 0.987677f;
    data->d[11] = -0.770781f;
    data->d[12] = -6.947898f;
    data->d[13] = 0.358981f;
    data->d[14] = -2.686833f;
    data->d[15] = -3.026485f;
    data->d[16] = 0.017240f;
    data->d[17] = 1.114013f;
    data->d[18] = 0.048014f;
    data->d[19] = -2.131155f;
    data->d[20] = -0.328087f;
    data->d[21] = -1.444733f;
    data->d[22] = -1.835778f;
    data->d[23] = 0.338495f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.001261f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.001261f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    state.m_generation = 1400;
    state.m_seed = 3232321350;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
