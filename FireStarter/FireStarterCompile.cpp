#include "FireStarterCompile.h"
#include "CUDACompile.h"

#define COMPILE_EXECUTE "CompileExecute"

void FireStarterCompiler::CompilerLocal(void)
{
    DispatchAsync([this] {
        FireStarterJob* job;
        do {
            job = m_manager->GetCode();
            if (job) {
                bool result = CUDACompile::Compile(job->m_ptx, job->m_log, job->m_program, job->m_programName, job->m_options);
                if (job->m_log.size())
                    LOG("Compile log:%s\n\n", job->m_log.c_str());        
                if (result)
                    m_manager->AddCompile(job);
                else {
                    delete job;
                    job = nullptr;
                }
            }
        } while (job && !WillTerminate());
    });
} // CompilerLocal

void FireStarterCompiler::CompilerServer(void)
{
    DispatchAsync([this] {
        if (m_process->Start()) {
            FireStarterJob* job;
            do {
                job = m_manager->GetCode();
                if (job) {
#if FIRESTARTERCOMPILER_LOGGING
                    LOG("%s: Code:%d\n", m_process->ProcessPrefix().c_str(), job->m_state.m_generation);
#endif
                    FireStarterPacket sendPacket(COMPILE_EXECUTE);
                    bool result = true;
                    job->Packetize(sendPacket);
                    result = result && m_process->SendPacket(sendPacket);
                    if (result) {
                        FireStarterPacket receivePacket;
                        result = m_process->ReceivePacket(receivePacket);
                        if (result) {
                            const std::string& command = receivePacket.Command();
                            if (result && (command == COMPILE_EXECUTE)) {
                                job->Packetize(receivePacket);
                                if (result) {
#if FIRESTARTERCOMPILER_LOGGING
                                    LOG("%s: Compile:%d\n", m_process->ProcessPrefix().c_str(), job->m_state.m_generation);
#endif
                                    m_manager->AddCompile(job);
                                } else {
                                    LOG("%s: Unable to receive data!\n", m_process->ProcessPrefix().c_str());
                                }
                            } else {
                                LOG("%s: Unknown command:%s\n", m_process->ProcessPrefix().c_str(), command.c_str());
                            }
                        } else {
                            LOG("%s: Unable to send data!\n", m_process->ProcessPrefix().c_str());
                        }
                    } else {
                        LOG("%s: Client terminated!\n", m_process->ProcessPrefix().c_str());
                    }
                    if (!result) {
                        LOG("%s: Terminate!\n", m_process->ProcessPrefix().c_str());
                        m_process->Terminate();
                    }
                }
            } while (job && !WillTerminate());

#if FIRESTARTERCOMPILER_LOGGING
            LOG("%s: Last job received. Terminating process.\n", m_process->ProcessPrefix().c_str());
#endif
            m_process->Stop();
        }
    });
} // Server

void FireStarterCompiler::CompilerClient(void)
{
    DispatchAsync([this] {
        if (m_process->Start()) {
            bool result = true;
            while (result && !m_process->ShouldTerminate()) {
                FireStarterPacket receivePacket;
                result = m_process->ReceivePacket(receivePacket);
                if (result) {
                    const std::string& command = receivePacket.Command();
                    if (command == COMPILE_EXECUTE) {
                        FireStarterJob job(receivePacket);

                        if (result) {
#if FIRESTARTERCOMPILER_LOGGING
                            LOG("%s: Compile:%d\n", m_process->ProcessPrefix().c_str(), job.m_state.m_generation);
#endif
                            bool result = CUDACompile::Compile(job.m_ptx, job.m_log, job.m_program, job.m_programName, job.m_options);
                            if (job.m_log.size())
                                LOG("%s: Compile log:%s\n\n", m_process->ProcessPrefix().c_str(), job.m_log.c_str());

                            FireStarterPacket sendPacket(COMPILE_EXECUTE);
                            job.Packetize(sendPacket);
                            result = result && m_process->SendPacket(sendPacket);
                        } else {
                            LOG("%s: Bad compile command data!\n", m_process->ProcessPrefix().c_str());
                        }
                    } else {
                        // Error: Unknown command!
                        result = false;
                        LOG("%s: Unknown command:%s\n", m_process->ProcessPrefix(), command.c_str());
                    }

                    // Error: Terminate the process on failure.
                    if (!result) {
                        LOG("%s: Terminate!\n", m_process->ProcessPrefix().c_str());
                        m_process->Terminate();
                    }
#if FIRESTARTERCOMPILER_LOGGING
                    LOG("%s: Terminate received!\n", m_process->ProcessPrefix().c_str());
#endif
                }
            };
        };
    });
} // CompilerClient

FireStarterCompiler::FireStarterCompiler(FireStarterProcess* process)
{
    m_server = nullptr;
    m_manager = nullptr;
    m_process = process;
    m_isClient = true;
    CompilerClient();
} // FireStarterCompiler

FireStarterCompiler::FireStarterCompiler(FireStarterManager* manager, FireStarterServer* server)
{
    m_server = server;
    m_manager = manager;
    m_isClient = false;
    if (server) {
        m_process = m_server->AddProcess(FIRECOMPILER);
        CompilerServer();
    } else {
        m_process = nullptr;
        CompilerLocal();
    }
} // FireStarterCompiler

FireStarterCompiler::~FireStarterCompiler(void)
{
} // ~FireStarterCompiler

FireStarterCompile::FireStarterCompile(FireStarterManager* manager, unsigned int numProcesses)
{
    m_numProcesses = numProcesses;
    if (numProcesses) {
        m_server = new FireStarterServer();
        for (unsigned int i = 0; i < numProcesses; i++) {
            FireStarterCompiler* compiler = new FireStarterCompiler(manager, m_server);
            m_compilers.push_back(compiler);
        }
    } else {
        m_server = nullptr;
        FireStarterCompiler* compiler = new FireStarterCompiler(manager);
        m_compilers.push_back(compiler);
    }

    // When the last compiler finishes, send a null job.
    DispatchAsync([this, manager] {
        for (FireStarterCompiler* compiler : m_compilers)
            compiler->Synchronize();
        manager->AddCompile();
    });
} // FireStarterCompile

FireStarterCompile::~FireStarterCompile(void)
{
    for (FireStarterCompiler* compiler : m_compilers)
        delete compiler;
    delete m_server;
    Synchronize();
} // ~FireStarterCompile
