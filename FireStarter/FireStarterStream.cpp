#include "FireStarterStream.h"
#include "FireStarterBuildSettings.h"
#include "FireStarterEvolve.h"
#include "FireStarterCompile.h"
#include "FireStarterExecute.h"
#include "FireStarterComplete.h"
#include "FireStarterSource.h"
#include "FireStarterUtil.h"
#include "FireStarter_LoadState.h"
#include "FireMoneyMaker.h"

#define FIRESTARTER_STREAM_EVOLUTIONS 100

void FireStarterStream::RandomStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        FireStarterSettings randomSettings(m_streamSettings);
        
        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the multi-process compiler.
        FireStarterCompile* compile = new FireStarterCompile(manager, server);
        compile->AddCompiler();

        // Create the execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, randomSettings);

        // Loop until the the completion condition or the host program is quit.
        unsigned int tests = MAX(randomSettings.m_tests, 1);
        unsigned int randomTests = randomSettings.m_states * tests;
        for (unsigned int test = testCount++; (test < randomTests) && !WillTerminate(); test = testCount++) {
            // Setup the intial state
            FireStarterSettings evolveSettings(randomSettings);
            evolveSettings.m_evolveSeed = randomSettings.m_evolveSeed + test / tests;
            FireStarterState evolveState(evolveSettings, 0, m_streamIndex, test % tests, test);

            // Evolve the first generation for the state.
            evolve->RandomState(evolveState);

            // Execute the state.
            execute->ExecuteRandom();

            // Complete the state and display the results.
            complete->CompleteRandom(m_streamBestState, evolveState);

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

        // Delete the evolution code generator.
        delete evolve;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // RandomStream

void FireStarterStream::EvolveSelectStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings selectSettings(m_streamSettings);
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

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the evolution execution units.
        std::vector<FireStarterExecute*> evolutionUnits;
        for (unsigned int i = 0; i < selectSettings.m_units; i++) {
            FireStarterExecute* evolutionUnit = new FireStarterExecute(manager, i);
            evolutionUnits.push_back(evolutionUnit);
        }

        // Create the selection execution unit.
        FireStarterExecute* executeSelect = new FireStarterExecute(manager);

        // Create the optimization execution unit.
        FireStarterExecute* executeOptimize = nullptr;
        if (selectSettings.m_optimize)
            executeOptimize = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, selectSettings, FIRESTARTER_SAVE_BESTSTATE);

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned long long evolveTests = MAX(selectSettings.m_tests, 1);
        for (unsigned long long t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
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
                evolve->SelectStates(executeSelect, test, selectSettings, optimizeSettings, allStates, testedCodes, generation);

                // Execute each state using one of the evolution execution units.
                // Note: ExecuteEvolveCPU must be async because the compiles come back out of order.
                std::atomic<unsigned int> evolveCount = numStates;
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
                std::string resultText = Format("Duration: %.1f  Average: %.1f  Seed=%u  Test=%u  Generation=%u  Best Generations=%u  Evolutions=%u  Evolve Result=%.8f", bestEvolveState.Duration(), SimpleTimer::RunDuration() / testCount, bestEvolveState.Settings().m_evolveSeed, test, generation, bestEvolveState.m_generation, bestEvolveState.m_evolution, bestEvolveState.MaxResults());
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

        // Delete the evolution code generator.
        delete evolve;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // EvolveSelectStream

void FireStarterStream::EvolveCPUStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings evolveSettings(m_streamSettings);
        unsigned int numStates = evolveSettings.m_states;
        evolveSettings.m_units = MIN(evolveSettings.m_units, numStates);
        std::string streamDate = m_streamDate;

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager(numStates);

        // Create a multi-process compiler for each unit.
        FireStarterCompile* compile = new FireStarterCompile(manager, server);
        for (unsigned int i = 0; i < evolveSettings.m_units; i++)
            compile->AddCompiler();

        // Create the evolution code generator.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager);

        // Create the evolution execution units.
        std::vector<FireStarterExecute*> evolutionUnits;
        for (unsigned int i = 0; i < evolveSettings.m_units; i++) {
            FireStarterExecute* evolutionUnit = new FireStarterExecute(manager, i);
            evolutionUnits.push_back(evolutionUnit);
        }

        // Create the optimization execution unit.
        FireStarterExecute* execute = nullptr;
        if (evolveSettings.m_optimize)
            execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, evolveSettings, FIRESTARTER_SAVE_BESTSTATE);

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned long long evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned long long t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
            // Initialize the states.
            FireStarterStates allStates;
            unsigned long long test = FIRESTARTER_START_TEST + t;
            FireStarterState bestEvolveState = FireStarterState(evolveSettings, 0, 0, 0, test);

            // Keep track of the tested instructions so they don't get generated again.
            TestedCodes testedCodes;

            // Evolve the current test.
            unsigned long long generation = 0;
            while (!WillTerminate()) {
                // Evolve a new generation.
                evolve->EvolveStates(test, evolveSettings, allStates, testedCodes, generation);

                // Execute each state using one of the evolution execution units.
                // Note: ExecuteEvolveCPU must be async because the compiles come back out of order.
                std::atomic<unsigned int> evolveCount = numStates;
                for (FireStarterExecute* evolutionUnit : evolutionUnits)
                    evolutionUnit->ExecuteOptimizeCount(evolveCount);

                // Gather and sort the results, update the UI and check for the completion condition.
                // Note: This syncronizes the execution units.
                if (complete->CompleteStates(bestEvolveState, allStates, numStates, generation))
                    break;

                // Increment the generation.
                generation++;
                if (generation == evolveSettings.m_generations)
                    break;
            }

            // Optimize the best state.
            if (!WillTerminate() && !allStates.empty()) {
                // Output the evolve results.
                std::string resultText = Format("Duration: %.1f  Average: %.1f  Seed=%u  Test=%u  Generation=%u  Best Generations=%u  Evolutions=%u  Evolve Result=%.8f", bestEvolveState.Duration(), SimpleTimer::RunDuration() / testCount, bestEvolveState.Settings().m_evolveSeed, test, generation, bestEvolveState.m_generation, bestEvolveState.m_evolution, bestEvolveState.MaxResults());

                // Optimize the evolved state.
                if (evolveSettings.m_optimize) {
                    FireStarterState optimizeState(bestEvolveState);
                    FireStarterState optimizeBestState(optimizeState);

                    // Generate the optimize code.
                    if (execute->ExecuteGenerateOptimize(optimizeState)) {
                        // Loop until the the optimize completion condition or the host program is quit.
                        while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize) && !optimizeBestState.Complete()) {
                            // Optimize the current generation.
                            execute->ExecuteOptimize(optimizeState);

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

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Delete the optimizate execution unit.
        delete execute;

        // Finish processing and terminate each evolution execution unit.
        for (FireStarterExecute* evolutionUnit : evolutionUnits)
            delete evolutionUnit;

        // Delete the multi-process compiler.
        delete compile;

        // Delete the evolution code generator.
        delete evolve;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // EvolveCPUStream

void FireStarterStream::EvolveGPUStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings evolveSettings(m_streamSettings);
        FireStarterSettings optimizeSettings(m_streamSettings);
        std::string streamDate = m_streamDate;
        double totalDuration = 0.0;

#if FIRESTARTER_MULTI_GPU
        size_t numDevices = CUDAContext::CUDADevices();
        numDevices = MAX(numDevices, 1);
#else
        size_t numDevices = 1;
#endif

        // Optimization for single variation optimization population.
        if (optimizeSettings.m_variations == 1) {
            optimizeSettings.m_population = 65536;
            optimizeSettings.m_passes = 384;
        }

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, evolveSettings, FIRESTARTER_SAVE_BESTSTATE);

        // Create the execution unit used to optimize the best states.
        std::vector<FireStarterExecute*> evolveUnits;
        std::vector<FireStarterExecute*> optimizeUnits;
        for (size_t i = 0; i < numDevices; i++) {
            FireStarterExecute* evolveUnit = new FireStarterExecute(manager, i);  // Automatic GPU device allocation.
            FireStarterExecute* optimizeUnit = new FireStarterExecute(manager, i);  // Automatic GPU device allocation.
            evolveUnits.push_back(evolveUnit);
            optimizeUnits.push_back(optimizeUnit);
        }

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned int t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
            // Initialize the states.
            unsigned long long test = FIRESTARTER_START_TEST + t;
            std::vector<FireStarterState> evolveStates(numDevices);
            std::vector<FireStarterState> optimizeStates(numDevices);
            FireStarterState bestState = FireStarterState(optimizeSettings, 0, 0, 0, test);
            FireStarterBestCodes bestCodes(evolveSettings);

            // Execute the initial GPU evolve.
            for (size_t i = 0; i < numDevices; i++) {
                evolveStates[i].InitState(evolveSettings, 0, i, 0, test);
                evolveUnits[i]->ExecuteEvolveGPU(evolveStates[i], bestCodes, false);
                evolveStates[i].m_generation++;
            }
            for (size_t i = 0; i < numDevices; i++)
                evolveUnits[i]->Synchronize();

            // Evolve the current test.
            while (!WillTerminate() && !bestState.Complete()) {
                // Get the best code to optimize.
                for (size_t i = 0; i < numDevices; i++) {
                    FireStarterCodeVector bestCode(optimizeSettings);
                    bestCodes.GetBestCode(bestCode);
                    optimizeStates[i].InitState(optimizeSettings, evolveStates[i].m_generation, i, 0, test);
                    optimizeStates[i].CopyCode(bestCode);

                    // Compile the optimize code asynchronously.
                    optimizeUnits[i]->ExecuteGenerateOptimize(optimizeStates[i], false);
                }

                // Execute the next GPU evolve while the optimize code is compiling.
                if (!evolveSettings.m_generations || (evolveStates[0].m_generation < evolveSettings.m_generations)) {
                    for (size_t i = 0; i < numDevices; i++) {
                        evolveUnits[i]->ExecuteEvolveGPU(evolveStates[i], bestCodes, false);
                        evolveStates[i].m_generation++;
                    }
                    for (size_t i = 0; i < numDevices; i++)
                        evolveUnits[i]->Synchronize();
                }

                // Check for termination mid-generation.
                if (WillTerminate())
                    break;

                // Execute optimize for each unit.
                for (size_t i = 0; i < numDevices; i++)
                    optimizeUnits[i]->ExecuteEvolveOptimize(optimizeStates[i], bestState, complete, false);
                for (size_t i = 0; i < numDevices; i++)
                    optimizeUnits[i]->Synchronize();

                // Exit after a set number of generations.
                if (evolveSettings.m_generations && (evolveStates[0].m_generation >= evolveSettings.m_generations))
                    break;
            }

            if (!WillTerminate()) {
                // Output the evolve results.
                double duration = bestState.Duration();
                totalDuration += duration;
                for (size_t i = 0; i < numDevices; i++) {
                    std::string resultText = Format("Seed: %u  Test: %3u  Id: %3u  Generation=%3u  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %2.1f  GenTime: %.1f  Total: %.1f  Average: %.1f", evolveSettings.m_evolveSeed, test, evolveStates[i].m_id, evolveStates[i].m_generation, evolveStates[i].MaxResults(), bestState.MaxResults(), duration, duration / evolveStates[i].m_generation, totalDuration, totalDuration / testCount);
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

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        complete->Synchronize();
        delete complete;

        // Finish processing and terminate the evolution execution units.
        for (size_t i = 0; i < numDevices; i++) {
            delete evolveUnits[i];
            delete optimizeUnits[i];
        }

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // EvolveGPUStream

void FireStarterStream::EvolveNewStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings evolveSettings(m_streamSettings);
        FireStarterSettings optimizeSettings(m_streamSettings);
        std::string streamDate = m_streamDate;
        double totalDuration = 0.0;

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, evolveSettings, FIRESTARTER_SAVE_BESTSTATE);

        // Create the execution unit used to evolve the best states.
        FireStarterExecute* executeEvolve = new FireStarterExecute(manager);

        // Generate and compile the evolve code.
        executeEvolve->ExecuteGenerateEvolve(evolveSettings.m_mode);

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned int t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
            // Initialize the states.
            unsigned long long test = FIRESTARTER_START_TEST + t;
            FireStarterState evolveState = FireStarterState(evolveSettings, 0, 0, 0, test);
            FireStarterState bestState = FireStarterState(evolveSettings, 0, 0, 0, test);

            // Evolve the current test.
            while (!WillTerminate() && !bestState.Complete()) {
                // Execute the initial GPUNew evolve.
                executeEvolve->ExecuteEvolveNew(evolveState);

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

                std::string resultText = Format("Seed: %u  Test: %3u  Generation=%3u  Evolve Result=%.8f  Best Result=%.8f  Duration: %2.1f  GenTime: %.1f  Total: %.1f  Average: %.1f", evolveSettings.m_evolveSeed, test, evolveState.m_generation, evolveState.MaxResults(), bestState.MaxResults(), duration, duration / evolveState.m_generation, totalDuration, totalDuration / testCount);
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

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        complete->Synchronize();
        delete complete;

        // Finish processing and terminate the evolution execution units.
        delete executeEvolve;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // EvolveNewStream

void FireStarterStream::EvolveSinSimStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings evolveSettings(m_streamSettings);
        FireStarterSettings optimizeSettings(m_streamSettings);
        std::string streamDate = m_streamDate;
        double totalDuration = 0.0;

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the evolution completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, evolveSettings, FIRESTARTER_SAVE_BESTSTATE);

        // Create the execution unit used to evolve the best states.
        FireStarterExecute* executeEvolve = new FireStarterExecute(manager);

        // Generate and compile the evolve code.
        executeEvolve->ExecuteGenerateEvolve(evolveSettings.m_mode);

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned int t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
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

                std::string resultText = Format("Seed: %u  Test: %3u  Generation=%3u  Evolve Result=%.8f  Best Result=%.8f  Duration: %2.1f  GenTime: %.1f  Total: %.1f  Average: %.1f", evolveSettings.m_evolveSeed, test, evolveState.m_generation, evolveState.MaxResults(), bestState.MaxResults(), duration, duration / evolveState.m_generation, totalDuration, totalDuration / testCount);
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

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        complete->Synchronize();
        delete complete;

        // Finish processing and terminate the evolution execution units.
        delete executeEvolve;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
        }, sync);
} // EvolveSinSimStream

void FireStarterStream::SinSimStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Test the original SinSim neural net.
        FireStarterSettings sinSimSettings(m_streamSettings);
        std::string streamDate = m_streamDate;
        double totalDuration = 0.0;

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // A serial thread for compiling the SinSim pass.
        SerialThread compiler;

        // Create the evolution completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, sinSimSettings);

        // Create the execution unit used to evolve the best states.
        FireStarterExecute* executeSinSim = new FireStarterExecute(manager);

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

            std::string resultText = Format("Seed: %u  Test: %3u  Generation=%3u  Evolve Result=%.8f  Best Result=%.8f  Duration: %2.2f  GenTime: %.3f", sinSimSettings.m_evolveSeed, test, evolveState.m_generation, evolveState.MaxResults(), bestState.MaxResults(), duration, duration / evolveState.m_generation);
            if (bestState.MaxResults() <= sinSimSettings.m_target)
                resultText += " *******";
            resultText += "\n";
            FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));

            // Save the best state and best solution.
#if FIRESTARTER_SAVE_BESTSTATE
            complete->CompleteSaveResults(bestState);
#endif
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        complete->Synchronize();
        delete complete;

        // Finish processing and terminate the evolution execution units.
        delete executeSinSim;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // SinSimStream

void FireStarterStream::MoneyMakerStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings evolveSettings(FIRESTARTER_MONEYMAKER);
        FireStarterSettings optimizeSettings(FIRESTARTER_MONEYOPTIMIZE);
        std::string streamResultsPath = Format("Logs\\%s_EvolveResults.txt", m_streamDate.c_str());

        unsigned long long evolveID = 0;
        unsigned long long optimizeID = 0;

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // A serial thread for compiling the optimize pass.
        SerialThread compiler;

        // Create the evolution completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, evolveSettings, FIRESTARTER_SAVE_BESTSTATE);

        // Create the execution unit used to evolve the best states.
        FireStarterExecute* executeEvolve = new FireStarterExecute(manager);

        // Create the execution unit used to optimize the best states.
        FireStarterExecute* executeOptimize = new FireStarterExecute(manager);

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
        executeEvolve->ExecuteSetStocks(stocks);
        executeOptimize->ExecuteSetStocks(stocks);

        unsigned int startStock = evolveSettings.m_stock;
#if MONEYMAKER_EVOLVE_EACH
        // Evolve and optimize each stock individually
        unsigned int numEvolve = evolveSettings.m_stocks;
        unsigned int numOptimize = 1;
        evolveSettings.m_stocks = 1;
        optimizeSettings.m_stocks = 1;
#if MONEYMAKER_OPTIMIZE_EACH
        // Optimize the entire trading and variation ranges in a single session.
        optimizeSettings.m_stocks = 1;
#endif
#elif MONEYMAKER_OPTIMIZE_EACH
        // Optimize each stock individually.
        unsigned int numEvolve = 1;
        unsigned int numOptimize = optimizeSettings.m_stocks;
        optimizeSettings.m_stocks = 1;
#else
        unsigned int numEvolve = 1;
        unsigned int numOptimize = 1;
#endif

        // Generate and compile the evolve code.
        executeEvolve->ExecuteGenerateEvolve(evolveSettings.m_mode);

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned int t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
            unsigned long long test = FIRESTARTER_START_TEST + t;

            for (unsigned int evolve = 0; evolve < numEvolve; evolve++) {
                FireStarterState evolveState = FireStarterState(evolveSettings, 0, 0, evolveID, test);
                evolveState.Settings().m_stock = startStock;

                // Initialize the evolve state's best codes
                FireStarterBestCodes bestCodes(evolveSettings);

                // Evolve the current test.
                while (!WillTerminate() && !evolveState.Complete()) {
                    // Execute the initial GPU evolve.
                    executeEvolve->ExecuteMoneyEvolve(evolveState, bestCodes);
                    std::string evolveText;

                    double duration = evolveState.Duration();
                    double runDuration = evolveState.RunDuration();
                    float evolveResult = bestCodes.GetBestResult();
#if MONEYMAKER_WINS
                    float evolveReturns = (1.0f - evolveResult) * 100.0f; // Remove inversion.
#else
                    float evolveReturns = MoneyMakerReturns(1.0f - evolveResult); // Remove inversion.
#endif
                    if (evolveSettings.m_stocks == 1) {
                        const MoneyMakerStock& stock = stocks->Stock(evolveState.Settings().m_stock % numStocks);
                        char* symbol = (char*)&stock.symbol;
                        evolveText += Format("%c%c%c%c:  ", symbol[3], symbol[2], symbol[1], symbol[0]);
                    }

                    evolveText += Format("Seed: %u  Test: %3llu  Generation=%3llu  Evolve Returns=%7.2f%%  Duration: %7.1f  Run Duration: %7.1f\n", evolveSettings.m_evolveSeed, test, evolveState.m_generation, evolveReturns, duration, runDuration);
                    FireStarterSource::AppendSource(evolveText, streamResultsPath);

                    // Get the best code to optimize.
                    unsigned int bestCount = 0;
                    float bestEvolveResult = 0.0f;
                    FireStarterCodeVector bestCode(optimizeSettings);
#if MONEYMAKER_OPTIMIZE_ALL
                    evolveText += "\n";
                    while ((bestEvolveResult = evolveState.m_bestCodes.GetBestCode(bestCode)) != 0.0f)
#else
                    if ((bestEvolveResult = bestCodes.GetBestCode(bestCode)) != 0.0f)
#endif
                    {
                        // Compile the optimize code asynchronously.
                        FireStarterState optimizeState = FireStarterState(optimizeSettings, evolveState.m_generation + 1, 0, evolveID, test);
                        optimizeState.CopyCode(bestCode);
                        executeOptimize->ExecuteGenerateOptimize(optimizeState);
                        unsigned int numTradingResults = optimizeState.Settings().m_stocks;

                        std::vector<FireStarterState> bestStates(numOptimize);
#if MONEYMAKER_OPTIMIZE_ALL
                        float bestEvolveReturns = MoneyMakerReturns(1.0f - bestEvolveResult); // Remove inversion.
                        std::string bestResturnsText = Format("\nBest Returns[%d]=%7.2f%%\n", bestCount, bestEvolveReturns);
                        FireStarterSource::AppendSource(bestResturnsText, streamResultsPath);
#endif
                        for (unsigned int optimize = 0; optimize < numOptimize; optimize++) {
                            // Optimize the evolved code for the current stock.
                            optimizeState.Settings().m_stock = startStock + optimize;
                            bestStates[optimize].InitState(optimizeState.Settings(), optimizeState.m_generation + 1, 0, evolveID, test);
                            bestStates[optimize].CopyCode(bestCode);
                            executeOptimize->ExecuteMoneyOptimize(optimizeState, bestStates[optimize], complete);

                            // Output the results.
                            std::string optimizeText;
                            if (numTradingResults == 1) {
                                char* symbol = (char*)&stocks->Stock(optimizeState.Settings().m_stock).symbol;
                                optimizeText += Format("%c%c%c%c: ", symbol[3], symbol[2], symbol[1], symbol[0]);
                            }

                            float optimizeResult = optimizeState.MaxResults();
                            float bestResult = bestStates[optimize].MaxResults();
#if MONEYMAKER_WINS
                            float optimizeReturns = (1.0f - optimizeResult) * 100.0f; // Remove inversion.
                            float bestReturns = (1.0f - bestResult) * 100.0f; // Remove inversion.
#else
                            float optimizeReturns = MoneyMakerReturns(1.0f - optimizeResult); // Remove inversion.
                            float bestReturns = MoneyMakerReturns(1.0f - bestResult); // Remove inversion.
#endif
                            double curDuration = evolveState.Duration();
                            double optimizeDuration = curDuration - duration;
                            duration = curDuration;
                            runDuration = bestStates[optimize].RunDuration();

#if MONEYMAKER_OPTIMIZE_ALL
                            optimizeText += Format("Optimize Returns=%7.2f%%  Best Returns=%7.2f%%  Duration: %7.1f  Run Duration: %7.1f", optimizeReturns, bestReturns, optimizeDuration, runDuration);
                            if (optimizeResult == bestResult)
                                optimizeText += " *******";
                            optimizeText += "\n";
#else
                            optimizeText += Format("Optimize Returns=%7.2f%%  Optimize Duration: %7.1f  Run Duration: %7.1f  ", optimizeReturns, optimizeDuration, runDuration);
                            optimizeText += "\n";
#endif

#if 1
                            unsigned int numTests = 10;
                            for (unsigned int i = 0; i <= numTests; i++) {
                                unsigned int testStartDay, testNumDays;
                                // Test the trading on the same stocks used for optimization.
                                if (i == numTests) {
                                    testStartDay = optimizeSettings.m_variation + optimizeSettings.m_trading;
                                    testNumDays = optimizeSettings.m_validation;
                                } else {
                                    testStartDay = (optimizeSettings.m_variation * i) / (numTests - 1);
                                    testNumDays = optimizeSettings.m_trading;
                                }
                                executeOptimize->ExecuteMoneyTest(optimizeState, testStartDay, testNumDays, 0);
                                const MoneyMakerStocks* tradingResults = executeOptimize->GetTradingResults();
                                if (tradingResults) {
                                    float tradingAverage = 0.0f;
                                    float differenceAverage = 0.0f;
                                    float tradingWinsAverage = 0.0f;
                                    for (unsigned int tradeIndex = 0; tradeIndex < numTradingResults; tradeIndex++) {
                                        unsigned int stockIndex = optimizeState.Settings().m_stock + tradeIndex;
                                        const MoneyMakerStock& stock = stocks->Stock(stockIndex);
                                        const MoneyMakerStock& tester = tradingResults->Stock(stockIndex);

                                        if (numTradingResults > 1) {
                                            char* symbol = (char*)&stock.symbol;
                                            optimizeText += Format("%c%c%c%c: ", symbol[3], symbol[2], symbol[1], symbol[0]);
                                        }

                                        unsigned int tradeFirstDay = testStartDay;
                                        unsigned int tradeLastDay = testStartDay + testNumDays;
                                        float tradeFirstValue = stock[tradeFirstDay];
                                        float tradeLastValue = stock[tradeLastDay - 1];
                                        float tradingProfit = tradeLastValue - tradeFirstValue;
                                        float tradingPercent = tradingProfit / tradeFirstValue;
                                        float tradingDailyPercent = tradingPercent / (testNumDays - 1);
                                        float stockTradeReturns = MoneyMakerReturns(tradingDailyPercent);

                                        float tradingResult = tester.tradingResult;
                                        if (tradingResult) {
                                            float tradingWins = 100.0f * tester.tradingWins;
                                            float tradingReturns = MoneyMakerReturns(tradingResult);
                                            float tradingDifference = tradingReturns - stockTradeReturns;
                                            tradingAverage += tradingReturns / numOptimize;
                                            differenceAverage += tradingDifference / numOptimize;
                                            tradingWinsAverage += tradingWins / numOptimize;
                                            if (i == numTests)
                                                optimizeText += "Validation: ";
                                            else
                                                optimizeText += Format("Trading %u: ", i);
                                            optimizeText += Format("Wins=%7.2f%%  Returns=%7.2f%%  Stock=%7.2f%%  Difference==%7.2f%%   ", tradingWins, tradingReturns, stockTradeReturns, tradingDifference);
                                        } else
                                            optimizeText += "Trading Failed!";
                                        optimizeText += "\n";
                                    }
                                    if (numTradingResults > 1)
                                        optimizeText += Format("Average Returns=%7.2f%%  Average Difference=%7.2f%%  Average Trading Wins=%7.2f%%  Average Validation Wins=%7.2f%%\n\n", tradingAverage, differenceAverage, 100.0f * tradingWinsAverage);
                                }
                            }
#else
                            executeOptimize->ExecuteMoneyTest(optimizeState, optimizeSettings.m_variation, optimizeSettings.m_trading, optimizeSettings.m_validation);
                            const MoneyMakerStocks* tradingResults = executeOptimize->GetTradingResults();
                            if (tradingResults) {
                                float tradingAverage = 0.0f;
                                float differenceAverage = 0.0f;
                                float tradingWinsAverage = 0.0f;
                                for (unsigned int tradeIndex = 0; tradeIndex < numTradingResults; tradeIndex++) {
                                    unsigned int stockIndex = optimizeState.Settings().m_stock + tradeIndex;
                                    const MoneyMakerStock& stock = stocks->Stock(stockIndex);
                                    const MoneyMakerStock& tester = tradingResults->Stock(stockIndex);

                                    if (numTradingResults > 1) {
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
                                if (numTradingResults > 1)
                                    optimizeText += Format("Average Returns=%7.2f%%  Average Difference=%7.2f%%  Average Trading Wins=%7.2f%%  Average Validation Wins=%7.2f%%\n\n", tradingAverage, differenceAverage, 100.0f * tradingWinsAverage);
                            }
#endif
                            FireStarterSource::AppendSource(optimizeText, streamResultsPath);
                        }

                        // Save the best state. Note: TODO: Output all evolve and optimize states?
#if FIRESTARTER_SAVE_BESTSTATE
                        if ((evolve == 0) && (bestStates[0].m_optimizeValid))
                            complete->CompleteSaveResults(bestStates[0]);
#endif
                        bestCount++;
                    }
                    startStock++;

                    // Exit after a set number of generations.
                    if (++evolveState.m_generation == evolveSettings.m_generations)
                        break;
                }
            }
            
#if 0
            // Increment the evolve ID to make every evolution unique.
            // This will unfairly benefit some evolutions over others but create more opportumities for success.
            evolveID++;
#endif
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        complete->Synchronize();
        delete complete;

        // Finish processing and terminate the evolution execution units.
        delete executeEvolve;
        delete executeOptimize;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // MoneyMakerStream

void FireStarterStream::SpeedTestStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings speedTestSettings(m_streamSettings);
        std::string streamDate = m_streamDate;

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the optimization execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, speedTestSettings);

        // Generate the optimize code.
        FireStarterState evolveState = FireStarterState(speedTestSettings);

        // Initialize the evolve state's best codes.
        FireStarterBestCodes bestCodes(speedTestSettings);

        if (execute->ExecuteGenerateEvolve(speedTestSettings.m_mode)) {
            // Loop until the the evolve completion condition or the host program is quit.
            unsigned long long evolveTests = MAX(speedTestSettings.m_tests, 1);
            for (unsigned long long t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
                // Initialize the states.
                FireStarterStates allStates;
                unsigned long long test = FIRESTARTER_START_TEST + t;

                // Optimize the evolved state.
                FireStarterState optimizeState(speedTestSettings);
                optimizeState.CopyCode(evolveState);
                optimizeState.m_test = test;
                FireStarterState bestState(optimizeState);

                // Loop until the the optimize completion condition or the host program is quit.
                while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize) && !bestState.Complete()) {
                    // Optimize the current generation.
                    execute->ExecuteEvolveGPU(optimizeState, bestCodes);

                    // Update the results in the UI and check for completion.
                    complete->CompleteState(bestState, optimizeState);

                    // Increment the generation.
                    optimizeState.m_optimize_pass++;
                }

                // Output the test results.
                if (!WillTerminate()) {
                    // Output the evolve results.
                    std::string resultText = Format("Test: %llu  Pass=%llu  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %.1f", test, optimizeState.m_optimize_pass, evolveState.MaxResults(), optimizeState.MaxResults(), bestState.Duration());
                    if (bestState.MaxResults() <= speedTestSettings.m_target)
                        resultText += " *******";
                    resultText += "\n";
                    FireStarterSource::AppendSource(resultText, Format("Logs\\%s_OptimizeResults.txt", streamDate.c_str()));
                }
            }
        }

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Delete the optimizate execution unit.
        delete execute;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // SpeedTestStream

void FireStarterStream::OptimizeStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync)
{
    Dispatch([this, server, &testCount] {
        // Evolve a number of states equal to the evolveSettings.m_seeds.
        FireStarterSettings optimizeSettings(m_streamSettings);
        std::string streamDate = m_streamDate;
        FireStarterState evolveState;
        LoadState(evolveState);

        // Create the compiler manager
        FireStarterManager* manager = new FireStarterManager();

        // Create the optimization execution unit.
        FireStarterExecute* execute = new FireStarterExecute(manager);

        // Create the completion unit.
        FireStarterComplete* complete = new FireStarterComplete(manager, m_streamWindow, optimizeSettings);

        // Generate the optimize code.
        if (execute->ExecuteGenerateOptimize(evolveState)) {
            // Loop until the the evolve completion condition or the host program is quit.
            unsigned long long evolveTests = MAX(optimizeSettings.m_tests, 1);
            for (unsigned long long t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
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

        // Cancel any waiting jobs
        manager->Cancel();

        // Delete the completion unit.
        delete complete;

        // Delete the optimizate execution unit.
        delete execute;

        // Delete the compilier manager and cancel any waiting jobs.
        delete manager;
    }, sync);
} // OptimizeStream

FireStarterStream::FireStarterStream(size_t index, const FireStarterWindow& window, FireStarterState& bestState, const FireStarterSettings& streamSettings) : SerialThread(Format("FireStarterStream%zu", index)),
    m_streamIndex(index),
    m_streamWindow(window),
    m_streamBestState(bestState),
    m_streamSettings(streamSettings)
{
    static std::string fileDate;
    if (fileDate.empty())
        fileDate = FileNameDate(SimpleTimer::RunSecond()).c_str();
    m_streamDate = fileDate;
} // FireStarterStream

FireStarterStream::~FireStarterStream(void)
{
    SerialThread::Synchronize();
} // ~FireStarterStream

bool FireStarterStreams::SynchronizeStreams(std::vector<FireStarterStream*>& streams)
{
    bool result = true;
    for (FireStarterStream* stream : streams)
        result &= stream->Synchronize();
    return result;
} // SynchronizeStreams

void FireStarterStreams::ExecuteStreams(void)
{
    DispatchSync([this] {
        // Load the optimize settings from the compiled CUDA code.
        // This allows the settings to be modified without recompiling the main program.
#if FIRESTARTER_GENERATE_GPU
        FireStarterBuildSettings buildSettings;
        buildSettings.FireSettings(m_streamSettings);  // This will set the default mode.
#endif

        size_t numStreams = MAX(MIN(m_streamSettings.m_streams, m_streamSettings.m_tests), 1);
        FireStarterState bestState(m_streamSettings);

        // Create the streams.
        std::vector<FireStarterStream*> streams(numStreams, nullptr);
        for (size_t stream = 0; stream < numStreams; stream++)
            streams[stream] = new FireStarterStream(stream, m_window, bestState, m_streamSettings);

        // Evolve the streams.
        m_testCount = 0;

        m_server = (FIRESTARTER_MULTIPROCESS > 1) || (FIRESTARTER_MULTIPROCESS && (MAX(numStreams, m_streamSettings.m_units) > 1)) ? new FireStarterServer() : nullptr;
        for (size_t stream = 0; stream < numStreams; stream++)
            switch (m_streamSettings.m_mode) {
                case FIRESTARTER_RANDOM:
                    streams[stream]->RandomStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_SELECT:
                    streams[stream]->EvolveSelectStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_EVOLVE_CPU:
                    streams[stream]->EvolveCPUStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_EVOLVE_GPU:
                    streams[stream]->EvolveGPUStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_EVOLVE_NEW:
                    streams[stream]->EvolveNewStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_EVOLVE_SINSIM:
                    streams[stream]->EvolveSinSimStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_SINSIM:
                    streams[stream]->SinSimStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_MONEYMAKER:
                case FIRESTARTER_MONEYOPTIMIZE:
                    streams[stream]->MoneyMakerStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_SPEED_TEST:
                    streams[stream]->SpeedTestStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_OPTIMIZE:
                    streams[stream]->OptimizeStream(m_server, m_testCount);
                    break;
            }

        // Wait for all the streams to complete.
        bool streamsComplete = false;
        do {
            streamsComplete = true;
            for (FireStarterStream* stream : streams)
                if (!stream->IsFinished()) {
                    streamsComplete = false;
                    break;
                }
            SleepFor(0.1);
        } while (!(WillTerminate() || streamsComplete));

        // Terminate and delete each stream unit.
        for (FireStarterStream* stream : streams)
            delete stream;

        // Shut down and delete the server.
        delete m_server;
    });
} // ExecuteStreams

FireStarterStreams::FireStarterStreams(const FireStarterWindow& window) : SerialThread("FireStarterStreams"), m_window(window), m_testCount(0)
{
} // FireStarterStreams

FireStarterStreams::~FireStarterStreams(void)
{
} // ~FireStarterStream