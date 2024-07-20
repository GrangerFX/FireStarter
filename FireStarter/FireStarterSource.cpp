#include "FireStarterSource.h"
#include <fstream>
#include <sstream>

bool FireStarterSource::LoadSource(std::string& source, const std::string& filePath)
{
    std::ifstream file(filePath, std::ios::ate | std::ios::binary);
    if (file.is_open()) {
        // Found usable source file
        file.seekg(0, std::ios::end);
        source.reserve(source.length() + file.tellg());
        file.seekg(0, std::ios::beg);
        source.append((std::istreambuf_iterator< char >(file)), std::istreambuf_iterator< char >());
        file.close();
        return source.length() > 0;
    }
    return false;
} // LoadSource

void FireStarterSource::SaveSource(const std::string& source, const std::string& filePath)
{
    std::ofstream file(filePath, std::ios::out | std::ios::binary);
    if (file.is_open()) {
        file << source;
        file.close();
    }
} // SaveSource

void FireStarterSource::AppendSource(const std::string& source, const std::string& filePath)
{
    std::ofstream file(filePath, std::ios::out | std::ios::app | std::ios::binary);
    if (file.is_open()) {
        file << source;
        file.close();
    }
} // AppendSource

void FireStarterSource::ReplaceSource(std::string& source, const std::string& search, const std::string& replace)
{
    // Get the first occurrence
    size_t pos = source.find(search);

    // Repeat till end is reached
    while (pos != std::string::npos) {
        // Replace this occurrence of Sub String
        source.replace(pos, search.length(), replace);
        // Get the next occurrence from the current position
        pos = source.find(search, pos + replace.length());
    }
} // ReplaceSource

void FireStarterSource::UpdateProgram(std::string& source, const std::string& replacementCode, const std::string& startString)
{
    size_t startPos = source.find(startString);
    while (startPos != std::string::npos) {
        size_t endPos = source.find(END_CODE, startPos);
        if (endPos == std::string::npos)
            break;
        size_t startStringLength = startString.length();
        if (source[startPos + startStringLength] == '\r')
            startStringLength++;
        if (source[startPos + startStringLength] == '\n')
            startStringLength++;
        startPos += startStringLength;
        source.replace(startPos, endPos - startPos, replacementCode);
        startPos = source.find(startString, endPos);
    }
} // UpdateProgram