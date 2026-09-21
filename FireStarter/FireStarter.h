#pragma once
#include "FireStarterWindow.h"

class FireStarter : public SerialThread {
private:
    FireStarterWindow& m_window;

public:
    bool ShouldQuit(void);
    FireStarter(FireStarterWindow& window);
    ~FireStarter(void);
}; // class FireStarter