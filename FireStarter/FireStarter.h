#pragma once
#include "FireStarterWindow.h"

class FireStarter : public SerialThread {
private:
    FireStarterWindow m_window;

    void ControlSolution(void);
    void ControlStreams(void);
    void ControlThread(void);

public:
    bool ShouldQuit(void);
    FireStarter(const FireStarterWindow &window);
    ~FireStarter(void);
}; // class FireStarter