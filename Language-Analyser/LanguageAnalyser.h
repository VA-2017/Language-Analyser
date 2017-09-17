#pragma once
#include <iostream>
#include <vector>
#include "TextPathExtractor.h"
#include "TextFileReader.h"
#include "TextInterpreter.h"
#include "DataWriter.h"
class LanguageAnalyser {
public:
    LanguageAnalyser();
    ~LanguageAnalyser();

private:
    TextPathExtractor& TextPath;
    std::unique_ptr<TextFileReader> FileReader;
    std::unique_ptr<TextInterpreter> Textinterpreter;
    std::unique_ptr<DataWriter> DataWriter;
};


