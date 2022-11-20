#include "FireStarterCompile.h"
#include "CUDACompile.h"

#define COMPILE_EXECUTE "CompileExecute"

#if FIRESTARTERCOMPILER_LOGGING
#define LOG printf
#else
#define LOG( ... ) {}
#endif

void FireStarterCompiler::CompilerLocal(void)
{
    FireStarterJob* job = m_manager->GetCode();
    if (job) {
        bool result = CUDACompile::Compile(job->m_ptx, job->m_log, job->m_program, job->m_programName, job->m_options);
        if (job->m_log.size())
            LOG("Compile log:%s\n\n", job->m_log.c_str());
        if (!result) {
            delete job;
            job = nullptr;
        }
    }
    m_manager->AddCompile(job);
    if (job)
        DispatchAsync([this] { CompilerLocal(); });
} // CompilerLocal

void FireStarterCompiler::CompilerServer(void)
{
    if (!m_process->ShouldTerminate()) {
        FireStarterJob* job = m_manager->GetCode();
        if (!job) {
#if FIRESTARTERCOMPILER_LOGGING
            LOG("%s: Last job received. Terminating process.\n", m_process->ProcessPrefix().c_str());
#endif
            m_process->Stop();
            m_manager->AddCompile(nullptr);
            return;
        }

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
        if (!m_process->ShouldTerminate())
            DispatchAsync([this] { CompilerServer(); });
    };
} // Server

void FireStarterCompiler::CompilerClient(void)
{
    if (!m_process->ShouldTerminate()) {
        FireStarterPacket receivePacket;
        bool result = m_process->ReceivePacket(receivePacket);
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
        }
        else {
#if FIRESTARTERCOMPILER_LOGGING
            LOG("%s: Terminate received!\n", m_process->ProcessPrefix().c_str());
#endif
        }
        if (!m_process->ShouldTerminate())
            DispatchAsync([this] { CompilerClient(); });
    };
} // CompilerClient

FireStarterCompiler::FireStarterCompiler(FireStarterProcess* process)
{
    m_server = nullptr;
    m_manager = nullptr;
    m_process = process;
    m_isClient = true;
    DispatchAsync([this] {
        if (m_process->Start())
            CompilerClient();
        });
} // FireStarterCompiler

FireStarterCompiler::FireStarterCompiler(FireStarterManager* manager, FireStarterServer* server)
{
    m_server = server;
    m_manager = manager;
    m_isClient = false;
    if (server) {
        m_process = m_server->AddProcess(FIRECOMPILER);
        DispatchAsync([this] {
            if (m_process->Start())
                CompilerServer();
        });
    } else {
        m_process = nullptr;
        DispatchAsync([this] {
            CompilerLocal();
        });
    }
} // FireStarterCompiler

FireStarterCompiler::~FireStarterCompiler(void)
{
    if (m_process)
        DispatchSync([this] { m_process->Stop(); });
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
} // FireStarterCompile

FireStarterCompile::~FireStarterCompile(void)
{
    for (FireStarterCompiler* compiler : m_compilers)
        delete compiler;
    delete m_server;
} // ~FireStarterCompile
