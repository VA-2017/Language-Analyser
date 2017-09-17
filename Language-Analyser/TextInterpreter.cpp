#include "TextInterpreter.h"
#include <fstream>
#include <algorithm>
#include <string>

void TextInterpreter::InterpretText(std::vector<string> FileTexts)
{
    for (auto& filetext : FileTexts) {
        std::transform(filetext.begin(), filetext.end(), filetext.begin(), ::tolower);
        CountAllLetters(filetext);
    }
}

void TextInterpreter::WriteLetterCountToFile()
{
    ofstream LetterFile("LetterCount.txt", ios::out | ios::binary);
    if (LetterFile.is_open()) {
        for (auto& Letter : LettersMap) {
            LetterFile.write(Letter.first.c_str(), Letter.first.size());
            LetterFile << ',';
            LetterFile << Letter.second;
            LetterFile << "\n";
        }
    }
}



bool TextInterpreter::IsCTRLALTLetter(string& Letter)
{
    string find = "@#¬|¢´[]}{";
    if (Letter.find_first_of(find) != Letter.npos) {
        LettersMap[Letter]++;
        return true;
    }
    return false;
}

bool TextInterpreter::IsShiftLetter(string& Letter)
{
    string find = "§'^ü¨öä$-.,°+*ç%&/()=?`è!£àé_:;" + '"';
    if (Letter.find_first_of(find) != Letter.npos) {
        LettersMap[Letter]++;
        return true;
    }
    return false;
}

bool TextInterpreter::IsNormalLetter(string& Letter)
{
    if (Letter.find_first_of("abcdefghijklmnopqrstuvwxyzöäü") != Letter.npos) {
        LettersMap[Letter]++;
        return true;
    }
    return false;
}


void TextInterpreter::CountAllLetters(string& Text)
{
    for (auto i : Text) {

        string letter(&i);
        letter.erase(1);
        if (IsNumber(letter)) {
            continue;
        }
        if (IsCTRLALTLetter(letter)) {
            continue;
        }
        if (IsShiftLetter(letter)) {
            continue;
        }
        if (IsNormalLetter(letter)) {

        }
    }
}

bool TextInterpreter::IsNumber(string& Letter)
{
    if (Letter.find_first_of("0123456789") != Letter.npos) {
        LettersMap[Letter]++;
        return true;
    }
    return false;
}
