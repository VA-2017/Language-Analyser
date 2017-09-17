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
private:
    void CountAllLetters(string& Text, map<string, int>& LettersMap);
    bool IsNumber(string& Letter);
    bool IsCTRLALTLetter(string& Letter);
    bool IsShiftLetter(string& Letter);
    bool IsNormalLetter(string& Letter);
public:

private:
    unsigned long LetterCount = 0;

};

