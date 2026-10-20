#pragma once
#include "CodeBlob.h"

class Life2 : public CodeBlob
{
private:
	pixel_display::Buffer m_frameBuffer;
	class LifeView *m_lifeView;
	unsigned long long m_generation;

public:
	void Generate(void);
	bool DrawFrame(GLDisplay &gl_display, unsigned int width, unsigned int height, char *status, size_t statusSize) final;
	Life2(void);
	~Life2(void);
}; // class Life2