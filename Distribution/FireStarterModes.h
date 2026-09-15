#pragma once

#define FIRESTARTER_AUTO            0           // Used to automatically set the mode using CUDA.
#define FIRESTARTER_RANDOM          1           // First result of states random instructions and data.
#define FIRESTARTER_SELECT          2           // Evolve on the CPU. Select best variation on the GPU.
#define FIRESTARTER_EVOLVE_CPU      3           // CPU evolution used to generate actual results.
#define FIRESTARTER_EVOLVE_GPU      4           // GPU evolution used to find faster algorithms.
#define FIRESTARTER_EVOLVE_NEW      5           // GPU new evolution.
#define FIRESTARTER_EVOLVE_SINSIM   6           // SinSim evolution.
#define FIRESTARTER_SINSIM          7           // SinSim mini neural net algorithm for comparison.
#define FIRESTARTER_MONEYMAKER      8           // GPU MoneyMaker evolved share price prediction.
#define FIRESTARTER_MONEYOPTIMIZE   9           // Optimize a previously MoneyMaker evolved state.
#define FIRESTARTER_OPTIMIZE        10          // Optimize a previously evolved state.
#define FIRESTARTER_SPEED_TEST      11          // Speed testing for variations of GPU evolution.
#define FIRESTARTER_SOLUTION        12          // Execute or validate the most recently evolved best state.
#define FIRESTARTER_MODES           13          // Number of modes
