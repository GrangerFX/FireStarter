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
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 10;
    settings.m_seed = 0;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 29);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 11);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 1, 27);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 1, 26);
    instructions->SetOperation(29, 1, 29);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -0.413919f;
    data->d[1] = 1.231985f;
    data->d[2] = -3.314147f;
    data->d[3] = -2.235701f;
    data->d[4] = -8.563160f;
    data->d[5] = 0.000046f;
    data->d[6] = -0.132017f;
    data->d[7] = -0.013845f;
    data->d[8] = 1.105529f;
    data->d[9] = 1.796931f;
    data->d[10] = -0.545983f;
    data->d[11] = -5.640214f;
    data->d[12] = -0.942069f;
    data->d[13] = 7.085938f;
    data->d[14] = 2.708391f;
    data->d[15] = -0.024330f;
    data->d[16] = -0.296594f;
    data->d[17] = 1.236061f;
    data->d[18] = -0.060274f;
    data->d[19] = -0.020026f;
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
    *result->MinResult(0) = 0.000494f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = 1.550279f;
    data->d[1] = -5.113538f;
    data->d[2] = -0.204501f;
    data->d[3] = -0.036718f;
    data->d[4] = 9.263894f;
    data->d[5] = 0.003325f;
    data->d[6] = -3.173467f;
    data->d[7] = 2.490996f;
    data->d[8] = 8.825733f;
    data->d[9] = -0.113050f;
    data->d[10] = -3.927236f;
    data->d[11] = 7.845266f;
    data->d[12] = -0.588037f;
    data->d[13] = -0.338288f;
    data->d[14] = -0.285031f;
    data->d[15] = -0.081455f;
    data->d[16] = 0.903405f;
    data->d[17] = 0.080696f;
    data->d[18] = -0.207135f;
    data->d[19] = -0.221448f;
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
    *result->MinResult(1) = 0.000403f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -0.833377f;
    data->d[1] = 3.300395f;
    data->d[2] = -0.961849f;
    data->d[3] = 0.122754f;
    data->d[4] = -4.360181f;
    data->d[5] = 0.001256f;
    data->d[6] = 0.773553f;
    data->d[7] = 1.105512f;
    data->d[8] = -3.251891f;
    data->d[9] = -0.045454f;
    data->d[10] = 3.845779f;
    data->d[11] = 2.665131f;
    data->d[12] = -1.734133f;
    data->d[13] = 6.532751f;
    data->d[14] = -5.544473f;
    data->d[15] = -0.242768f;
    data->d[16] = -0.111511f;
    data->d[17] = -0.443042f;
    data->d[18] = -0.471690f;
    data->d[19] = -2.443589f;
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
    *result->MinResult(2) = 0.000607f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000607f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 3;
    state.m_index = 0;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
