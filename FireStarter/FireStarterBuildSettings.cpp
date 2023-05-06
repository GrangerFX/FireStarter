#include "FireStarterBuildSettings.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

bool FireStarterBuildSettings::LoadFireSettingsCode(void)
{
    if (!FireStarterCode::LoadCode("FireSettings.cu", m_fireSettingsCode))
        return false;
    return true;
} // LoadFireSettingsCode

void FireStarterBuildSettings::FireSettings(FireStarterSettings& settings, unsigned int fireStarterMode)
{
    DispatchSync([this, &settings, fireStarterMode] {
        if (m_fireSettingsFunction) {
            CUDAContext* context = Context();
            CUstream stream = context->Stream();

            // Launch the load settings kernel
            dim3 cudaBlockSize(WARP_THREADS, 1, 1);
            dim3 cudaGridSize(1, 1, 1);

            FireStarterSettings* fireSettings = nullptr;
            checkCUDAErrors(cudaMallocAsync(&fireSettings, sizeof(FireStarterSettings), stream));
            unsigned int fireMode = fireStarterMode;

            void* arr[] = { reinterpret_cast<void*>(&fireSettings),
                            reinterpret_cast<void*>(&fireMode) };

            checkCUDAErrors(cuLaunchKernel(m_fireSettingsFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
                0,                                                  // shared mem
                stream,                                             // CUDA stream
                &arr[0],                                            // arguments
                0));
            checkCUDAErrors(cudaMemcpyAsync(&settings, fireSettings, sizeof(FireStarterSettings), cudaMemcpyDeviceToHost, stream));

            // Unload the fire show code and destroy the CUDA context.
            checkCUDAErrors(cudaFreeAsync(fireSettings, stream));
            context->Synchronize();
        } else
            settings = FireStarterSettings(fireStarterMode);

        // If the evolve units is set to zero, use the number of gpus.
        if (settings.m_units == 0)
            settings.m_units = CUDAContext::CUDADevices();

#if FIRESTARTER_AUTO_PROCESS
        // if the evolve proceesses is set to zero, use the number of concurrent hardware threads.
        if ((settings.m_processes == 0) && ((fireStarterMode == FIRESTARTER_RANDOM) || (fireStarterMode == FIRESTARTER_REVOLVE) || (fireStarterMode == FIRESTARTER_EVOLVE))
            settings.m_processes = std::thread::hardware_concurrency(); // Note: Returns logical core count not physical core count.
#endif
    });
} // FireStarterBuildSettings

FireStarterBuildSettings::FireStarterBuildSettings(void) : CUDAThread("FireStarterBuildSettings")
{
    DispatchSync([this] {
        // Compile FireSettings
        if (LoadFireSettingsCode() && CUDACompile::CompileProgram(m_fireSettingsModule, m_fireSettingsCode, "FireSettings"))
            m_fireSettingsFunction = CUDACompile::GetFunction(m_fireSettingsModule, "FireSettings");
    });
} // FireStarterBuildSettings

FireStarterBuildSettings::~FireStarterBuildSettings(void)
{
    DispatchSync([this] {
        if (m_fireSettingsModule) {
            checkCUDAErrors(cuModuleUnload(m_fireSettingsModule));
            m_fireSettingsModule = nullptr;
        }
    });
} // ~FireStarterBuildSettings