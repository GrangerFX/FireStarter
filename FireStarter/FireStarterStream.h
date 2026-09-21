#pragma once
#include "FireStarterWindow.h"

class FireStarterStream : public SerialThread {
private:
    FireStarterWindow& m_streamWindow;
	std::string m_streamDate;

public:
	void RandomStream(void);
    void SelectStream(void);
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
