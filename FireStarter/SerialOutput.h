#pragma once
#include <windows.h>
#include "Format.h"
#include "SerialThread.h"

class SerialOutput : public SerialThread {
public:
	inline void Output(const std::string& text)
	{
		DispatchAsync([text]{
			OutputDebugStringA(text.c_str());
			std::cerr << text;
		});
	} // Output

	SerialOutput(void) : SerialThread("SerialOutput")
	{
	} // SerialOutput
}; // class SerialOutput