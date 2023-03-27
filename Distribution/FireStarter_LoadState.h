#pragma once
#include "FireStarterState.h"

// Run date: 03/26/23 22:21:28 Pacific Daylight Time
// Run duration = 1929.965570 seconds
// Run generation = 68
// Run result = 0.00014508
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00008985
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.762063f;
    data->d[1] = 0.559374f;
    data->d[2] = -1.227991f;
    data->d[3] = -0.492215f;
    data->d[4] = -0.785140f;
    data->d[5] = 0.268973f;
    data->d[6] = -0.804240f;
    data->d[7] = -0.059003f;
    data->d[8] = -1.893164f;
    data->d[9] = -0.934280f;
    data->d[10] = 0.321108f;
    data->d[11] = -3.165507f;
    data->d[12] = -0.053042f;
    data->d[13] = 3.232544f;
    data->d[14] = 0.803333f;
    data->d[15] = -1.690464f;
    data->d[16] = 0.036415f;
    data->d[17] = 0.448420f;
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
    *(result->MinResult()) = 0.000090f;
} // LoadVariation0

// Variation: 1  result = 0.00014508
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.534323f;
    data->d[1] = -0.166205f;
    data->d[2] = 0.435877f;
    data->d[3] = 0.802349f;
    data->d[4] = -0.148481f;
    data->d[5] = 0.912344f;
    data->d[6] = -0.811424f;
    data->d[7] = -1.409741f;
    data->d[8] = -1.813484f;
    data->d[9] = 2.671179f;
    data->d[10] = -0.154547f;
    data->d[11] = -0.169463f;
    data->d[12] = -3.330941f;
    data->d[13] = -0.516126f;
    data->d[14] = -2.299603f;
    data->d[15] = -4.401622f;
    data->d[16] = -0.536295f;
    data->d[17] = 0.005217f;
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
    *(result->MinResult()) = 0.000145f;
} // LoadVariation1

// Variation: 2  result = 0.00010097
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.601805f;
    data->d[1] = -0.434161f;
    data->d[2] = 0.753672f;
    data->d[3] = 0.541032f;
    data->d[4] = -0.147337f;
    data->d[5] = -0.361505f;
    data->d[6] = 0.809487f;
    data->d[7] = 0.542925f;
    data->d[8] = 0.326177f;
    data->d[9] = -0.822322f;
    data->d[10] = -0.668210f;
    data->d[11] = -0.725886f;
    data->d[12] = -0.045504f;
    data->d[13] = 1.003704f;
    data->d[14] = -0.476453f;
    data->d[15] = 2.886895f;
    data->d[16] = -0.240129f;
    data->d[17] = 0.955169f;
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
    *(result->MinResult()) = 0.000101f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000145f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 1, 14);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 1, 30);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 14);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 17);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 1, 26);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 29);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 30);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 68;
    state.m_index = 0;
    state.m_test = 98;
    state.m_seed = 11937303671289075359;
} // LoadState
