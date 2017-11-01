#include "TextPathExtractor.h"
namespace fs = std::experimental::filesystem;

TextPathExtractor::TextPathExtractor(string& Directory)
{
    DirectoryPath = Directory;
    ExtractAllFilePaths();

}

TextPathExtractor::~TextPathExtractor()
{
}

void TextPathExtractor::ExtractAllFilePaths()
{
    for (auto& file : fs::directory_iterator(DirectoryPath)) {
        Filenames.push_back(ConvertFromFilePathToString(file));
    }
}

string TextPathExtractor::ConvertFromFilePathToString(std::experimental::filesystem::v1::directory_entry FileEntry)
{
    fs::path textpath = FileEntry;
    wstring temp = textpath.c_str();
    string Filepath(temp.begin(), temp.end());
    return Filepath;
}

std::vector<string>& TextPathExtractor::GetAllFilesPaths()
{
    return Filenames;
}
