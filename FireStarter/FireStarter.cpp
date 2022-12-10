#include "FireStarter.h"
#include "FireStarterCode.h"
#include "FireStarterUtil.h"
#include "FireStarter_LoadState.h"
#include "FireStarter_Solution.h"
#include "FireStarterEvolve.h"
#include "FireStarterExecute.h"
#include "CUDAContext.h"
#include "CUDACompile.h"

bool FireStarter::LoadFireSettingsCode(void)
{
    if (!FireStarterCode::LoadCode("FireSettings.cu", m_fireSettingsCode))
        return false;
    return true;
} // LoadFireSettingsCode

void FireStarter::FireSettings(FireStarterSettings &settings, unsigned int firestarterMode)
{
    // Launch the load settings kernel
    dim3 cudaBlockSize(BLOCK_THREADS, 1, 1);
    dim3 cudaGridSize(1, 1, 1);

    FireStarterSettings* fireSettings = nullptr;
    checkCUDAErrors(cudaMalloc(&fireSettings, sizeof(FireStarterSettings)));

    void* arr[] = { reinterpret_cast<void*>(&fireSettings),
                    reinterpret_cast<void*>(&firestarterMode) };

    checkCUDAErrors(cuLaunchKernel(m_fireSettingsFunction,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0,                                                  // shared mem
        m_CUDAContext->Stream(),                            // CUDA stream */
        &arr[0],                                            // arguments */
        0));
    checkCUDAErrors(cudaMemcpyAsync(&settings, fireSettings, sizeof(FireStarterSettings), cudaMemcpyDeviceToHost, m_CUDAContext->Stream()));
    checkCUDAErrors(cudaStreamSynchronize(m_CUDAContext->Stream()));

    // Unload the fire show code and destroy the CUDA context.
    checkCUDAErrors(cudaFree(fireSettings));
} // FireSettings

void FireStarter::ControlDeallocate(void)
{
    if (m_fireSettingsModule) {
        checkCUDAErrors(cuModuleUnload(m_fireSettingsModule));
        m_fireSettingsModule = nullptr;
    }
} // ControlDeallocate

void FireStarter::ControlAllocate(void)
{
    if (!m_CUDAContext)
        m_CUDAContext = new CUDAContext(0);
    ControlDeallocate();

    // Compile FireSettings
    if (CUDACompile::CompileProgram(m_fireSettingsModule, m_fireSettingsCode, "FireSettings"))
        m_fireSettingsFunction = CUDACompile::GetFunction(m_fireSettingsModule, "FireSettings");
} // ControlAllocate

void FireStarter::ControlUnits(void)
{
    // Create the completion unit.
    m_complete = new FireStarterComplete(m_settings);
    m_complete->CompleteInit(m_window, m_width, m_height);

    // Create the states and units.
    std::vector<FireStarterUnit*> units;
    std::vector<FireStarterState> allStates;
    bool result = true;
    for (unsigned int i = 0; i < m_settings.m_units; i++) {
        FireStarterUnit* unit = new FireStarterUnit(i, CUDAContext::CUDADevices());
        if (unit->InitUnit(m_bestState)) {
            allStates.push_back(m_bestState);
            units.push_back(unit);
        } else {
            delete unit;
            result = false;
            break;
        }
    }

    if (result) {
        // Loop until the the completion condition or the host program is quit.
        m_controlTimer.Start();
        while (!m_quitControlThread) {
            // Execute a generation for all the units.
            for (FireStarterUnit* unit : units)
                unit->Execute();

            // Update the states for all the units.
            bool allFinished = true;
            for (FireStarterUnit* unit : units) {
                FireStarterState state;
                unit->GetState(state);

                // Update the best state and display the results.
                FireStarterState& oldState = allStates[state.m_index];
                m_complete->CompleteResults(m_bestState, state, oldState);

                // Is there more work to do?
                if (state.m_generation - m_bestState.m_generation < m_settings.m_attempts)
                    allFinished = false;
            }

            // Send all the states back to all the units.
            for (FireStarterUnit* unit : units)
                unit->Sync(allStates.data());

            // Has the completion condition been met?
            if (allFinished)
                break;
        }
    }

    // Finish processing and terminate each unit.
    for (FireStarterUnit* unit : units)
        delete unit;

    // Delete the completion unit.
    delete m_complete;
    m_complete = nullptr;
} // ControlUnits

void FireStarter::ControlTest(void)
{
    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(m_settings.m_units, m_settings.m_processes));

    // Setup the intial state
    std::vector<FireStarterState> allStates;
    FireStarterState testState(m_settings);
    allStates.push_back(testState);
    m_bestState = testState;

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager, 0);

    // Create the completion unit.
    m_complete = new FireStarterComplete(m_settings);
    m_complete->CompleteInit(m_window, m_width, m_height);

    // Loop until the the completion condition or the host program is quit.
    m_controlTimer.Start();
    unsigned int generation = 0;
    while (!m_quitControlThread) {
        evolve->EvolveStates(&m_bestState, allStates, generation);
        execute->ExecuteEvolve();
        if (!m_complete->CompleteStates(manager, m_bestState, allStates, generation))
            break;
        generation++;
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete m_complete;
    m_complete = nullptr;

    // Finish processing and terminate each unit.
    delete execute;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // ControlTest

void FireStarter::ControlRandom(void)
{
    // if the evolve proceesses is set to zero, use the number of concurrent hardware threads.
#if FIRESTARTER_AUTO_PROCESS
    if (m_settings.m_processes == 0)
        m_settings.m_processes = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.
#endif

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(m_settings.m_units, m_settings.m_processes));

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Setup the intial best state 
    m_bestState.InitState(m_settings);
    m_bestState.m_program.RandomProgram(m_bestState.StateSeed());

    // Start generating random code generations.
    evolve->EvolveGenerations(&m_bestState, m_settings.m_attempts);

    // Create and run the execution units.
    FireStarterExecuteRandom* executeRandom = new FireStarterExecuteRandom(manager, m_settings.m_units);

    // Create the completion unit.
    m_complete = new FireStarterComplete(m_settings);
    m_complete->CompleteInit(m_window, m_width, m_height);

    // Setup the work state
    FireStarterState oldState = m_bestState;

    // Loop until the the completion condition or the host program is quit.
    m_controlTimer.Start();
    while (!m_quitControlThread) {
        if (!m_complete->CompleteRandom(manager, m_bestState, oldState))
            break;
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete m_complete;
    m_complete = nullptr;

    // Finish processing and terminate each unit.
    delete executeRandom;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // ControlRandom

void FireStarter::ControlEvolve(void)
{
    // if the evolve proceesses is set to zero, use the number of concurrent hardware threads.
#if FIRESTARTER_AUTO_PROCESS
    if (m_settings.m_processes == 0)
        m_settings.m_processes = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.
#endif

    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(max(m_settings.m_units, m_settings.m_processes));

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Setup the intial best state 
    m_bestState.InitState(m_settings);
    m_bestState.m_program.RandomProgram(m_bestState.StateSeed());

    // Create the states and units.
    std::vector<FireStarterEvolve*> evolveUnits;
    std::vector<FireStarterExecute*> executionUnits;
    std::vector<FireStarterState> allStates;
    for (unsigned int i = 0; i < m_settings.m_units; i++) {
        // Randomize the entire program for the first generation
        FireStarterState state(m_settings, i);
        state.m_program.RandomProgram(state.StateSeed());
        allStates.push_back(state);

        // Create an evolve unit.
        FireStarterEvolve* evolve = new FireStarterEvolve(manager, i);
        evolveUnits.push_back(evolve);

        // Create an evolution generator unit.
        FireStarterExecute* execute = new FireStarterExecute(manager, i);
        executionUnits.push_back(execute);
    }

    // Create the completion unit.
    m_complete = new FireStarterComplete(m_settings);
    m_complete->CompleteInit(m_window, m_width, m_height);

    // Loop until the the completion condition or the host program is quit.
    m_controlTimer.Start();
    unsigned int generation = 0;
    while (!m_quitControlThread) {
        // Evolve a new generation for each state.
        for (unsigned int i = 0; i < m_settings.m_units; i++)
            evolveUnits[i]->EvolveStates(&m_bestState, allStates, generation);

        // Execute each state.
        for (FireStarterExecute* execute : executionUnits)
            execute->ExecuteEvolve();

        // Complete each state and display the results.
        if (!m_complete->CompleteStates(manager, m_bestState, allStates, generation))
            break;
        generation++;
    }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete m_complete;
    m_complete = nullptr;

    // Finish processing and terminate each unit.
    for (FireStarterExecute* execute : executionUnits)
        delete execute;

    // Delete the evolution code generator.
    for (FireStarterEvolve* evolve : evolveUnits)
        delete evolve;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
} // ControlEvolve

void FireStarter::ControlOptimize(void)
{
    if (m_quitControlThread)
        return;

    // Load the best state.
    FireStarterSettings optimizeSettings;
    FireSettings(optimizeSettings, FIRESTARTER_OPTIMIZE);
    m_settings.CopyModeSettings(optimizeSettings);
    m_bestState.Settings() = m_settings;
    m_bestState.m_generation = 0;
    m_bestState.m_index = 0;

    // Optimization evolution pass.
#if 1
    // Create the compiler manager
    FireStarterManager* manager = new FireStarterManager(1);

    // Create the multi-process compiler.
    FireStarterCompile* compile = new FireStarterCompile(manager, m_settings.m_processes);

    // Create the evolution code generator.
    FireStarterEvolve* evolve = new FireStarterEvolve(manager);

    // Create the execution unit.
    FireStarterExecute* execute = new FireStarterExecute(manager, 0);

    // Create the completion unit.
    m_complete = new FireStarterComplete(m_settings);
    m_complete->CompleteInit(m_window, m_width, m_height);

    // Create the state and execution unit.
    std::vector<FireStarterState> allStates;
    allStates.push_back(m_bestState);

    // Generate the optimize code.
    evolve->GenerateOptimize(&m_bestState);

    // Compile the optimize code.
    execute->ExecuteCompile();

    // Loop until the the completion condition or the host program is quit.
    m_controlTimer.Start();
    unsigned int generation = 0;
    while (!m_quitControlThread) {
        // Optimize the current generation.
        execute->ExecuteOptimize(generation);

        // Update the results in the UI.
        if (!m_complete->CompleteStates(manager, m_bestState, allStates, generation))
            break;
        generation++;
   }

    // Cancel any waiting jobs
    manager->Cancel();

    // Delete the completion unit.
    delete m_complete;
    m_complete = nullptr;

    // Finish processing and terminate each unit.
    delete execute;

    // Delete the evolution code generator.
    delete evolve;

    // Delete the multi-process compiler.
    delete compile;

    // Delete the compilier manager and cancel any waiting jobs.
    delete manager;
#else
    ControlUnits();
#endif
} // ControlOptimize

void FireStarter::ControlSolution(void)
{
    // Create the completion unit.
    m_complete = new FireStarterComplete(m_settings);
    m_complete->CompleteInit(m_window, m_width, m_height);

    // Draw the solution in the window.
    m_complete->CompleteSolution();

    // Delete the completion unit.
    delete m_complete;
    m_complete = nullptr;
} // ControlSolution

void FireStarter::ControlThread(void)
{
    // Load the settings from the compiled CUDA code.
    // This allows the settings to be modified without recompiling the main program.
    FireSettings(m_settings, FIRESTARTER_MODE);

    // If the evolve units is set to zero, use the number of gpus.
    if (m_settings.m_units == 0)
        m_settings.m_units = CUDAContext::CUDADevices();

    if (!m_quitControlThread) {
        if ((m_settings.m_mode == FIRESTARTER_CODE) || (m_settings.m_mode == FIRESTARTER_UNIT)) {
            // Initialize the best state.
            m_bestState.InitState(m_settings);

            // Program evolution pass.
            ControlUnits();

            // Optimization evolution pass.
            if (!m_quitControlThread) {
                // Load the best state.
                FireStarterSettings optimizeSettings;
                FireSettings(optimizeSettings, FIRESTARTER_OPTIMIZE);
                m_settings.CopyModeSettings(optimizeSettings);
                m_bestState.Settings() = m_settings;
                m_bestState.m_generation = 0;
                m_bestState.m_index = 0;
                ControlUnits();
            }
        } else if (m_settings.m_mode == FIRESTARTER_TEST) {
            // Test of jobs without processes.
            m_settings.m_units = 1;
            m_settings.m_processes = 0;
            ControlTest();
        } else if (m_settings.m_mode == FIRESTARTER_RANDOM) {
            // Random generations.
            ControlRandom();
        } else if (m_settings.m_mode == FIRESTARTER_EVOLVE) {
            // Evolved generations.
            ControlEvolve();

            // Optimization evolution pass.
            if (FIRESTARTER_SECOND_PASS)
                ControlOptimize();
        } else if (m_settings.m_mode == FIRESTARTER_OPTIMIZE) {
            // Load the best state from the previous Test, Random or Evolve run.
            LoadState(m_bestState);
            m_bestState.Settings().CopyModeSettings(m_settings);
            m_bestState.m_generation = 0;
            m_bestState.m_index = 0;
            m_bestState.InitResult();

            // Optimization evolution pass.
            ControlOptimize();
        } else if (m_settings.m_mode == FIRESTARTER_SOLUTION) {
            ControlSolution();
        }
    }
} // ControlThread

bool FireStarter::Init(void* window, unsigned int width, unsigned int height)
{
    m_window = window;
    m_width = width;
    m_height = height;
    if (LoadFireSettingsCode()) {
        DispatchAsync([this] { ControlAllocate(); });
        DispatchAsync([this] { ControlThread(); });
        DispatchAsync([this] { ControlDeallocate(); });
        return true;
    }
    return false;
} // Init

FireStarter::FireStarter(void)
{
    m_CUDAContext = nullptr;
    m_fireSettingsModule = nullptr;
    m_fireSettingsFunction = nullptr;
    m_quitControlThread = false;
} // FireStarter

FireStarter::~FireStarter(void)
{
    m_quitControlThread = true;
    DispatchSync([this] {
        ControlDeallocate();
        if (m_CUDAContext)
            delete m_CUDAContext;
    });
} // ~FireStarter