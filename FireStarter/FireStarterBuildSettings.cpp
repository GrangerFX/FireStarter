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
    if (m_fireSettingsFunction)
        DispatchSync([this, &settings, fireStarterMode] {
            CUDAContext* context = Context();

            // Launch the load settings kernel
            dim3 cudaBlockSize(BLOCK_THREADS, 1, 1);
            dim3 cudaGridSize(1, 1, 1);

            FireStarterSettings* fireSettings = nullptr;
            checkCUDAErrors(cudaMalloc(&fireSettings, sizeof(FireStarterSettings)));
            unsigned int fireMode = fireStarterMode;

            void* arr[] = { reinterpret_cast<void*>(&fireSettings),
                            reinterpret_cast<void*>(&fireMode) };

            checkCUDAErrors(cuLaunchKernel(m_fireSettingsFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
                0,                                                  // shared mem
                context->Stream(),                            // CUDA stream */
                &arr[0],                                            // arguments */
                0));
            checkCUDAErrors(cudaMemcpyAsync(&settings, fireSettings, sizeof(FireStarterSettings), cudaMemcpyDeviceToHost, context->Stream()));
            checkCUDAErrors(cudaStreamSynchronize(context->Stream()));

            // Unload the fire show code and destroy the CUDA context.
            checkCUDAErrors(cudaFree(fireSettings));
        });

    // If the evolve units is set to zero, use the number of gpus.
    if (settings.m_units == 0)
        settings.m_units = CUDAContext::CUDADevices();
} // FireStarterBuildSettings

FireStarterBuildSettings::FireStarterBuildSettings(void)
{
    if (LoadFireSettingsCode())
        DispatchSync([this] {
            // Compile FireSettings
            if (CUDACompile::CompileProgram(m_fireSettingsModule, m_fireSettingsCode, "FireSettings"))
                m_fireSettingsFunction = CUDACompile::GetFunction(m_fireSettingsModule, "FireSettings");
        });
} // FireStarterBuildSettings

FireStarterBuildSettings::~FireStarterBuildSettings(void)
{
    if (m_fireSettingsModule) {
        checkCUDAErrors(cuModuleUnload(m_fireSettingsModule));
        m_fireSettingsModule = nullptr;
    }
} // ~FireStarterBuildSettings