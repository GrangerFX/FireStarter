#include "FireMaker.h"
#include "CUDACompile.h"

void FireMaker::Terminate(void)
{
	m_terminate = true;
} // Terminate

bool FireMaker::ShouldTerminate(void)
{
	return m_terminate;
} // ShouldTerminate

void FireMaker::WaitForCommand(void)
{
	if (!m_terminate && m_process.WaitForData())
		DispatchAsync([this] {
			FireStarterState bestState;
			std::string bestCode;
			float bestResult = START_RESULT;
			FireStarterUnit unit(FIRESTARTER_UNIT);
			unit.InitUnit(FIRESTARTER_UNIT);
			while (!m_terminate) {
				FireStarterPacket receivePacket;
				m_process.ReceivePacket(receivePacket);
				const std::string& command = receivePacket.Name();
				if (command == UNIT_LOAD)
					unit.Packetize(receivePacket);
				else if (command == UNIT_SAVE) {
					FireStarterPacket sendPacket(UNIT_LOAD);
					unit.Packetize(sendPacket);
					m_process.SendPacket(sendPacket);
				} else if (command == UNIT_INIT) {
					bestState.Packetize(receivePacket);
					unit.InitUnit(FIRESTARTER_UNIT, &bestState);
				} else if (command == UNIT_EXECUTE) {
					unit.Execute();
					FireStarterPacket sendPacket(UNIT_UPDATE);
					bool result = unit.Update(bestState, bestCode, bestResult);
					sendPacket.Packetize(&bestResult, sizeof(bestResult));
					if (result) {
						bestState.Packetize(sendPacket);
						sendPacket.Packetize(bestCode);
					}
				}
			}
		});
}
FireMaker::FireMaker(const std::string& pipeName) : m_process(pipeName, &m_terminate)
{
	m_terminate = false;
} // FireMaker

FireMaker::~FireMaker(void)
{
	m_terminate = true;
} // ~FireMaker
