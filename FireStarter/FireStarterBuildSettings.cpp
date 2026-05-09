#include "FireStarterBuildSettings.h"
#include "FireStarterSource.h"
#include "CUDACompile.h"

bool FireStarterBuildSettings::LoadFireSettingsCode(void)
{
    if (!FireStarterSource::LoadSource(m_fireSettingsCode, "FireSettings.cu"))
        return false;
    return true;
} // LoadFireSettingsCode

void FireStarterBuildSettings::FireSettings(FireStarterSettings& settings)
{
    DispatchSync([this, &settings] {
        if (m_fireSettingsFunction) {
            CUDAContext context = Context();
            CUstream stream = context.Stream();

            // Launch the load settings kernel
            dim3 cudaBlockSize(WARP_THREADS, 1, 1);
            dim3 cudaGridSize(1, 1, 1);

            FireStarterSettings* fireSettings = nullptr;
            checkCUDAErrors(cudaMallocAsync(&fireSettings, sizeof(FireStarterSettings), stream));

            void* arr[] = { reinterpret_cast<void*>(&fireSettings) };

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
            context.Synchronize();
        } else
            settings = FireStarterSettings();

        // If the evolve units is set to zero, use the number of gpus.
        if (settings.m_units == 0)
            settings.m_units = CUDAContext::CUDADevices();
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