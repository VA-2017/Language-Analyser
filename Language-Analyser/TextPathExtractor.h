#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <filesystem>
#include <fstream>
using namespace std;

class TextPathExtractor {
public:
    TextPathExtractor(string& Directory);
    ~TextPathExtractor();
private:
    void ExtractAllFilePaths();
    string ConvertFromFilePathToString(std::experimental::filesystem::v1::directory_entry FileEntry);
public:
    std::vector<string>& GetAllFilesPaths();
private:
    std::vector<string> Filenames;
    string DirectoryPath;

};
