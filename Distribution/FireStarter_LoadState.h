#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 11:39:29 Pacific Daylight Time
// Run duration = 2549.564018 seconds
// Run generation = 86
// Run result = 0.00017256
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 24
// Run opcodes = 4

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
    settings.m_registers = 24;
    settings.m_opcodes = 4;

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

// Variation: 0  result = 0.00016320
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.280266f;
    data->d[1] = 0.002590f;
    data->d[2] = 1.741105f;
    data->d[3] = 1.512355f;
    data->d[4] = -0.047046f;
    data->d[5] = -0.021541f;
    data->d[6] = 2.529439f;
    data->d[7] = -0.622221f;
    data->d[8] = 2.438223f;
    data->d[9] = 0.433980f;
    data->d[10] = 2.943961f;
    data->d[11] = 0.762679f;
    data->d[12] = 0.002179f;
    data->d[13] = -0.371469f;
    data->d[14] = -3.826201f;
    data->d[15] = 0.329032f;
    data->d[16] = -0.941625f;
    data->d[17] = -2.399752f;
    data->d[18] = -1.643068f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000109f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = -0.100183f;
    data->d[29] = 0.207416f;
    data->d[30] = 0.657460f;
    data->d[31] = 1.444067f;
    *(result->MinResult()) = 0.000163f;
} // LoadVariation0

// Variation: 1  result = 0.00010943
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.100183f;
    data->d[1] = 0.207416f;
    data->d[2] = 0.657460f;
    data->d[3] = 1.444067f;
    data->d[4] = 0.280283f;
    data->d[5] = -1.518570f;
    data->d[6] = 0.434023f;
    data->d[7] = 1.338277f;
    data->d[8] = -2.850598f;
    data->d[9] = -0.738448f;
    data->d[10] = 2.990499f;
    data->d[11] = 0.122790f;
    data->d[12] = -1.521740f;
    data->d[13] = 0.312116f;
    data->d[14] = 2.836140f;
    data->d[15] = 1.162445f;
    data->d[16] = -1.946624f;
    data->d[17] = 0.871131f;
    data->d[18] = 0.841161f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000173f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.273193f;
    data->d[29] = 0.742471f;
    data->d[30] = -0.049852f;
    data->d[31] = 0.301269f;
    *(result->MinResult()) = 0.000109f;
} // LoadVariation1

// Variation: 2  result = 0.00017256
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.273193f;
    data->d[1] = 0.742471f;
    data->d[2] = -0.049852f;
    data->d[3] = 0.301269f;
    data->d[4] = 1.744595f;
    data->d[5] = -0.368397f;
    data->d[6] = 0.613601f;
    data->d[7] = 1.698601f;
    data->d[8] = 0.432805f;
    data->d[9] = -0.802915f;
    data->d[10] = -3.033187f;
    data->d[11] = 1.153675f;
    data->d[12] = -0.010629f;
    data->d[13] = 0.305866f;
    data->d[14] = 1.414853f;
    data->d[15] = -0.446241f;
    data->d[16] = 0.877786f;
    data->d[17] = -3.975045f;
    data->d[18] = 0.906264f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000003f;
    data->d[27] = -0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000173f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000173f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 16);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 1, 31);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 1, 30);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 0, 23);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 14);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 86;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 2129485666545116068;
} // LoadState
