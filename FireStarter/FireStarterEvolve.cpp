#include "FireStarterEvolve.h"
#include "FireStarterSource.h"
#include "FireStarterState.h"

FireStarterEvolve::FireStarterEvolve(size_t index) : CUDAThread(Format("FireStarterEvolve%zu", index))
{
    std::string programName = FireStarterSettings::EvolveProgramName(FIRESTARTER_OPTIMIZE);
    if (!FireStarterSource::LoadSource(m_evolveCode, programName)) {
        printf("%s could not be loaded!\n", programName.c_str());
        std::terminate();
    }
    m_evolveIndex = index;
    m_evolveGenerate = new FireStarterGenerate(&Context());
} // FireStarterEvolve

FireStarterEvolve::~FireStarterEvolve(void)
{
    Synchronize();
    delete m_evolveGenerate;
} // ~FireStarterEvolve
