#include "FireStarterStream.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarterSource.h"
#include "FireStarterUtil.h"
#include "FireStarter_LoadState.h"
#include "FireMoneyMaker.h"

void FireStarterStream::RandomStream(void)
{
    // Random creates randomly generated code instructions and then uses one or more Optimize passes to evolve the best register data.
    // The results demonstrate that some random code instructions are far more evolvable than others.
    // This discovery was the basis for the EvolveGPU code evolution method.
    FireStarterSettings randomSettings(FIRESTARTER_RANDOM);
    std::string streamDate = FileNameDate(SimpleTimer::RunSecond());

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute();

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, randomSettings);

    // Loop until the the completion condition or the host program is quit.
    unsigned int tests = MAX(randomSettings.m_tests, 1);
    unsigned int randomTests = randomSettings.m_states * tests;
    for (unsigned int test = 0; (test < randomTests) && !WillTerminate(); test++) {
        // Setup the intial state
        FireStarterSettings evolveSettings(randomSettings);
        evolveSettings.m_evolveSeed = randomSettings.m_evolveSeed + test / tests;
        FireStarterState evolveState(evolveSettings, 0, 0, test % tests, test);
        FireStarterState bestState = FireStarterState(randomSettings, 0, 0, 0, test);

        // Create the best random state.
        evolveState.InitGenerationSeed();

        // Randomize the program.
        evolveState.RandomCode();

        // Optimize the program registers.
        evolveState.OptimizeCode();

        // Compile and execute the random state.
        execute->ExecuteEvolveOptimize(evolveState, bestState, complete);

        // Output the evolve results.
        std::string resultText;
        if (evolveState.Settings().m_states > 1)
            resultText += Format("Seed=%u  ", evolveState.Settings().m_evolveSeed);
        if (evolveState.Settings().m_tests > 1)
            resultText += Format("Test=%u  ", evolveState.m_test);
        resultText += Format("Random Result=%.8f\n", evolveState.MaxResults());
        FireStarterSource::AppendSource(resultText, Format("Logs\\%s_Random_Results.txt", streamDate.c_str()));
    }

    // Delete the completion unit.
    delete complete;

    // Delete the execute unit.
    delete execute;
} // RandomStream

void FireStarterStream::EvolveSelectStream(void)
{
    // Select is an earlier version of EvolveGPU. It attempts to evolve by changing just two or three instructions when the code fails to evolve after a number of generations.
    // EvolveGPU's simpler approach of re-randomizing all the instructions with the goal of finding code with maximum evolvability was more efficient in the end.
    FireStarterSettings selectSettings(FIRESTARTER_EVOLVE_SELECT);
    FireStarterSettings optimizeSettings(FIRESTARTER_EVOLVE_OPTIMIZE);
    unsigned int numStates = selectSettings.m_states;
    std::string streamDate = FileNameDate(SimpleTimer::RunSecond());

    // Create the evolution code generator.
    FireStarterExecute* executeSelect = new FireStarterExecute("SelectStates");

    // Create the evolution execution units.
    FireStarterUnits selectEvolveUnits(selectSettings.m_units, "SelectEvolveUnit");

    // Create the optimization execution unit.
    FireStarterExecute* executeOptimize = new FireStarterExecute("OptimizeCPU");

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, selectSettings);

    // Loop until the the evolve completion condition or the host program is quit.
    unsigned long long evolveTests = MAX(selectSettings.m_tests, 1);
    for (unsigned long long t = 0; (t < evolveTests) && !WillTerminate(); t++) {
        // Initialize the states.
        FireStarterStates states(numStates);
        FireStarterStates allStates;
        unsigned long long test = FIRESTARTER_START_TEST + t;
        FireStarterState bestEvolveState = FireStarterState(selectSettings, 0, 0, 0, test);

        // Keep track of the tested instructions so they don't get generated again.
        TestedCodes testedCodes;

        // Evolve the current test.
        unsigned long long generation = 0;
        while (!WillTerminate()) {
            // Evolve a new generation.
            executeSelect->ExecuteSelectStates(test, selectSettings, optimizeSettings, states, allStates, testedCodes, generation);

            // Execute each state using one of the evolution execution units.
            // Note: ExecuteEvolveOptimize must be async because the compiles come back out of order.
            bestEvolveState.m_age++;
            selectEvolveUnits.ExecuteEvolveOptimize(states, bestEvolveState, complete);

            // Store the valid results from the current set of states in the list of all states.
            for (unsigned int i = 0; i < numStates; i++) {
                FireStarterState& newState = states[i];
                if (newState.m_optimizeValid) {
                    // Replace the old state with the new state if it improved.
                    FireStarterState& oldState = allStates[newState.m_id];
                    if (newState.MaxResults() < oldState.MaxResults()) {
                        newState.m_generation = oldState.m_generation + 1;
                        newState.m_age = 1;
                        oldState = newState;
                    }
                }
            }

            // Increment the generation.
            generation++;
            if ((generation == selectSettings.m_generations) || bestEvolveState.Complete())
                break;
        }

        // Optimize the best state.
        if (!WillTerminate() && !allStates.empty()) {
            // Output the evolve results.
            std::string resultText = Format("Duration: %6.1f  Average: %6.1f  Seed=%u  Test=%3u  Generation=%3u  Best Generations=%3u  Evolutions=%3u  Evolve Result=%.8f", bestEvolveState.Duration(), SimpleTimer::RunDuration() / (t + 1), bestEvolveState.Settings().m_evolveSeed, test, generation, bestEvolveState.m_generation, bestEvolveState.m_evolution, bestEvolveState.MaxResults());

            // Optimize the evolved state.
            if (selectSettings.m_optimize) {
                FireStarterState optimizeState(bestEvolveState);
                optimizeState.Settings() = optimizeSettings;
                FireStarterState optimizeBestState(optimizeState);

                // Generate the optimize code.
                if (executeOptimize->ExecuteGenerateOptimize(optimizeState)) {
                    // Loop until the the optimize completion condition or the host program is quit.
                    while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize) && !optimizeBestState.Complete()) {
                        // Optimize the current generation.
                        executeOptimize->ExecuteOptimize(optimizeState);

                        // Update the results in the UI and check for completion.
                        complete->CompleteState(optimizeBestState, optimizeState);

                        // Increment the generation.
                        optimizeState.m_optimize_pass++;
                    }

                    // Output the optimize results.
                    if (!WillTerminate()) {
                        resultText += Format("  Optimize Result=%.8f", optimizeState.MaxResults());
                        if ((bestEvolveState.MaxResults() > selectSettings.m_target) && (optimizeState.MaxResults() <= selectSettings.m_target))
                            resultText += " *";
                    }
                }
            }

            if ((bestEvolveState.MaxResults() <= selectSettings.m_target) || bestEvolveState.Complete())
                resultText += " *******";
            resultText += "\n";
            FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveSelect_Results.txt", streamDate.c_str()));
        }
    }

    // Delete the completion unit.
    delete complete;

    // Delete the optimizate execution unit.
    delete executeOptimize;

    // Delete the selection execution unit.
    delete executeSelect;
} // EvolveSelectStream

void FireStarterStream::EvolveCPUStream(void)
{
    // EvolveCPU the CPU to randomly generate a number of code instructions and then evolves them over many generations using EvolveStates().
    // The Optimize pass is used to evolve the initial register data for the code instructions with the best weights. The results are used by
    // EvolveStates() for determining the weights and selection of the next generation of code instructions.
    // The process is repeated until the completion condition is met.
    // This method works best for more difficult problems like finding a single piece of code that can solve multiple variations of Sin().
    FireStarterSettings evolveSettings(FIRESTARTER_EVOLVE_CPU);
    unsigned int numStates = evolveSettings.m_states;
    std::string streamDate = FileNameDate(SimpleTimer::RunSecond());
    unsigned long long totalGenerations = 0;
    double totalDuration = 0.0;

    // Create the evolution code generator.
    FireStarterExecute* executeEvolve = new FireStarterExecute("EvolveCPU");

    // Create the evolution execution units.
    FireStarterUnits evolutionUnits(evolveSettings.m_units, "EvolveCPUUnit");

    // Create the optimization execution unit.
    FireStarterExecute* executeOptimize = new FireStarterExecute("OptimizeCPU");

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, evolveSettings);

    // Loop until the the evolve completion condition or the host program is quit.
    unsigned long long evolveTests = MAX(evolveSettings.m_tests, 1);
    for (unsigned long long t = 0; (t < evolveTests) && !WillTerminate(); t++) {
        // Initialize the states.
        FireStarterStates states(numStates);
        FireStarterStates allStates;
        unsigned long long test = FIRESTARTER_START_TEST + t;
        FireStarterState bestEvolveState = FireStarterState(evolveSettings, 0, 0, 0, test);

        // Keep track of the tested instructions so they don't get generated again.
        TestedCodes testedCodes;

        // Evolve the current test.
        unsigned long long generation = 0;
        while (!WillTerminate() && !bestEvolveState.Complete()) {
            // Evolve a new generation.
            executeEvolve->EvolveStates(test, evolveSettings, states, allStates, testedCodes, generation);

            // Execute each state using one of the evolution execution units.
            // Note: ExecuteEvolveOptimize must be async because the compiles come back out of order.
            bestEvolveState.m_age++;
            evolutionUnits.ExecuteEvolveOptimize(states, bestEvolveState, complete);

            // Store the valid results from the current set of states in the list of all states.
            for (unsigned int i = 0; i < numStates; i++) {
                FireStarterState& newState = states[i];
                if (newState.m_optimizeValid) {
                    // Replace the old state with the new state if it improved.
                    FireStarterState& oldState = allStates[newState.m_id];
                    if (newState.MaxResults() < oldState.MaxResults()) {
                        newState.m_generation = oldState.m_generation + 1;
                        newState.m_age = 1;
                        oldState = newState;
                    }
                }
            }

            // Increment the generation.
            generation++;
            if (generation == evolveSettings.m_generations)
                break;
        }

        // Optimize the best state.
        if (!WillTerminate() && !allStates.empty()) {
            double duration = bestEvolveState.Duration();
            totalDuration += duration;
            totalGenerations += generation;

            // Output the evolve results.
            std::string resultText = Format("Seed=%u  Test=%3u  Generation=%3u  Total=%6u  Evolve Result=%.8f  Best Generations=%3u  Evolutions=%3u  Duration: %6.1f  Average: %6.1f", bestEvolveState.Settings().m_evolveSeed, test, generation, totalGenerations, bestEvolveState.MaxResults(), bestEvolveState.m_generation, bestEvolveState.m_evolution, duration, totalDuration / (t + 1));

            // Optimize the evolved state.
            if (evolveSettings.m_optimize) {
                FireStarterState optimizeState(bestEvolveState);
                FireStarterState optimizeBestState(optimizeState);
                optimizeBestState.SetComplete();

                // Generate the optimize code.
                if (executeOptimize->ExecuteGenerateOptimize(optimizeState)) {
                    // Loop until the the optimize completion condition or the host program is quit.
                    while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize) && !optimizeBestState.Complete()) {
                        // Optimize the current generation.
                        executeOptimize->ExecuteOptimize(optimizeState);

                        // Update the results in the UI and check for completion.
                        complete->CompleteState(optimizeBestState, optimizeState);

                        // Increment the generation.
                        optimizeState.m_optimize_pass++;
                    }

                    // Output the optimize results.
                    if (!WillTerminate()) {
                        resultText += Format("  Optimize Result=%.8f", optimizeState.MaxResults());
                        if ((bestEvolveState.MaxResults() > evolveSettings.m_target) && (optimizeState.MaxResults() <= evolveSettings.m_target))
                            resultText += " *";
                    }
                }
            }

            if (bestEvolveState.MaxResults() <= evolveSettings.m_target)
                resultText += " *******";
            resultText += "\n";
            FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveCPU_Results.txt", streamDate.c_str()));
        }
    }

    // Delete the completion unit.
    delete complete;

    // Delete the optimizate execution unit.
    delete executeOptimize;

    // Delete the evolution code generator.
    delete executeEvolve;
} // EvolveCPUStream

void FireStarterStream::EvolveGPUStream(void)
{
    // EvolveGPU uses CUDA code running on the GPU to randomly generate code instructions and then tests them for evolvability.
    // The Optimize pass is then used to evolve the initial register data for the code instructions with the best evolvability results.
    // This method works best for simple problems like generating the Sin() function.
    FireStarterSettings evolveSettings(FIRESTARTER_EVOLVE_GPU);
    FireStarterSettings optimizeSettings(FIRESTARTER_EVOLVE_OPTIMIZE);
    std::string streamDate = FileNameDate(SimpleTimer::RunSecond());
    double totalDuration = 0.0;
    unsigned long long evolveID = 0;
    unsigned long long optimizeID = 0;
    unsigned long long totalGenerations = 0;

#if FIRESTARTER_MULTI_GPU
    unsigned int numDevices = CUDAContext::CUDADevices();
#else
    unsigned int numDevices = 1;
#endif
    unsigned int numEvolve = numDevices;
    unsigned int numOptimize = numDevices * 4;

    // Create the evolution completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, evolveSettings);

    // Create the execution unit used to evolve and optimize the best states.
    FireStarterUnits evolveUnits(numEvolve, "Evolve");
    FireStarterUnits optimizeUnits(numOptimize, "Optimize");

    // Loop until the the evolve completion condition or the host program is quit.
    unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
    for (unsigned int t = 0; (t < evolveTests) && !WillTerminate(); t++) {
        // Initialize the states.
        unsigned long long test = FIRESTARTER_START_TEST + t;
        FireStarterStates evolveStates(numEvolve, evolveSettings, 0, 0, test);
        FireStarterStates optimizeStates(numOptimize, optimizeSettings, 0, 0, test);
        FireStarterState bestState = FireStarterState(optimizeSettings, 0, 0, 0, test);
        FireStarterBestCodes bestCodes(evolveSettings);

        // Execute the initial GPU evolve.
        evolveStates.InitStates(evolveSettings, 0, evolveID, test);
        evolveUnits.ExecuteEvolveGPU(evolveStates, bestCodes);
 
        // Evolve the current test.
        unsigned int generation = 0;
        while (!WillTerminate() && !bestState.Complete()) {
            // Get the best code to optimize.
            for (size_t i = 0; i < optimizeStates.size(); i++) {
                FireStarterCodeVector bestCode(optimizeSettings);
                bestCodes.GetBestCode(bestCode);
                optimizeStates[i].InitState(optimizeSettings, generation, i, optimizeID, test);
                optimizeStates[i].CopyCode(bestCode);
            }
            optimizeUnits.ExecuteGenerateOptimize(optimizeStates);

            // Execute the next GPU evolve while the optimize code is compiling.
            if (!evolveSettings.m_generations || (generation < evolveSettings.m_generations))
                evolveUnits.ExecuteEvolveGPU(evolveStates, bestCodes);

            // Check for termination mid-generation.
            if (WillTerminate())
                break;

            // Execute optimize for each unit.
            optimizeUnits.ExecuteEvolveOptimize(optimizeStates, bestState, complete);

            // Exit after a set number of generations.
            if (evolveSettings.m_generations && (generation >= evolveSettings.m_generations))
                break;
            generation++;
        }

        if (!WillTerminate()) {
            // Output the evolve results.
            double duration = bestState.Duration();
            totalDuration += duration;
            for (size_t i = 0; i < evolveStates.size(); i++) {
                totalGenerations += evolveStates[i].m_generation;
                std::string resultText = Format("Seed: %u  Test: %3u  Id: %3u  Generation=%3u  Total=%6u  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %6.1f  GenTime: %4.1f  Total: %8.1f  Average: %4.1f", evolveSettings.m_evolveSeed, test, evolveStates[i].m_id, evolveStates[i].m_generation, totalGenerations, evolveStates[i].MaxResults(), bestState.MaxResults(), duration, duration / evolveStates[i].m_generation, totalDuration, totalDuration / (t + 1));
                if (bestState.MaxResults() <= evolveSettings.m_target)
                    resultText += " *******";
                resultText += "\n";
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveGPU_Results.txt", streamDate.c_str()));
            }

            // Save the best state and best solution.
            if (bestState.m_optimizeValid)
                complete->CompleteSaveResults(bestState);
        }
    }

    // Delete the completion unit.
    complete->Synchronize();
    delete complete;
} // EvolveGPUStream

void FireStarterStream::EvolveNewStream(void)
{
    // EvolveNew is an experimental version of EvolveGPU that uses a fixed set of instruction registers but still evolves the instruction opcodes.
    // This is significantly faster than EvolveGPU but the instruction registers must be generated ahead of time. The improved performance is gained
    // by not needing to index the registers using a shared memory array on the GPU. In practice, a library of know good sets of registers could be
    // tested to find the ones that work best to solve the problem.
    FireStarterSettings evolveSettings(FIRESTARTER_EVOLVE_NEW);
    FireStarterSettings optimizeSettings(FIRESTARTER_EVOLVE_OPTIMIZE);
    std::string streamDate = FileNameDate(SimpleTimer::RunSecond());
    double totalDuration = 0.0;
    unsigned long long evolveID = 0;
    unsigned long long optimizeID = 0;
    unsigned long long totalGenerations = 0;

#if FIRESTARTER_MULTI_GPU
    unsigned int numDevices = CUDAContext::CUDADevices();
#else
    unsigned int numDevices = 1;
#endif
    unsigned int numEvolve = numDevices;
    unsigned int numOptimize = numDevices;

    // Create the evolution completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, evolveSettings);

    // Create the execution unit used to evolve and optimize the best states.
    FireStarterUnits evolveUnits(numEvolve, "Evolve");
    FireStarterUnits optimizeUnits(numOptimize, "Optimize");

    // Loop until the the evolve completion condition or the host program is quit.
    unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
    for (unsigned int t = 0; (t < evolveTests) && !WillTerminate(); t++) {
        // Initialize the states.
        unsigned long long test = FIRESTARTER_START_TEST + t;
        FireStarterStates evolveStates(numEvolve, evolveSettings, 0, 0, test);
        FireStarterStates optimizeStates(numOptimize, evolveSettings, 0, 0, test);
        FireStarterState bestState = FireStarterState(optimizeSettings, 0, 0, 0, test);
        FireStarterBestCodes bestCodes(evolveSettings);

        // Execute the initial GPU evolve.
        evolveStates.InitStates(evolveSettings, 0, evolveID, test);
        evolveUnits.ExecuteEvolveNew(evolveStates, bestCodes);
 
        // Evolve the current test.
        unsigned int generation = 0;
        while (!WillTerminate() && !bestState.Complete()) {
            // Get the best code to optimize.
            for (size_t i = 0; i < optimizeStates.size(); i++) {
                FireStarterCodeVector bestCode(optimizeSettings);
                bestCodes.GetBestCode(bestCode);
                optimizeStates[i].InitState(optimizeSettings, generation, i, optimizeID, test);
                optimizeStates[i].CopyCode(bestCode);
            }
            optimizeUnits.ExecuteGenerateOptimize(optimizeStates);

            // Execute the next GPU evolve while the optimize code is compiling.
            if (!evolveSettings.m_generations || (generation < evolveSettings.m_generations))
                evolveUnits.ExecuteEvolveNew(evolveStates, bestCodes);

            // Check for termination mid-generation.
            if (WillTerminate())
                break;

            // Execute optimize for each unit.
            optimizeUnits.ExecuteEvolveOptimize(optimizeStates, bestState, complete);

            // Exit after a set number of generations.
            if (evolveSettings.m_generations && (generation >= evolveSettings.m_generations))
                break;
            generation++;
        }

        if (!WillTerminate()) {
            // Output the evolve results.
            double duration = bestState.Duration();
            totalDuration += duration;
            for (size_t i = 0; i < evolveStates.size(); i++) {
                totalGenerations += evolveStates[i].m_generation;
                std::string resultText = Format("Seed: %u  Test: %3u  Id: %3u  Generation=%3u  Total=%6u  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %6.2f  GenTime: %4.2f  Total: %8.2f  Average: %4.2f", evolveSettings.m_evolveSeed, test, evolveStates[i].m_id, evolveStates[i].m_generation, totalGenerations, evolveStates[i].MaxResults(), bestState.MaxResults(), duration, duration / evolveStates[i].m_generation, totalDuration, totalDuration / (t + 1));
                if (bestState.MaxResults() <= evolveSettings.m_target)
                    resultText += " *******";
                resultText += "\n";
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveNew_Results.txt", streamDate.c_str()));
            }

            // Save the best state and best solution.
            if (bestState.m_optimizeValid)
                complete->CompleteSaveResults(bestState);
        }
    }

    // Delete the completion unit.
    complete->Synchronize();
    delete complete;
} // EvolveNewStream

void FireStarterStream::EvolveSinSimStream(void)
{
    // EvolveSinSim performs the same Sin() simulation as the original SinSim() but uses code evolution rather than a fixed neural network.
    // This explores the generation of code and registers that process multiple input samples without resetting the registers for each sample.
    // MoneyMaker is the more complex version of multi-sample processing. This is a current area of research and could lead towards code that can
    // evolve itself. Currently the results are poor compared to the original SinSim() and EvolveGPU.
    FireStarterSettings evolveSettings(FIRESTARTER_EVOLVE_SINSIM);
    FireStarterSettings optimizeSettings(FIRESTARTER_EVOLVE_SINSIM);
    std::string streamDate = FileNameDate(SimpleTimer::RunSecond());
    double totalDuration = 0.0;
    unsigned long long totalGenerations = 0;

    // Create the evolution completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, evolveSettings);

    // Create the execution unit used to evolve the best states.
    FireStarterExecute* executeEvolve = new FireStarterExecute();

    // Loop until the the evolve completion condition or the host program is quit.
    unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
    for (unsigned int t = 0; (t < evolveTests) && !WillTerminate(); t++) {
        // Initialize the states.
        unsigned long long test = FIRESTARTER_START_TEST + t;
        FireStarterState evolveState = FireStarterState(evolveSettings, 0, 0, 0, test);
        FireStarterState bestState = FireStarterState(evolveSettings, 0, 0, 0, test);

        // Evolve the current test.
        while (!WillTerminate() && !bestState.Complete()) {
            // Execute the initial SinSim evolve.
            executeEvolve->ExecuteEvolveSinSim(evolveState);

            // Update the results in the UI and check for completion.
            complete->CompleteState(bestState, evolveState);

            // Exit after a set number of generations.
            if (evolveSettings.m_generations && (evolveState.m_generation >= evolveSettings.m_generations))
                break;
        }

        // Output the test results.
        if (!WillTerminate()) {
            // Output the evolve results.
            double duration = bestState.Duration();
            totalDuration += duration;
            totalGenerations += evolveState.m_generation;

            std::string resultText = Format("Seed: %u  Test: %3u  Generation=%3u  Total=%6u  Evolve Result=%.8f  Best Result=%.8f  Duration: %8.1f  GenTime: %4.1f  Total: %8.1f  Average: %4.1f", evolveSettings.m_evolveSeed, test, evolveState.m_generation, totalGenerations, evolveState.MaxResults(), bestState.MaxResults(), duration, duration / evolveState.m_generation, totalDuration, totalDuration / (t + 1));
            if (bestState.MaxResults() <= evolveSettings.m_target)
                resultText += " *******";
            resultText += "\n";
            FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveSinSim_Results.txt", streamDate.c_str()));

            // Save the best state and best solution.
            complete->CompleteSaveResults(bestState);
        }
    }

    // Delete the completion unit.
    complete->Synchronize();
    delete complete;

    // Finish processing and terminate the evolution execution units.
    delete executeEvolve;
} // EvolveSinSimStream

void FireStarterStream::SinSimStream(void)
{
    // This is an improved GPU implementation of the original CPU SinSim neural network from around 2008.
    // It uses just four neurons and successfully matches the target function with an average of six digits of accuracy over [0, 2*pi] for the set of samples.
    // That does not mean that the evolved code will be able to achieve six digits of accuracy for all values of theta or even all the individual samples.
    // The Sin() simulation initializes the neuron weights and then runs the simulation over 4096 samples and accumulates the average error for all but the first 256 samples.
    // The input is Cos(theta) and the target function is Sin(theta) where theta is offset 45 samples or about 36.42 degrees.
    // This version runs using CUDA on the GPU with a population size of 65536.
    FireStarterSettings sinSimSettings(FIRESTARTER_SINSIM);
    std::string streamDate = FileNameDate(SimpleTimer::RunSecond());
    double totalDuration = 0.0;
    unsigned long long totalGenerations = 0;

    // Create the evolution completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, sinSimSettings, false);

    // Create the execution unit used to evolve the best states.
    FireStarterExecute* executeSinSim = new FireStarterExecute();

    // Initialize the states.
    unsigned long long test = FIRESTARTER_START_TEST;
    FireStarterState evolveState = FireStarterState(sinSimSettings, 0, 0, 0, test);
    FireStarterState bestState = FireStarterState(sinSimSettings, 0, 0, 0, test);

    // Evolve the current test.
    while (!WillTerminate() && !bestState.Complete()) {
        // Execute the initial GPU evolve.
        executeSinSim->ExecuteSinSim(evolveState);

        // Update the results in the UI and check for completion.
        complete->CompleteState(bestState, evolveState);

        // Exit after a set number of generations.
        if (sinSimSettings.m_generations && (evolveState.m_generation >= sinSimSettings.m_generations))
            break;
    }

    // Output the test results.
    if (!WillTerminate()) {
        // Output the evolve results.
        double duration = bestState.Duration();
        totalDuration += duration;
        totalGenerations += evolveState.m_generation;

        std::string resultText = Format("Seed: %u  Test: %3u  Generation=%3u  Total=%6u  Evolve Result=%.8f  Best Result=%.8f  Duration: %8.1f  GenTime: %6.1f", sinSimSettings.m_evolveSeed, test, evolveState.m_generation, totalGenerations, evolveState.MaxResults(), bestState.MaxResults(), duration, duration / evolveState.m_generation);
        if (bestState.MaxResults() <= sinSimSettings.m_target)
            resultText += " *******";
        resultText += "\n";
        FireStarterSource::AppendSource(resultText, Format("Logs\\%s_SinSim_Results.txt", streamDate.c_str()));

        // Save the best state and best solution.
        complete->CompleteSaveResults(bestState);
    }

    // Delete the completion unit.
    complete->Synchronize();
    delete complete;

    // Finish processing and terminate the evolution execution units.
    delete executeSinSim;
} // SinSimStream

void FireStarterStream::MoneyMakerStream(void)
{
    // MoneyMaker is an experiment to find out if code evolution can be used to predict the future rather than simulate a static function.
    // This code is based on EvolveSinSim() but uses stock market data as the input and output. The goal is to evolve code that signals when to
    // buy, sell or hold shares in a stock. Currently results are inconclusive. This problem may not be solvable using the current number of
    // instructions, registers and opcodes. See MoneyMaker.cu for more details.
#if FIRESTARTER_MULTI_GPU
    unsigned int numDevices = CUDAContext::CUDADevices();
#else
    unsigned int numDevices = 1;
#endif
    size_t numEvolve = MONEYMAKER_EVOLVE_COUNT * numDevices;
    size_t numOptimize = MONEYMAKER_OPTIMIZE_COUNT * numDevices;

    // Evolve a number of states equal to the evolveSettings.m_seeds.
    // Note: These are used by the units so they must be declared first so they are destroyed last.
    FireStarterSettings evolveSettings(FIRESTARTER_MONEYMAKER);
    FireStarterSettings optimizeSettings(FIRESTARTER_MONEYOPTIMIZE);
    std::string streamDate = FileNameDate(SimpleTimer::RunSecond());
    std::string streamResultsPath = Format("Logs\\%s_MoneyMaker_Results.txt", streamDate.c_str());
    unsigned long long evolveID = 0;
    unsigned long long optimizeID = 0;

    // Create the evolution completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, evolveSettings);

    // Load the stock market data.
    // Note: The stock data is not a part of the FireStarter distribution and must be downloaded separately.
    // Source: https://stooq.com/db/h/
    MoneyMakerManager stockManager(evolveSettings);
    stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/1/aapl.us.txt", 'AAPL', evolveSettings.m_offset);
    stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/2/nvda.us.txt", 'NVDA', evolveSettings.m_offset);
    stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/2/intc.us.txt", 'INTC', evolveSettings.m_offset);
    stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/2/msft.us.txt", 'MSFT', evolveSettings.m_offset);
    stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/2/qcom.us.txt", 'QCOM', evolveSettings.m_offset);
    stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/1/amzn.us.txt", 'AMZN', evolveSettings.m_offset);
    stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/1/goog.us.txt", 'GOOG', evolveSettings.m_offset);
    stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/1/amd.us.txt",  'AMD ', evolveSettings.m_offset);
    MoneyMakerStocks* stocks = stockManager.Stocks();
    unsigned int numStocks = stocks->size();
    unsigned int startStock = evolveSettings.m_stock;

    // Loop until the the evolve completion condition or the host program is quit.
    unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
    for (unsigned int t = 0; (t < evolveTests) && !WillTerminate(); t++) {
        unsigned long long test = FIRESTARTER_START_TEST + t;
        unsigned int testStock = (startStock + test) % numStocks;

        // Create the execution unit used to evolve and optimize the best states.
        FireStarterUnits evolveUnits(numEvolve, "MoneyEvolve");
        FireStarterUnits optimizeUnits(numOptimize, "MoneyOptimize");
        evolveUnits.ExecuteSetStocks(stocks);
        optimizeUnits.ExecuteSetStocks(stocks);
        evolveUnits.ExecuteGenerateEvolve(evolveSettings.m_mode); // Generate and compile the evolve code.

        // Initialize the states for the current test.
        evolveSettings.m_stock = testStock;
        optimizeSettings.m_stock = testStock;
        optimizeSettings.m_tests = evolveTests;
        FireStarterStates evolveStates(numEvolve, evolveSettings, 0, evolveID, test);
        FireStarterStates optimizeStates(numOptimize, optimizeSettings, 0, optimizeID, test);

        // Initialize the test's best codes
        FireStarterBestCodes bestCodes(evolveSettings);

        // Exit after a set number of generations.
        if (WillTerminate())
            break;
        // Execute the initial GPU evolve.
        evolveUnits.ExecuteMoneyEvolve(evolveStates, bestCodes);
        if (WillTerminate())
            break;

        std::string evolveText;
        double duration = evolveStates.Duration();
        double runDuration = evolveStates.RunDuration();
        float evolveResult = bestCodes.GetBestResult();
#if MONEYMAKER_WINS
        float evolveReturns = (1.0f - evolveResult) * 100.0f; // Remove inversion.
#else
        float evolveReturns = MoneyMakerReturns(1.0f - evolveResult); // Remove inversion.
#endif
        if (evolveSettings.m_stocks == 1) {
            const MoneyMakerStock& stock = stocks->Stock(testStock);
            char* symbol = (char*)&stock.symbol;
            evolveText += Format("%c%c%c%c:  ", symbol[3], symbol[2], symbol[1], symbol[0]);
        }

        evolveText += Format("Seed: %u  Test: %3llu  Generation=%3llu  Evolve Returns=%7.2f%%  Duration: %8.1f  Run Duration: %8.1f\n", evolveSettings.m_evolveSeed, test, evolveStates[0].m_generation, evolveReturns, duration, runDuration);
        FireStarterSource::AppendSource(evolveText, streamResultsPath);
                    
        // Get the best code to optimize.
        float bestEvolveResult = 0.0f;
        if (numOptimize > 1)
            evolveText += "\n";


        std::vector<float> bestEvolveResults(numOptimize, 0.0f); // Used for debugging only.
        for (size_t i = 0; i < numOptimize; i++) {
            FireStarterCodeVector bestCode;
            bestEvolveResults[i] = bestCodes.GetBestCode(bestCode);
            optimizeStates[i].CopyCode(bestCode);
        }

        // Optimize all the units using all available GPU devices.
        FireStarterState bestState = FireStarterState(optimizeSettings);
        optimizeUnits.ExecuteMoneyOptimize(optimizeStates, bestState, complete);

        // Calculate the optimize duration.
        double curDuration = evolveStates.Duration();
        double optimizeDuration = curDuration - duration;
        duration = curDuration;
        runDuration = bestState.RunDuration();
        std::string optimizeText = Format("Optimize Duration: %7.1f  Run Duration: %7.1f\n", optimizeDuration, runDuration);

        for (size_t optimize = 0; optimize < numOptimize; optimize++) {
            // Output the results.
            if (evolveSettings.m_stocks == 1) {
                char* symbol = (char*)&stocks->Stock(testStock).symbol;
                optimizeText += Format("%c%c%c%c: ", symbol[3], symbol[2], symbol[1], symbol[0]);
            }

            float optimizeResult = optimizeStates[optimize].MaxResults();
            float bestResult = bestState.MaxResults();
#if MONEYMAKER_WINS
            float optimizeReturns = (1.0f - optimizeResult) * 100.0f; // Remove inversion.
            float bestReturns = (1.0f - bestResult) * 100.0f; // Remove inversion.
#else
            float optimizeReturns = MoneyMakerReturns(1.0f - optimizeResult); // Remove inversion.
            float bestReturns = MoneyMakerReturns(1.0f - bestResult); // Remove inversion.
#endif

            optimizeText += Format("Optimize Returns=%7.2f%%\n", optimizeReturns);

#if MONEYMAKER_TEST_RESULTS
            // Note: This is not multi-gpu but is fast.
            optimizeUnits[optimize]->ExecuteMoneyTest(optimizeStates[optimize], optimizeSettings.m_variation, optimizeSettings.m_trading, optimizeSettings.m_validation);
            const MoneyMakerStocks* tradingResults = optimizeUnits[optimize]->GetTradingResults();
            if (tradingResults) {
                float tradingAverage = 0.0f;
                float differenceAverage = 0.0f;
                float tradingWinsAverage = 0.0f;
                for (unsigned int tradeIndex = 0; tradeIndex < evolveSettings.m_stocks; tradeIndex++) {
                    unsigned int stockIndex = optimizeStates[optimize].Settings().m_stock + tradeIndex;
                    const MoneyMakerStock& stock = stocks->Stock(stockIndex);
                    const MoneyMakerStock& tester = tradingResults->Stock(stockIndex);

                    if (evolveSettings.m_stocks > 1) {
                        char* symbol = (char*)&stock.symbol;
                        optimizeText += Format("%c%c%c%c: ", symbol[3], symbol[2], symbol[1], symbol[0]);
                    }

                    unsigned int tradingDays = optimizeSettings.m_trading;
                    unsigned int tradeFirstDay = optimizeSettings.m_variation;
                    unsigned int tradeLastDay = tradeFirstDay + tradingDays;
                    unsigned int validationDays = optimizeSettings.m_validation;
                    unsigned int validationFirstDay = tradeLastDay;
                    unsigned int validationLastDay = tradeLastDay + validationDays;
                    float tradeFirstValue = stock[tradeFirstDay];
                    float tradeLastValue = stock[tradeLastDay - 1];
                    float validationFirstValue = stock[validationFirstDay];
                    float validationLastValue = stock[validationLastDay - 1];
                    float tradingProfit = tradeLastValue - tradeFirstValue;
                    float tradingPercent = tradingProfit / tradeFirstValue;
                    float tradingDailyPercent = tradingPercent / (tradingDays - 1);
                    float validationProfit = validationLastValue - validationFirstValue;
                    float validationPercent = validationProfit / validationFirstValue;
                    float validationDailyPercent = validationPercent / (validationDays - 1);
                    float stockTradeReturns = MoneyMakerReturns(tradingDailyPercent);
                    float stockValidationReturns = MoneyMakerReturns(validationDailyPercent);

                    float tradingResult = tester.tradingResult;
                    if (tradingResult) {
                        float tradingWins = 100.0f * tester.tradingWins;
                        float tradingReturns = MoneyMakerReturns(tradingResult);
                        float tradingDifference = tradingReturns - stockTradeReturns;
                        tradingAverage += tradingReturns / numOptimize;
                        differenceAverage += tradingDifference / numOptimize;
                        tradingWinsAverage += tradingWins / numOptimize;
                        optimizeText += Format("Trading: Wins=%7.2f%%  Returns=%7.2f%%  Stock=%7.2f%%  Difference==%7.2f%%   ", tradingWins, tradingReturns, stockTradeReturns, tradingDifference);

                        float validationResult = tester.validationResult;
                        if (validationResult) {
                            float validationWins = 100.0f * tester.validationWins;
                            float validationReturns = MoneyMakerReturns(validationResult);
                            float validationDifference = validationReturns - stockValidationReturns;
                            optimizeText += Format("Validation: Wins=%7.2f%%  Returns=%7.2f%%  Stock=%7.2f%%  Difference==%7.2f%%   ", validationWins, validationReturns, stockValidationReturns, validationDifference);
                        } else
                            optimizeText += Format("Validation Failed!");

                    } else
                        optimizeText += "Trading Failed!";
                    optimizeText += "\n";
                }
                if (evolveSettings.m_stocks > 1)
                    optimizeText += Format("Average Returns=%7.2f%%  Average Difference=%7.2f%%  Average Trading Wins=%7.2f%%  Average Validation Wins=%7.2f%%\n\n", tradingAverage, differenceAverage, 100.0f * tradingWinsAverage);
            }
#endif
            FireStarterSource::AppendSource(optimizeText, streamResultsPath);
        }

        // Save the best state. Note: TODO: Output all evolve and optimize states?
        if (bestState.m_optimizeValid)
            complete->CompleteSaveResults(bestState);
    }

    // Delete the completion unit.
    delete complete;
} // MoneyMakerStream

void FireStarterStream::OptimizeStream(void)
{
    // Optimize modes allows previously evolved code instructions to have their data fully evolved.
    // In addition, Optimize can run multiple tests to find alternate register data values.
    // This is also a way to test the Optimize pass separately from the Evolve passes.
    FireStarterSettings optimizeSettings(FIRESTARTER_OPTIMIZE);
    std::string streamDate = FileNameDate(SimpleTimer::RunSecond());
    FireStarterState evolveState;
    LoadState(evolveState);

    // Create the optimization execution unit.
    FireStarterExecute* execute = new FireStarterExecute();

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, optimizeSettings);

    // Generate the optimize code.
    if (execute->ExecuteGenerateOptimize(evolveState)) {
        // Loop until the the evolve completion condition or the host program is quit.
        unsigned long long evolveTests = MAX(optimizeSettings.m_tests, 1);
        for (unsigned long long t = 0; (t < evolveTests) && !WillTerminate(); t++) {
            // Initialize the states.
            FireStarterStates allStates;
            unsigned long long test = FIRESTARTER_START_TEST + t;

            // Optimize the evolved state.
            FireStarterState optimizeState(optimizeSettings, 0, 0, 0, test);
            optimizeState.CopyCode(evolveState);
            FireStarterState bestState(optimizeState);

            // Loop until the the optimize completion condition or the host program is quit.
            while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize) && !bestState.Complete()) {
                // Optimize the current generation.
                execute->ExecuteOptimize(optimizeState);

                // Update the results in the UI and check for completion.
                complete->CompleteState(bestState, optimizeState);

                // Increment the generation.
                optimizeState.m_optimize_pass++;
            }

            // Output the test results.
            if (!WillTerminate()) {
                // Output the evolve results.
                std::string resultText = Format("Test: %llu  Pass=%llu  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %.1f", test, optimizeState.m_optimize_pass, evolveState.MaxResults(), optimizeState.MaxResults(), bestState.Duration());
                if (bestState.MaxResults() <= optimizeSettings.m_target)
                    resultText += " *******";
                resultText += "\n";
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_Optimize_Results.txt", streamDate.c_str()));
            }
        }
    }

    // Delete the completion unit.
    delete complete;

    // Delete the optimizate execution unit.
    delete execute;
} // OptimizeStream

void FireStarterStream::SpeedTestStream(void)
{
    // SpeedTest can be used to test the performance impact of changes to the evolve code.
    // Paste the code you wish to modify into FireSpeedTest.cu before making changes and use it as a reference.
    FireStarterSettings speedTestSettings(FIRESTARTER_SPEEDTEST);
    std::string streamDate = FileNameDate(SimpleTimer::RunSecond());

    // Create the optimization execution unit.
    FireStarterExecute* execute = new FireStarterExecute();

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, speedTestSettings, false);

    if (execute->ExecuteGenerateEvolve(speedTestSettings.m_mode)) {
        // Loop until the the evolve completion condition or the host program is quit.
        unsigned long long evolveTests = MAX(speedTestSettings.m_tests, 1);
        for (unsigned long long t = 0; (t < evolveTests) && !WillTerminate(); t++) {
            // Initialize the states.
            FireStarterStates allStates;
            unsigned long long test = FIRESTARTER_START_TEST + t;

            // Test the evolution.
            FireStarterState testState(speedTestSettings);
            testState.m_test = test;
            FireStarterState bestState(testState);

            // Loop for the number of generations, the completion condition or the host program is quit.
            do {
                // Test the current generation.
                execute->ExecuteSpeedTest(testState);

                // Update the results in the UI and check for completion.
                complete->CompleteState(bestState, testState);

                // Output the test results.
                if (!WillTerminate()) {
                    // Output the evolve results.
                    std::string resultText = Format("Test: %llu  Generation=%llu  Evolve Result=%.8f  Duration: %.1f", test, testState.m_generation, testState.MaxResults(), testState.Duration());
                    if (bestState.MaxResults() <= speedTestSettings.m_target)
                        resultText += " *******";
                    resultText += "\n";
                    FireStarterSource::AppendSource(resultText, Format("Logs\\%s_SpeedTest_Results.txt", streamDate.c_str()));
                }
            } while (!WillTerminate() && (testState.m_generation < testState.Settings().m_generations) && !bestState.Complete());
        }
    }

    // Delete the completion unit.
    delete complete;

    // Delete the optimizate execution unit.
    delete execute;
} // SpeedTestStream

FireStarterStream::FireStarterStream(FireStarterWindow& window) : SerialThread("FireStarterStream"), m_streamWindow(window)
{
    // Launch the task based on FIRESTARTER_MODE.
    // FIRESTARTER_MODE is set in the C++ preprocessor settings for each build target.
    DispatchSync([this] {
        switch (FIRESTARTER_MODE) {
        case FIRESTARTER_RANDOM:
            RandomStream();
            break;
        case FIRESTARTER_EVOLVE_SELECT:
            EvolveSelectStream();
            break;
        case FIRESTARTER_EVOLVE_CPU:
            EvolveCPUStream();
            break;
        case FIRESTARTER_EVOLVE_GPU:
            EvolveGPUStream();
            break;
        case FIRESTARTER_EVOLVE_NEW:
            EvolveNewStream();
            break;
        case FIRESTARTER_EVOLVE_SINSIM:
            EvolveSinSimStream();
            break;
        case FIRESTARTER_SINSIM:
            SinSimStream();
            break;
        case FIRESTARTER_MONEYMAKER:
            MoneyMakerStream();
            break;
        case FIRESTARTER_OPTIMIZE:
            OptimizeStream();
            break;
        case FIRESTARTER_SPEEDTEST:
            SpeedTestStream();
            break;
        case FIRESTARTER_SOLUTION:
            FireStarterShow::FireSolution(m_streamWindow);
            break;
        }
    });
} // FireStarterStream

FireStarterStream::~FireStarterStream(void)
{
    SerialThread::Synchronize();
} // ~FireStarterStream
