#include "LanguageAnalyser.h"
static std::string Path = "C:/Users/Lukas Hunziker/Desktop/IT-KleinProjekt/Initialisierung";
LanguageAnalyser::LanguageAnalyser() : TextPath(TextPathExtractor(Path))
{
    auto FilePaths = TextPath.GetAllFilesPaths();
    FileReader->ReadAllTextFiles(FilePaths);
    Textinterpreter;
}

LanguageAnalyser::~LanguageAnalyser()
{
}
