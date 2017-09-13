#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class TextFileReader {
public:
    void ReadAllTextFiles(std::vector<std::string> FilePaths);
    std::vector<std::string> FullFiles;
private:

};