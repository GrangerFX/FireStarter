#include "FireMaker.h"
#include "CUDACompile.h"

void FireMaker::Terminate(void)
{
	DispatchAsync([this] {
		if (m_process)
			m_process->Terminate();
		else
			m_terminate = true;
	});
} // Terminate

bool FireMaker::ShouldTerminate(void)
{
	return m_terminate;
} // ShouldTerminate

FireMaker::FireMaker(const std::string& pipeName)
{
	DispatchAsync([this, pipeName] {
		m_process = new FireStarterProcess(pipeName, &m_terminate);
		m_process->Start();
		m_unit = new FireStarterUnit();
		while (!m_terminate) {
            FireStarterPacket receivePacket;
            m_process->ReceivePacket(receivePacket);
            const std::string& command = receivePacket.Command();
            if (command == UNIT_INIT) {
                FireStarterPacket sendPacket(UNIT_INIT);
                m_process->SendPacket(sendPacket);

                unsigned int index = 0;
                if (receivePacket.Packetize(&index, sizeof(index)) && m_bestState.Packetize(receivePacket))
                    m_unit->InitUnit(FIRESTARTER_UNIT, index, &m_bestState);
            }
            else if (command == UNIT_EXECUTE) {
                FireStarterPacket sendPacket(UNIT_EXECUTE);
                m_process->SendPacket(sendPacket);

                m_unit->Execute();
            } else if (command == UNIT_UPDATE) {
                FireStarterPacket sendPacket(UNIT_UPDATE);
                bool result = m_unit->Update(m_bestState, m_bestCode, m_bestResult);
                if (result) {
                    m_bestState.Packetize(sendPacket);
                    sendPacket.Packetize(m_bestCode);
                }
                m_process->SendPacket(sendPacket);
            }
        }
		delete m_unit;
		delete m_process;
		m_unit = nullptr;
		m_process = nullptr;
	});
} // FireMaker

FireMaker::~FireMaker(void)
{
} // ~FireMaker
