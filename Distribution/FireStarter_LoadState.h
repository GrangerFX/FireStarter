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
    settings.m_units = 10;
    settings.m_processes = 10;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
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
    instructions->SetOperation(0, 0, 29);
    instructions->SetOperation(1, 1, 24);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 6);
    instructions->SetOperation(5, 1, 7);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 1, 26);
    instructions->SetOperation(11, 1, 19);
    instructions->SetOperation(12, 1, 2);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 0, 3);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 0, 30);
    instructions->SetOperation(19, 1, 23);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 1, 25);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = 0.348821f;
    data->d[1] = -0.261012f;
    data->d[2] = 0.854405f;
    data->d[3] = -0.210543f;
    data->d[4] = 3.611793f;
    data->d[5] = 1.796829f;
    data->d[6] = -1.448301f;
    data->d[7] = 0.873516f;
    data->d[8] = 1.570949f;
    data->d[9] = -1.694497f;
    data->d[10] = -2.056134f;
    data->d[11] = 1.273624f;
    data->d[12] = 0.022561f;
    data->d[13] = 0.024833f;
    data->d[14] = 0.225760f;
    data->d[15] = -0.190636f;
    data->d[16] = 0.800703f;
    data->d[17] = -0.120691f;
    data->d[18] = -0.665458f;
    data->d[19] = 0.409320f;
    data->d[20] = 0.854246f;
    data->d[21] = -1.423042f;
    data->d[22] = 0.550144f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(0) = 0.000059f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -0.663606f;
    data->d[1] = 0.681900f;
    data->d[2] = 0.873562f;
    data->d[3] = 0.626215f;
    data->d[4] = -0.675700f;
    data->d[5] = -1.163161f;
    data->d[6] = -1.016442f;
    data->d[7] = 0.138941f;
    data->d[8] = 1.821805f;
    data->d[9] = 0.626020f;
    data->d[10] = -0.236847f;
    data->d[11] = -1.237904f;
    data->d[12] = -0.656273f;
    data->d[13] = -0.886841f;
    data->d[14] = -2.115771f;
    data->d[15] = 0.833661f;
    data->d[16] = -0.553576f;
    data->d[17] = -2.160224f;
    data->d[18] = -2.269267f;
    data->d[19] = 1.337451f;
    data->d[20] = 1.933733f;
    data->d[21] = 0.721106f;
    data->d[22] = -2.946128f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(1) = 0.000048f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = 1.089462f;
    data->d[1] = -5.920067f;
    data->d[2] = 1.976318f;
    data->d[3] = -0.101107f;
    data->d[4] = -1.217838f;
    data->d[5] = -1.318696f;
    data->d[6] = 1.560660f;
    data->d[7] = -0.561498f;
    data->d[8] = 0.149089f;
    data->d[9] = 1.069039f;
    data->d[10] = 1.325886f;
    data->d[11] = -1.484294f;
    data->d[12] = 0.361427f;
    data->d[13] = -2.024879f;
    data->d[14] = 0.176786f;
    data->d[15] = 0.433977f;
    data->d[16] = 2.756906f;
    data->d[17] = 0.192122f;
    data->d[18] = -1.337847f;
    data->d[19] = -0.245985f;
    data->d[20] = -1.505725f;
    data->d[21] = -0.236422f;
    data->d[22] = -2.486657f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *result->MinResult(2) = 0.000059f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000059f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 48;
    state.m_index = 158;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
