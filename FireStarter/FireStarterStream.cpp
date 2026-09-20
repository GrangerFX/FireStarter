#include "FireStarterStream.h"
#include "FireStarterCompile.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarterSource.h"
#include "FireStarterUtil.h"
#include "FireStarter_LoadState.h"
#include "FireMoneyMaker.h"

#define FIRESTARTER_STREAM_EVOLUTIONS 100

void FireStarterStream::RandomStream(FireStarterServer* server)
{
    FireStarterSettings randomSettings(FIRESTARTER_RANDOM);
        
    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager();

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, server);
    compile->AddCompiler();

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, randomSettings, manager);

    // Loop until the the completion condition or the host program is quit.
    unsigned int tests = MAX(randomSettings.m_tests, 1);
    unsigned int randomTests = randomSettings.m_states * tests;
    for (unsigned int test = 0; (test < randomTests) && !WillTerminate(); test++) {
        // Setup the intial state
        FireStarterSettings evolveSettings(randomSettings);
        evolveSettings.m_evolveSeed = randomSettings.m_evolveSeed + test / tests;
        FireStarterState evolveState(evolveSettings, 0, 0, test % tests, test);

        // Create the best random state.
        FireStarterState bestState = FireStarterState(randomSettings, 0, 0, 0, test);

        // Evolve the first generation for the state.
        execute->ExecuteRandomState(evolveState);

        // Execute the state.
        execute->ExecuteRandom();

        // Complete the state and display the results.
        complete->CompleteRandom(bestState, evolveState);

        // Output the evolve results.
        std::string resultText;
        if (evolveState.Settings().m_states > 1)
            resultText += Format("Seed=%u  ", evolveState.Settings().m_evolveSeed);
        if (evolveState.Settings().m_tests > 1)
            resultText += Format("Test=%u  ", evolveState.m_test);
        resultText += Format("Random Result=%.8f\n", evolveState.MaxResults());
        if (!m_streamDate.empty())
            FireStarterSource::AppendSource(resultText, Format("Logs\\%s_RandomResults.txt", m_streamDate.c_str()));
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete complete;

    // Finish processing and terminate each unit.
    delete execute;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // RandomStream

void FireStarterStream::EvolveSelectStream(FireStarterServer* server)
{
    // Evolve a number of states equal to the evolveSettings.m_seeds.
    FireStarterSettings selectSettings(FIRESTARTER_SELECT);
    unsigned int numStates = selectSettings.m_states;
    selectSettings.m_units = MIN(selectSettings.m_units, numStates);
    std::string streamDate = m_streamDate;

    // Separate optmize settings
    FireStarterSettings optimizeSettings(selectSettings);

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(numStates);

    // Create a multi-process compiler for each unit.
    FireStarterCompile* compile = new FireStarterCompile(manager, server);
    for (unsigned int i = 0; i < selectSettings.m_units; i++)
        compile->AddCompiler();

    // Create the evolution execution units.
    std::vector<FireStarterExecute*> evolutionUnits;
    for (unsigned int i = 0; i < selectSettings.m_units; i++) {
        FireStarterExecute* evolutionUnit = new FireStarterExecute(manager, "SelectEvolveUnit", i);
        evolutionUnits.push_back(evolutionUnit);
    }

    // Create the selection execution unit.
    FireStarterExecute* executeSelect = new FireStarterExecute(manager);

    // Create the optimization execution unit.
    FireStarterExecute* executeOptimize = nullptr;
    if (selectSettings.m_optimize)
        executeOptimize = new FireStarterExecute(manager);

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, selectSettings, manager);

    // Loop until the the evolve completion condition or the host program is quit.
    unsigned long long evolveTests = MAX(selectSettings.m_tests, 1);
    for (unsigned long long t = 0; (t < evolveTests) && !WillTerminate(); t++) {
        // Initialize the states.
        FireStarterStates allStates;
        unsigned long long test = FIRESTARTER_START_TEST + t;
        FireStarterState bestEvolveState = FireStarterState(selectSettings, 0, 0, 0, test);

        // Keep track of the tested instructions so they don't get generated again.
        TestedCodes testedCodes;

        // Evolve the current test.
        unsigned long long generation = 0;
        while (!WillTerminate()) {
            // Evolve a new generation.
            executeSelect->ExecuteSelectStates(test, selectSettings, allStates, testedCodes, generation);

            // Execute each state using one of the evolution execution units.
            // Note: ExecuteEvolveCPU must be async because the compiles come back out of order.
            std::atomic<int> evolveCount = numStates;
            for (FireStarterExecute* evolutionUnit : evolutionUnits)
                evolutionUnit->ExecuteOptimizeCount(evolveCount);

            // Gather and sort the results, update the UI and check for the completion condition.
            // Note: This syncronizes the execution units.
            if (complete->CompleteStates(bestEvolveState, allStates, numStates, generation))
                break;

            // Increment the generation.
            generation++;
            if (generation == selectSettings.m_generations)
                break;
        }

        // Optimize the best state.
        if (!WillTerminate() && !allStates.empty()) {
            // Output the evolve results.
            std::string resultText = Format("Duration: %6.1f  Average: %6.1f  Seed=%u  Test=%u  Generation=%3u  Best Generations=%3u  Evolutions=%3u  Evolve Result=%.8f", bestEvolveState.Duration(), SimpleTimer::RunDuration() / (t + 1), bestEvolveState.Settings().m_evolveSeed, test, generation, bestEvolveState.m_generation, bestEvolveState.m_evolution, bestEvolveState.MaxResults());
            printf("%s\n", resultText.c_str());

            // Optimize the evolved state.
            if (selectSettings.m_optimize) {
                FireStarterState optimizeState(bestEvolveState);
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

            if (bestEvolveState.MaxResults() <= selectSettings.m_target)
                resultText += " *******";
            resultText += "\n";
            FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));
        }
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete complete;

    // Delete the optimizate execution unit.
    delete executeOptimize;

    // Delete the selection execution unit.
    delete executeSelect;

    // Finish processing and terminate each evolution execution unit.
    for (FireStarterExecute* evolutionUnit : evolutionUnits)
        delete evolutionUnit;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // EvolveSelectStream

void FireStarterStream::EvolveCPUStream(void)
{
    // Evolve a number of states equal to the evolveSettings.m_seeds.
    FireStarterSettings evolveSettings(FIRESTARTER_EVOLVE_CPU);
    unsigned int numStates = evolveSettings.m_states;
    std::string streamDate = m_streamDate;

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
            // Note: ExecuteEvolveCPU must be async because the compiles come back out of order.
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
            // Output the evolve results.
            std::string resultText = Format("Duration: %10.1f  Average: %10.1f  Seed=%u  Test=%u  Generation=%u  Best Generations=%u  Evolutions=%u  Evolve Result=%.8f", bestEvolveState.Duration(), SimpleTimer::RunDuration() / (t + 1), bestEvolveState.Settings().m_evolveSeed, test, generation, bestEvolveState.m_generation, bestEvolveState.m_evolution, bestEvolveState.MaxResults());

            // Optimize the evolved state.
            if (evolveSettings.m_optimize) {
                FireStarterState optimizeState(bestEvolveState);
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
                        if ((bestEvolveState.MaxResults() > evolveSettings.m_target) && (optimizeState.MaxResults() <= evolveSettings.m_target))
                            resultText += " *";
                    }
                }
            }

            if (bestEvolveState.MaxResults() <= evolveSettings.m_target)
                resultText += " *******";
            resultText += "\n";
            FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));
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
    // Evolve a number of states equal to the evolveSettings.m_seeds.
    FireStarterSettings evolveSettings(FIRESTARTER_EVOLVE_GPU);
    FireStarterSettings optimizeSettings(FIRESTARTER_EVOLVE_OPTIMIZE);
    std::string streamDate = m_streamDate;
    double totalDuration = 0.0;
    unsigned long long evolveID = 0;
    unsigned long long optimizeID = 0;

#if FIRESTARTER_MULTI_GPU
    size_t numDevices = CUDAContext::CUDADevices();
#else
    size_t numDevices = 1;
#endif

    // Create the evolution completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, evolveSettings);

    // Create the execution unit used to evolve and optimize the best states.
    FireStarterUnits evolveUnits(numDevices, "Evolve");
    FireStarterUnits optimizeUnits(numDevices, "Optimize");

    // Loop until the the evolve completion condition or the host program is quit.
    unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
    for (unsigned int t = 0; (t < evolveTests) && !WillTerminate(); t++) {
        // Initialize the states.
        unsigned long long test = FIRESTARTER_START_TEST + t;
        FireStarterStates evolveStates(numDevices, evolveSettings, 0, 0, test);
        FireStarterStates optimizeStates(numDevices, optimizeSettings, 0, 0, test);
        FireStarterState bestState = FireStarterState(optimizeSettings, 0, 0, 0, test);
        FireStarterBestCodes bestCodes(evolveSettings);

        // Execute the initial GPU evolve.
        evolveStates.InitStates(evolveSettings, 0, evolveID, test);
        evolveUnits.ExecuteEvolveGPU(evolveStates, bestCodes);
 
        // Evolve the current test.
        while (!WillTerminate() && !bestState.Complete()) {
            // Get the best code to optimize.
            for (size_t i = 0; i < numDevices; i++) {
                FireStarterCodeVector bestCode(optimizeSettings);
                bestCodes.GetBestCode(bestCode);
                float bestResult = optimizeStates[i].m_bestResult;
                optimizeStates[i].InitState(optimizeSettings, evolveStates[i].m_generation, i, optimizeID, test);
                optimizeStates[i].CopyCode(bestCode);
                optimizeStates[i].m_bestResult = bestResult;
            }
            optimizeUnits.ExecuteGenerateOptimize(optimizeStates);

            // Execute the next GPU evolve while the optimize code is compiling.
            if (!evolveSettings.m_generations || (evolveStates[0].m_generation < evolveSettings.m_generations))
                evolveUnits.ExecuteEvolveGPU(evolveStates, bestCodes);

            // Check for termination mid-generation.
            if (WillTerminate())
                break;

            // Execute optimize for each unit.
            optimizeUnits.ExecuteEvolveOptimize(optimizeStates, bestState, complete);

            // Exit after a set number of generations.
            if (evolveSettings.m_generations && (evolveStates[0].m_generation >= evolveSettings.m_generations))
                break;
        }

        if (!WillTerminate()) {
            // Output the evolve results.
            double duration = bestState.Duration();
            totalDuration += duration;
            for (size_t i = 0; i < numDevices; i++) {
                std::string resultText = Format("Seed: %u  Test: %3u  Id: %3u  Generation=%3u  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %6.1f  GenTime: %4.1f  Total: %4.1f  Average: %4.1f", evolveSettings.m_evolveSeed, test, evolveStates[i].m_id, evolveStates[i].m_generation, evolveStates[i].MaxResults(), bestState.MaxResults(), duration, duration / evolveStates[i].m_generation, totalDuration, totalDuration / (t + 1));
                if (bestState.MaxResults() <= evolveSettings.m_target)
                    resultText += " *******";
                resultText += "\n";
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));
            }

            // Save the best state and best solution.
#if FIRESTARTER_SAVE_BESTSTATE
            if (bestState.m_optimizeValid)
                complete->CompleteSaveResults(bestState);
#endif
        }
    }

    // Delete the completion unit.
    complete->Synchronize();
    delete complete;
} // EvolveGPUStream

void FireStarterStream::EvolveNewStream(void)
{
    // Evolve a number of states equal to the evolveSettings.m_seeds.
    FireStarterSettings evolveSettings(FIRESTARTER_EVOLVE_NEW);
    FireStarterSettings optimizeSettings(FIRESTARTER_EVOLVE_OPTIMIZE);
    std::string streamDate = m_streamDate;
    double totalDuration = 0.0;
    unsigned long long evolveID = 0;
    unsigned long long optimizeID = 0;

#if FIRESTARTER_MULTI_GPU
    size_t numDevices = CUDAContext::CUDADevices();
#else
    size_t numDevices = 1;
#endif
    // Create the evolution completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, evolveSettings);

    // Create the execution unit used to evolve and optimize the best states.
    FireStarterUnits evolveUnits(numDevices, "Evolve");
    FireStarterUnits optimizeUnits(numDevices, "Optimize");

    // Loop until the the evolve completion condition or the host program is quit.
    unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
    for (unsigned int t = 0; (t < evolveTests) && !WillTerminate(); t++) {
        // Initialize the states.
        unsigned long long test = FIRESTARTER_START_TEST + t;
        FireStarterStates evolveStates(numDevices, evolveSettings, 0, 0, test);
        FireStarterStates optimizeStates(numDevices, evolveSettings, 0, 0, test);
        FireStarterState bestState = FireStarterState(optimizeSettings, 0, 0, 0, test);
        FireStarterBestCodes bestCodes(evolveSettings);

        // Execute the initial GPU evolve.
        evolveStates.InitStates(evolveSettings, 0, evolveID, test);
        evolveUnits.ExecuteEvolveNew(evolveStates, bestCodes);
 
        // Evolve the current test.
        while (!WillTerminate() && !bestState.Complete()) {
            // Get the best code to optimize.
            for (size_t i = 0; i < numDevices; i++) {
                FireStarterCodeVector bestCode(optimizeSettings);
                bestCodes.GetBestCode(bestCode);
                float bestResult = optimizeStates[i].m_bestResult;
                optimizeStates[i].InitState(optimizeSettings, evolveStates[i].m_generation, i, optimizeID, test);
                optimizeStates[i].CopyCode(bestCode);
                optimizeStates[i].m_bestResult = bestResult;
            }
            optimizeUnits.ExecuteGenerateOptimize(optimizeStates);

            // Execute the next GPU evolve while the optimize code is compiling.
            if (!evolveSettings.m_generations || (evolveStates[0].m_generation < evolveSettings.m_generations))
                evolveUnits.ExecuteEvolveNew(evolveStates, bestCodes);

            // Check for termination mid-generation.
            if (WillTerminate())
                break;

            // Execute optimize for each unit.
            optimizeUnits.ExecuteEvolveOptimize(optimizeStates, bestState, complete);

            // Exit after a set number of generations.
            if (evolveSettings.m_generations && (evolveStates[0].m_generation >= evolveSettings.m_generations))
                break;
        }

        if (!WillTerminate()) {
            // Output the evolve results.
            double duration = bestState.Duration();
            totalDuration += duration;
            for (size_t i = 0; i < numDevices; i++) {
                std::string resultText = Format("Seed: %u  Test: %3u  Id: %3u  Generation=%3u  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %6.1f  GenTime: %4.1f  Total: %4.1f  Average: %4.1f", evolveSettings.m_evolveSeed, test, evolveStates[i].m_id, evolveStates[i].m_generation, evolveStates[i].MaxResults(), bestState.MaxResults(), duration, duration / evolveStates[i].m_generation, totalDuration, totalDuration / (t + 1));
                if (bestState.MaxResults() <= evolveSettings.m_target)
                    resultText += " *******";
                resultText += "\n";
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));
            }

            // Save the best state and best solution.
#if FIRESTARTER_SAVE_BESTSTATE
            if (bestState.m_optimizeValid)
                complete->CompleteSaveResults(bestState);
#endif
        }
    }

    // Delete the completion unit.
    complete->Synchronize();
    delete complete;
} // EvolveNewStream

void FireStarterStream::EvolveSinSimStream(void)
{
    // Evolve a number of states equal to the evolveSettings.m_seeds.
    FireStarterSettings evolveSettings(FIRESTARTER_EVOLVE_SINSIM);
    FireStarterSettings optimizeSettings(FIRESTARTER_EVOLVE_SINSIM);
    std::string streamDate = m_streamDate;
    double totalDuration = 0.0;

    // Create the evolution completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, evolveSettings);

    // Create the execution unit used to evolve the best states.
    FireStarterExecute* executeEvolve = new FireStarterExecute();

    // Generate and compile the evolve code.
    executeEvolve->ExecuteGenerateEvolve(evolveSettings.m_mode);

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
            if (++evolveState.m_generation == evolveSettings.m_generations)
                break;
        }

        // Output the test results.
        if (!WillTerminate()) {
            // Output the evolve results.
            double duration = bestState.Duration();
            totalDuration += duration;

            std::string resultText = Format("Seed: %u  Test: %3u  Generation=%3u  Evolve Result=%.8f  Best Result=%.8f  Duration: %8.1f  GenTime: %4.1f  Total: %4.1f  Average: %4.1f", evolveSettings.m_evolveSeed, test, evolveState.m_generation, evolveState.MaxResults(), bestState.MaxResults(), duration, duration / evolveState.m_generation, totalDuration, totalDuration / (t + 1));
            if (bestState.MaxResults() <= evolveSettings.m_target)
                resultText += " *******";
            resultText += "\n";
            FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));

            // Save the best state and best solution.
#if FIRESTARTER_SAVE_BESTSTATE
            complete->CompleteSaveResults(bestState);
#endif
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
    // Test the original SinSim neural net.
    FireStarterSettings sinSimSettings(FIRESTARTER_SINSIM);
    std::string streamDate = m_streamDate;
    double totalDuration = 0.0;

    // Create the evolution completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, sinSimSettings, false);

    // Create the execution unit used to evolve the best states.
    FireStarterExecute* executeSinSim = new FireStarterExecute();

    // Generate and compile the evolve code.
    executeSinSim->ExecuteGenerateEvolve(sinSimSettings.m_mode);

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
        if (++evolveState.m_generation == sinSimSettings.m_generations)
            break;
    }

    // Output the test results.
    if (!WillTerminate()) {
        // Output the evolve results.
        double duration = bestState.Duration();
        totalDuration += duration;

        std::string resultText = Format("Seed: %u  Test: %3u  Generation=%3u  Evolve Result=%.8f  Best Result=%.8f  Duration: %8.1f  GenTime: %6.1f", sinSimSettings.m_evolveSeed, test, evolveState.m_generation, evolveState.MaxResults(), bestState.MaxResults(), duration, duration / evolveState.m_generation);
        if (bestState.MaxResults() <= sinSimSettings.m_target)
            resultText += " *******";
        resultText += "\n";
        FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));

        // Save the best state and best solution.
#if FIRESTARTER_SAVE_BESTSTATE
        complete->CompleteSaveResults(bestState);
#endif
    }

    // Delete the completion unit.
    complete->Synchronize();
    delete complete;

    // Finish processing and terminate the evolution execution units.
    delete executeSinSim;
} // SinSimStream

void FireStarterStream::MoneyMakerStream(void)
{
#if FIRESTARTER_MULTI_GPU
    unsigned int numDevices = CUDAContext::CUDADevices();
#else
    unsigned int numDevices = 1;
#endif
        
    // Evolve a number of states equal to the evolveSettings.m_seeds.
    // Note: These are used by the units so they must be declared first so they are destroyed last.
    FireStarterSettings evolveSettings(FIRESTARTER_MONEYMAKER);
    FireStarterSettings optimizeSettings(FIRESTARTER_MONEYOPTIMIZE);
    std::string streamResultsPath = Format("Logs\\%s_EvolveResults.txt", m_streamDate.c_str());
    unsigned long long evolveID = 0;
    unsigned long long optimizeID = 0;

    // Create the evolution completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, evolveSettings);

    // Load the stock market data;
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

    size_t numEvolve = (MONEYMAKER_EVOLVE_COUNT + (numDevices - 1)) / numDevices;
    size_t numOptimize = (MONEYMAKER_OPTIMIZE_COUNT + (numDevices - 1)) / numDevices;
    unsigned int startStock = evolveSettings.m_stock;

    // Loop until the the evolve completion condition or the host program is quit.
    unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
    for (unsigned int t = 0; (t < evolveTests) && !WillTerminate(); t++) {
        unsigned long long test = FIRESTARTER_START_TEST + t;
        unsigned int testStock = (startStock + test) % numStocks;

        // Create the execution unit used to evolve and optimize the best states.
        FireStarterUnits evolveUnits(numDevices, "MoneyEvolve");
        FireStarterUnits optimizeUnits(numDevices, "MoneyOptimize");
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
            optimizeUnits[0]->ExecuteMoneyTest(optimizeStates[optimize], optimizeSettings.m_variation, optimizeSettings.m_trading, optimizeSettings.m_validation);
            const MoneyMakerStocks* tradingResults = optimizeUnits[0]->GetTradingResults();
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
#if FIRESTARTER_SAVE_BESTSTATE
        if (bestState.m_optimizeValid)
            complete->CompleteSaveResults(bestState);
#endif
    }

    // Delete the completion unit.
    delete complete;
} // MoneyMakerStream

void FireStarterStream::OptimizeStream(void)
{
    // Evolve a number of states equal to the evolveSettings.m_seeds.
    FireStarterSettings optimizeSettings(FIRESTARTER_OPTIMIZE);
    std::string streamDate = m_streamDate;
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
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_OptimizeResults.txt", streamDate.c_str()));
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
    // Evolve a number of states equal to the evolveSettings.m_seeds.
    FireStarterSettings speedTestSettings(FIRESTARTER_SPEED_TEST);
    std::string streamDate = m_streamDate;

    // Create the optimization execution unit.
    FireStarterExecute* execute = new FireStarterExecute();

    // Create the completion unit.
    FireStarterComplete* complete = new FireStarterComplete(m_streamWindow, speedTestSettings);

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
                    std::string resultText = Format("Test: %llu  Generation=%llu  Evolve Result=%.8f  Duration: %.1f", test, testState.m_generation, testState.MaxResults(), bestState.Duration());
                    if (bestState.MaxResults() <= speedTestSettings.m_target)
                        resultText += " *******";
                    resultText += "\n";
                    FireStarterSource::AppendSource(resultText, Format("Logs\\%s_OptimizeResults.txt", streamDate.c_str()));
                }

                // Increment the generation.
                testState.m_generation++;
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
    // Get the time string for when the stream was created.
    static std::string fileDate;
    if (fileDate.empty())
        fileDate = FileNameDate(SimpleTimer::RunSecond()).c_str();
    m_streamDate = fileDate;

    DispatchSync([this] {
        switch (FIRESTARTER_MODE) {
        case FIRESTARTER_RANDOM:
            m_server = FIRESTARTER_MULTIPROCESS ? new FireStarterServer() : nullptr;
            RandomStream(m_server);
            break;
        case FIRESTARTER_SELECT:
            m_server = FIRESTARTER_MULTIPROCESS ? new FireStarterServer() : nullptr;
            EvolveSelectStream(m_server);
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
        case FIRESTARTER_SPEED_TEST:
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
