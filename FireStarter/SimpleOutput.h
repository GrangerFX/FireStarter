#pragma once
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

class SimpleOutput {
private:
	std::string m_path;
	bool m_append;

public:
	inline void OutputString(const std::string& text)
	{
		std::ofstream file(m_path.c_str(), std::ios::out | std::ios::binary | (m_append ? std::ios::app : 0));
		if (file.is_open()) {
			file << text;
			file.close();
		}
		m_append = true;
	} // OutputString

	inline void Output(const char* format, ...)
	{
		// initialize use of the variable argument array
		va_list vaArgs;
		va_start(vaArgs, format);

		// reliably acquire the size from a copy of
		// the variable argument array
		// and a functionally reliable call
		// to mock the formatting
		va_list vaCopy;
		va_copy(vaCopy, vaArgs);
		const int iLen = std::vsnprintf(NULL, 0, format, vaCopy);
		va_end(vaCopy);

		// return a formatted string without
		// risking memory mismanagement
		// and without assuming any compiler
		// or platform specific behavior
		std::vector<char> zc(iLen + 1);
		int ret = std::vsnprintf(zc.data(), zc.size(), format, vaArgs);
		va_end(vaArgs);

		OutputString(zc.data());
	} // Output

	inline SimpleOutput(const std::string& path, bool append = false)
	{
		m_path = path;
		m_append = append;
	} // SimpleOutput

	inline SimpleOutput(const std::string& path, const std::string& text, bool append = false)
	{
		m_path = path;
		m_append = append;
		OutputString(text);
	} // SimpleOutput
}; // SimpleOutput
