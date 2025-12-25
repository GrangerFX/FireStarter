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

            // Compile the evolved program.
            // Note: This does nothing when using a multiprocess server.
            compile->CompileJob(true);

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

        // Optimization for single variation optimization population.
        if (optimizeSettings.m_variations == 1) {
            optimizeSettings.m_population = 65536;
            optimizeSettings.m_passes = 384;
        }

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

        // Generate and compile the evolve code.
        executeEvolve->ExecuteGenerateEvolve(evolveSettings.m_mode);

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned int t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
            // Initialize the states.
            unsigned long long test = FIRESTARTER_START_TEST + t;
            FireStarterState evolveState = FireStarterState(evolveSettings, 0, 0, 0, test);
            FireStarterState optimizeState = FireStarterState(optimizeSettings, 0, 0, 0, test);
            FireStarterState bestState = FireStarterState(optimizeSettings, 0, 0, 0, test);

            // Initialize the evolve state's best codes.
            evolveState.m_bestCodes.InitBestCodes(evolveSettings);

            // Evolve the current test.
            while (!WillTerminate() && !bestState.Complete()) {
#if 0
                // Execute the initial GPU evolve.
                executeEvolve->ExecuteEvolve(evolveState);
                const FireStarterCode* bestCode = evolveState.m_bestCodes.GetBestCode();
                while (bestCode) {
                    optimizeState.InitState(optimizeSettings, evolveState.m_generation + 1, 0, 0, test);
                    optimizeState.CopyCode(bestCode);

                    // Compile the optimize code asynchronously.
                    executeOptimize->ExecuteGenerateOptimize(optimizeState);

                    // Execute optimize for any completed compile jobs.
                    executeOptimize->ExecuteEvolveOptimize(optimizeState, bestState, complete);
                    if (bestState.Complete())
                        break;
                    bestCode = evolveState.m_bestCodes.GetBestCode();
                }
#else
                // Get the best code to optimize.
                const FireStarterCode* bestCode = evolveState.m_bestCodes.GetBestCode();
                if (bestCode) {
                    optimizeState.InitState(optimizeSettings, evolveState.m_generation + 1, 0, 0, test);
                    optimizeState.CopyCode(bestCode);

                    // Compile the optimize code asynchronously.
                    executeOptimize->ExecuteGenerateOptimize(optimizeState, false);

                    // Execute the next GPU evolve while the optimize code is compiling.
                    executeEvolve->ExecuteEvolveGPU(evolveState);

                    // Execute optimize for any completed compile jobs.
                    executeOptimize->ExecuteEvolveOptimize(optimizeState, bestState, complete);
                } else
                    // Execute the initial GPU evolve.
                    executeEvolve->ExecuteEvolveGPU(evolveState);
#endif

                // Exit after a set number of generations.
                if (++evolveState.m_generation == evolveSettings.m_generations)
                    break;
            }

            if (!WillTerminate()) {
                // Output the evolve results.
                double duration = bestState.Duration();
                totalDuration += duration;
                std::string resultText = Format("Seed: %u  Test: %3u  Generation=%3u  Evolve Result=%.8f  Optimize Result=%.8f  Duration: %2.1f  GenTime: %.1f  Total: %.1f  Average: %.1f", evolveSettings.m_evolveSeed, test, evolveState.m_generation, evolveState.MaxResults(), bestState.MaxResults(), duration, duration / evolveState.m_generation, totalDuration, totalDuration / testCount);
                if (bestState.MaxResults() <= evolveSettings.m_target)
                    resultText += " *******";
                resultText += "\n";
                FireStarterSource::AppendSource(resultText, Format("Logs\\%s_EvolveResults.txt", streamDate.c_str()));

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
        delete executeEvolve;
        delete executeOptimize;

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

        // A serial thread for compiling the optimize pass.
        SerialThread compiler;

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

            // Initialize the evolve state's best codes.
            evolveState.m_bestCodes.InitBestCodes(evolveSettings);

            // Evolve the current test.
            while (!WillTerminate() && !bestState.Complete()) {
                // Execute the initial GPU evolve.
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
        FireStarterSettings evolveSettings(m_streamSettings);
        FireStarterSettings optimizeSettings(m_streamSettings);
        std::string streamResultsPath = Format("Logs\\%s_EvolveResults.txt", m_streamDate.c_str());

        unsigned long long evolveID = 0;
        unsigned long long optimizeID = 0;

        // Optimization for single variation optimization population.
        optimizeSettings.m_population = 65536;

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
        stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/1/aapl.us.txt", 'AAPL');
        stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/2/nvda.us.txt", 'NVDA');
        stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/2/intc.us.txt", 'INTC');
        stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/2/msft.us.txt", 'MSFT');
        stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/2/qcom.us.txt", 'QCOM');
        stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/1/amzn.us.txt", 'AMZN');
        stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/1/goog.us.txt", 'GOOG');
        stockManager.AddStock("../../StockMarketData/d_us_txt/data/daily/us/nasdaq stocks/1/amd.us.txt",  'AMD ');
        MoneyMakerStocks* stocks = stockManager.Stocks();
        const MoneyMakerStock& stock = stocks->Stock(5);
        executeEvolve->ExecuteSetStocks(evolveSettings, stocks);
        executeOptimize->ExecuteSetStocks(optimizeSettings, stocks);

        // Generate and compile the evolve code.
        executeEvolve->ExecuteGenerateEvolve(evolveSettings.m_mode);

        // Loop until the the evolve completion condition or the host program is quit.
        unsigned int evolveTests = MAX(evolveSettings.m_tests, 1);
        for (unsigned int t = testCount++; (t < evolveTests) && !WillTerminate(); t = testCount++) {
            // Initialize the states.
            unsigned long long test = FIRESTARTER_START_TEST + t;
            FireStarterState evolveState = FireStarterState(evolveSettings, 0, 0, evolveID, test);
            FireStarterState optimizeState = FireStarterState(optimizeSettings, 0, 0, evolveID, test);
            FireStarterState bestState = FireStarterState(optimizeSettings, 0, 0, 0, test);

            // Initialize the evolve state's best codes.
            evolveState.m_bestCodes.InitBestCodes(evolveSettings);

            // Evolve the current test.
            while (!WillTerminate() && !bestState.Complete()) {
                // Execute the initial GPU evolve.
                executeEvolve->ExecuteMoneyEvolve(evolveState);

                double duration = bestState.Duration();
                double runDuration = bestState.RunDuration();
                float evolveResult = evolveState.m_bestCodes.GetBestResult();
                float evolveReturns = MoneyMakerReturns(evolveResult, evolveSettings.m_trading);
                std::string evolveText = Format("Seed: %u  Test: %3llu  Generation=%3llu  Evolve Result=%.4f%%  Duration: %2.1f  Run Duration: %.1f\n", evolveSettings.m_evolveSeed, test, evolveState.m_generation, evolveReturns, duration, runDuration);
                FireStarterSource::AppendSource(evolveText, streamResultsPath);

                for (int i = 0; i < 10; i++) {
                    // Get the best code to optimize.
                    const FireStarterCode* bestCode = evolveState.m_bestCodes.GetBestCode();
                    if (bestCode) {
                        optimizeState.InitState(optimizeSettings, evolveState.m_generation + 1, 0, evolveID, test);
                        optimizeState.CopyCode(bestCode);

                        // Compile the optimize code asynchronously.
                        executeOptimize->ExecuteGenerateOptimize(optimizeState, false);

                        // Execute optimize for any completed compile jobs.
                        executeOptimize->ExecuteMoneyOptimize(optimizeState, bestState, complete);

                        // Output the results.
                        unsigned int numStocks = stocks->size();
                        const MoneyMakerStocks* tradingResults = executeOptimize->GetTradingResults();
                        if (tradingResults) {
                            float optimizeResult = optimizeState.MaxResults();
                            float bestResult = bestState.MaxResults();
                            float optimizeReturns = MoneyMakerReturns(optimizeResult, optimizeSettings.m_trading);
                            float bestReturns = MoneyMakerReturns(bestResult, optimizeSettings.m_trading);
                            double curDuration = bestState.Duration();
                            double optimizeDuration = curDuration - duration;
                            duration = curDuration;
                            runDuration = bestState.RunDuration();

                            std::string optimizeText = Format("\nOptimize Result=%.4f%%  Best Result=%.4f%%  Duration: %.1f  Run Duration: %.1f", optimizeReturns, bestReturns, optimizeDuration, runDuration);
                            if (optimizeResult == bestResult)
                                optimizeText += " *******";
                            optimizeText += "\n";

                            float tradingAverage = 0.0f;
                            float differenceAverage = 0.0f;
                            for (unsigned int stockIndex = 0; stockIndex < numStocks; stockIndex++) {
                                const MoneyMakerStock& stock = stocks->Stock(stockIndex);
                                const MoneyMakerStock& result = tradingResults->Stock(stockIndex);
                                char* symbol = (char*)&stock.symbol;
                                optimizeText += Format("%c%c%c%c: ", symbol[3], symbol[2], symbol[1], symbol[0]);

                                float stockFirstValue = stock[MONEYMAKER_WARMUP];
                                float stockLastValue = stock[MONEYMAKER_HISTORY - 1];
                                float stockReturns = MoneyMakerReturns(stockLastValue / stockFirstValue, MONEYMAKER_VARIATION + MONEYMAKER_TRADING);
                                optimizeText += Format("Stock Returns=%.4f%%  ", stockReturns);

                                float tradingResult = result[0];
                                if (tradingResult) {
                                    float tradingReturns = MoneyMakerReturns(tradingResult, MONEYMAKER_VARIATION + MONEYMAKER_TRADING);
                                    float tradingDifference = tradingReturns - stockReturns;
                                    optimizeText += Format("Trading Returns=%.4f%%  Difference==%.4f%%", tradingReturns, tradingDifference);
                                    tradingAverage += tradingReturns / numStocks;
                                    differenceAverage += tradingDifference / numStocks;
                                } else
                                    optimizeText += "Result Failed!";
                                optimizeText += "\n";
                            }
                            optimizeText += Format("Average Returns=%.4f%%  Average Difference==%.4f%%\n", tradingAverage, differenceAverage);
                            FireStarterSource::AppendSource(optimizeText, streamResultsPath);
                        }
                    }
#if FIRESTARTER_SAVE_BESTSTATE
                    if (bestState.m_optimizeValid)
                        complete->CompleteSaveResults(bestState);
#endif
                }

                // Exit after a set number of generations.
                if (++evolveState.m_generation == evolveSettings.m_generations)
                    break;
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
        evolveState.m_bestCodes.InitBestCodes(speedTestSettings);

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
                    execute->ExecuteEvolveGPU(optimizeState);

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
                case FIRESTARTER_EVOLVE_SINSIM:
                    streams[stream]->EvolveNewStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_SINSIM:
                    streams[stream]->SinSimStream(m_server, m_testCount);
                    break;
                case FIRESTARTER_MONEYMAKER:
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

FireStarterStreams::FireStarterStreams(const FireStarterWindow& window) : m_window(window), m_testCount(0)
{
} // FireStarterStreams

FireStarterStreams::~FireStarterStreams(void)
{
} // ~FireStarterStream