#pragma once
#include <string>

#define VARIATIONS_CODE     "// VARIATIONS //"
#define EVALUATE_CODE       "// EVALUATE //"
#define END_CODE            "// END //"

class FireStarterSource {
public:
    static bool LoadSource(std::string& source, const std::string& filePath);
    static void SaveSource(const std::string& source, const std::string& filePath);
    static void AppendSource(const std::string& source, const std::string& filePath);
    static void ReplaceSource(std::string& source, const std::string& search, const std::string& replace);
    static void UpdateProgram(std::string& source, const std::string& replacementCode, const std::string& startString);
}; // class FireStarterSource