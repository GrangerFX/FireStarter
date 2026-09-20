#pragma once

#define FIRESTARTER_AUTO            0           // Used to automatically set the mode using CUDA.
#define FIRESTARTER_RANDOM          1           // First result of states random instructions and data.
#define FIRESTARTER_SELECT          2           // Evolve on the CPU. Select best variation on the GPU.
#define FIRESTARTER_EVOLVE_CPU      3           // CPU evolution used to generate actual results.
#define FIRESTARTER_EVOLVE_GPU      4           // GPU evolution used to find faster algorithms.
#define FIRESTARTER_EVOLVE_NEW      5           // GPU evolution experiment using fixed registers.
#define FIRESTARTER_EVOLVE_OPTIMIZE 6           // Optimize a state during evolution.
#define FIRESTARTER_EVOLVE_SINSIM   7           // SinSim code instruction evolution.
#define FIRESTARTER_SINSIM          8           // SinSim mini neural net algorithm for comparison.
#define FIRESTARTER_MONEYMAKER      9           // GPU MoneyMaker evolved share price prediction.
#define FIRESTARTER_MONEYOPTIMIZE   10          // Optimize a previously MoneyMaker evolved state.
#define FIRESTARTER_OPTIMIZE        11          // Optimize a previously evolved state.
#define FIRESTARTER_SPEED_TEST      12          // Speed testing for variations of GPU evolution.
#define FIRESTARTER_SOLUTION        13          // Execute or validate the most recently evolved best state.
#define FIRESTARTER_MODES           14          // Number of modes
