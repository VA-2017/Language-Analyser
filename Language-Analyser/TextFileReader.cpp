#include "TextFileReader.h"
using namespace std;

void TextFileReader::ReadAllTextFiles(std::vector<std::string> FilePaths)
{
    for (auto& i : FilePaths) {
        string line;
        string FullFile;
        std::ifstream CurrentFile(i);
        if (CurrentFile.is_open()) {
            while (getline(CurrentFile, line)) {
                FullFile += line;
            }
        }
        FullFiles.push_back(FullFile);
    }
}
