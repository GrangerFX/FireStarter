#pragma once
#include <string>

#define VARIATIONS_CODE     "// VARIATIONS //"
#define EVALUATE_CODE       "// EVALUATE //"
#define END_CODE            "// END //"

class FireStarterCode {
public:
    static void SaveCode(const std::string& filePath, const std::string& code);
    static void AppendCode(const std::string& filePath, const std::string& code);
    static bool LoadCode(const std::string& filePath, std::string& code);
    static void ReplaceCode(std::string& code, const std::string& search, const std::string& replace);
    static void UpdateProgram(std::string& code, const std::string& replacementCode, const std::string& startString);
}; // class FireStarterCode