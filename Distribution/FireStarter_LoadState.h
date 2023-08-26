#pragma once
#include "FireStarterState.h"

// Run date: 08/26/23 09:34:42 Pacific Daylight Time
// Run duration = 3.264932 seconds
// Run generation = 1
// Run evolution = 1
// Run result = 0.43964040
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_CODE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 17408
// Run iterations = 256
// Run generations = 1
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_CODE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 0;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 17408;
    settings.m_iterations = 256;
    settings.m_generations = 1;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.43964040
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.764312f;
    data->d[1] = 0.654484f;
    data->d[2] = -0.050573f;
    data->d[3] = 0.686745f;
    data->d[4] = 0.226463f;
    data->d[5] = 1.147699f;
    data->d[6] = -0.021866f;
    data->d[7] = 0.243625f;
    data->d[8] = -0.644326f;
    data->d[9] = 0.057718f;
    data->d[10] = 1.004087f;
    data->d[11] = 0.658655f;
    data->d[12] = 0.199323f;
    data->d[13] = 0.217427f;
    data->d[14] = 0.277212f;
    data->d[15] = -0.369744f;
    data->d[16] = -0.937246f;
    data->d[17] = 0.778318f;
    data->d[18] = 0.661115f;
    data->d[19] = -0.660549f;
    data->d[20] = -0.852749f;
    data->d[21] = -0.119887f;
    data->d[22] = 0.037646f;
    data->d[23] = -0.220807f;
    data->d[24] = 0.725177f;
    data->d[25] = -0.494796f;
    data->d[26] = 0.368536f;
    data->d[27] = 0.600409f;
    data->d[28] = 0.982019f;
    *(result->MinResult()) = 0.439640f;
} // LoadVariation0

// Variation: 1  result = 0.24304360
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.550493f;
    data->d[1] = -0.917973f;
    data->d[2] = -1.619701f;
    data->d[3] = 0.215296f;
    data->d[4] = 0.661279f;
    data->d[5] = 0.652002f;
    data->d[6] = 3.601870f;
    data->d[7] = 0.321398f;
    data->d[8] = -0.231679f;
    data->d[9] = -10.864533f;
    data->d[10] = -0.901240f;
    data->d[11] = -0.876861f;
    data->d[12] = 0.944295f;
    data->d[13] = 0.295675f;
    data->d[14] = -0.876135f;
    data->d[15] = 1.077603f;
    data->d[16] = 0.573650f;
    data->d[17] = -0.100908f;
    data->d[18] = 7.034690f;
    data->d[19] = -1.156441f;
    data->d[20] = -0.068972f;
    data->d[21] = -0.131158f;
    data->d[22] = -0.190841f;
    data->d[23] = 0.879115f;
    data->d[24] = 0.871007f;
    data->d[25] = 0.711307f;
    data->d[26] = 0.659298f;
    data->d[27] = -0.951454f;
    data->d[28] = -0.921829f;
    *(result->MinResult()) = 0.243044f;
} // LoadVariation1

// Variation: 2  result = 0.43588528
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -4.133366f;
    data->d[1] = -0.014057f;
    data->d[2] = 2.034422f;
    data->d[3] = -0.195969f;
    data->d[4] = -0.550484f;
    data->d[5] = -0.201300f;
    data->d[6] = 1.281728f;
    data->d[7] = -0.796059f;
    data->d[8] = -0.623223f;
    data->d[9] = -7.400227f;
    data->d[10] = 1.764609f;
    data->d[11] = -0.219434f;
    data->d[12] = -6.933154f;
    data->d[13] = -0.739794f;
    data->d[14] = -11.416261f;
    data->d[15] = -0.337315f;
    data->d[16] = -0.878962f;
    data->d[17] = 0.419129f;
    data->d[18] = 12.979118f;
    data->d[19] = 0.892314f;
    data->d[20] = 10.120349f;
    data->d[21] = -0.214418f;
    data->d[22] = -0.950623f;
    data->d[23] = 4.107496f;
    data->d[24] = -0.829217f;
    data->d[25] = 2.655096f;
    data->d[26] = 0.906323f;
    data->d[27] = -0.063016f;
    data->d[28] = -0.950545f;
    *(result->MinResult()) = 0.435885f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.439640f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 16);
    instructions->SetOperation(1, 1, 17);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 13);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 10);
    instructions->SetOperation(7, 1, 28);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 0, 10);
    instructions->SetOperation(11, 0, 17);
    instructions->SetOperation(12, 1, 1);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 1, 23);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 1, 28);
    instructions->SetOperation(29, 0, 26);
    instructions->SetOperation(30, 0, 10);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1;
    state.m_evolution = 1;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 14685578121578072183;
} // LoadState
