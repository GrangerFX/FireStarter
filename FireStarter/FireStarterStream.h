#pragma once
#include "FireStarterManager.h"
#include "FireStarterWindow.h"

class FireStarterStream : public SerialThread {
private:
    FireStarterServer* m_server = nullptr;
    FireStarterWindow& m_streamWindow;
	std::string m_streamDate;

public:
	void RandomStream(FireStarterServer* servere);
    void EvolveSelectStream(FireStarterServer* server);
    void EvolveCPUStream(void);
	void EvolveGPUStream(void);
    void EvolveNewStream(void);
    void EvolveSinSimStream(void);
    void SinSimStream(void);
    void MoneyMakerStream(void);
    void OptimizeStream(void);
    void SpeedTestStream(void);
    FireStarterStream(FireStarterWindow& window);
	~FireStarterStream(void);
}; // class FireStarterStream
