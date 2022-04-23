#include "FireStarterCode.h"
#include <fstream>
#include <sstream>

bool FireStarterCode::LoadCode(const std::string& filePath, std::string& code)
{
    std::ifstream file(filePath.c_str(), std::ios::ate | std::ios::binary);
    if (file.is_open()) {
        // Found usable source file
        file.seekg(0, std::ios::end);
        code.reserve(code.length() + file.tellg());
        file.seekg(0, std::ios::beg);
        code.append((std::istreambuf_iterator< char >(file)), std::istreambuf_iterator< char >());
        file.close();
        return code.length() > 0;
    }
    return false;
} // LoadCode

void FireStarterCode::SaveCode(const std::string& filePath, const std::string& code)
{
    std::ofstream file(filePath.c_str(), std::ios::out | std::ios::binary);
    if (file.is_open()) {
        file << code;
        file.close();
    }
} // SaveCode

void FireStarterCode::ReplaceCode(std::string& code, const std::string& search, const std::string& replace)
{
    // Get the first occurrence
    size_t pos = code.find(search);

    // Repeat till end is reached
    while (pos != std::string::npos) {
        // Replace this occurrence of Sub String
        code.replace(pos, search.length(), replace);
        // Get the next occurrence from the current position
        pos = code.find(search, pos + replace.length());
    }
} // ReplaceCode

bool FireStarterCode::FindCode(const std::string& code, const std::string startString, size_t& start, size_t& length)
{
    size_t startPos = code.find(startString);
    if (startPos == std::string::npos)
        return false;
    size_t startStringLength = startString.length();
    if (code[startPos + startStringLength] == '\r')
        startStringLength++;
    if (code[startPos + startStringLength] == '\n')
        startStringLength++;
    size_t endPos = code.find(END_CODE, startPos);
    if (endPos != std::string::npos)
        startPos += startStringLength;
    else
        endPos = startPos + startStringLength;
    start = startPos;
    length = endPos - startPos;
    return true;
} // FindCode

void FireStarterCode::ExtractProgram(const std::string& code, std::string& extractCode, const std::string& startString)
{
    size_t startPos = code.find(startString);
    if (startPos != std::string::npos) {
        size_t startStringLength = startString.length();
        if (code[startPos + startStringLength] == '\r')
            startStringLength++;
        if (code[startPos + startStringLength] == '\n')
            startStringLength++;
        size_t endPos = code.find(END_CODE, startPos);
        if (endPos != std::string::npos)
            startPos += startStringLength;
        else
            endPos = startPos + startStringLength;
        extractCode = code.substr(startPos, endPos - startPos);
    }
} // ExtractProgram

void FireStarterCode::UpdateProgram(std::string& code, const std::string& replacementCode, const std::string& startString)
{
    size_t startPos = code.find(startString);
    if (startPos != std::string::npos) {
        size_t startStringLength = startString.length();
        if (code[startPos + startStringLength] == '\r')
            startStringLength++;
        if (code[startPos + startStringLength] == '\n')
            startStringLength++;
        size_t endPos = code.find(END_CODE, startPos);
        if (endPos != std::string::npos)
            startPos += startStringLength;
        else
            endPos = startPos + startStringLength;
        code.replace(startPos, endPos - startPos, replacementCode);
    }
} // UpdateProgram