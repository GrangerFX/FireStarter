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
    settings.m_processes = 16;
    settings.m_population = 69632;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_evolve = FIRESTARTER_EVOLVE_BEST;
    settings.m_attempts = 32;
    settings.m_seed = 3;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 1, 14);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 29);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 17);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 1, 13);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 1, 16);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 18);
    instructions->SetOperation(22, 1, 30);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 26);
    instructions->SetOperation(25, 0, 30);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 1, 9);
    instructions->SetOperation(30, 1, 29);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data(0);
    data->d[0] = -1.203516f;
    data->d[1] = -2.189851f;
    data->d[2] = -2.991487f;
    data->d[3] = -0.740763f;
    data->d[4] = 0.132063f;
    data->d[5] = -0.810996f;
    data->d[6] = 0.085292f;
    data->d[7] = -0.416069f;
    data->d[8] = 0.404337f;
    data->d[9] = -31.538446f;
    data->d[10] = 0.017975f;
    data->d[11] = 1.144864f;
    data->d[12] = -0.471103f;
    data->d[13] = 0.597104f;
    data->d[14] = -0.243942f;
    data->d[15] = 5.185194f;
    data->d[16] = -2.372404f;
    data->d[17] = -0.203004f;
    data->d[18] = -0.116160f;
    data->d[19] = 0.142156f;
    data->d[20] = 0.861299f;
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
    *result->MinResult(0) = 0.000042f;
} // LoadVariation0

inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data(1);
    data->d[0] = -1.806161f;
    data->d[1] = -0.069948f;
    data->d[2] = 0.462467f;
    data->d[3] = -0.006537f;
    data->d[4] = -1.298950f;
    data->d[5] = -2.472298f;
    data->d[6] = -0.649367f;
    data->d[7] = 0.320215f;
    data->d[8] = -1.669235f;
    data->d[9] = -0.643142f;
    data->d[10] = -0.008293f;
    data->d[11] = 0.620966f;
    data->d[12] = 0.722525f;
    data->d[13] = -0.331635f;
    data->d[14] = -0.157922f;
    data->d[15] = -0.893127f;
    data->d[16] = -0.829187f;
    data->d[17] = -0.299238f;
    data->d[18] = -0.038635f;
    data->d[19] = 0.473401f;
    data->d[20] = -0.389219f;
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
    *result->MinResult(1) = 0.000019f;
} // LoadVariation1

inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data(2);
    data->d[0] = -1.156318f;
    data->d[1] = -1.265599f;
    data->d[2] = -0.242532f;
    data->d[3] = 0.138276f;
    data->d[4] = 1.954828f;
    data->d[5] = -0.398192f;
    data->d[6] = -0.293844f;
    data->d[7] = 0.088111f;
    data->d[8] = 0.734550f;
    data->d[9] = -0.579802f;
    data->d[10] = 0.127561f;
    data->d[11] = 0.111357f;
    data->d[12] = -0.317224f;
    data->d[13] = -0.542999f;
    data->d[14] = 0.771376f;
    data->d[15] = 0.821372f;
    data->d[16] = 0.535480f;
    data->d[17] = 0.369803f;
    data->d[18] = 0.844069f;
    data->d[19] = -0.126721f;
    data->d[20] = 0.240895f;
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
    *result->MinResult(2) = 0.000024f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result());
    LoadVariation1(state.Result());
    LoadVariation2(state.Result());

    state.Result()->maxResult = 0.000042f;
} // LoadResult

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadProgram(state.m_program);
    LoadResult(state);
    state.m_generation = 54;
    state.m_index = 3;

    LoadProgram(state.m_program);
    LoadResult(state);
} // LoadState
