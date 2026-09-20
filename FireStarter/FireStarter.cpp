#include "FireStarter.h"
#include "FireStarterShow.h"
#include "FireStarterStream.h"

bool FireStarter::ShouldQuit(void)
{
#if FIRESTARTER_AUTO_QUIT && (FIRESTARTER_MODE != FIRESTARTER_SOLUTION)
    return IsFinished();
#else
    return false;
#endif
} // ShouldQuit

FireStarter::FireStarter(FireStarterWindow& window) : SerialThread("FireStarter"), m_window(window)
{
    DispatchAsync([this] {
        FireStarterStream stream(m_window); // Note: This will not exit until the stream is complete or the user quits the app.
    });
} // FireStarter

FireStarter::~FireStarter(void)
{
    Synchronize();
} // ~FireStarter