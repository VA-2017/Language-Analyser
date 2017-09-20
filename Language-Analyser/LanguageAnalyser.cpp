#include "LanguageAnalyser.h"
static std::string Path = "C:/github/VA-2017/wikipedia_downloader/articles";
LanguageAnalyser::LanguageAnalyser() : TextPath(TextPathExtractor(Path))
{
    auto& FilePaths(TextPath.GetAllFilesPaths());
    auto& TextFileStrings(FileReader->ReadAllTextFiles(FilePaths));
    auto& LetterCountMap(Textinterpreter->InterpretText(TextFileStrings));
    auto& LetterCombinationsMap(Textinterpreter->CountLettersCombinations(TextFileStrings));
    DataWriter->WriteLetterCountCSVFile(LetterCountMap);
    DataWriter->WriteLetterCombinationsCSVFile(LetterCombinationsMap);
}

LanguageAnalyser::~LanguageAnalyser()
{
}
