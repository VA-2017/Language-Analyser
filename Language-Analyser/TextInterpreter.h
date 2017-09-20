#pragma once
#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Letter {
    string specificLetter;
    unsigned long Count;
};

class TextInterpreter {
public:
    map<string, int> InterpretText(std::vector<string>FileTexts);
    map<string, std::map<string, int>> CountLettersCombinations(std::vector<string>FileTexts);

private:
    void CountAllLetters(string& Text, map<string, int>& LettersMap);
    void CountLetterCombinations(string& Text, map<string, std::map<string, int>>& LetterCombinationmap);

    bool IsNumber(string& Letter);
    bool IsCTRLALTLetter(string& Letter);
    bool IsShiftLetter(string& Letter);
    bool IsNormalLetter(string& Letter);

public:

private:

};

