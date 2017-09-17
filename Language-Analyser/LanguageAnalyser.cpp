#include "LanguageAnalyser.h"
static std::string Path = "C:/github/VA-2017/wiki_download/articles";
LanguageAnalyser::LanguageAnalyser() : TextPath(TextPathExtractor(Path))
{
    auto FilePaths = TextPath.GetAllFilesPaths();
    auto t = FileReader->ReadAllTextFiles(FilePaths);
    Textinterpreter->InterpretText(t);
    //TODO write csv file
}

LanguageAnalyser::~LanguageAnalyser()
{
}
