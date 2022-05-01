#include "FireMaker.h"
#include "CUDACompile.h"

bool FireMaker::Init()
{
	DispatchAsync([this] {
		m_unit = new FireStarterUnit(FIRESTARTER_UNIT);
		m_unit->InitUnit(FIRESTARTER_UNIT);
	});
	return true;
} // Init

void FireMaker::Quit(void)
{
	DispatchSync([this] {
		if (m_unit) {
			delete m_unit;
			m_unit = nullptr;
		}
	});
} // Quit

FireMaker::FireMaker(const std::string& pipeName, bool* terminate) : m_process(pipeName, terminate)
{
	DispatchSync([this, terminate] {
		FireStarterState bestState;
		std::string bestCode;
		float bestResult = START_RESULT;
		while (!terminate) {
			FireStarterPacket receivePacket;
			m_process.ReceivePacket(receivePacket);
			const std::string& command = receivePacket.Name();	// Sets get mode.
			if (command == UNIT_LOAD) {
				m_unit->Packetize(receivePacket);
			} else if (command == UNIT_SAVE) {
				FireStarterPacket sendPacket(UNIT_LOAD);
				m_unit->Packetize(sendPacket);
				m_process.SendPacket(sendPacket);
			} else if (command == UNIT_INIT) {
				bestState.Packetize(receivePacket);
				m_unit->InitUnit(FIRESTARTER_UNIT, &bestState);
			} else if (command == UNIT_EXECUTE) {
				m_unit->Execute();
				FireStarterPacket sendPacket(UNIT_UPDATE);
				bool result = m_unit->Update(bestState, bestCode, bestResult);
				sendPacket.Packetize(&bestResult, sizeof(bestResult));
				if (result) {
					bestState.Packetize(sendPacket);
					sendPacket.Packetize(bestCode);
				}
			}
		}
	});
} // FireMaker

FireMaker::~FireMaker(void)
{
} // ~FireMaker
