#include "TextInterpreter.h"
#include <fstream>
#include <algorithm>
#include <string>

map<string, int> TextInterpreter::InterpretText(std::vector<string> FileTexts)
{
    map<string, int> LettersMap;
    for (auto& filetext : FileTexts) {
        std::transform(filetext.begin(), filetext.end(), filetext.begin(), ::tolower);
        CountAllLetters(filetext, LettersMap);
    }
    return LettersMap;
}

bool TextInterpreter::IsNumber(string& Letter)
{
    if (Letter.find_first_of("0123456789") != Letter.npos) {
        return true;
    }
    return false;
}


bool TextInterpreter::IsCTRLALTLetter(string& Letter)
{
    string find = "@#¬|¢´[]}{";
    if (Letter.find_first_of(find) != Letter.npos) {
        return true;
    }
    return false;
}

bool TextInterpreter::IsShiftLetter(string& Letter)
{
    string find = "§'^ü¨öä$-.,°+*ç%&/()=?`è!£àé_:;" + '"';
    if (Letter.find_first_of(find) != Letter.npos) {
        return true;
    }
    return false;
}

bool TextInterpreter::IsNormalLetter(string& Letter)
{
    if (Letter.find_first_of("abcdefghijklmnopqrstuvwxyzöäü") != Letter.npos) {
        return true;
    }
    return false;
}


void TextInterpreter::CountAllLetters(string& Text, map<string, int>& LettersMap)
{
    for (auto i : Text) {
        string letter(&i);
        letter.erase(1);
        if (IsNumber(letter)) {
            LettersMap[letter];
            continue;
        }
        if (IsCTRLALTLetter(letter)) {
            LettersMap[letter];
            continue;
        }
        if (IsShiftLetter(letter)) {
            LettersMap[letter];
            continue;
        }
        if (IsNormalLetter(letter)) {
            LettersMap[letter]++;
            continue;
        }
        std::invalid_argument("Unbekanntes Zeichen gefunden");
    }
}

