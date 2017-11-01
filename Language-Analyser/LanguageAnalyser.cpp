#include "LanguageAnalyser.h"
static std::string Path = "C:/github/VA-2017/wiki_download/articles";
LanguageAnalyser::LanguageAnalyser() : TextPath(TextPathExtractor(Path))
{
    auto& FilePaths(TextPath.GetAllFilesPaths());
    auto& TextFileStrings(FileReader->ReadAllTextFiles(FilePaths));
    auto& LetterCountMap(Textinterpreter->InterpretText(TextFileStrings));
    auto& LetterCombinationsMap(Textinterpreter->CountLettersCombinations(TextFileStrings));
    auto& TripleCombinationMap(Textinterpreter->CountLettersTriples(TextFileStrings));
    DataWriter->WriteLetterCountCSVFile(LetterCountMap);
    DataWriter->WriteLetterCombinationsCSVFile(LetterCombinationsMap);
    DataWriter->TripleWriteLetterCombinationsCSVFile(TripleCombinationMap);
}

LanguageAnalyser::~LanguageAnalyser()
{
}
