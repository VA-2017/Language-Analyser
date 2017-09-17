#include "LanguageAnalyser.h"
static std::string Path = "C:/github/VA-2017/wiki_download/articles";
LanguageAnalyser::LanguageAnalyser() : TextPath(TextPathExtractor(Path))
{
    auto FilePaths = TextPath.GetAllFilesPaths();
    auto t = FileReader->ReadAllTextFiles(FilePaths);
    auto LetterCountMap = Textinterpreter->InterpretText(t);
    DataWriter->WriteCSVFile(LetterCountMap);
}

LanguageAnalyser::~LanguageAnalyser()
{
}
